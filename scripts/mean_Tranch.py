import ROOT
import sys

# Get input file from command line
filename = sys.argv[1]

# Open file
f = ROOT.TFile.Open(filename)
if not f or f.IsZombie():
    print("Error: cannot open file")
    sys.exit(1)

# Get tree
tree = f.Get("tree_4tau")
if not tree:
    print("Error: tree 'tree_4tau' not found")
    sys.exit(1)

# Method 1 (fast & simple): use TTree::Draw
hist_name = "h_tmp"
tree.Draw("TotalGenWeight>>{}".format(hist_name), "", "goff")

h = ROOT.gDirectory.Get(hist_name)
mean = h.GetMean()

print("Mean of TotalGenWeight =", mean)

