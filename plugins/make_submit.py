import json

with open("SampleLoc_2018.json") as f:
    data = json.load(f)

with open("submit_all.sh", "w") as out:
    out.write("#!/bin/bash\n\n")
    
    for key, path in data.items():
        # remove /hdfs prefix
        store_path = path.replace("/hdfs", "")
        
        line = f'condor_submit -append "Arguments = {store_path} \\$(Process) {key}" condor_submit.sub\n'
        out.write(line)


        