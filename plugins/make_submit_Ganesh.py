import os
import glob

# input_dir = "/hdfs/store/user/gparida/HHbbtt/Hadded_Skimmed_Files/Full_Production_CMSSW_13_0_13_Nov24_23/LooseSelection_MET_gt_80_nFatJet_gt_0_Skim/2018/SingleMu"
input_dir = "/hdfs/store/user/gparida/HHbbtt/Hadded_Skimmed_Files/Full_Production_CMSSW_13_0_13_Nov24_23/LooseSelection_MET_gt_80_nFatJet_gt_0_Skim/2018/MET"

with open("submit_all_Ganesh_dataMET.sh", "w") as out:
    out.write("#!/bin/bash\n\n")

    root_files = glob.glob(os.path.join(input_dir, "*.root"))

    for path in sorted(root_files):
        filename = os.path.basename(path)

        if "Graviton" in filename or "Radion" in filename:
            continue

        # remove /hdfs prefix
        store_path = path.replace("/hdfs", "", 1)

        # use filename without .root as the sample key
        key = os.path.splitext(filename)[0]

        line = f'condor_submit -append "Arguments = {store_path} \\$(Process) {key}" condor_submit_Ganesh.sub\n'
        out.write(line)
