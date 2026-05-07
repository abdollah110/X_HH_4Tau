import ROOT
import json
import sys
import os
import glob

ROOT.EnableImplicitMT()


def compute_mean(hadd_file):
    if not os.path.exists(hadd_file):
        print(f"[WARNING] Missing HADD file: {hadd_file}")
        return None

    try:
        df = ROOT.RDataFrame("tree_4tau", hadd_file)
        return float(df.Mean("TotalGenWeight").GetValue())
    except Exception as e:
        print(f"[ERROR] Failed processing {hadd_file}: {e}")
        return None


def count_files(sample_dir):
    files = glob.glob(os.path.join(
        sample_dir,
        "singleFileSkimForSubmission*.root"
    ))
    return len(files)


def find_xsec(sample_name, old_json):
    if sample_name in old_json:
        return old_json[sample_name].get("xsec", 1)

    return 1


def main(sampleloc_json, old_json_file, output_json):

    # Load JSONs
    with open(sampleloc_json) as f:
        sample_locs = json.load(f)

    with open(old_json_file) as f:
        old_data = json.load(f)

    output_data = {}

    for sample, sample_dir in sample_locs.items():

        print('start sample '), sample
        if not os.path.exists(sample_dir):
            print(f"[WARNING] Missing directory: {sample_dir}")
            continue

        # Count files
        num_files = count_files(sample_dir)

        # HADD file path
        hadd_file = os.path.join("..", "HADD_RootFile", f"{sample}.root")

        mean = compute_mean(hadd_file)
        xsec = find_xsec(sample, old_data)

        output_data[sample] = {
            "file": sample_dir,
            "xsec": xsec,
            "TotGenWt": mean,
            "numFiles": num_files
        }

        print(f"{sample}: xsec={xsec}, TotGenWt={mean}, numFiles={num_files}")

    # Save output JSON
    with open(output_json, "w") as f:
        json.dump(output_data, f, indent=4)


if __name__ == "__main__":
    if len(sys.argv) != 4:
        print("Usage: python3 script.py <SampleLoc.json> <old_json> <output_json>")
        sys.exit(1)

    main(sys.argv[1], sys.argv[2], sys.argv[3])



    

# import ROOT
# import json
# import sys
# import os

# # Optional: speed up for large files
# ROOT.EnableImplicitMT()

# def compute_mean(root_file):
#     if not os.path.exists(root_file):
#         print(f"[WARNING] File not found: {root_file}")
#         return None

#     try:
#         df = ROOT.RDataFrame("tree_4tau", root_file)
#         mean = df.Mean("TotalGenWeight").GetValue()
#         return float(mean)
#     except Exception as e:
#         print(f"[ERROR] Failed processing {root_file}: {e}")
#         return None


# def main(json_input, json_output):

#     with open(json_input) as f:
#         data = json.load(f)

#     for sample, info in data.items():

#         print('starting from ', sample)
#         # Construct ROOT file path from sample name
#         root_file = os.path.join("..", "HADD_RootFile", f"{sample}.root")

#         mean = compute_mean(root_file)

#         # Add new field (preserve existing content like xsec)
#         data[sample]["TotGenWt"] = mean

#         print(f"{sample}: TotGenWt = {mean}")

#     # Write updated JSON
#     with open(json_output, "w") as f:
#         json.dump(data, f, indent=4)


# if __name__ == "__main__":
#     if len(sys.argv) != 3:
#         print("Usage: python3 update_json.py input.json output.json")
#         sys.exit(1)

#     main(sys.argv[1], sys.argv[2])