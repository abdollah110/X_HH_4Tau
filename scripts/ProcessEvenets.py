import ROOT
import json
import os

# -----------------------------
# Config
# -----------------------------
LUMI = 59740  # pb^-1
TREE_NAME = "tree_4tau"
BRANCH = "LeadMuonPt"

NBINS = 40
XMIN = 0
XMAX = 400

# -----------------------------
# Load JSON
# -----------------------------
with open("FinalJ.json") as f:
    samples = json.load(f)

# -----------------------------
# Hist containers
# -----------------------------
stack = ROOT.THStack("stack", "LeadMuonPt; p_{T} [GeV]; Events")
legend = ROOT.TLegend(0.5, 0.1, 0.9, 0.9)

data_hist = ROOT.TH1F("data", "data", NBINS, XMIN, XMAX)
data_hist.SetDirectory(0)   # VERY IMPORTANT
data_hist.SetMarkerStyle(20)

mc_hists = []  # IMPORTANT: keep references

# -----------------------------
# Loop over samples
# -----------------------------
for i, (sample_name, info) in enumerate(samples.items()):
    print(i)
    print(f"\nProcessing: {sample_name}")

    # if 'QCD' in sample_name: continue 
    
    file_path = f"../HADD_RootFile/{sample_name}.root"
    xsec = float(info["xsec"])
    genWt=float(info["TotGenWt"])
    TotNumFile=float(info["numFiles"])

    f = ROOT.TFile.Open(file_path)
    if not f or f.IsZombie():
        print(f" -> Failed to open {file_path}")
        continue

    tree = f.Get(TREE_NAME)
    if not tree:
        print(f" -> Tree not found in {file_path}")
        f.ls()
        continue

    print(f" -> Entries: {tree.GetEntries()}")

    hist = ROOT.TH1F(sample_name, sample_name, NBINS, XMIN, XMAX)
    hist.SetDirectory(0)  # prevent ROOT ownership bug

    isData = ("SingleMu" in sample_name) or ("Data" in sample_name)

    # -----------------------------
    # Event loop
    # -----------------------------
    for event in tree:

        # --- Get branch ---
        pts = getattr(event, BRANCH)

        # --- Data ---
        if isData:
            weight = 1.0

        # --- MC ---
        else:
            try:
                genWeight = getattr(event, "genWeight")
            except:
                genWeight = 1.0

            # ⚠️ Safer fallback (avoid broken TotalGenWeight)
            # totalGenWeight = getattr(event, "TotalGenWeight", 1.0)
            totalGenWeight = genWt*TotNumFile

            if totalGenWeight == 0:
                continue

            lumiWeight = (LUMI * xsec) / totalGenWeight
            weight = lumiWeight * genWeight

        # --- Fill histogram (vector-safe) ---
        if hasattr(pts, "__len__") and not isinstance(pts, (float, int)):
            for pt in pts:
                if isData:
                    data_hist.Fill(pt, weight)
                else:
                    hist.Fill(pt, weight)
        else:
            if isData:
                data_hist.Fill(pts, weight)
            else:
                hist.Fill(pts, weight)

    # -----------------------------
    # After event loop
    # -----------------------------
    print(f" -> Integral: {hist.Integral()}")

    if not isData:
        if hist.Integral() != 0:
            hist.SetFillColorAlpha(i + 2, 0.7)

            mc_hists.append(hist)        # KEEP reference
            stack.Add(hist)
            legend.AddEntry(hist, sample_name, "f")

            print(" -> Added to stack")
        else:
            print(" -> Skipped (empty histogram)")

    f.Close()





output_txt = "yields.txt"

with open(output_txt, "w") as f:

    f.write("Process Yields\n")
    f.write("=" * 40 + "\n")

    total_mc = 0.0

    for hist in mc_hists:
    # print(hist.GetName(), hist.Integral())

    # # Loop over all MC processes
    # for name, hist in processes.items():
        name=hist.GetName()
        integral = hist.Integral()

        total_mc += integral

        f.write(f"{name:20s} : {integral:12.4f}\n")

    # Total MC
    f.write("-" * 40 + "\n")
    f.write(f"{'Total MC':20s} : {total_mc:12.4f}\n")

    # Data yield
    data_integral = data_hist.Integral()

    f.write(f"{'Data':20s} : {data_integral:12.4f}\n")

print(f"Yields saved to {output_txt}")


# -----------------------------
# Plot
# -----------------------------
# ---------------------------------------
# Create canvas with two pads
# ---------------------------------------
canvas = ROOT.TCanvas("canvas", "canvas", 800, 800)

pad1 = ROOT.TPad("pad1", "top pad", 0, 0.30, 1, 1.0)
pad2 = ROOT.TPad("pad2", "bottom pad", 0, 0.00, 1, 0.30)

pad1.SetBottomMargin(0.02)
pad2.SetTopMargin(0.05)
pad2.SetBottomMargin(0.30)

pad1.Draw()
pad2.Draw()

# ---------------------------------------
# TOP PAD : Main stack plot
# ---------------------------------------
pad1.cd()

stack.Draw("HIST")

# Set y-axis max
maxY = max(stack.GetMaximum(), data_hist.GetMaximum())
stack.SetMaximum(2.0 * maxY)

# Axis labels
stack.GetHistogram().GetYaxis().SetTitle("Events")
stack.GetHistogram().GetXaxis().SetLabelSize(0)

# Draw data on top
data_hist.SetMarkerStyle(20)
data_hist.Draw("E SAME")

if legend.GetNRows() > 0:
    legend.AddEntry(data_hist, "Data", "lep")
    legend.Draw()

# ---------------------------------------
# BOTTOM PAD : Ratio plot Data/MC
# ---------------------------------------
pad2.cd()

# Get total MC from stack
mcTotal = stack.GetStack().Last().Clone("mcTotal")

# Ratio histogram
ratio = data_hist.Clone("ratio")
ratio.Divide(mcTotal)

# Style
ratio.SetTitle("")
ratio.GetYaxis().SetTitle("Data/MC")
ratio.GetXaxis().SetTitle("LeadMuonPt [GeV]")

ratio.GetYaxis().SetRangeUser(0.0, 2.0)

ratio.GetYaxis().SetNdivisions(505)

ratio.GetYaxis().SetTitleSize(0.10)
ratio.GetYaxis().SetTitleOffset(0.5)
ratio.GetYaxis().SetLabelSize(0.08)

ratio.GetXaxis().SetTitleSize(0.12)
ratio.GetXaxis().SetLabelSize(0.10)

ratio.SetMarkerStyle(20)

ratio.Draw("E")

# Optional horizontal line at ratio=1
line = ROOT.TLine(
    ratio.GetXaxis().GetXmin(),
    1.0,
    ratio.GetXaxis().GetXmax(),
    1.0
)
line.SetLineStyle(2)
line.Draw()

canvas.Update()
canvas.SaveAs("stack_with_ratio.png")





# canvas = ROOT.TCanvas("c", "c", 800, 600)

# has_mc = stack.GetNhists() > 0
# has_data = data_hist.Integral() > 0

# if has_mc:

#     stack.Draw("HIST")
#     ROOT.gPad.Update()

#     # Safe axis access
#     stack.GetHistogram().GetXaxis().SetTitle("LeadMuonPt [GeV]")
#     stack.GetHistogram().GetYaxis().SetTitle("Events")
#     maxY = max(stack.GetMaximum(), data_hist.GetMaximum())
#     stack.SetMaximum(1.5 * maxY)
    
    
#     if has_data:
#         data_hist.Draw("E SAME")
# else:
#     print("\nWARNING: No MC histograms in stack!")
#     if has_data:
#         data_hist.Draw()

# # Legend
# if legend.GetNRows() > 0:
#     legend.AddEntry(data_hist, "Data", "lep")
#     legend.Draw()

# # Save
# if has_mc or has_data:
#     canvas.SaveAs("stacked_plot.png")
#     print("\nPlot saved as stacked_plot.png")
# else:
#     print("\nNothing to plot.")