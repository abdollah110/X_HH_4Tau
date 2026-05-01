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
input=$1
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



#git config --global user.name 'Abdollah Mohammadi'
#git config --global user.email 'abdollah.mohammadi@cern.ch'
#git config --global user.github 'abdollah110'

#git config --list


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
./Make.sh BoostedHTT_4t_nano.cc

# ./BoostedHTT_4t_nano.exe  -s root://cmsxrootd.hep.wisc.edu//store/user/twnelson/HH4Tau_EtAl/Skimmed_Files/2018/MC/ZZTo4L_26August25_0757_skim_Newskim/singleFileSkimForSubmission-NANO_NANO_*33.root  -n nanotest_zz4l_33_fromCondor.root


FILES=$(xrdfs cmsxrootd.hep.wisc.edu ls /store/user/twnelson/HH4Tau_EtAl/Skimmed_Files/2018/MC/ZZTo4L_26August25_0757_skim_Newskim | grep NANO_NANO_.*33.root)

for f in $FILES
do
    INPUT="root://cmsxrootd.hep.wisc.edu/${f}"
    
    BASENAME=$(basename "$f" .root)
    OUTPUT="${BASENAME}_out.root"

    echo "Running on $INPUT"
    ./BoostedHTT_4t_nano.exe -s "$INPUT" -n "$OUTPUT"
done




hadd nanotest_zz4l_33_fromCondor.root  *_out.root
eval `scram unsetenv -sh`

gfal-copy -p nanotest_zz4l_33_fromCondor.root   davs://cmsxrootd.hep.wisc.edu:1094/store/user/abdollah/TESTTEST_${name}_${process}_nanotest_zz4l_33_fromCondor.root
#gfal-copy -p X_Mini.root   davs://cmsxrootd.hep.wisc.edu:1094/store/user/abdollah/OUTROOT_${name}_${process}_Mini.root



