#!/bin/bash
if [ "$STARTED_SINGULARITY" = "" ]; then
  export STARTED_SINGULARITY=1
  top_dir=$(pwd -P | sed 's|\(/[^/]*\).*|\1|')
  MOUNTS=" -B $top_dir"
  scratch_dir=$(echo $_CONDOR_SCRATCH_DIR | sed 's|\(/[^/]*\).*|\1|')
  if [ "$scratch_dir" != "" ] && [ "$scratch_dir" != "$top_dir" ]; then
      MOUNTS=" -B $scratch_dir $MOUNTS"
  fi
  this_script=./$(basename $0)
  export SINGULARITY_CACHEDIR="$(pwd)/singularity"
  exec singularity exec --no-home $MOUNTS -B /cvmfs -B /etc/grid-security/certificates /cvmfs/singularity.opensciencegrid.org/cmssw/cms:rhel7 $this_script "$@"
  echo "Failed to execute singularity: $?"
  exit 1
fi


export HOME=$(pwd)
nthd=2
seed=$1
process=$2
name=$3
export SCRAM_ARCH=slc7_amd64_gcc820
exit_on_error() {
    result=$1
    code=$2
    message=$3

    if [ $1 != 0 ]; then
        echo $3
        exit $2
    fi
} 



source /cvmfs/cms.cern.ch/cmsset_default.sh
if [ -r CMSSW_10_6_47_patch1/src ] ; then
  echo release CMSSW_10_6_47_patch1 already exists
else
  scram p CMSSW CMSSW_10_6_47_patch1
fi
cd CMSSW_10_6_47_patch1/src

eval $(scram runtime -sh)

git clone https://github.com/abdollah110/X_HH_4Tau.git

cd X_HH_4Tau/plugins
# ./Make.sh BoostedHTT_4t_Trevor.cc
./Make.sh BoostedHTT_4t_Ganesh.cc

# ./BoostedHTT_4t_nano.exe  -s root://cmsxrootd.hep.wisc.edu//store/user/twnelson/HH4Tau_EtAl/Skimmed_Files/2018/MC/ZZTo4L_26August25_0757_skim_Newskim/singleFileSkimForSubmission-NANO_NANO_*33.root  -n nanotest_zz4l_33_fromCondor.root


INPUT="root://cmsxrootd.hep.wisc.edu/${seed}"
OUTPUT="${name}_outX.root"



echo "Running input:  $INPUT"
echo "Running output:  $OUTPUT"
# ./BoostedHTT_4t_Trevor.exe -s "$INPUT" -n "$OUTPUT"
./BoostedHTT_4t_Ganesh.exe -s "$INPUT" -n "$OUTPUT"

eval `scram unsetenv -sh`

gfal-copy -p out_${name}.root   davs://cmsxrootd.hep.wisc.edu:1094/store/user/abdollah/Output_X_HH_4Tau_Ganesh/NewOut_${name}.root
#gfal-copy -p X_Mini.root   davs://cmsxrootd.hep.wisc.edu:1094/store/user/abdollah/OUTROOT_${name}_${process}_Mini.root




# condor_submit -append "Queue seed from seed_list.txt" -append "Arguments = \$(seed) \$(Process)  ZZTo4Q" condor_submit.sub