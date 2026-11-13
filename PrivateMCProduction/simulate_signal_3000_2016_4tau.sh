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




#!/bin/bash
export HOME=$(pwd)
nthd=2
EVENTS=$2
seed=$1
name="_3000_"
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


curl -s -k https://cms-pdmv-prod.web.cern.ch/mcm/public/restapi/requests/get_fragment/HIG-RunIISummer15wmLHEGS-04458 \
 --retry 3 \
 --create-dirs \
 -o Configuration/GenProduction/python/HIG-RunIISummer15wmLHEGS-04458-fragment.py

[ -s Configuration/GenProduction/python/HIG-RunIISummer15wmLHEGS-04458-fragment.py ] || exit $?;





source /cvmfs/cms.cern.ch/cmsset_default.sh
if [ -r CMSSW_10_6_47_patch1/src ] ; then
  echo release CMSSW_10_6_47_patch1 already exists
else
  scram p CMSSW CMSSW_10_6_47_patch1
fi
cd CMSSW_10_6_47_patch1/src
eval $(scram runtime -sh)



mv ../../Configuration .
scram b -j8
eval $(scram runtime -sh)
cd ../..

echo $CMSSW_BASE
echo "#Step1. LHEGEN"

#Step1. LHEGEN
cmsDriver.py Configuration/GenProduction/python/HIG-RunIISummer15wmLHEGS-04458-fragment.py --customise_commands process.RandomNumberGeneratorService.externalLHEProducer.initialSeed="int(${seed})" --python_filename HIG-RunIISummer15wmLHEGEN_cfg.py --eventcontent RAWSIM,LHE --customise Configuration/DataProcessing/Utils.addMonitoring --datatier GEN,LHE --fileout file:HIG-RunIISummer15wmLHEGS.root --conditions 106X_mcRun2_asymptotic_v17 --beamspot Realistic25ns13TeV2016Collision --step LHE,GEN --geometry DB:Extended --era Run2_2016 --no_exec --mc -n $EVENTS || exit $? ;



cmsRun HIG-RunIISummer15wmLHEGEN_cfg.py


echo $CMSSW_BASE
echo "#Step2. SIM"

#Step2. SIM
cmsDriver.py  --python_filename HIG-RunIISummer15SIM_cfg.py --eventcontent RAWSIM --customise Configuration/DataProcessing/Utils.addMonitoring --datatier GEN-SIM --fileout file:HIG-RunIISummer15SIM.root --conditions 106X_mcRun2_asymptotic_v17 --beamspot Realistic25ns13TeV2016Collision --step SIM --geometry DB:Extended --filein file:HIG-RunIISummer15wmLHEGS.root --era Run2_2016 --runUnscheduled --no_exec --mc -n $EVENTS || exit $? ;



cmsRun  HIG-RunIISummer15SIM_cfg.py


echo $CMSSW_BASE
echo "#Step3. DIGI"

#Step3. DIGI
cmsDriver.py  --python_filename HIG-RunIISummer15DIGIPremix_cfg.py --eventcontent PREMIXRAW --customise Configuration/DataProcessing/Utils.addMonitoring --datatier GEN-SIM-DIGI --fileout file:HIG-RunIISummer15DIGIPremix.root --pileup_input "dbs:/Neutrino_E-10_gun/RunIISummer20ULPrePremix-UL16_106X_mcRun2_asymptotic_v13-v1/PREMIX" --conditions 106X_mcRun2_asymptotic_v17 --step DIGI,DATAMIX,L1,DIGI2RAW --procModifiers premix_stage2 --geometry DB:Extended --filein file:HIG-RunIISummer15SIM.root --datamix PreMix --era Run2_2016 --runUnscheduled --no_exec --mc -n $EVENTS || exit $? ;



cmsRun HIG-RunIISummer15DIGIPremix_cfg.py



#Step4. HLT

scram p CMSSW  CMSSW_8_0_33_UL 
cd  CMSSW_8_0_33_UL/src/

eval $(scram runtime -sh)

scram b -j8


cd ../..

echo $CMSSW_BASE


cmsDriver.py  --python_filename HIG-RunIISummer15HLT_cfg.py --eventcontent RAWSIM --customise Configuration/DataProcessing/Utils.addMonitoring --datatier GEN-SIM-RAW --fileout file:HIG-RunIISummer15HLT.root --conditions 80X_mcRun2_asymptotic_2016_TrancheIV_v6 --customise_commands "process.source.bypassVersionCheck = cms.untracked.bool(True)"  --outputCommands 'keep *_mix_*_*','keep *_mixData_*_*'  --step HLT:25ns15e33_v4 --geometry DB:Extended --filein file:HIG-RunIISummer15DIGIPremix.root --era Run2_2016 --no_exec --mc -n $EVENTS || exit $? ;



cmsRun HIG-RunIISummer15HLT_cfg.py



#Step5. AODSIM
cd CMSSW_10_6_47_patch1/src 

eval $(scram runtime -sh)

scram b

cd ../..

cmsDriver.py  --python_filename HIG-RunIISummer15RECO_cfg.py --eventcontent AODSIM --customise Configuration/DataProcessing/Utils.addMonitoring --datatier AODSIM --fileout file:HIG-RunIISummer15RECO.root --conditions 106X_mcRun2_asymptotic_v17 --step RAW2DIGI,L1Reco,RECO,RECOSIM,EI --geometry DB:Extended --filein file:HIG-RunIISummer15HLT.root --era Run2_2016 --runUnscheduled --no_exec --mc -n $EVENTS || exit $? ;



cmsRun HIG-RunIISummer15RECO_cfg.py


# Step6. MINIAOD
cmsDriver.py  --python_filename HIG-RunIISummer15MiniAOD_cfg.py --eventcontent MINIAODSIM --customise Configuration/DataProcessing/Utils.addMonitoring --datatier MINIAODSIM --fileout RadionHH_UL16MiniAOD.root --conditions 106X_mcRun2_asymptotic_v17 --step PAT --geometry DB:Extended --filein file:HIG-RunIISummer15RECO.root --era Run2_2016 --runUnscheduled --procModifiers run2_miniAOD_UL --no_exec --mc -n $EVENTS || exit $? ;



cmsRun HIG-RunIISummer15MiniAOD_cfg.py


cmsDriver.py  --python_filename ExoHiggs_UL16NanoAODv2_1_cfg.py --eventcontent NANOAODSIM --customise Configuration/DataProcessing/Utils.addMonitoring --datatier NANOAODSIM --fileout file:RadionHH_UL16NanoAODv2.root --conditions 106X_mcRun2_asymptotic_v17 --step NANO --filein file:RadionHH_UL16MiniAOD.root --era Run2_2016,run2_nanoAOD_106Xv1 --no_exec --mc -n $EVENTS || exit $? ;


cmsRun  ExoHiggs_UL16NanoAODv2_1_cfg.py




echo "Final Gen events: $nevt0"
echo "Final SIM events: $nevt1"
echo "Final DIGI events: $nevt2"
echo "Final HLT events: $nevt3"
echo "Final RECO events: $nevt4"
echo "Final miniAOD events: $nevt5"

eval `scram unsetenv -sh`

gfal-copy -p RadionHH_UL16MiniAOD.root    davs://cmsxrootd.hep.wisc.edu:1094/store/user/abdollah/RadionHH4tau_UL/MINIAOD/2016/${name}/${seed}_RadionHH_${name}_UL16MiniAOD.root

gfal-copy -p RadionHH_UL16NanoAODv2.root   davs://cmsxrootd.hep.wisc.edu:1094/store/user/abdollah/RadionHH4tau_UL/NANOAOD/2016/${name}/${seed}_RadionHH_${name}_UL16NanoAODv2.root





