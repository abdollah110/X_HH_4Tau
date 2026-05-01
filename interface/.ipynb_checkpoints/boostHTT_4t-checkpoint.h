//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Apr 23 12:29:04 2021 by ROOT version 6.12/07
// from TTree mutau_tree/Event data (tag V10_02_10_04)
// found on file: /eos/uscms/store/user/abdollah/SkimBoostedH2/2017/mt/v2_fast_Hadd/ZZ4l.root
//////////////////////////////////////////////////////////

#ifndef boostHTT_h
#define boostHTT_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
using namespace std;
//class boostHTT2 {
//public :
//   TTree          *tree;   //!pointer to the analyzed TTree or TChain
//   Int_t           fCurrent; //!current Tree number in a TChain

   UInt_t          run;
   UInt_t          luminosityBlock;
   ULong64_t       event;
   UInt_t          bunchCrossing;
   UChar_t         HTXS_njets25;
   UChar_t         HTXS_njets30;
   Int_t           HTXS_stage1_1_cat_pTjet25GeV;
   Int_t           HTXS_stage1_1_cat_pTjet30GeV;
   Int_t           HTXS_stage1_1_fine_cat_pTjet25GeV;
   Int_t           HTXS_stage1_1_fine_cat_pTjet30GeV;
   Int_t           HTXS_stage1_2_cat_pTjet25GeV;
   Int_t           HTXS_stage1_2_cat_pTjet30GeV;
   Int_t           HTXS_stage1_2_fine_cat_pTjet25GeV;
   Int_t           HTXS_stage1_2_fine_cat_pTjet30GeV;
   Int_t           HTXS_stage_0;
   Int_t           HTXS_stage_1_pTjet25;
   Int_t           HTXS_stage_1_pTjet30;
   Float_t         HTXS_Higgs_pt;
   Float_t         HTXS_Higgs_y;
   Char_t          BeamSpot_type;
   Float_t         BeamSpot_sigmaZ;
   Float_t         BeamSpot_sigmaZError;
   Float_t         BeamSpot_z;
   Float_t         BeamSpot_zError;
   Int_t           nboostedTau;
   UChar_t         boostedTau_idAntiEle2018[8];   //[nboostedTau]
   UChar_t         boostedTau_idAntiMu[8];   //[nboostedTau]
   Bool_t          boostedTau_idDecayModeNewDMs[8];   //[nboostedTau]
   Bool_t          boostedTau_idDecayModeOldDMs[8];   //[nboostedTau]
   UChar_t         boostedTau_idDeepTau2018v2p7VSe[8];   //[nboostedTau]
   UChar_t         boostedTau_idDeepTau2018v2p7VSjet[8];   //[nboostedTau]
   UChar_t         boostedTau_idDeepTau2018v2p7VSmu[8];   //[nboostedTau]
   UChar_t         boostedTau_idMVAnewDM2017v2[8];   //[nboostedTau]
   UChar_t         boostedTau_idMVAoldDM2017v2[8];   //[nboostedTau]
   UChar_t         boostedTau_idMVAoldDMdR032017v2[8];   //[nboostedTau]
   Short_t         boostedTau_jetIdx[8];   //[nboostedTau]
   Short_t         boostedTau_rawAntiEleCat2018[8];   //[nboostedTau]
   Int_t           boostedTau_Ecounter[8];   //[nboostedTau]
   Int_t           boostedTau_Mcounter[8];   //[nboostedTau]
   Int_t           boostedTau_SubLeadingElectronPhi[8];   //[nboostedTau]
   Int_t           boostedTau_SubLeadingMuonM[8];   //[nboostedTau]
   Int_t           boostedTau_SubSubLeadingElectronPhi[8];   //[nboostedTau]
   Int_t           boostedTau_SubSubLeadingMuonM[8];   //[nboostedTau]
   Int_t           boostedTau_charge[8];   //[nboostedTau]
   Int_t           boostedTau_decayMode[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingElectronCorrIso[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingElectronEta[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingElectronM[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingElectronPhi[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingElectronPt[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingElectrondelR[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingElectronea[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingElectronrho[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingElectronsumPFChargedHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingElectronsumPFNeutralHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingElectronsumPFPhotonPt[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingElectrontausumPFChargedHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingElectrontausumPFNeutralHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingElectrontausumPFPhotonPt[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingMuonCorrIso[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingMuonEta[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingMuonM[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingMuonPhi[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingMuonPt[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingMuondelR[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingMuonsumPFChargedHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingMuonsumPFNeutralHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingMuonsumPFPhotonPt[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingMuonsumPUPt[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingMuontausumPFChargedHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingMuontausumPFNeutralHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_LeadingMuontausumPFPhotonPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingElectronCorrIso[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingElectronEta[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingElectronM[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingElectronPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingElectrondelR[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingElectronea[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingElectronrho[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingElectronsumPFChargedHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingElectronsumPFNeutralHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingElectronsumPFPhotonPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingElectrontausumPFChargedHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingElectrontausumPFNeutralHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingElectrontausumPFPhotonPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingMuonCorrIso[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingMuonEta[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingMuonPhi[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingMuonPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingMuondelR[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingMuonsumPFChargedHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingMuonsumPFNeutralHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingMuonsumPFPhotonPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingMuonsumPUPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingMuontausumPFChargedHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingMuontausumPFNeutralHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubLeadingMuontausumPFPhotonPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingElectronCorrIso[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingElectronEta[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingElectronM[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingElectronPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingElectrondelR[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingElectronea[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingElectronrho[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingElectronsumPFChargedHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingElectronsumPFNeutralHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingElectronsumPFPhotonPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingElectrontausumPFChargedHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingElectrontausumPFNeutralHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingElectrontausumPFPhotonPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingMuonCorrIso[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingMuonEta[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingMuonPhi[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingMuonPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingMuondelR[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingMuonsumPFChargedHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingMuonsumPFNeutralHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingMuonsumPFPhotonPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingMuonsumPUPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingMuontausumPFChargedHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingMuontausumPFNeutralHadronPt[8];   //[nboostedTau]
   Float_t         boostedTau_SubSubLeadingMuontausumPFPhotonPt[8];   //[nboostedTau]
   Float_t         boostedTau_chargedIso[8];   //[nboostedTau]
   Float_t         boostedTau_eta[8];   //[nboostedTau]
   Float_t         boostedTau_leadTkDeltaEta[8];   //[nboostedTau]
   Float_t         boostedTau_leadTkDeltaPhi[8];   //[nboostedTau]
   Float_t         boostedTau_leadTkPtOverTauPt[8];   //[nboostedTau]
   Float_t         boostedTau_mass[8];   //[nboostedTau]
   Float_t         boostedTau_neutralIso[8];   //[nboostedTau]
   Float_t         boostedTau_phi[8];   //[nboostedTau]
   Float_t         boostedTau_photonsOutsideSignalCone[8];   //[nboostedTau]
   Float_t         boostedTau_pt[8];   //[nboostedTau]
   Float_t         boostedTau_puCorr[8];   //[nboostedTau]
   Float_t         boostedTau_rawAntiEle2018[8];   //[nboostedTau]
   Float_t         boostedTau_rawDeepTau2018v2p7VSe[8];   //[nboostedTau]
   Float_t         boostedTau_rawDeepTau2018v2p7VSjet[8];   //[nboostedTau]
   Float_t         boostedTau_rawDeepTau2018v2p7VSmu[8];   //[nboostedTau]
   Float_t         boostedTau_rawIso[8];   //[nboostedTau]
   Float_t         boostedTau_rawIsodR03[8];   //[nboostedTau]
   Float_t         boostedTau_rawMVAnewDM2017v2[8];   //[nboostedTau]
   Float_t         boostedTau_rawMVAoldDM2017v2[8];   //[nboostedTau]
   Float_t         boostedTau_rawMVAoldDMdR032017v2[8];   //[nboostedTau]
   Float_t         CaloMET_phi;
   Float_t         CaloMET_pt;
   Float_t         CaloMET_sumEt;
   Float_t         ChsMET_phi;
   Float_t         ChsMET_pt;
   Float_t         ChsMET_sumEt;
   Int_t           nCorrT1METJet;
   Float_t         CorrT1METJet_area[23];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_eta[23];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_muonSubtrFactor[23];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_phi[23];   //[nCorrT1METJet]
   Float_t         CorrT1METJet_rawPt[23];   //[nCorrT1METJet]
   Float_t         DeepMETResolutionTune_phi;
   Float_t         DeepMETResolutionTune_pt;
   Float_t         DeepMETResponseTune_phi;
   Float_t         DeepMETResponseTune_pt;
   Int_t           nElectron;
   Char_t          Electron_seediEtaOriX[7];   //[nElectron]
   Bool_t          Electron_convVeto[7];   //[nElectron]
   UChar_t         Electron_cutBased[7];   //[nElectron]
   Bool_t          Electron_cutBased_HEEP[7];   //[nElectron]
   Bool_t          Electron_isPFcand[7];   //[nElectron]
   UChar_t         Electron_jetNDauCharged[7];   //[nElectron]
   UChar_t         Electron_lostHits[7];   //[nElectron]
   Bool_t          Electron_mvaIso_WP80[7];   //[nElectron]
   Bool_t          Electron_mvaIso_WP90[7];   //[nElectron]
   Bool_t          Electron_mvaIso_WPL[7];   //[nElectron]
   Bool_t          Electron_mvaNoIso_WP80[7];   //[nElectron]
   Bool_t          Electron_mvaNoIso_WP90[7];   //[nElectron]
   Bool_t          Electron_mvaNoIso_WPL[7];   //[nElectron]
   UChar_t         Electron_seedGain[7];   //[nElectron]
   UChar_t         Electron_tightCharge[7];   //[nElectron]
   Short_t         Electron_jetIdx[7];   //[nElectron]
   Short_t         Electron_photonIdx[7];   //[nElectron]
   Short_t         Electron_svIdx[7];   //[nElectron]
   Short_t         Electron_fsrPhotonIdx[7];   //[nElectron]
   Int_t           Electron_charge[7];   //[nElectron]
   Int_t           Electron_pdgId[7];   //[nElectron]
   Int_t           Electron_seediPhiOriY[7];   //[nElectron]
   Int_t           Electron_vidNestedWPBitmap[7];   //[nElectron]
   Int_t           Electron_vidNestedWPBitmapHEEP[7];   //[nElectron]
   Float_t         Electron_dEscaleDown[7];   //[nElectron]
   Float_t         Electron_dEscaleUp[7];   //[nElectron]
   Float_t         Electron_dEsigmaDown[7];   //[nElectron]
   Float_t         Electron_dEsigmaUp[7];   //[nElectron]
   Float_t         Electron_deltaEtaSC[7];   //[nElectron]
   Float_t         Electron_dr03EcalRecHitSumEt[7];   //[nElectron]
   Float_t         Electron_dr03HcalDepth1TowerSumEt[7];   //[nElectron]
   Float_t         Electron_dr03TkSumPt[7];   //[nElectron]
   Float_t         Electron_dr03TkSumPtHEEP[7];   //[nElectron]
   Float_t         Electron_dxy[7];   //[nElectron]
   Float_t         Electron_dxyErr[7];   //[nElectron]
   Float_t         Electron_dz[7];   //[nElectron]
   Float_t         Electron_dzErr[7];   //[nElectron]
   Float_t         Electron_eCorr[7];   //[nElectron]
   Float_t         Electron_eInvMinusPInv[7];   //[nElectron]
   Float_t         Electron_energyErr[7];   //[nElectron]
   Float_t         Electron_eta[7];   //[nElectron]
   Float_t         Electron_hoe[7];   //[nElectron]
   Float_t         Electron_ip3d[7];   //[nElectron]
   Float_t         Electron_jetPtRelv2[7];   //[nElectron]
   Float_t         Electron_jetRelIso[7];   //[nElectron]
   Float_t         Electron_mass[7];   //[nElectron]
   Float_t         Electron_miniPFRelIso_all[7];   //[nElectron]
   Float_t         Electron_miniPFRelIso_chg[7];   //[nElectron]
   Float_t         Electron_mvaHZZIso[7];   //[nElectron]
   Float_t         Electron_mvaIso[7];   //[nElectron]
   Float_t         Electron_mvaNoIso[7];   //[nElectron]
   Float_t         Electron_pfRelIso03_all[7];   //[nElectron]
   Float_t         Electron_pfRelIso03_chg[7];   //[nElectron]
   Float_t         Electron_phi[7];   //[nElectron]
   Float_t         Electron_pt[7];   //[nElectron]
   Float_t         Electron_r9[7];   //[nElectron]
   Float_t         Electron_scEtOverPt[7];   //[nElectron]
   Float_t         Electron_sieie[7];   //[nElectron]
   Float_t         Electron_sip3d[7];   //[nElectron]
   Float_t         Electron_mvaTTH[7];   //[nElectron]
   Int_t           nFatJet;
   UChar_t         FatJet_jetId[4];   //[nFatJet]
   UChar_t         FatJet_nConstituents[4];   //[nFatJet]
   Short_t         FatJet_subJetIdx1[4];   //[nFatJet]
   Short_t         FatJet_subJetIdx2[4];   //[nFatJet]
   Short_t         FatJet_electronIdx3SJ[4];   //[nFatJet]
   Short_t         FatJet_muonIdx3SJ[4];   //[nFatJet]
   Float_t         FatJet_area[4];   //[nFatJet]
   Float_t         FatJet_btagCSVV2[4];   //[nFatJet]
   Float_t         FatJet_btagDDBvLV2[4];   //[nFatJet]
   Float_t         FatJet_btagDDCvBV2[4];   //[nFatJet]
   Float_t         FatJet_btagDDCvLV2[4];   //[nFatJet]
   Float_t         FatJet_btagDeepB[4];   //[nFatJet]
   Float_t         FatJet_btagHbb[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_H4qvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_HbbvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_TvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_WvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ZHbbvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ZHccvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ZbbvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ZvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_bbvsLight[4];   //[nFatJet]
   Float_t         FatJet_deepTagMD_ccvsLight[4];   //[nFatJet]
   Float_t         FatJet_deepTag_H[4];   //[nFatJet]
   Float_t         FatJet_deepTag_QCD[4];   //[nFatJet]
   Float_t         FatJet_deepTag_QCDothers[4];   //[nFatJet]
   Float_t         FatJet_deepTag_TvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTag_WvsQCD[4];   //[nFatJet]
   Float_t         FatJet_deepTag_ZvsQCD[4];   //[nFatJet]
   Float_t         FatJet_eta[4];   //[nFatJet]
   Float_t         FatJet_mass[4];   //[nFatJet]
   Float_t         FatJet_msoftdrop[4];   //[nFatJet]
   Float_t         FatJet_n2b1[4];   //[nFatJet]
   Float_t         FatJet_n3b1[4];   //[nFatJet]
   Float_t         FatJet_particleNetLegacy_QCD[4];   //[nFatJet]
   Float_t         FatJet_particleNetLegacy_Xbb[4];   //[nFatJet]
   Float_t         FatJet_particleNetLegacy_Xcc[4];   //[nFatJet]
   Float_t         FatJet_particleNetLegacy_Xqq[4];   //[nFatJet]
   Float_t         FatJet_particleNetLegacy_mass[4];   //[nFatJet]
   Float_t         FatJet_particleNetWithMass_H4qvsQCD[4];   //[nFatJet]
   Float_t         FatJet_particleNetWithMass_HbbvsQCD[4];   //[nFatJet]
   Float_t         FatJet_particleNetWithMass_HccvsQCD[4];   //[nFatJet]
   Float_t         FatJet_particleNetWithMass_QCD[4];   //[nFatJet]
   Float_t         FatJet_particleNetWithMass_TvsQCD[4];   //[nFatJet]
   Float_t         FatJet_particleNetWithMass_WvsQCD[4];   //[nFatJet]
   Float_t         FatJet_particleNetWithMass_ZvsQCD[4];   //[nFatJet]
   Float_t         FatJet_particleNet_QCD[4];   //[nFatJet]
   Float_t         FatJet_particleNet_QCD0HF[4];   //[nFatJet]
   Float_t         FatJet_particleNet_QCD1HF[4];   //[nFatJet]
   Float_t         FatJet_particleNet_QCD2HF[4];   //[nFatJet]
   Float_t         FatJet_particleNet_XbbVsQCD[4];   //[nFatJet]
   Float_t         FatJet_particleNet_XccVsQCD[4];   //[nFatJet]
   Float_t         FatJet_particleNet_XggVsQCD[4];   //[nFatJet]
   Float_t         FatJet_particleNet_XqqVsQCD[4];   //[nFatJet]
   Float_t         FatJet_particleNet_XteVsQCD[4];   //[nFatJet]
   Float_t         FatJet_particleNet_XtmVsQCD[4];   //[nFatJet]
   Float_t         FatJet_particleNet_XttVsQCD[4];   //[nFatJet]
   Float_t         FatJet_particleNet_massCorr[4];   //[nFatJet]
   Float_t         FatJet_phi[4];   //[nFatJet]
   Float_t         FatJet_pt[4];   //[nFatJet]
   Float_t         FatJet_rawFactor[4];   //[nFatJet]
   Float_t         FatJet_tau1[4];   //[nFatJet]
   Float_t         FatJet_tau2[4];   //[nFatJet]
   Float_t         FatJet_tau3[4];   //[nFatJet]
   Float_t         FatJet_tau4[4];   //[nFatJet]
   Float_t         FatJet_lsf3[4];   //[nFatJet]
   Int_t           nFsrPhoton;
   Short_t         FsrPhoton_electronIdx[3];   //[nFsrPhoton]
   Short_t         FsrPhoton_muonIdx[3];   //[nFsrPhoton]
   Float_t         FsrPhoton_dROverEt2[3];   //[nFsrPhoton]
   Float_t         FsrPhoton_eta[3];   //[nFsrPhoton]
   Float_t         FsrPhoton_phi[3];   //[nFsrPhoton]
   Float_t         FsrPhoton_pt[3];   //[nFsrPhoton]
   Float_t         FsrPhoton_relIso03[3];   //[nFsrPhoton]
   Int_t           nGenJetAK8;
   Float_t         GenJetAK8_eta[5];   //[nGenJetAK8]
   Float_t         GenJetAK8_mass[5];   //[nGenJetAK8]
   Float_t         GenJetAK8_phi[5];   //[nGenJetAK8]
   Float_t         GenJetAK8_pt[5];   //[nGenJetAK8]
   Int_t           nGenJet;
   Float_t         GenJet_eta[16];   //[nGenJet]
   Float_t         GenJet_mass[16];   //[nGenJet]
   Float_t         GenJet_phi[16];   //[nGenJet]
   Float_t         GenJet_pt[16];   //[nGenJet]
   Int_t           nGenPart;
   Short_t         GenPart_genPartIdxMother[98];   //[nGenPart]
   UShort_t        GenPart_statusFlags[98];   //[nGenPart]
   Int_t           GenPart_pdgId[98];   //[nGenPart]
   Int_t           GenPart_status[98];   //[nGenPart]
   Float_t         GenPart_eta[98];   //[nGenPart]
   Float_t         GenPart_mass[98];   //[nGenPart]
   Float_t         GenPart_phi[98];   //[nGenPart]
   Float_t         GenPart_pt[98];   //[nGenPart]
   Int_t           nGenProton;
   Bool_t          GenProton_isPU[14];   //[nGenProton]
   Float_t         GenProton_px[14];   //[nGenProton]
   Float_t         GenProton_py[14];   //[nGenProton]
   Float_t         GenProton_pz[14];   //[nGenProton]
   Float_t         GenProton_vz[14];   //[nGenProton]
   Int_t           nSubGenJetAK8;
   Float_t         SubGenJetAK8_eta[10];   //[nSubGenJetAK8]
   Float_t         SubGenJetAK8_mass[10];   //[nSubGenJetAK8]
   Float_t         SubGenJetAK8_phi[10];   //[nSubGenJetAK8]
   Float_t         SubGenJetAK8_pt[10];   //[nSubGenJetAK8]
   Int_t           Generator_id1;
   Int_t           Generator_id2;
   Float_t         Generator_binvar;
   Float_t         Generator_scalePDF;
   Float_t         Generator_weight;
   Float_t         Generator_x1;
   Float_t         Generator_x2;
   Float_t         Generator_xpdf1;
   Float_t         Generator_xpdf2;
   Float_t         GenVtx_x;
   Float_t         GenVtx_y;
   Float_t         GenVtx_z;
   Int_t           nGenVisTau;
   UChar_t         GenVisTau_status[4];   //[nGenVisTau]
   Short_t         GenVisTau_charge[4];   //[nGenVisTau]
   Short_t         GenVisTau_genPartIdxMother[4];   //[nGenVisTau]
   Float_t         GenVisTau_eta[4];   //[nGenVisTau]
   Float_t         GenVisTau_mass[4];   //[nGenVisTau]
   Float_t         GenVisTau_phi[4];   //[nGenVisTau]
   Float_t         GenVisTau_pt[4];   //[nGenVisTau]
   Float_t         genWeight;
   Float_t         LHEWeight_originalXWGTUP;
   Int_t           nLHEPdfWeight;
   Float_t         LHEPdfWeight[103];   //[nLHEPdfWeight]
   Int_t           nLHEReweightingWeight;
   Float_t         LHEReweightingWeight[1];   //[nLHEReweightingWeight]
   Int_t           nLHEScaleWeight;
   Float_t         LHEScaleWeight[9];   //[nLHEScaleWeight]
   Int_t           nPSWeight;
   Float_t         PSWeight[4];   //[nPSWeight]
   Int_t           nIsoTrack;
   Bool_t          IsoTrack_isHighPurityTrack[9];   //[nIsoTrack]
   Bool_t          IsoTrack_isPFcand[9];   //[nIsoTrack]
   Bool_t          IsoTrack_isFromLostTrack[9];   //[nIsoTrack]
   Short_t         IsoTrack_charge[9];   //[nIsoTrack]
   Short_t         IsoTrack_fromPV[9];   //[nIsoTrack]
   Int_t           IsoTrack_pdgId[9];   //[nIsoTrack]
   Float_t         IsoTrack_dxy[9];   //[nIsoTrack]
   Float_t         IsoTrack_dz[9];   //[nIsoTrack]
   Float_t         IsoTrack_eta[9];   //[nIsoTrack]
   Float_t         IsoTrack_pfRelIso03_all[9];   //[nIsoTrack]
   Float_t         IsoTrack_pfRelIso03_chg[9];   //[nIsoTrack]
   Float_t         IsoTrack_phi[9];   //[nIsoTrack]
   Float_t         IsoTrack_pt[9];   //[nIsoTrack]
   Float_t         IsoTrack_miniPFRelIso_all[9];   //[nIsoTrack]
   Float_t         IsoTrack_miniPFRelIso_chg[9];   //[nIsoTrack]
   Int_t           nJet;
   UChar_t         Jet_jetId[19];   //[nJet]
   UChar_t         Jet_nConstituents[19];   //[nJet]
   UChar_t         Jet_nElectrons[19];   //[nJet]
   UChar_t         Jet_nMuons[19];   //[nJet]
   UChar_t         Jet_nSVs[19];   //[nJet]
   UChar_t         Jet_puId[19];   //[nJet]
   Short_t         Jet_electronIdx1[19];   //[nJet]
   Short_t         Jet_electronIdx2[19];   //[nJet]
   Short_t         Jet_muonIdx1[19];   //[nJet]
   Short_t         Jet_muonIdx2[19];   //[nJet]
   Short_t         Jet_svIdx1[19];   //[nJet]
   Short_t         Jet_svIdx2[19];   //[nJet]
   Int_t           Jet_hfadjacentEtaStripsSize[19];   //[nJet]
   Int_t           Jet_hfcentralEtaStripSize[19];   //[nJet]
   Float_t         Jet_PNetRegPtRawCorr[19];   //[nJet]
   Float_t         Jet_PNetRegPtRawCorrNeutrino[19];   //[nJet]
   Float_t         Jet_PNetRegPtRawRes[19];   //[nJet]
   Float_t         Jet_area[19];   //[nJet]
   Float_t         Jet_btagCSVV2[19];   //[nJet]
   Float_t         Jet_btagDeepB[19];   //[nJet]
   Float_t         Jet_btagDeepCvB[19];   //[nJet]
   Float_t         Jet_btagDeepCvL[19];   //[nJet]
   Float_t         Jet_btagDeepFlavB[19];   //[nJet]
   Float_t         Jet_btagDeepFlavCvB[19];   //[nJet]
   Float_t         Jet_btagDeepFlavCvL[19];   //[nJet]
   Float_t         Jet_btagDeepFlavQG[19];   //[nJet]
   Float_t         Jet_btagPNetB[19];   //[nJet]
   Float_t         Jet_btagPNetCvB[19];   //[nJet]
   Float_t         Jet_btagPNetCvL[19];   //[nJet]
   Float_t         Jet_btagPNetQvG[19];   //[nJet]
   Float_t         Jet_btagPNetTauVJet[19];   //[nJet]
   Float_t         Jet_btagRobustParTAK4B[19];   //[nJet]
   Float_t         Jet_btagRobustParTAK4CvB[19];   //[nJet]
   Float_t         Jet_btagRobustParTAK4CvL[19];   //[nJet]
   Float_t         Jet_btagRobustParTAK4QG[19];   //[nJet]
   Float_t         Jet_chEmEF[19];   //[nJet]
   Float_t         Jet_chFPV0EF[19];   //[nJet]
   Float_t         Jet_chHEF[19];   //[nJet]
   Float_t         Jet_eta[19];   //[nJet]
   Float_t         Jet_hfsigmaEtaEta[19];   //[nJet]
   Float_t         Jet_hfsigmaPhiPhi[19];   //[nJet]
   Float_t         Jet_mass[19];   //[nJet]
   Float_t         Jet_muEF[19];   //[nJet]
   Float_t         Jet_muonSubtrFactor[19];   //[nJet]
   Float_t         Jet_neEmEF[19];   //[nJet]
   Float_t         Jet_neHEF[19];   //[nJet]
   Float_t         Jet_phi[19];   //[nJet]
   Float_t         Jet_pt[19];   //[nJet]
   Float_t         Jet_puIdDisc[19];   //[nJet]
   Float_t         Jet_qgl[19];   //[nJet]
   Float_t         Jet_rawFactor[19];   //[nJet]
   Float_t         Jet_bRegCorr[19];   //[nJet]
   Float_t         Jet_bRegRes[19];   //[nJet]
   Float_t         Jet_cRegCorr[19];   //[nJet]
   Float_t         Jet_cRegRes[19];   //[nJet]
   Float_t         L1PreFiringWeight_Dn;
   Float_t         L1PreFiringWeight_ECAL_Dn;
   Float_t         L1PreFiringWeight_ECAL_Nom;
   Float_t         L1PreFiringWeight_ECAL_Up;
   Float_t         L1PreFiringWeight_Muon_Nom;
   Float_t         L1PreFiringWeight_Muon_StatDn;
   Float_t         L1PreFiringWeight_Muon_StatUp;
   Float_t         L1PreFiringWeight_Muon_SystDn;
   Float_t         L1PreFiringWeight_Muon_SystUp;
   Float_t         L1PreFiringWeight_Nom;
   Float_t         L1PreFiringWeight_Up;
   UChar_t         LHE_Njets;
   UChar_t         LHE_Nb;
   UChar_t         LHE_Nc;
   UChar_t         LHE_Nuds;
   UChar_t         LHE_Nglu;
   UChar_t         LHE_NpNLO;
   UChar_t         LHE_NpLO;
   Float_t         LHE_HT;
   Float_t         LHE_HTIncoming;
   Float_t         LHE_Vpt;
   Float_t         LHE_AlphaS;
   Int_t           nLHEPart;
   Int_t           LHEPart_pdgId[9];   //[nLHEPart]
   Int_t           LHEPart_status[9];   //[nLHEPart]
   Int_t           LHEPart_spin[9];   //[nLHEPart]
   Float_t         LHEPart_pt[9];   //[nLHEPart]
   Float_t         LHEPart_eta[9];   //[nLHEPart]
   Float_t         LHEPart_phi[9];   //[nLHEPart]
   Float_t         LHEPart_mass[9];   //[nLHEPart]
   Float_t         LHEPart_incomingpz[9];   //[nLHEPart]
   Int_t           nLowPtElectron;
   Bool_t          LowPtElectron_convVeto[9];   //[nLowPtElectron]
   UChar_t         LowPtElectron_convWP[9];   //[nLowPtElectron]
   UChar_t         LowPtElectron_lostHits[9];   //[nLowPtElectron]
   Short_t         LowPtElectron_electronIdx[9];   //[nLowPtElectron]
   Short_t         LowPtElectron_photonIdx[9];   //[nLowPtElectron]
   Int_t           LowPtElectron_charge[9];   //[nLowPtElectron]
   Int_t           LowPtElectron_pdgId[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_ID[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_convVtxRadius[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_deltaEtaSC[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_dxy[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_dxyErr[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_dz[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_dzErr[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_eInvMinusPInv[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_embeddedID[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_energyErr[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_eta[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_hoe[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_mass[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_miniPFRelIso_all[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_miniPFRelIso_chg[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_phi[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_pt[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_ptbiased[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_r9[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_scEtOverPt[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_sieie[9];   //[nLowPtElectron]
   Float_t         LowPtElectron_unbiased[9];   //[nLowPtElectron]
   Float_t         GenMET_phi;
   Float_t         GenMET_pt;
   Float_t         MET_MetUnclustEnUpDeltaX;
   Float_t         MET_MetUnclustEnUpDeltaY;
   Float_t         MET_covXX;
   Float_t         MET_covXY;
   Float_t         MET_covYY;
   Float_t         MET_phi;
   Float_t         MET_pt;
   Float_t         MET_significance;
   Float_t         MET_sumEt;
   Float_t         MET_sumPtUnclustered;
   Int_t           nMuon;
   UChar_t         Muon_highPtId[8];   //[nMuon]
   Bool_t          Muon_highPurity[8];   //[nMuon]
   Bool_t          Muon_inTimeMuon[8];   //[nMuon]
   Bool_t          Muon_isGlobal[8];   //[nMuon]
   Bool_t          Muon_isPFcand[8];   //[nMuon]
   Bool_t          Muon_isStandalone[8];   //[nMuon]
   Bool_t          Muon_isTracker[8];   //[nMuon]
   UChar_t         Muon_jetNDauCharged[8];   //[nMuon]
   Bool_t          Muon_looseId[8];   //[nMuon]
   Bool_t          Muon_mediumId[8];   //[nMuon]
   Bool_t          Muon_mediumPromptId[8];   //[nMuon]
   UChar_t         Muon_miniIsoId[8];   //[nMuon]
   UChar_t         Muon_multiIsoId[8];   //[nMuon]
   UChar_t         Muon_mvaMuID_WP[8];   //[nMuon]
   UChar_t         Muon_nStations[8];   //[nMuon]
   UChar_t         Muon_nTrackerLayers[8];   //[nMuon]
   UChar_t         Muon_pfIsoId[8];   //[nMuon]
   UChar_t         Muon_puppiIsoId[8];   //[nMuon]
   Bool_t          Muon_softId[8];   //[nMuon]
   Bool_t          Muon_softMvaId[8];   //[nMuon]
   UChar_t         Muon_tightCharge[8];   //[nMuon]
   Bool_t          Muon_tightId[8];   //[nMuon]
   UChar_t         Muon_tkIsoId[8];   //[nMuon]
   Bool_t          Muon_triggerIdLoose[8];   //[nMuon]
   Short_t         Muon_jetIdx[8];   //[nMuon]
   Short_t         Muon_svIdx[8];   //[nMuon]
   Short_t         Muon_fsrPhotonIdx[8];   //[nMuon]
   Int_t           Muon_charge[8];   //[nMuon]
   Int_t           Muon_pdgId[8];   //[nMuon]
   Float_t         Muon_dxy[8];   //[nMuon]
   Float_t         Muon_dxyErr[8];   //[nMuon]
   Float_t         Muon_dxybs[8];   //[nMuon]
   Float_t         Muon_dz[8];   //[nMuon]
   Float_t         Muon_dzErr[8];   //[nMuon]
   Float_t         Muon_eta[8];   //[nMuon]
   Float_t         Muon_ip3d[8];   //[nMuon]
   Float_t         Muon_jetPtRelv2[8];   //[nMuon]
   Float_t         Muon_jetRelIso[8];   //[nMuon]
   Float_t         Muon_mass[8];   //[nMuon]
   Float_t         Muon_miniPFRelIso_all[8];   //[nMuon]
   Float_t         Muon_miniPFRelIso_chg[8];   //[nMuon]
   Float_t         Muon_mvaMuID[8];   //[nMuon]
   Float_t         Muon_pfRelIso03_all[8];   //[nMuon]
   Float_t         Muon_pfRelIso03_chg[8];   //[nMuon]
   Float_t         Muon_pfRelIso04_all[8];   //[nMuon]
   Float_t         Muon_phi[8];   //[nMuon]
   Float_t         Muon_pt[8];   //[nMuon]
   Float_t         Muon_ptErr[8];   //[nMuon]
   Float_t         Muon_segmentComp[8];   //[nMuon]
   Float_t         Muon_sip3d[8];   //[nMuon]
   Float_t         Muon_softMva[8];   //[nMuon]
   Float_t         Muon_tkRelIso[8];   //[nMuon]
   Float_t         Muon_tunepRelPt[8];   //[nMuon]
   Float_t         Muon_bsConstrainedChi2[8];   //[nMuon]
   Float_t         Muon_bsConstrainedPt[8];   //[nMuon]
   Float_t         Muon_bsConstrainedPtErr[8];   //[nMuon]
   Float_t         Muon_mvaLowPt[8];   //[nMuon]
   Float_t         Muon_mvaTTH[8];   //[nMuon]
   Int_t           nPhoton;
   Char_t          Photon_seediEtaOriX[7];   //[nPhoton]
   UChar_t         Photon_cutBased[7];   //[nPhoton]
   Bool_t          Photon_electronVeto[7];   //[nPhoton]
   Bool_t          Photon_hasConversionTracks[7];   //[nPhoton]
   Bool_t          Photon_isScEtaEB[7];   //[nPhoton]
   Bool_t          Photon_isScEtaEE[7];   //[nPhoton]
   Bool_t          Photon_mvaID_WP80[7];   //[nPhoton]
   Bool_t          Photon_mvaID_WP90[7];   //[nPhoton]
   Bool_t          Photon_pixelSeed[7];   //[nPhoton]
   UChar_t         Photon_seedGain[7];   //[nPhoton]
   Short_t         Photon_electronIdx[7];   //[nPhoton]
   Short_t         Photon_jetIdx[7];   //[nPhoton]
   Int_t           Photon_seediPhiOriY[7];   //[nPhoton]
   Int_t           Photon_vidNestedWPBitmap[7];   //[nPhoton]
   Float_t         Photon_dEscaleDown[7];   //[nPhoton]
   Float_t         Photon_dEscaleUp[7];   //[nPhoton]
   Float_t         Photon_dEsigmaDown[7];   //[nPhoton]
   Float_t         Photon_dEsigmaUp[7];   //[nPhoton]
   Float_t         Photon_eCorr[7];   //[nPhoton]
   Float_t         Photon_ecalPFClusterIso[7];   //[nPhoton]
   Float_t         Photon_energyErr[7];   //[nPhoton]
   Float_t         Photon_energyRaw[7];   //[nPhoton]
   Float_t         Photon_esEffSigmaRR[7];   //[nPhoton]
   Float_t         Photon_esEnergyOverRawE[7];   //[nPhoton]
   Float_t         Photon_eta[7];   //[nPhoton]
   Float_t         Photon_etaWidth[7];   //[nPhoton]
   Float_t         Photon_haloTaggerMVAVal[7];   //[nPhoton]
   Float_t         Photon_hcalPFClusterIso[7];   //[nPhoton]
   Float_t         Photon_hoe[7];   //[nPhoton]
   Float_t         Photon_mvaID[7];   //[nPhoton]
   Float_t         Photon_pfChargedIso[7];   //[nPhoton]
   Float_t         Photon_pfChargedIsoPFPV[7];   //[nPhoton]
   Float_t         Photon_pfChargedIsoWorstVtx[7];   //[nPhoton]
   Float_t         Photon_pfPhoIso03[7];   //[nPhoton]
   Float_t         Photon_pfRelIso03_all[7];   //[nPhoton]
   Float_t         Photon_pfRelIso03_chg[7];   //[nPhoton]
   Float_t         Photon_phi[7];   //[nPhoton]
   Float_t         Photon_phiWidth[7];   //[nPhoton]
   Float_t         Photon_pt[7];   //[nPhoton]
   Float_t         Photon_r9[7];   //[nPhoton]
   Float_t         Photon_s4[7];   //[nPhoton]
   Float_t         Photon_sieie[7];   //[nPhoton]
   Float_t         Photon_sieip[7];   //[nPhoton]
   Float_t         Photon_sipip[7];   //[nPhoton]
   Float_t         Photon_trkSumPtHollowConeDR03[7];   //[nPhoton]
   Float_t         Photon_trkSumPtSolidConeDR04[7];   //[nPhoton]
   Float_t         Photon_x_calo[7];   //[nPhoton]
   Float_t         Photon_y_calo[7];   //[nPhoton]
   Float_t         Photon_z_calo[7];   //[nPhoton]
   Int_t           Pileup_nPU;
   Int_t           Pileup_sumEOOT;
   Int_t           Pileup_sumLOOT;
   Float_t         Pileup_nTrueInt;
   Float_t         Pileup_pudensity;
   Float_t         Pileup_gpudensity;
   Float_t         PuppiMET_phi;
   Float_t         PuppiMET_phiJERDown;
   Float_t         PuppiMET_phiJERUp;
   Float_t         PuppiMET_phiJESDown;
   Float_t         PuppiMET_phiJESUp;
   Float_t         PuppiMET_phiUnclusteredDown;
   Float_t         PuppiMET_phiUnclusteredUp;
   Float_t         PuppiMET_pt;
   Float_t         PuppiMET_ptJERDown;
   Float_t         PuppiMET_ptJERUp;
   Float_t         PuppiMET_ptJESDown;
   Float_t         PuppiMET_ptJESUp;
   Float_t         PuppiMET_ptUnclusteredDown;
   Float_t         PuppiMET_ptUnclusteredUp;
   Float_t         PuppiMET_sumEt;
   Float_t         RawMET_phi;
   Float_t         RawMET_pt;
   Float_t         RawMET_sumEt;
   Float_t         RawPuppiMET_phi;
   Float_t         RawPuppiMET_pt;
   Float_t         RawPuppiMET_sumEt;
   Float_t         Rho_fixedGridRhoAll;
   Float_t         Rho_fixedGridRhoFastjetAll;
   Float_t         Rho_fixedGridRhoFastjetCentral;
   Float_t         Rho_fixedGridRhoFastjetCentralCalo;
   Float_t         Rho_fixedGridRhoFastjetCentralChargedPileUp;
   Float_t         Rho_fixedGridRhoFastjetCentralNeutral;
   Int_t           nGenDressedLepton;
   Bool_t          GenDressedLepton_hasTauAnc[5];   //[nGenDressedLepton]
   Int_t           GenDressedLepton_pdgId[5];   //[nGenDressedLepton]
   Float_t         GenDressedLepton_eta[5];   //[nGenDressedLepton]
   Float_t         GenDressedLepton_mass[5];   //[nGenDressedLepton]
   Float_t         GenDressedLepton_phi[5];   //[nGenDressedLepton]
   Float_t         GenDressedLepton_pt[5];   //[nGenDressedLepton]
   Int_t           nGenIsolatedPhoton;
   Float_t         GenIsolatedPhoton_eta[2];   //[nGenIsolatedPhoton]
   Float_t         GenIsolatedPhoton_mass[2];   //[nGenIsolatedPhoton]
   Float_t         GenIsolatedPhoton_phi[2];   //[nGenIsolatedPhoton]
   Float_t         GenIsolatedPhoton_pt[2];   //[nGenIsolatedPhoton]
   Int_t           nSoftActivityJet;
   Float_t         SoftActivityJet_eta[6];   //[nSoftActivityJet]
   Float_t         SoftActivityJet_phi[6];   //[nSoftActivityJet]
   Float_t         SoftActivityJet_pt[6];   //[nSoftActivityJet]
   Int_t           SoftActivityJetNjets10;
   Int_t           SoftActivityJetNjets2;
   Int_t           SoftActivityJetNjets5;
   Float_t         SoftActivityJetHT;
   Float_t         SoftActivityJetHT10;
   Float_t         SoftActivityJetHT2;
   Float_t         SoftActivityJetHT5;
   Int_t           nSubJet;
   Float_t         SubJet_btagCSVV2[6];   //[nSubJet]
   Float_t         SubJet_btagDeepB[6];   //[nSubJet]
   Float_t         SubJet_eta[6];   //[nSubJet]
   Float_t         SubJet_mass[6];   //[nSubJet]
   Float_t         SubJet_n2b1[6];   //[nSubJet]
   Float_t         SubJet_n3b1[6];   //[nSubJet]
   Float_t         SubJet_phi[6];   //[nSubJet]
   Float_t         SubJet_pt[6];   //[nSubJet]
   Float_t         SubJet_rawFactor[6];   //[nSubJet]
   Float_t         SubJet_tau1[6];   //[nSubJet]
   Float_t         SubJet_tau2[6];   //[nSubJet]
   Float_t         SubJet_tau3[6];   //[nSubJet]
   Float_t         SubJet_tau4[6];   //[nSubJet]
   Int_t           nTau;
   UChar_t         Tau_decayMode[9];   //[nTau]
   Bool_t          Tau_idAntiEleDeadECal[9];   //[nTau]
   UChar_t         Tau_idAntiMu[9];   //[nTau]
   Bool_t          Tau_idDecayModeNewDMs[9];   //[nTau]
   Bool_t          Tau_idDecayModeOldDMs[9];   //[nTau]
   UChar_t         Tau_idDeepTau2017v2p1VSe[9];   //[nTau]
   UChar_t         Tau_idDeepTau2017v2p1VSjet[9];   //[nTau]
   UChar_t         Tau_idDeepTau2017v2p1VSmu[9];   //[nTau]
   UChar_t         Tau_idDeepTau2018v2p5VSe[9];   //[nTau]
   UChar_t         Tau_idDeepTau2018v2p5VSjet[9];   //[nTau]
   UChar_t         Tau_idDeepTau2018v2p5VSmu[9];   //[nTau]
   UChar_t         Tau_nSVs[9];   //[nTau]
   Short_t         Tau_charge[9];   //[nTau]
   Short_t         Tau_decayModePNet[9];   //[nTau]
   Short_t         Tau_eleIdx[9];   //[nTau]
   Short_t         Tau_jetIdx[9];   //[nTau]
   Short_t         Tau_muIdx[9];   //[nTau]
   Short_t         Tau_svIdx1[9];   //[nTau]
   Short_t         Tau_svIdx2[9];   //[nTau]
   Int_t           Tau_Ecounter[9];   //[nTau]
   Int_t           Tau_Mcounter[9];   //[nTau]
   Int_t           Tau_SubLeadingElectronPhi[9];   //[nTau]
   Int_t           Tau_SubLeadingMuonM[9];   //[nTau]
   Int_t           Tau_SubSubLeadingElectronPhi[9];   //[nTau]
   Int_t           Tau_SubSubLeadingMuonM[9];   //[nTau]
   Float_t         Tau_LeadingElectronCorrIso[9];   //[nTau]
   Float_t         Tau_LeadingElectronEta[9];   //[nTau]
   Float_t         Tau_LeadingElectronM[9];   //[nTau]
   Float_t         Tau_LeadingElectronPhi[9];   //[nTau]
   Float_t         Tau_LeadingElectronPt[9];   //[nTau]
   Float_t         Tau_LeadingElectrondelR[9];   //[nTau]
   Float_t         Tau_LeadingElectronea[9];   //[nTau]
   Float_t         Tau_LeadingElectronrho[9];   //[nTau]
   Float_t         Tau_LeadingElectronsumPFChargedHadronPt[9];   //[nTau]
   Float_t         Tau_LeadingElectronsumPFNeutralHadronPt[9];   //[nTau]
   Float_t         Tau_LeadingElectronsumPFPhotonPt[9];   //[nTau]
   Float_t         Tau_LeadingElectrontausumPFChargedHadronPt[9];   //[nTau]
   Float_t         Tau_LeadingElectrontausumPFNeutralHadronPt[9];   //[nTau]
   Float_t         Tau_LeadingElectrontausumPFPhotonPt[9];   //[nTau]
   Float_t         Tau_LeadingMuonCorrIso[9];   //[nTau]
   Float_t         Tau_LeadingMuonEta[9];   //[nTau]
   Float_t         Tau_LeadingMuonM[9];   //[nTau]
   Float_t         Tau_LeadingMuonPhi[9];   //[nTau]
   Float_t         Tau_LeadingMuonPt[9];   //[nTau]
   Float_t         Tau_LeadingMuondelR[9];   //[nTau]
   Float_t         Tau_LeadingMuonsumPFChargedHadronPt[9];   //[nTau]
   Float_t         Tau_LeadingMuonsumPFNeutralHadronPt[9];   //[nTau]
   Float_t         Tau_LeadingMuonsumPFPhotonPt[9];   //[nTau]
   Float_t         Tau_LeadingMuonsumPUPt[9];   //[nTau]
   Float_t         Tau_LeadingMuontausumPFChargedHadronPt[9];   //[nTau]
   Float_t         Tau_LeadingMuontausumPFNeutralHadronPt[9];   //[nTau]
   Float_t         Tau_LeadingMuontausumPFPhotonPt[9];   //[nTau]
   Float_t         Tau_SubLeadingElectronCorrIso[9];   //[nTau]
   Float_t         Tau_SubLeadingElectronEta[9];   //[nTau]
   Float_t         Tau_SubLeadingElectronM[9];   //[nTau]
   Float_t         Tau_SubLeadingElectronPt[9];   //[nTau]
   Float_t         Tau_SubLeadingElectrondelR[9];   //[nTau]
   Float_t         Tau_SubLeadingElectronea[9];   //[nTau]
   Float_t         Tau_SubLeadingElectronrho[9];   //[nTau]
   Float_t         Tau_SubLeadingElectronsumPFChargedHadronPt[9];   //[nTau]
   Float_t         Tau_SubLeadingElectronsumPFNeutralHadronPt[9];   //[nTau]
   Float_t         Tau_SubLeadingElectronsumPFPhotonPt[9];   //[nTau]
   Float_t         Tau_SubLeadingElectrontausumPFChargedHadronPt[9];   //[nTau]
   Float_t         Tau_SubLeadingElectrontausumPFNeutralHadronPt[9];   //[nTau]
   Float_t         Tau_SubLeadingElectrontausumPFPhotonPt[9];   //[nTau]
   Float_t         Tau_SubLeadingMuonCorrIso[9];   //[nTau]
   Float_t         Tau_SubLeadingMuonEta[9];   //[nTau]
   Float_t         Tau_SubLeadingMuonPhi[9];   //[nTau]
   Float_t         Tau_SubLeadingMuonPt[9];   //[nTau]
   Float_t         Tau_SubLeadingMuondelR[9];   //[nTau]
   Float_t         Tau_SubLeadingMuonsumPFChargedHadronPt[9];   //[nTau]
   Float_t         Tau_SubLeadingMuonsumPFNeutralHadronPt[9];   //[nTau]
   Float_t         Tau_SubLeadingMuonsumPFPhotonPt[9];   //[nTau]
   Float_t         Tau_SubLeadingMuonsumPUPt[9];   //[nTau]
   Float_t         Tau_SubLeadingMuontausumPFChargedHadronPt[9];   //[nTau]
   Float_t         Tau_SubLeadingMuontausumPFNeutralHadronPt[9];   //[nTau]
   Float_t         Tau_SubLeadingMuontausumPFPhotonPt[9];   //[nTau]
   Float_t         Tau_SubSubLeadingElectronCorrIso[9];   //[nTau]
   Float_t         Tau_SubSubLeadingElectronEta[9];   //[nTau]
   Float_t         Tau_SubSubLeadingElectronM[9];   //[nTau]
   Float_t         Tau_SubSubLeadingElectronPt[9];   //[nTau]
   Float_t         Tau_SubSubLeadingElectrondelR[9];   //[nTau]
   Float_t         Tau_SubSubLeadingElectronea[9];   //[nTau]
   Float_t         Tau_SubSubLeadingElectronrho[9];   //[nTau]
   Float_t         Tau_SubSubLeadingElectronsumPFChargedHadronPt[9];   //[nTau]
   Float_t         Tau_SubSubLeadingElectronsumPFNeutralHadronPt[9];   //[nTau]
   Float_t         Tau_SubSubLeadingElectronsumPFPhotonPt[9];   //[nTau]
   Float_t         Tau_SubSubLeadingElectrontausumPFChargedHadronPt[9];   //[nTau]
   Float_t         Tau_SubSubLeadingElectrontausumPFNeutralHadronPt[9];   //[nTau]
   Float_t         Tau_SubSubLeadingElectrontausumPFPhotonPt[9];   //[nTau]
   Float_t         Tau_SubSubLeadingMuonCorrIso[9];   //[nTau]
   Float_t         Tau_SubSubLeadingMuonEta[9];   //[nTau]
   Float_t         Tau_SubSubLeadingMuonPhi[9];   //[nTau]
   Float_t         Tau_SubSubLeadingMuonPt[9];   //[nTau]
   Float_t         Tau_SubSubLeadingMuondelR[9];   //[nTau]
   Float_t         Tau_SubSubLeadingMuonsumPFChargedHadronPt[9];   //[nTau]
   Float_t         Tau_SubSubLeadingMuonsumPFNeutralHadronPt[9];   //[nTau]
   Float_t         Tau_SubSubLeadingMuonsumPFPhotonPt[9];   //[nTau]
   Float_t         Tau_SubSubLeadingMuonsumPUPt[9];   //[nTau]
   Float_t         Tau_SubSubLeadingMuontausumPFChargedHadronPt[9];   //[nTau]
   Float_t         Tau_SubSubLeadingMuontausumPFNeutralHadronPt[9];   //[nTau]
   Float_t         Tau_SubSubLeadingMuontausumPFPhotonPt[9];   //[nTau]
   Float_t         Tau_chargedIso[9];   //[nTau]
   Float_t         Tau_dxy[9];   //[nTau]
   Float_t         Tau_dz[9];   //[nTau]
   Float_t         Tau_eta[9];   //[nTau]
   Float_t         Tau_leadTkDeltaEta[9];   //[nTau]
   Float_t         Tau_leadTkDeltaPhi[9];   //[nTau]
   Float_t         Tau_leadTkPtOverTauPt[9];   //[nTau]
   Float_t         Tau_mass[9];   //[nTau]
   Float_t         Tau_neutralIso[9];   //[nTau]
   Float_t         Tau_phi[9];   //[nTau]
   Float_t         Tau_photonsOutsideSignalCone[9];   //[nTau]
   Float_t         Tau_probDM0PNet[9];   //[nTau]
   Float_t         Tau_probDM10PNet[9];   //[nTau]
   Float_t         Tau_probDM11PNet[9];   //[nTau]
   Float_t         Tau_probDM1PNet[9];   //[nTau]
   Float_t         Tau_probDM2PNet[9];   //[nTau]
   Float_t         Tau_pt[9];   //[nTau]
   Float_t         Tau_ptCorrPNet[9];   //[nTau]
   Float_t         Tau_puCorr[9];   //[nTau]
   Float_t         Tau_qConfPNet[9];   //[nTau]
   Float_t         Tau_rawDeepTau2017v2p1VSe[9];   //[nTau]
   Float_t         Tau_rawDeepTau2017v2p1VSjet[9];   //[nTau]
   Float_t         Tau_rawDeepTau2017v2p1VSmu[9];   //[nTau]
   Float_t         Tau_rawDeepTau2018v2p5VSe[9];   //[nTau]
   Float_t         Tau_rawDeepTau2018v2p5VSjet[9];   //[nTau]
   Float_t         Tau_rawDeepTau2018v2p5VSmu[9];   //[nTau]
   Float_t         Tau_rawIso[9];   //[nTau]
   Float_t         Tau_rawIsodR03[9];   //[nTau]
   Float_t         Tau_rawPNetVSe[9];   //[nTau]
   Float_t         Tau_rawPNetVSjet[9];   //[nTau]
   Float_t         Tau_rawPNetVSmu[9];   //[nTau]
   Float_t         TkMET_phi;
   Float_t         TkMET_pt;
   Float_t         TkMET_sumEt;
   Int_t           nTrigObj;
   Short_t         TrigObj_l1charge[45];   //[nTrigObj]
   UShort_t        TrigObj_id[45];   //[nTrigObj]
   Int_t           TrigObj_l1iso[45];   //[nTrigObj]
   Int_t           TrigObj_filterBits[45];   //[nTrigObj]
   Float_t         TrigObj_pt[45];   //[nTrigObj]
   Float_t         TrigObj_eta[45];   //[nTrigObj]
   Float_t         TrigObj_phi[45];   //[nTrigObj]
   Float_t         TrigObj_l1pt[45];   //[nTrigObj]
   Float_t         TrigObj_l1pt_2[45];   //[nTrigObj]
   Float_t         TrigObj_l2pt[45];   //[nTrigObj]
   Int_t           genTtbarId;
   Int_t           nOtherPV;
   Float_t         OtherPV_z[3];   //[nOtherPV]
   Float_t         OtherPV_score[3];   //[nOtherPV]
   UChar_t         PV_npvs;
   UChar_t         PV_npvsGood;
   Float_t         PV_ndof;
   Float_t         PV_x;
   Float_t         PV_y;
   Float_t         PV_z;
   Float_t         PV_chi2;
   Float_t         PV_score;
   Int_t           nSV;
   Short_t         SV_charge[9];   //[nSV]
   Float_t         SV_dlen[9];   //[nSV]
   Float_t         SV_dlenSig[9];   //[nSV]
   Float_t         SV_dxy[9];   //[nSV]
   Float_t         SV_dxySig[9];   //[nSV]
   Float_t         SV_pAngle[9];   //[nSV]
   UChar_t         boostedTau_genPartFlav[8];   //[nboostedTau]
   Short_t         boostedTau_genPartIdx[8];   //[nboostedTau]
   UChar_t         Electron_genPartFlav[7];   //[nElectron]
   Short_t         Electron_genPartIdx[7];   //[nElectron]
   UChar_t         FatJet_hadronFlavour[4];   //[nFatJet]
   UChar_t         FatJet_nBHadrons[4];   //[nFatJet]
   UChar_t         FatJet_nCHadrons[4];   //[nFatJet]
   Short_t         FatJet_genJetAK8Idx[4];   //[nFatJet]
   UChar_t         GenJetAK8_hadronFlavour[5];   //[nGenJetAK8]
   Short_t         GenJetAK8_partonFlavour[5];   //[nGenJetAK8]
   UChar_t         GenJet_hadronFlavour[16];   //[nGenJet]
   Short_t         GenJet_partonFlavour[16];   //[nGenJet]
   Float_t         GenVtx_t0;
   UChar_t         Jet_hadronFlavour[19];   //[nJet]
   Short_t         Jet_genJetIdx[19];   //[nJet]
   Short_t         Jet_partonFlavour[19];   //[nJet]
   UChar_t         LowPtElectron_genPartFlav[9];   //[nLowPtElectron]
   Short_t         LowPtElectron_genPartIdx[9];   //[nLowPtElectron]
   UChar_t         Muon_genPartFlav[8];   //[nMuon]
   Short_t         Muon_genPartIdx[8];   //[nMuon]
   UChar_t         Photon_genPartFlav[7];   //[nPhoton]
   Short_t         Photon_genPartIdx[7];   //[nPhoton]
   Float_t         MET_fiducialGenPhi;
   Float_t         MET_fiducialGenPt;
   UChar_t         SubJet_hadronFlavour[6];   //[nSubJet]
   UChar_t         SubJet_nBHadrons[6];   //[nSubJet]
   UChar_t         SubJet_nCHadrons[6];   //[nSubJet]
   UChar_t         SV_ntracks[9];   //[nSV]
   Float_t         SV_chi2[9];   //[nSV]
   Float_t         SV_eta[9];   //[nSV]
   Float_t         SV_mass[9];   //[nSV]
   Float_t         SV_ndof[9];   //[nSV]
   Float_t         SV_phi[9];   //[nSV]
   Float_t         SV_pt[9];   //[nSV]
   Float_t         SV_x[9];   //[nSV]
   Float_t         SV_y[9];   //[nSV]
   Float_t         SV_z[9];   //[nSV]
   UChar_t         Tau_genPartFlav[9];   //[nTau]
   Short_t         Tau_genPartIdx[9];   //[nTau]
   Bool_t          L1_AlwaysTrue;
   Bool_t          L1_BPTX_AND_Ref1_VME;
   Bool_t          L1_BPTX_AND_Ref3_VME;
   Bool_t          L1_BPTX_AND_Ref4_VME;
   Bool_t          L1_BPTX_BeamGas_B1_VME;
   Bool_t          L1_BPTX_BeamGas_B2_VME;
   Bool_t          L1_BPTX_BeamGas_Ref1_VME;
   Bool_t          L1_BPTX_BeamGas_Ref2_VME;
   Bool_t          L1_BPTX_NotOR_VME;
   Bool_t          L1_BPTX_OR_Ref3_VME;
   Bool_t          L1_BPTX_OR_Ref4_VME;
   Bool_t          L1_BPTX_RefAND_VME;
   Bool_t          L1_BptxMinus;
   Bool_t          L1_BptxOR;
   Bool_t          L1_BptxPlus;
   Bool_t          L1_BptxXOR;
   Bool_t          L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142;
   Bool_t          L1_DoubleEG8er2p5_HTT260er;
   Bool_t          L1_DoubleEG8er2p5_HTT280er;
   Bool_t          L1_DoubleEG8er2p5_HTT300er;
   Bool_t          L1_DoubleEG8er2p5_HTT320er;
   Bool_t          L1_DoubleEG8er2p5_HTT340er;
   Bool_t          L1_DoubleEG_15_10_er2p5;
   Bool_t          L1_DoubleEG_20_10_er2p5;
   Bool_t          L1_DoubleEG_22_10_er2p5;
   Bool_t          L1_DoubleEG_25_12_er2p5;
   Bool_t          L1_DoubleEG_25_14_er2p5;
   Bool_t          L1_DoubleEG_27_14_er2p5;
   Bool_t          L1_DoubleEG_LooseIso20_10_er2p5;
   Bool_t          L1_DoubleEG_LooseIso22_10_er2p5;
   Bool_t          L1_DoubleEG_LooseIso22_12_er2p5;
   Bool_t          L1_DoubleEG_LooseIso25_12_er2p5;
   Bool_t          L1_DoubleIsoTau32er2p1;
   Bool_t          L1_DoubleIsoTau34er2p1;
   Bool_t          L1_DoubleIsoTau36er2p1;
   Bool_t          L1_DoubleJet100er2p3_dEta_Max1p6;
   Bool_t          L1_DoubleJet100er2p5;
   Bool_t          L1_DoubleJet112er2p3_dEta_Max1p6;
   Bool_t          L1_DoubleJet120er2p5;
   Bool_t          L1_DoubleJet150er2p5;
   Bool_t          L1_DoubleJet30er2p5_Mass_Min150_dEta_Max1p5;
   Bool_t          L1_DoubleJet30er2p5_Mass_Min200_dEta_Max1p5;
   Bool_t          L1_DoubleJet30er2p5_Mass_Min250_dEta_Max1p5;
   Bool_t          L1_DoubleJet30er2p5_Mass_Min300_dEta_Max1p5;
   Bool_t          L1_DoubleJet30er2p5_Mass_Min330_dEta_Max1p5;
   Bool_t          L1_DoubleJet30er2p5_Mass_Min360_dEta_Max1p5;
   Bool_t          L1_DoubleJet35_Mass_Min450_IsoTau45_RmOvlp;
   Bool_t          L1_DoubleJet40er2p5;
   Bool_t          L1_DoubleJet_100_30_DoubleJet30_Mass_Min620;
   Bool_t          L1_DoubleJet_110_35_DoubleJet35_Mass_Min620;
   Bool_t          L1_DoubleJet_115_40_DoubleJet40_Mass_Min620;
   Bool_t          L1_DoubleJet_115_40_DoubleJet40_Mass_Min620_Jet60TT28;
   Bool_t          L1_DoubleJet_120_45_DoubleJet45_Mass_Min620;
   Bool_t          L1_DoubleJet_120_45_DoubleJet45_Mass_Min620_Jet60TT28;
   Bool_t          L1_DoubleJet_80_30_Mass_Min420_DoubleMu0_SQ;
   Bool_t          L1_DoubleJet_80_30_Mass_Min420_IsoTau40_RmOvlp;
   Bool_t          L1_DoubleJet_80_30_Mass_Min420_Mu8;
   Bool_t          L1_DoubleJet_90_30_DoubleJet30_Mass_Min620;
   Bool_t          L1_DoubleLooseIsoEG22er2p1;
   Bool_t          L1_DoubleLooseIsoEG24er2p1;
   Bool_t          L1_DoubleMu0;
   Bool_t          L1_DoubleMu0_Mass_Min1;
   Bool_t          L1_DoubleMu0_OQ;
   Bool_t          L1_DoubleMu0_SQ;
   Bool_t          L1_DoubleMu0_SQ_OS;
   Bool_t          L1_DoubleMu0_dR_Max1p6_Jet90er2p5_dR_Max0p8;
   Bool_t          L1_DoubleMu0er1p4_SQ_OS_dR_Max1p4;
   Bool_t          L1_DoubleMu0er1p5_SQ;
   Bool_t          L1_DoubleMu0er1p5_SQ_OS;
   Bool_t          L1_DoubleMu0er1p5_SQ_OS_dR_Max1p4;
   Bool_t          L1_DoubleMu0er1p5_SQ_dR_Max1p4;
   Bool_t          L1_DoubleMu0er2p0_SQ_OS_dR_Max1p4;
   Bool_t          L1_DoubleMu0er2p0_SQ_dR_Max1p4;
   Bool_t          L1_DoubleMu10_SQ;
   Bool_t          L1_DoubleMu18er2p1;
   Bool_t          L1_DoubleMu3_OS_DoubleEG7p5Upsilon;
   Bool_t          L1_DoubleMu3_SQ_ETMHF50_HTT60er;
   Bool_t          L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5;
   Bool_t          L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5_OR_DoubleJet40er2p5;
   Bool_t          L1_DoubleMu3_SQ_ETMHF60_Jet60er2p5;
   Bool_t          L1_DoubleMu3_SQ_HTT220er;
   Bool_t          L1_DoubleMu3_SQ_HTT240er;
   Bool_t          L1_DoubleMu3_SQ_HTT260er;
   Bool_t          L1_DoubleMu3_dR_Max1p6_Jet90er2p5_dR_Max0p8;
   Bool_t          L1_DoubleMu4_SQ_EG9er2p5;
   Bool_t          L1_DoubleMu4_SQ_OS;
   Bool_t          L1_DoubleMu4_SQ_OS_dR_Max1p2;
   Bool_t          L1_DoubleMu4p5_SQ_OS;
   Bool_t          L1_DoubleMu4p5_SQ_OS_dR_Max1p2;
   Bool_t          L1_DoubleMu4p5er2p0_SQ_OS;
   Bool_t          L1_DoubleMu4p5er2p0_SQ_OS_Mass7to18;
   Bool_t          L1_DoubleMu5Upsilon_OS_DoubleEG3;
   Bool_t          L1_DoubleMu5_SQ_EG9er2p5;
   Bool_t          L1_DoubleMu9_SQ;
   Bool_t          L1_DoubleMu_12_5;
   Bool_t          L1_DoubleMu_15_5_SQ;
   Bool_t          L1_DoubleMu_15_7;
   Bool_t          L1_DoubleMu_15_7_Mass_Min1;
   Bool_t          L1_DoubleMu_15_7_SQ;
   Bool_t          L1_DoubleTau70er2p1;
   Bool_t          L1_ETM120;
   Bool_t          L1_ETM150;
   Bool_t          L1_ETMHF100;
   Bool_t          L1_ETMHF100_HTT60er;
   Bool_t          L1_ETMHF110;
   Bool_t          L1_ETMHF110_HTT60er;
   Bool_t          L1_ETMHF110_HTT60er_NotSecondBunchInTrain;
   Bool_t          L1_ETMHF120;
   Bool_t          L1_ETMHF120_HTT60er;
   Bool_t          L1_ETMHF120_NotSecondBunchInTrain;
   Bool_t          L1_ETMHF130;
   Bool_t          L1_ETMHF130_HTT60er;
   Bool_t          L1_ETMHF140;
   Bool_t          L1_ETMHF150;
   Bool_t          L1_ETMHF90_HTT60er;
   Bool_t          L1_ETT1200;
   Bool_t          L1_ETT1600;
   Bool_t          L1_ETT2000;
   Bool_t          L1_FirstBunchAfterTrain;
   Bool_t          L1_FirstBunchBeforeTrain;
   Bool_t          L1_FirstBunchInTrain;
   Bool_t          L1_FirstCollisionInOrbit;
   Bool_t          L1_FirstCollisionInTrain;
   Bool_t          L1_HCAL_LaserMon_Trig;
   Bool_t          L1_HCAL_LaserMon_Veto;
   Bool_t          L1_HTT120er;
   Bool_t          L1_HTT160er;
   Bool_t          L1_HTT200er;
   Bool_t          L1_HTT255er;
   Bool_t          L1_HTT280er;
   Bool_t          L1_HTT280er_QuadJet_70_55_40_35_er2p4;
   Bool_t          L1_HTT320er;
   Bool_t          L1_HTT320er_QuadJet_70_55_40_40_er2p4;
   Bool_t          L1_HTT320er_QuadJet_80_60_er2p1_45_40_er2p3;
   Bool_t          L1_HTT320er_QuadJet_80_60_er2p1_50_45_er2p3;
   Bool_t          L1_HTT360er;
   Bool_t          L1_HTT400er;
   Bool_t          L1_HTT450er;
   Bool_t          L1_IsoEG32er2p5_Mt40;
   Bool_t          L1_IsoEG32er2p5_Mt44;
   Bool_t          L1_IsoEG32er2p5_Mt48;
   Bool_t          L1_IsoTau40er2p1_ETMHF100;
   Bool_t          L1_IsoTau40er2p1_ETMHF110;
   Bool_t          L1_IsoTau40er2p1_ETMHF120;
   Bool_t          L1_IsoTau40er2p1_ETMHF90;
   Bool_t          L1_IsolatedBunch;
   Bool_t          L1_LastBunchInTrain;
   Bool_t          L1_LastCollisionInTrain;
   Bool_t          L1_LooseIsoEG22er2p1_IsoTau26er2p1_dR_Min0p3;
   Bool_t          L1_LooseIsoEG22er2p1_Tau70er2p1_dR_Min0p3;
   Bool_t          L1_LooseIsoEG24er2p1_HTT100er;
   Bool_t          L1_LooseIsoEG24er2p1_IsoTau27er2p1_dR_Min0p3;
   Bool_t          L1_LooseIsoEG26er2p1_HTT100er;
   Bool_t          L1_LooseIsoEG26er2p1_Jet34er2p5_dR_Min0p3;
   Bool_t          L1_LooseIsoEG28er2p1_HTT100er;
   Bool_t          L1_LooseIsoEG28er2p1_Jet34er2p5_dR_Min0p3;
   Bool_t          L1_LooseIsoEG30er2p1_HTT100er;
   Bool_t          L1_LooseIsoEG30er2p1_Jet34er2p5_dR_Min0p3;
   Bool_t          L1_MinimumBiasHF0_AND_BptxAND;
   Bool_t          L1_Mu10er2p3_Jet32er2p3_dR_Max0p4_DoubleJet32er2p3_dEta_Max1p6;
   Bool_t          L1_Mu12er2p3_Jet40er2p1_dR_Max0p4_DoubleJet40er2p1_dEta_Max1p6;
   Bool_t          L1_Mu12er2p3_Jet40er2p3_dR_Max0p4_DoubleJet40er2p3_dEta_Max1p6;
   Bool_t          L1_Mu18er2p1_Tau24er2p1;
   Bool_t          L1_Mu18er2p1_Tau26er2p1;
   Bool_t          L1_Mu20_EG10er2p5;
   Bool_t          L1_Mu22er2p1_IsoTau32er2p1;
   Bool_t          L1_Mu22er2p1_IsoTau34er2p1;
   Bool_t          L1_Mu22er2p1_IsoTau36er2p1;
   Bool_t          L1_Mu22er2p1_IsoTau40er2p1;
   Bool_t          L1_Mu22er2p1_Tau70er2p1;
   Bool_t          L1_Mu3_Jet120er2p5_dR_Max0p4;
   Bool_t          L1_Mu3_Jet120er2p5_dR_Max0p8;
   Bool_t          L1_Mu3_Jet16er2p5_dR_Max0p4;
   Bool_t          L1_Mu3_Jet30er2p5;
   Bool_t          L1_Mu3_Jet35er2p5_dR_Max0p4;
   Bool_t          L1_Mu3_Jet60er2p5_dR_Max0p4;
   Bool_t          L1_Mu3_Jet80er2p5_dR_Max0p4;
   Bool_t          L1_Mu3er1p5_Jet100er2p5_ETMHF40;
   Bool_t          L1_Mu3er1p5_Jet100er2p5_ETMHF50;
   Bool_t          L1_Mu5_EG23er2p5;
   Bool_t          L1_Mu5_LooseIsoEG20er2p5;
   Bool_t          L1_Mu6_DoubleEG10er2p5;
   Bool_t          L1_Mu6_DoubleEG12er2p5;
   Bool_t          L1_Mu6_DoubleEG15er2p5;
   Bool_t          L1_Mu6_DoubleEG17er2p5;
   Bool_t          L1_Mu6_HTT240er;
   Bool_t          L1_Mu6_HTT250er;
   Bool_t          L1_Mu7_EG23er2p5;
   Bool_t          L1_Mu7_LooseIsoEG20er2p5;
   Bool_t          L1_Mu7_LooseIsoEG23er2p5;
   Bool_t          L1_NotBptxOR;
   Bool_t          L1_QuadJet36er2p5_IsoTau52er2p1;
   Bool_t          L1_QuadJet60er2p5;
   Bool_t          L1_QuadJet_95_75_65_20_DoubleJet_75_65_er2p5_Jet20_FWD3p0;
   Bool_t          L1_QuadMu0;
   Bool_t          L1_QuadMu0_OQ;
   Bool_t          L1_QuadMu0_SQ;
   Bool_t          L1_SecondBunchInTrain;
   Bool_t          L1_SecondLastBunchInTrain;
   Bool_t          L1_SingleEG10er2p5;
   Bool_t          L1_SingleEG15er2p5;
   Bool_t          L1_SingleEG26er2p5;
   Bool_t          L1_SingleEG34er2p5;
   Bool_t          L1_SingleEG36er2p5;
   Bool_t          L1_SingleEG38er2p5;
   Bool_t          L1_SingleEG40er2p5;
   Bool_t          L1_SingleEG42er2p5;
   Bool_t          L1_SingleEG45er2p5;
   Bool_t          L1_SingleEG50;
   Bool_t          L1_SingleEG60;
   Bool_t          L1_SingleEG8er2p5;
   Bool_t          L1_SingleIsoEG24er1p5;
   Bool_t          L1_SingleIsoEG24er2p1;
   Bool_t          L1_SingleIsoEG26er1p5;
   Bool_t          L1_SingleIsoEG26er2p1;
   Bool_t          L1_SingleIsoEG26er2p5;
   Bool_t          L1_SingleIsoEG28er1p5;
   Bool_t          L1_SingleIsoEG28er2p1;
   Bool_t          L1_SingleIsoEG28er2p5;
   Bool_t          L1_SingleIsoEG30er2p1;
   Bool_t          L1_SingleIsoEG30er2p5;
   Bool_t          L1_SingleIsoEG32er2p1;
   Bool_t          L1_SingleIsoEG32er2p5;
   Bool_t          L1_SingleIsoEG34er2p5;
   Bool_t          L1_SingleJet10erHE;
   Bool_t          L1_SingleJet120;
   Bool_t          L1_SingleJet120_FWD3p0;
   Bool_t          L1_SingleJet120er2p5;
   Bool_t          L1_SingleJet12erHE;
   Bool_t          L1_SingleJet140er2p5;
   Bool_t          L1_SingleJet140er2p5_ETMHF80;
   Bool_t          L1_SingleJet140er2p5_ETMHF90;
   Bool_t          L1_SingleJet160er2p5;
   Bool_t          L1_SingleJet180;
   Bool_t          L1_SingleJet180er2p5;
   Bool_t          L1_SingleJet200;
   Bool_t          L1_SingleJet20er2p5_NotBptxOR;
   Bool_t          L1_SingleJet20er2p5_NotBptxOR_3BX;
   Bool_t          L1_SingleJet35;
   Bool_t          L1_SingleJet35_FWD3p0;
   Bool_t          L1_SingleJet35er2p5;
   Bool_t          L1_SingleJet43er2p5_NotBptxOR_3BX;
   Bool_t          L1_SingleJet46er2p5_NotBptxOR_3BX;
   Bool_t          L1_SingleJet60;
   Bool_t          L1_SingleJet60_FWD3p0;
   Bool_t          L1_SingleJet60er2p5;
   Bool_t          L1_SingleJet8erHE;
   Bool_t          L1_SingleJet90;
   Bool_t          L1_SingleJet90_FWD3p0;
   Bool_t          L1_SingleJet90er2p5;
   Bool_t          L1_SingleLooseIsoEG28er1p5;
   Bool_t          L1_SingleLooseIsoEG30er1p5;
   Bool_t          L1_SingleMu0_BMTF;
   Bool_t          L1_SingleMu0_DQ;
   Bool_t          L1_SingleMu0_EMTF;
   Bool_t          L1_SingleMu0_OMTF;
   Bool_t          L1_SingleMu10er1p5;
   Bool_t          L1_SingleMu12_DQ_BMTF;
   Bool_t          L1_SingleMu12_DQ_EMTF;
   Bool_t          L1_SingleMu12_DQ_OMTF;
   Bool_t          L1_SingleMu12er1p5;
   Bool_t          L1_SingleMu14er1p5;
   Bool_t          L1_SingleMu15_DQ;
   Bool_t          L1_SingleMu16er1p5;
   Bool_t          L1_SingleMu18;
   Bool_t          L1_SingleMu18er1p5;
   Bool_t          L1_SingleMu20;
   Bool_t          L1_SingleMu22;
   Bool_t          L1_SingleMu22_BMTF;
   Bool_t          L1_SingleMu22_EMTF;
   Bool_t          L1_SingleMu22_OMTF;
   Bool_t          L1_SingleMu25;
   Bool_t          L1_SingleMu3;
   Bool_t          L1_SingleMu5;
   Bool_t          L1_SingleMu6er1p5;
   Bool_t          L1_SingleMu7;
   Bool_t          L1_SingleMu7_DQ;
   Bool_t          L1_SingleMu7er1p5;
   Bool_t          L1_SingleMu8er1p5;
   Bool_t          L1_SingleMu9er1p5;
   Bool_t          L1_SingleMuCosmics;
   Bool_t          L1_SingleMuCosmics_BMTF;
   Bool_t          L1_SingleMuCosmics_EMTF;
   Bool_t          L1_SingleMuCosmics_OMTF;
   Bool_t          L1_SingleMuOpen;
   Bool_t          L1_SingleMuOpen_NotBptxOR;
   Bool_t          L1_SingleMuOpen_er1p1_NotBptxOR_3BX;
   Bool_t          L1_SingleMuOpen_er1p4_NotBptxOR_3BX;
   Bool_t          L1_SingleTau120er2p1;
   Bool_t          L1_SingleTau130er2p1;
   Bool_t          L1_TOTEM_1;
   Bool_t          L1_TOTEM_2;
   Bool_t          L1_TOTEM_3;
   Bool_t          L1_TOTEM_4;
   Bool_t          L1_TripleEG16er2p5;
   Bool_t          L1_TripleEG_16_12_8_er2p5;
   Bool_t          L1_TripleEG_16_15_8_er2p5;
   Bool_t          L1_TripleEG_18_17_8_er2p5;
   Bool_t          L1_TripleEG_18_18_12_er2p5;
   Bool_t          L1_TripleJet_100_80_70_DoubleJet_80_70_er2p5;
   Bool_t          L1_TripleJet_105_85_75_DoubleJet_85_75_er2p5;
   Bool_t          L1_TripleJet_95_75_65_DoubleJet_75_65_er2p5;
   Bool_t          L1_TripleMu0;
   Bool_t          L1_TripleMu0_OQ;
   Bool_t          L1_TripleMu0_SQ;
   Bool_t          L1_TripleMu3;
   Bool_t          L1_TripleMu3_SQ;
   Bool_t          L1_TripleMu_5SQ_3SQ_0OQ;
   Bool_t          L1_TripleMu_5SQ_3SQ_0OQ_DoubleMu_5_3_SQ_OS_Mass_Max9;
   Bool_t          L1_TripleMu_5SQ_3SQ_0_DoubleMu_5_3_SQ_OS_Mass_Max9;
   Bool_t          L1_TripleMu_5_3_3;
   Bool_t          L1_TripleMu_5_3_3_SQ;
   Bool_t          L1_TripleMu_5_3p5_2p5;
   Bool_t          L1_TripleMu_5_3p5_2p5_DoubleMu_5_2p5_OS_Mass_5to17;
   Bool_t          L1_TripleMu_5_3p5_2p5_OQ_DoubleMu_5_2p5_OQ_OS_Mass_5to17;
   Bool_t          L1_TripleMu_5_4_2p5_DoubleMu_5_2p5_OS_Mass_5to17;
   Bool_t          L1_TripleMu_5_5_3;
   Bool_t          L1_UnpairedBunchBptxMinus;
   Bool_t          L1_UnpairedBunchBptxPlus;
   Bool_t          L1_ZeroBias;
   Bool_t          L1_ZeroBias_copy;
   Bool_t          L1_UnprefireableEvent;
   Bool_t          Flag_HBHENoiseFilter;
   Bool_t          Flag_HBHENoiseIsoFilter;
   Bool_t          Flag_CSCTightHaloFilter;
   Bool_t          Flag_CSCTightHaloTrkMuUnvetoFilter;
   Bool_t          Flag_CSCTightHalo2015Filter;
   Bool_t          Flag_globalTightHalo2016Filter;
   Bool_t          Flag_globalSuperTightHalo2016Filter;
   Bool_t          Flag_HcalStripHaloFilter;
   Bool_t          Flag_hcalLaserEventFilter;
   Bool_t          Flag_EcalDeadCellTriggerPrimitiveFilter;
   Bool_t          Flag_EcalDeadCellBoundaryEnergyFilter;
   Bool_t          Flag_ecalBadCalibFilter;
   Bool_t          Flag_goodVertices;
   Bool_t          Flag_eeBadScFilter;
   Bool_t          Flag_ecalLaserCorrFilter;
   Bool_t          Flag_trkPOGFilters;
   Bool_t          Flag_chargedHadronTrackResolutionFilter;
   Bool_t          Flag_muonBadTrackFilter;
   Bool_t          Flag_BadChargedCandidateFilter;
   Bool_t          Flag_BadPFMuonFilter;
   Bool_t          Flag_BadPFMuonDzFilter;
   Bool_t          Flag_hfNoisyHitsFilter;
   Bool_t          Flag_BadChargedCandidateSummer16Filter;
   Bool_t          Flag_BadPFMuonSummer16Filter;
   Bool_t          Flag_trkPOG_manystripclus53X;
   Bool_t          Flag_trkPOG_toomanystripclus53X;
   Bool_t          Flag_trkPOG_logErrorTooManyClusters;
   Bool_t          Flag_METFilters;
   Bool_t          L1Reco_step;
   Bool_t          HLTriggerFirstPath;
   Bool_t          HLT_AK8PFJet360_TrimMass30;
   Bool_t          HLT_AK8PFJet380_TrimMass30;
   Bool_t          HLT_AK8PFJet400_TrimMass30;
   Bool_t          HLT_AK8PFJet420_TrimMass30;
   Bool_t          HLT_AK8PFHT750_TrimMass50;
   Bool_t          HLT_AK8PFHT800_TrimMass50;
   Bool_t          HLT_AK8PFHT850_TrimMass50;
   Bool_t          HLT_AK8PFHT900_TrimMass50;
   Bool_t          HLT_CaloJet500_NoJetID;
   Bool_t          HLT_CaloJet550_NoJetID;
   Bool_t          HLT_DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL;
   Bool_t          HLT_DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon;
   Bool_t          HLT_Trimuon5_3p5_2_Upsilon_Muon;
   Bool_t          HLT_TrimuonOpen_5_3p5_2_Upsilon_Muon;
   Bool_t          HLT_DoubleEle25_CaloIdL_MW;
   Bool_t          HLT_DoubleEle27_CaloIdL_MW;
   Bool_t          HLT_DoubleEle33_CaloIdL_MW;
   Bool_t          HLT_DoubleEle24_eta2p1_WPTight_Gsf;
   Bool_t          HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350;
   Bool_t          HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350;
   Bool_t          HLT_Ele27_Ele37_CaloIdL_MW;
   Bool_t          HLT_Mu27_Ele37_CaloIdL_MW;
   Bool_t          HLT_Mu37_Ele27_CaloIdL_MW;
   Bool_t          HLT_Mu37_TkMu27;
   Bool_t          HLT_DoubleMu4_3_Bs;
   Bool_t          HLT_DoubleMu4_3_Jpsi;
   Bool_t          HLT_DoubleMu4_JpsiTrk_Displaced;
   Bool_t          HLT_DoubleMu4_LowMassNonResonantTrk_Displaced;
   Bool_t          HLT_DoubleMu3_Trk_Tau3mu;
   Bool_t          HLT_DoubleMu3_TkMu_DsTau3Mu;
   Bool_t          HLT_DoubleMu4_PsiPrimeTrk_Displaced;
   Bool_t          HLT_DoubleMu4_Mass3p8_DZ_PFHT350;
   Bool_t          HLT_Mu3_PFJet40;
   Bool_t          HLT_Mu7p5_L2Mu2_Jpsi;
   Bool_t          HLT_Mu7p5_L2Mu2_Upsilon;
   Bool_t          HLT_Mu7p5_Track2_Jpsi;
   Bool_t          HLT_Mu7p5_Track3p5_Jpsi;
   Bool_t          HLT_Mu7p5_Track7_Jpsi;
   Bool_t          HLT_Mu7p5_Track2_Upsilon;
   Bool_t          HLT_Mu7p5_Track3p5_Upsilon;
   Bool_t          HLT_Mu7p5_Track7_Upsilon;
   Bool_t          HLT_Mu3_L1SingleMu5orSingleMu7;
   Bool_t          HLT_DoublePhoton33_CaloIdL;
   Bool_t          HLT_DoublePhoton70;
   Bool_t          HLT_DoublePhoton85;
   Bool_t          HLT_Ele20_WPTight_Gsf;
   Bool_t          HLT_Ele15_WPLoose_Gsf;
   Bool_t          HLT_Ele17_WPLoose_Gsf;
   Bool_t          HLT_Ele20_WPLoose_Gsf;
   Bool_t          HLT_Ele20_eta2p1_WPLoose_Gsf;
   Bool_t          HLT_DiEle27_WPTightCaloOnly_L1DoubleEG;
   Bool_t          HLT_Ele27_WPTight_Gsf;
   Bool_t          HLT_Ele28_WPTight_Gsf;
   Bool_t          HLT_Ele30_WPTight_Gsf;
   Bool_t          HLT_Ele32_WPTight_Gsf;
   Bool_t          HLT_Ele35_WPTight_Gsf;
   Bool_t          HLT_Ele35_WPTight_Gsf_L1EGMT;
   Bool_t          HLT_Ele38_WPTight_Gsf;
   Bool_t          HLT_Ele40_WPTight_Gsf;
   Bool_t          HLT_Ele32_WPTight_Gsf_L1DoubleEG;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;
   Bool_t          HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;
   Bool_t          HLT_HT450_Beamspot;
   Bool_t          HLT_HT300_Beamspot;
   Bool_t          HLT_ZeroBias_Beamspot;
   Bool_t          HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;
   Bool_t          HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;
   Bool_t          HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;
   Bool_t          HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;
   Bool_t          HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;
   Bool_t          HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;
   Bool_t          HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;
   Bool_t          HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;
   Bool_t          HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;
   Bool_t          HLT_IsoMu20;
   Bool_t          HLT_IsoMu24;
   Bool_t          HLT_IsoMu24_eta2p1;
   Bool_t          HLT_IsoMu27;
   Bool_t          HLT_IsoMu30;
   Bool_t          HLT_UncorrectedJetE30_NoBPTX;
   Bool_t          HLT_UncorrectedJetE30_NoBPTX3BX;
   Bool_t          HLT_UncorrectedJetE60_NoBPTX3BX;
   Bool_t          HLT_UncorrectedJetE70_NoBPTX3BX;
   Bool_t          HLT_L1SingleMu18;
   Bool_t          HLT_L1SingleMu25;
   Bool_t          HLT_L2Mu10;
   Bool_t          HLT_L2Mu10_NoVertex_NoBPTX3BX;
   Bool_t          HLT_L2Mu10_NoVertex_NoBPTX;
   Bool_t          HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX;
   Bool_t          HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX;
   Bool_t          HLT_L2Mu50;
   Bool_t          HLT_L2Mu23NoVtx_2Cha;
   Bool_t          HLT_L2Mu23NoVtx_2Cha_CosmicSeed;
   Bool_t          HLT_DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4;
   Bool_t          HLT_DoubleL2Mu30NoVtx_2Cha_Eta2p4;
   Bool_t          HLT_DoubleL2Mu50;
   Bool_t          HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed;
   Bool_t          HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched;
   Bool_t          HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed;
   Bool_t          HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched;
   Bool_t          HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4;
   Bool_t          HLT_DoubleL2Mu23NoVtx_2Cha;
   Bool_t          HLT_DoubleL2Mu23NoVtx_2Cha_NoL2Matched;
   Bool_t          HLT_DoubleL2Mu25NoVtx_2Cha;
   Bool_t          HLT_DoubleL2Mu25NoVtx_2Cha_NoL2Matched;
   Bool_t          HLT_DoubleL2Mu25NoVtx_2Cha_Eta2p4;
   Bool_t          HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL;
   Bool_t          HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL;
   Bool_t          HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ;
   Bool_t          HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ;
   Bool_t          HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8;
   Bool_t          HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8;
   Bool_t          HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8;
   Bool_t          HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8;
   Bool_t          HLT_Mu25_TkMu0_Onia;
   Bool_t          HLT_Mu30_TkMu0_Psi;
   Bool_t          HLT_Mu30_TkMu0_Upsilon;
   Bool_t          HLT_Mu20_TkMu0_Phi;
   Bool_t          HLT_Mu25_TkMu0_Phi;
   Bool_t          HLT_Mu12;
   Bool_t          HLT_Mu15;
   Bool_t          HLT_Mu20;
   Bool_t          HLT_Mu27;
   Bool_t          HLT_Mu50;
   Bool_t          HLT_Mu55;
   Bool_t          HLT_OldMu100;
   Bool_t          HLT_TkMu100;
   Bool_t          HLT_DiPFJetAve40;
   Bool_t          HLT_DiPFJetAve60;
   Bool_t          HLT_DiPFJetAve80;
   Bool_t          HLT_DiPFJetAve140;
   Bool_t          HLT_DiPFJetAve200;
   Bool_t          HLT_DiPFJetAve260;
   Bool_t          HLT_DiPFJetAve320;
   Bool_t          HLT_DiPFJetAve400;
   Bool_t          HLT_DiPFJetAve500;
   Bool_t          HLT_DiPFJetAve60_HFJEC;
   Bool_t          HLT_DiPFJetAve80_HFJEC;
   Bool_t          HLT_DiPFJetAve100_HFJEC;
   Bool_t          HLT_DiPFJetAve160_HFJEC;
   Bool_t          HLT_DiPFJetAve220_HFJEC;
   Bool_t          HLT_DiPFJetAve300_HFJEC;
   Bool_t          HLT_AK8PFJet15;
   Bool_t          HLT_AK8PFJet25;
   Bool_t          HLT_AK8PFJet40;
   Bool_t          HLT_AK8PFJet60;
   Bool_t          HLT_AK8PFJet80;
   Bool_t          HLT_AK8PFJet140;
   Bool_t          HLT_AK8PFJet200;
   Bool_t          HLT_AK8PFJet260;
   Bool_t          HLT_AK8PFJet320;
   Bool_t          HLT_AK8PFJet400;
   Bool_t          HLT_AK8PFJet450;
   Bool_t          HLT_AK8PFJet500;
   Bool_t          HLT_AK8PFJet550;
   Bool_t          HLT_PFJet15;
   Bool_t          HLT_PFJet25;
   Bool_t          HLT_PFJet40;
   Bool_t          HLT_PFJet60;
   Bool_t          HLT_PFJet80;
   Bool_t          HLT_PFJet140;
   Bool_t          HLT_PFJet200;
   Bool_t          HLT_PFJet260;
   Bool_t          HLT_PFJet320;
   Bool_t          HLT_PFJet400;
   Bool_t          HLT_PFJet450;
   Bool_t          HLT_PFJet500;
   Bool_t          HLT_PFJet550;
   Bool_t          HLT_PFJetFwd15;
   Bool_t          HLT_PFJetFwd25;
   Bool_t          HLT_PFJetFwd40;
   Bool_t          HLT_PFJetFwd60;
   Bool_t          HLT_PFJetFwd80;
   Bool_t          HLT_PFJetFwd140;
   Bool_t          HLT_PFJetFwd200;
   Bool_t          HLT_PFJetFwd260;
   Bool_t          HLT_PFJetFwd320;
   Bool_t          HLT_PFJetFwd400;
   Bool_t          HLT_PFJetFwd450;
   Bool_t          HLT_PFJetFwd500;
   Bool_t          HLT_AK8PFJetFwd15;
   Bool_t          HLT_AK8PFJetFwd25;
   Bool_t          HLT_AK8PFJetFwd40;
   Bool_t          HLT_AK8PFJetFwd60;
   Bool_t          HLT_AK8PFJetFwd80;
   Bool_t          HLT_AK8PFJetFwd140;
   Bool_t          HLT_AK8PFJetFwd200;
   Bool_t          HLT_AK8PFJetFwd260;
   Bool_t          HLT_AK8PFJetFwd320;
   Bool_t          HLT_AK8PFJetFwd400;
   Bool_t          HLT_AK8PFJetFwd450;
   Bool_t          HLT_AK8PFJetFwd500;
   Bool_t          HLT_PFHT180;
   Bool_t          HLT_PFHT250;
   Bool_t          HLT_PFHT370;
   Bool_t          HLT_PFHT430;
   Bool_t          HLT_PFHT510;
   Bool_t          HLT_PFHT590;
   Bool_t          HLT_PFHT680;
   Bool_t          HLT_PFHT780;
   Bool_t          HLT_PFHT890;
   Bool_t          HLT_PFHT1050;
   Bool_t          HLT_PFHT500_PFMET100_PFMHT100_IDTight;
   Bool_t          HLT_PFHT500_PFMET110_PFMHT110_IDTight;
   Bool_t          HLT_PFHT700_PFMET85_PFMHT85_IDTight;
   Bool_t          HLT_PFHT700_PFMET95_PFMHT95_IDTight;
   Bool_t          HLT_PFHT800_PFMET75_PFMHT75_IDTight;
   Bool_t          HLT_PFHT800_PFMET85_PFMHT85_IDTight;
   Bool_t          HLT_PFMET110_PFMHT110_IDTight;
   Bool_t          HLT_PFMET120_PFMHT120_IDTight;
   Bool_t          HLT_PFMET130_PFMHT130_IDTight;
   Bool_t          HLT_PFMET140_PFMHT140_IDTight;
   Bool_t          HLT_PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1;
   Bool_t          HLT_PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1;
   Bool_t          HLT_PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1;
   Bool_t          HLT_PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1;
   Bool_t          HLT_PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1;
   Bool_t          HLT_PFMET120_PFMHT120_IDTight_PFHT60;
   Bool_t          HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60;
   Bool_t          HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60;
   Bool_t          HLT_PFMETTypeOne110_PFMHT110_IDTight;
   Bool_t          HLT_PFMETTypeOne120_PFMHT120_IDTight;
   Bool_t          HLT_PFMETTypeOne130_PFMHT130_IDTight;
   Bool_t          HLT_PFMETTypeOne140_PFMHT140_IDTight;
   Bool_t          HLT_PFMETNoMu110_PFMHTNoMu110_IDTight;
   Bool_t          HLT_PFMETNoMu120_PFMHTNoMu120_IDTight;
   Bool_t          HLT_PFMETNoMu130_PFMHTNoMu130_IDTight;
   Bool_t          HLT_PFMETNoMu140_PFMHTNoMu140_IDTight;
   Bool_t          HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight;
   Bool_t          HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight;
   Bool_t          HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight;
   Bool_t          HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight;
   Bool_t          HLT_L1ETMHadSeeds;
   Bool_t          HLT_CaloMHT90;
   Bool_t          HLT_CaloMET80_NotCleaned;
   Bool_t          HLT_CaloMET90_NotCleaned;
   Bool_t          HLT_CaloMET100_NotCleaned;
   Bool_t          HLT_CaloMET110_NotCleaned;
   Bool_t          HLT_CaloMET250_NotCleaned;
   Bool_t          HLT_CaloMET70_HBHECleaned;
   Bool_t          HLT_CaloMET80_HBHECleaned;
   Bool_t          HLT_CaloMET90_HBHECleaned;
   Bool_t          HLT_CaloMET100_HBHECleaned;
   Bool_t          HLT_CaloMET250_HBHECleaned;
   Bool_t          HLT_CaloMET300_HBHECleaned;
   Bool_t          HLT_CaloMET350_HBHECleaned;
   Bool_t          HLT_PFMET200_NotCleaned;
   Bool_t          HLT_PFMET200_HBHECleaned;
   Bool_t          HLT_PFMET250_HBHECleaned;
   Bool_t          HLT_PFMET300_HBHECleaned;
   Bool_t          HLT_PFMET200_HBHE_BeamHaloCleaned;
   Bool_t          HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned;
   Bool_t          HLT_MET105_IsoTrk50;
   Bool_t          HLT_MET120_IsoTrk50;
   Bool_t          HLT_SingleJet30_Mu12_SinglePFJet40;
   Bool_t          HLT_Mu12_DoublePFJets40_CaloBTagDeepCSV_p71;
   Bool_t          HLT_Mu12_DoublePFJets100_CaloBTagDeepCSV_p71;
   Bool_t          HLT_Mu12_DoublePFJets200_CaloBTagDeepCSV_p71;
   Bool_t          HLT_Mu12_DoublePFJets350_CaloBTagDeepCSV_p71;
   Bool_t          HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
   Bool_t          HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
   Bool_t          HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
   Bool_t          HLT_DoublePFJets40_CaloBTagDeepCSV_p71;
   Bool_t          HLT_DoublePFJets100_CaloBTagDeepCSV_p71;
   Bool_t          HLT_DoublePFJets200_CaloBTagDeepCSV_p71;
   Bool_t          HLT_DoublePFJets350_CaloBTagDeepCSV_p71;
   Bool_t          HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
   Bool_t          HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;
   Bool_t          HLT_Photon300_NoHE;
   Bool_t          HLT_Mu8_TrkIsoVVL;
   Bool_t          HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ;
   Bool_t          HLT_Mu8_DiEle12_CaloIdL_TrackIdL;
   Bool_t          HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ;
   Bool_t          HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5;
   Bool_t          HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;
   Bool_t          HLT_Mu17_TrkIsoVVL;
   Bool_t          HLT_Mu19_TrkIsoVVL;
   Bool_t          HLT_BTagMu_AK4DiJet20_Mu5;
   Bool_t          HLT_BTagMu_AK4DiJet40_Mu5;
   Bool_t          HLT_BTagMu_AK4DiJet70_Mu5;
   Bool_t          HLT_BTagMu_AK4DiJet110_Mu5;
   Bool_t          HLT_BTagMu_AK4DiJet170_Mu5;
   Bool_t          HLT_BTagMu_AK4Jet300_Mu5;
   Bool_t          HLT_BTagMu_AK8DiJet170_Mu5;
   Bool_t          HLT_BTagMu_AK8Jet170_DoubleMu5;
   Bool_t          HLT_BTagMu_AK8Jet300_Mu5;
   Bool_t          HLT_BTagMu_AK4DiJet20_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK4DiJet40_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK4DiJet70_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK4DiJet110_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK4DiJet170_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK4Jet300_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK8DiJet170_Mu5_noalgo;
   Bool_t          HLT_BTagMu_AK8Jet170_DoubleMu5_noalgo;
   Bool_t          HLT_BTagMu_AK8Jet300_Mu5_noalgo;
   Bool_t          HLT_Ele15_Ele8_CaloIdL_TrackIdL_IsoVL;
   Bool_t          HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
   Bool_t          HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL;
   Bool_t          HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
   Bool_t          HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;
   Bool_t          HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;
   Bool_t          HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;
   Bool_t          HLT_Mu12_DoublePhoton20;
   Bool_t          HLT_TriplePhoton_20_20_20_CaloIdLV2;
   Bool_t          HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL;
   Bool_t          HLT_TriplePhoton_30_30_10_CaloIdLV2;
   Bool_t          HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL;
   Bool_t          HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL;
   Bool_t          HLT_Photon20;
   Bool_t          HLT_Photon33;
   Bool_t          HLT_Photon50;
   Bool_t          HLT_Photon75;
   Bool_t          HLT_Photon90;
   Bool_t          HLT_Photon120;
   Bool_t          HLT_Photon150;
   Bool_t          HLT_Photon175;
   Bool_t          HLT_Photon200;
   Bool_t          HLT_Photon100EB_TightID_TightIso;
   Bool_t          HLT_Photon110EB_TightID_TightIso;
   Bool_t          HLT_Photon120EB_TightID_TightIso;
   Bool_t          HLT_Photon100EBHE10;
   Bool_t          HLT_Photon100EEHE10;
   Bool_t          HLT_Photon100EE_TightID_TightIso;
   Bool_t          HLT_Photon50_R9Id90_HE10_IsoM;
   Bool_t          HLT_Photon75_R9Id90_HE10_IsoM;
   Bool_t          HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3;
   Bool_t          HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3;
   Bool_t          HLT_Photon90_R9Id90_HE10_IsoM;
   Bool_t          HLT_Photon120_R9Id90_HE10_IsoM;
   Bool_t          HLT_Photon165_R9Id90_HE10_IsoM;
   Bool_t          HLT_Photon90_CaloIdL_PFHT700;
   Bool_t          HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90;
   Bool_t          HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95;
   Bool_t          HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55;
   Bool_t          HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55;
   Bool_t          HLT_Photon35_TwoProngs35;
   Bool_t          HLT_IsoMu24_TwoProngs35;
   Bool_t          HLT_Dimuon0_Jpsi_L1_NoOS;
   Bool_t          HLT_Dimuon0_Jpsi_NoVertexing_NoOS;
   Bool_t          HLT_Dimuon0_Jpsi;
   Bool_t          HLT_Dimuon0_Jpsi_NoVertexing;
   Bool_t          HLT_Dimuon0_Jpsi_L1_4R_0er1p5R;
   Bool_t          HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R;
   Bool_t          HLT_Dimuon0_Jpsi3p5_Muon2;
   Bool_t          HLT_Dimuon0_Upsilon_L1_4p5;
   Bool_t          HLT_Dimuon0_Upsilon_L1_5;
   Bool_t          HLT_Dimuon0_Upsilon_L1_4p5NoOS;
   Bool_t          HLT_Dimuon0_Upsilon_L1_4p5er2p0;
   Bool_t          HLT_Dimuon0_Upsilon_L1_4p5er2p0M;
   Bool_t          HLT_Dimuon0_Upsilon_NoVertexing;
   Bool_t          HLT_Dimuon0_Upsilon_L1_5M;
   Bool_t          HLT_Dimuon0_LowMass_L1_0er1p5R;
   Bool_t          HLT_Dimuon0_LowMass_L1_0er1p5;
   Bool_t          HLT_Dimuon0_LowMass;
   Bool_t          HLT_Dimuon0_LowMass_L1_4;
   Bool_t          HLT_Dimuon0_LowMass_L1_4R;
   Bool_t          HLT_Dimuon0_LowMass_L1_TM530;
   Bool_t          HLT_Dimuon0_Upsilon_Muon_L1_TM0;
   Bool_t          HLT_Dimuon0_Upsilon_Muon_NoL1Mass;
   Bool_t          HLT_TripleMu_5_3_3_Mass3p8_DZ;
   Bool_t          HLT_TripleMu_10_5_5_DZ;
   Bool_t          HLT_TripleMu_12_10_5;
   Bool_t          HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15;
   Bool_t          HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1;
   Bool_t          HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15;
   Bool_t          HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1;
   Bool_t          HLT_DoubleMu3_DZ_PFMET50_PFMHT60;
   Bool_t          HLT_DoubleMu3_DZ_PFMET70_PFMHT70;
   Bool_t          HLT_DoubleMu3_DZ_PFMET90_PFMHT90;
   Bool_t          HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass;
   Bool_t          HLT_DoubleMu4_Jpsi_Displaced;
   Bool_t          HLT_DoubleMu4_Jpsi_NoVertexing;
   Bool_t          HLT_DoubleMu4_JpsiTrkTrk_Displaced;
   Bool_t          HLT_DoubleMu43NoFiltersNoVtx;
   Bool_t          HLT_DoubleMu48NoFiltersNoVtx;
   Bool_t          HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL;
   Bool_t          HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL;
   Bool_t          HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL;
   Bool_t          HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL;
   Bool_t          HLT_DoubleMu33NoFiltersNoVtxDisplaced;
   Bool_t          HLT_DoubleMu40NoFiltersNoVtxDisplaced;
   Bool_t          HLT_DoubleMu20_7_Mass0to30_L1_DM4;
   Bool_t          HLT_DoubleMu20_7_Mass0to30_L1_DM4EG;
   Bool_t          HLT_HT425;
   Bool_t          HLT_HT430_DisplacedDijet40_DisplacedTrack;
   Bool_t          HLT_HT500_DisplacedDijet40_DisplacedTrack;
   Bool_t          HLT_HT430_DisplacedDijet60_DisplacedTrack;
   Bool_t          HLT_HT400_DisplacedDijet40_DisplacedTrack;
   Bool_t          HLT_HT650_DisplacedDijet60_Inclusive;
   Bool_t          HLT_HT550_DisplacedDijet60_Inclusive;
   Bool_t          HLT_DiJet110_35_Mjj650_PFMET110;
   Bool_t          HLT_DiJet110_35_Mjj650_PFMET120;
   Bool_t          HLT_DiJet110_35_Mjj650_PFMET130;
   Bool_t          HLT_TripleJet110_35_35_Mjj650_PFMET110;
   Bool_t          HLT_TripleJet110_35_35_Mjj650_PFMET120;
   Bool_t          HLT_TripleJet110_35_35_Mjj650_PFMET130;
   Bool_t          HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned;
   Bool_t          HLT_Ele28_eta2p1_WPTight_Gsf_HT150;
   Bool_t          HLT_Ele28_HighEta_SC20_Mass55;
   Bool_t          HLT_DoubleMu20_7_Mass0to30_Photon23;
   Bool_t          HLT_Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5;
   Bool_t          HLT_Ele15_IsoVVVL_PFHT450_PFMET50;
   Bool_t          HLT_Ele15_IsoVVVL_PFHT450;
   Bool_t          HLT_Ele50_IsoVVVL_PFHT450;
   Bool_t          HLT_Ele15_IsoVVVL_PFHT600;
   Bool_t          HLT_Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;
   Bool_t          HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;
   Bool_t          HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60;
   Bool_t          HLT_Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5;
   Bool_t          HLT_Mu15_IsoVVVL_PFHT450_PFMET50;
   Bool_t          HLT_Mu15_IsoVVVL_PFHT450;
   Bool_t          HLT_Mu50_IsoVVVL_PFHT450;
   Bool_t          HLT_Mu15_IsoVVVL_PFHT600;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight;
   Bool_t          HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight;
   Bool_t          HLT_Dimuon10_PsiPrime_Barrel_Seagulls;
   Bool_t          HLT_Dimuon20_Jpsi_Barrel_Seagulls;
   Bool_t          HLT_Dimuon12_Upsilon_y1p4;
   Bool_t          HLT_Dimuon14_Phi_Barrel_Seagulls;
   Bool_t          HLT_Dimuon18_PsiPrime;
   Bool_t          HLT_Dimuon25_Jpsi;
   Bool_t          HLT_Dimuon18_PsiPrime_noCorrL1;
   Bool_t          HLT_Dimuon24_Upsilon_noCorrL1;
   Bool_t          HLT_Dimuon24_Phi_noCorrL1;
   Bool_t          HLT_Dimuon25_Jpsi_noCorrL1;
   Bool_t          HLT_DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8;
   Bool_t          HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ;
   Bool_t          HLT_DiMu9_Ele9_CaloIdL_TrackIdL;
   Bool_t          HLT_DoubleIsoMu20_eta2p1;
   Bool_t          HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx;
   Bool_t          HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx;
   Bool_t          HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx;
   Bool_t          HLT_Mu8;
   Bool_t          HLT_Mu17;
   Bool_t          HLT_Mu19;
   Bool_t          HLT_Mu17_Photon30_IsoCaloId;
   Bool_t          HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30;
   Bool_t          HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30;
   Bool_t          HLT_Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30;
   Bool_t          HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30;
   Bool_t          HLT_Ele8_CaloIdM_TrackIdM_PFJet30;
   Bool_t          HLT_Ele17_CaloIdM_TrackIdM_PFJet30;
   Bool_t          HLT_Ele23_CaloIdM_TrackIdM_PFJet30;
   Bool_t          HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165;
   Bool_t          HLT_Ele115_CaloIdVT_GsfTrkIdT;
   Bool_t          HLT_Ele135_CaloIdVT_GsfTrkIdT;
   Bool_t          HLT_Ele145_CaloIdVT_GsfTrkIdT;
   Bool_t          HLT_Ele200_CaloIdVT_GsfTrkIdT;
   Bool_t          HLT_Ele250_CaloIdVT_GsfTrkIdT;
   Bool_t          HLT_Ele300_CaloIdVT_GsfTrkIdT;
   Bool_t          HLT_PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5;
   Bool_t          HLT_PFHT330PT30_QuadPFJet_75_60_45_40;
   Bool_t          HLT_PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94;
   Bool_t          HLT_PFHT400_SixPFJet32;
   Bool_t          HLT_PFHT450_SixPFJet36_PFBTagDeepCSV_1p59;
   Bool_t          HLT_PFHT450_SixPFJet36;
   Bool_t          HLT_PFHT350;
   Bool_t          HLT_PFHT350MinPFJet15;
   Bool_t          HLT_Photon60_R9Id90_CaloIdL_IsoL;
   Bool_t          HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL;
   Bool_t          HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15;
   Bool_t          HLT_ECALHT800;
   Bool_t          HLT_DiSC30_18_EIso_AND_HE_Mass70;
   Bool_t          HLT_Physics;
   Bool_t          HLT_Physics_part0;
   Bool_t          HLT_Physics_part1;
   Bool_t          HLT_Physics_part2;
   Bool_t          HLT_Physics_part3;
   Bool_t          HLT_Physics_part4;
   Bool_t          HLT_Physics_part5;
   Bool_t          HLT_Physics_part6;
   Bool_t          HLT_Physics_part7;
   Bool_t          HLT_Random;
   Bool_t          HLT_ZeroBias;
   Bool_t          HLT_ZeroBias_Alignment;
   Bool_t          HLT_ZeroBias_part0;
   Bool_t          HLT_ZeroBias_part1;
   Bool_t          HLT_ZeroBias_part2;
   Bool_t          HLT_ZeroBias_part3;
   Bool_t          HLT_ZeroBias_part4;
   Bool_t          HLT_ZeroBias_part5;
   Bool_t          HLT_ZeroBias_part6;
   Bool_t          HLT_ZeroBias_part7;
   Bool_t          HLT_AK4CaloJet30;
   Bool_t          HLT_AK4CaloJet40;
   Bool_t          HLT_AK4CaloJet50;
   Bool_t          HLT_AK4CaloJet80;
   Bool_t          HLT_AK4CaloJet100;
   Bool_t          HLT_AK4CaloJet120;
   Bool_t          HLT_AK4PFJet30;
   Bool_t          HLT_AK4PFJet50;
   Bool_t          HLT_AK4PFJet80;
   Bool_t          HLT_AK4PFJet100;
   Bool_t          HLT_AK4PFJet120;
   Bool_t          HLT_SinglePhoton10_Eta3p1ForPPRef;
   Bool_t          HLT_SinglePhoton20_Eta3p1ForPPRef;
   Bool_t          HLT_SinglePhoton30_Eta3p1ForPPRef;
   Bool_t          HLT_Photon20_HoverELoose;
   Bool_t          HLT_Photon30_HoverELoose;
   Bool_t          HLT_EcalCalibration;
   Bool_t          HLT_HcalCalibration;
   Bool_t          HLT_L1UnpairedBunchBptxMinus;
   Bool_t          HLT_L1UnpairedBunchBptxPlus;
   Bool_t          HLT_L1NotBptxOR;
   Bool_t          HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142;
   Bool_t          HLT_CDC_L2cosmic_5_er1p0;
   Bool_t          HLT_CDC_L2cosmic_5p5_er1p0;
   Bool_t          HLT_HcalNZS;
   Bool_t          HLT_HcalPhiSym;
   Bool_t          HLT_HcalIsolatedbunch;
   Bool_t          HLT_IsoTrackHB;
   Bool_t          HLT_IsoTrackHE;
   Bool_t          HLT_ZeroBias_FirstCollisionAfterAbortGap;
   Bool_t          HLT_ZeroBias_IsolatedBunches;
   Bool_t          HLT_ZeroBias_FirstCollisionInTrain;
   Bool_t          HLT_ZeroBias_LastCollisionInTrain;
   Bool_t          HLT_ZeroBias_FirstBXAfterTrain;
   Bool_t          HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140;
   Bool_t          HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;
   Bool_t          HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr;
   Bool_t          HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1;
   Bool_t          HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1;
   Bool_t          HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1;
   Bool_t          HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL;
   Bool_t          HLT_Rsq0p35;
   Bool_t          HLT_Rsq0p40;
   Bool_t          HLT_RsqMR300_Rsq0p09_MR200;
   Bool_t          HLT_RsqMR320_Rsq0p09_MR200;
   Bool_t          HLT_RsqMR300_Rsq0p09_MR200_4jet;
   Bool_t          HLT_RsqMR320_Rsq0p09_MR200_4jet;
   Bool_t          HLT_IsoMu27_MET90;
   Bool_t          HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;
   Bool_t          HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;
   Bool_t          HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;
   Bool_t          HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;
   Bool_t          HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;
   Bool_t          HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;
   Bool_t          HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;
   Bool_t          HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;
   Bool_t          HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1;
   Bool_t          HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1;
   Bool_t          HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1;
   Bool_t          HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50;
   Bool_t          HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3;
   Bool_t          HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3;
   Bool_t          HLT_PFMET100_PFMHT100_IDTight_PFHT60;
   Bool_t          HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60;
   Bool_t          HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60;
   Bool_t          HLT_Mu18_Mu9_SameSign;
   Bool_t          HLT_Mu18_Mu9_SameSign_DZ;
   Bool_t          HLT_Mu18_Mu9;
   Bool_t          HLT_Mu18_Mu9_DZ;
   Bool_t          HLT_Mu20_Mu10_SameSign;
   Bool_t          HLT_Mu20_Mu10_SameSign_DZ;
   Bool_t          HLT_Mu20_Mu10;
   Bool_t          HLT_Mu20_Mu10_DZ;
   Bool_t          HLT_Mu23_Mu12_SameSign;
   Bool_t          HLT_Mu23_Mu12_SameSign_DZ;
   Bool_t          HLT_Mu23_Mu12;
   Bool_t          HLT_Mu23_Mu12_DZ;
   Bool_t          HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi1p05;
   Bool_t          HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi;
   Bool_t          HLT_DoubleMu3_DCA_PFMET50_PFMHT60;
   Bool_t          HLT_TripleMu_5_3_3_Mass3p8_DCA;
   Bool_t          HLT_QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
   Bool_t          HLT_QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
   Bool_t          HLT_QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
   Bool_t          HLT_QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2;
   Bool_t          HLT_QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2;
   Bool_t          HLT_QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2;
   Bool_t          HLT_QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2;
   Bool_t          HLT_QuadPFJet98_83_71_15;
   Bool_t          HLT_QuadPFJet103_88_75_15;
   Bool_t          HLT_QuadPFJet105_88_76_15;
   Bool_t          HLT_QuadPFJet111_90_80_15;
   Bool_t          HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17;
   Bool_t          HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1;
   Bool_t          HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02;
   Bool_t          HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2;
   Bool_t          HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4;
   Bool_t          HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55;
   Bool_t          HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto;
   Bool_t          HLT_Mu12_IP6_part0;
   Bool_t          HLT_Mu12_IP6_part1;
   Bool_t          HLT_Mu12_IP6_part2;
   Bool_t          HLT_Mu12_IP6_part3;
   Bool_t          HLT_Mu12_IP6_part4;
   Bool_t          HLT_Mu9_IP5_part0;
   Bool_t          HLT_Mu9_IP5_part1;
   Bool_t          HLT_Mu9_IP5_part2;
   Bool_t          HLT_Mu9_IP5_part3;
   Bool_t          HLT_Mu9_IP5_part4;
   Bool_t          HLT_Mu7_IP4_part0;
   Bool_t          HLT_Mu7_IP4_part1;
   Bool_t          HLT_Mu7_IP4_part2;
   Bool_t          HLT_Mu7_IP4_part3;
   Bool_t          HLT_Mu7_IP4_part4;
   Bool_t          HLT_Mu9_IP4_part0;
   Bool_t          HLT_Mu9_IP4_part1;
   Bool_t          HLT_Mu9_IP4_part2;
   Bool_t          HLT_Mu9_IP4_part3;
   Bool_t          HLT_Mu9_IP4_part4;
   Bool_t          HLT_Mu8_IP5_part0;
   Bool_t          HLT_Mu8_IP5_part1;
   Bool_t          HLT_Mu8_IP5_part2;
   Bool_t          HLT_Mu8_IP5_part3;
   Bool_t          HLT_Mu8_IP5_part4;
   Bool_t          HLT_Mu8_IP6_part0;
   Bool_t          HLT_Mu8_IP6_part1;
   Bool_t          HLT_Mu8_IP6_part2;
   Bool_t          HLT_Mu8_IP6_part3;
   Bool_t          HLT_Mu8_IP6_part4;
   Bool_t          HLT_Mu9_IP6_part0;
   Bool_t          HLT_Mu9_IP6_part1;
   Bool_t          HLT_Mu9_IP6_part2;
   Bool_t          HLT_Mu9_IP6_part3;
   Bool_t          HLT_Mu9_IP6_part4;
   Bool_t          HLT_Mu8_IP3_part0;
   Bool_t          HLT_Mu8_IP3_part1;
   Bool_t          HLT_Mu8_IP3_part2;
   Bool_t          HLT_Mu8_IP3_part3;
   Bool_t          HLT_Mu8_IP3_part4;
   Bool_t          HLT_QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;
   Bool_t          HLT_TrkMu6NoFiltersNoVtx;
   Bool_t          HLT_TrkMu16NoFiltersNoVtx;
   Bool_t          HLT_DoubleTrkMu_16_6_NoFiltersNoVtx;
   Bool_t          HLTriggerFinalPath;
   Bool_t          L1simulation_step;

      // List of branches
   // List of branches
  TBranch        *b_run;   //!
   TBranch        *b_luminosityBlock;   //!
   TBranch        *b_event;   //!
   TBranch        *b_bunchCrossing;   //!
   TBranch        *b_HTXS_njets25;   //!
   TBranch        *b_HTXS_njets30;   //!
   TBranch        *b_HTXS_stage1_1_cat_pTjet25GeV;   //!
   TBranch        *b_HTXS_stage1_1_cat_pTjet30GeV;   //!
   TBranch        *b_HTXS_stage1_1_fine_cat_pTjet25GeV;   //!
   TBranch        *b_HTXS_stage1_1_fine_cat_pTjet30GeV;   //!
   TBranch        *b_HTXS_stage1_2_cat_pTjet25GeV;   //!
   TBranch        *b_HTXS_stage1_2_cat_pTjet30GeV;   //!
   TBranch        *b_HTXS_stage1_2_fine_cat_pTjet25GeV;   //!
   TBranch        *b_HTXS_stage1_2_fine_cat_pTjet30GeV;   //!
   TBranch        *b_HTXS_stage_0;   //!
   TBranch        *b_HTXS_stage_1_pTjet25;   //!
   TBranch        *b_HTXS_stage_1_pTjet30;   //!
   TBranch        *b_HTXS_Higgs_pt;   //!
   TBranch        *b_HTXS_Higgs_y;   //!
   TBranch        *b_BeamSpot_type;   //!
   TBranch        *b_BeamSpot_sigmaZ;   //!
   TBranch        *b_BeamSpot_sigmaZError;   //!
   TBranch        *b_BeamSpot_z;   //!
   TBranch        *b_BeamSpot_zError;   //!
   TBranch        *b_nboostedTau;   //!
   TBranch        *b_boostedTau_idAntiEle2018;   //!
   TBranch        *b_boostedTau_idAntiMu;   //!
   TBranch        *b_boostedTau_idDecayModeNewDMs;   //!
   TBranch        *b_boostedTau_idDecayModeOldDMs;   //!
   TBranch        *b_boostedTau_idDeepTau2018v2p7VSe;   //!
   TBranch        *b_boostedTau_idDeepTau2018v2p7VSjet;   //!
   TBranch        *b_boostedTau_idDeepTau2018v2p7VSmu;   //!
   TBranch        *b_boostedTau_idMVAnewDM2017v2;   //!
   TBranch        *b_boostedTau_idMVAoldDM2017v2;   //!
   TBranch        *b_boostedTau_idMVAoldDMdR032017v2;   //!
   TBranch        *b_boostedTau_jetIdx;   //!
   TBranch        *b_boostedTau_rawAntiEleCat2018;   //!
   TBranch        *b_boostedTau_Ecounter;   //!
   TBranch        *b_boostedTau_Mcounter;   //!
   TBranch        *b_boostedTau_SubLeadingElectronPhi;   //!
   TBranch        *b_boostedTau_SubLeadingMuonM;   //!
   TBranch        *b_boostedTau_SubSubLeadingElectronPhi;   //!
   TBranch        *b_boostedTau_SubSubLeadingMuonM;   //!
   TBranch        *b_boostedTau_charge;   //!
   TBranch        *b_boostedTau_decayMode;   //!
   TBranch        *b_boostedTau_LeadingElectronCorrIso;   //!
   TBranch        *b_boostedTau_LeadingElectronEta;   //!
   TBranch        *b_boostedTau_LeadingElectronM;   //!
   TBranch        *b_boostedTau_LeadingElectronPhi;   //!
   TBranch        *b_boostedTau_LeadingElectronPt;   //!
   TBranch        *b_boostedTau_LeadingElectrondelR;   //!
   TBranch        *b_boostedTau_LeadingElectronea;   //!
   TBranch        *b_boostedTau_LeadingElectronrho;   //!
   TBranch        *b_boostedTau_LeadingElectronsumPFChargedHadronPt;   //!
   TBranch        *b_boostedTau_LeadingElectronsumPFNeutralHadronPt;   //!
   TBranch        *b_boostedTau_LeadingElectronsumPFPhotonPt;   //!
   TBranch        *b_boostedTau_LeadingElectrontausumPFChargedHadronPt;   //!
   TBranch        *b_boostedTau_LeadingElectrontausumPFNeutralHadronPt;   //!
   TBranch        *b_boostedTau_LeadingElectrontausumPFPhotonPt;   //!
   TBranch        *b_boostedTau_LeadingMuonCorrIso;   //!
   TBranch        *b_boostedTau_LeadingMuonEta;   //!
   TBranch        *b_boostedTau_LeadingMuonM;   //!
   TBranch        *b_boostedTau_LeadingMuonPhi;   //!
   TBranch        *b_boostedTau_LeadingMuonPt;   //!
   TBranch        *b_boostedTau_LeadingMuondelR;   //!
   TBranch        *b_boostedTau_LeadingMuonsumPFChargedHadronPt;   //!
   TBranch        *b_boostedTau_LeadingMuonsumPFNeutralHadronPt;   //!
   TBranch        *b_boostedTau_LeadingMuonsumPFPhotonPt;   //!
   TBranch        *b_boostedTau_LeadingMuonsumPUPt;   //!
   TBranch        *b_boostedTau_LeadingMuontausumPFChargedHadronPt;   //!
   TBranch        *b_boostedTau_LeadingMuontausumPFNeutralHadronPt;   //!
   TBranch        *b_boostedTau_LeadingMuontausumPFPhotonPt;   //!
   TBranch        *b_boostedTau_SubLeadingElectronCorrIso;   //!
   TBranch        *b_boostedTau_SubLeadingElectronEta;   //!
   TBranch        *b_boostedTau_SubLeadingElectronM;   //!
   TBranch        *b_boostedTau_SubLeadingElectronPt;   //!
   TBranch        *b_boostedTau_SubLeadingElectrondelR;   //!
   TBranch        *b_boostedTau_SubLeadingElectronea;   //!
   TBranch        *b_boostedTau_SubLeadingElectronrho;   //!
   TBranch        *b_boostedTau_SubLeadingElectronsumPFChargedHadronPt;   //!
   TBranch        *b_boostedTau_SubLeadingElectronsumPFNeutralHadronPt;   //!
   TBranch        *b_boostedTau_SubLeadingElectronsumPFPhotonPt;   //!
   TBranch        *b_boostedTau_SubLeadingElectrontausumPFChargedHadronPt;   //!
   TBranch        *b_boostedTau_SubLeadingElectrontausumPFNeutralHadronPt;   //!
   TBranch        *b_boostedTau_SubLeadingElectrontausumPFPhotonPt;   //!
   TBranch        *b_boostedTau_SubLeadingMuonCorrIso;   //!
   TBranch        *b_boostedTau_SubLeadingMuonEta;   //!
   TBranch        *b_boostedTau_SubLeadingMuonPhi;   //!
   TBranch        *b_boostedTau_SubLeadingMuonPt;   //!
   TBranch        *b_boostedTau_SubLeadingMuondelR;   //!
   TBranch        *b_boostedTau_SubLeadingMuonsumPFChargedHadronPt;   //!
   TBranch        *b_boostedTau_SubLeadingMuonsumPFNeutralHadronPt;   //!
   TBranch        *b_boostedTau_SubLeadingMuonsumPFPhotonPt;   //!
   TBranch        *b_boostedTau_SubLeadingMuonsumPUPt;   //!
   TBranch        *b_boostedTau_SubLeadingMuontausumPFChargedHadronPt;   //!
   TBranch        *b_boostedTau_SubLeadingMuontausumPFNeutralHadronPt;   //!
   TBranch        *b_boostedTau_SubLeadingMuontausumPFPhotonPt;   //!
   TBranch        *b_boostedTau_SubSubLeadingElectronCorrIso;   //!
   TBranch        *b_boostedTau_SubSubLeadingElectronEta;   //!
   TBranch        *b_boostedTau_SubSubLeadingElectronM;   //!
   TBranch        *b_boostedTau_SubSubLeadingElectronPt;   //!
   TBranch        *b_boostedTau_SubSubLeadingElectrondelR;   //!
   TBranch        *b_boostedTau_SubSubLeadingElectronea;   //!
   TBranch        *b_boostedTau_SubSubLeadingElectronrho;   //!
   TBranch        *b_boostedTau_SubSubLeadingElectronsumPFChargedHadronPt;   //!
   TBranch        *b_boostedTau_SubSubLeadingElectronsumPFNeutralHadronPt;   //!
   TBranch        *b_boostedTau_SubSubLeadingElectronsumPFPhotonPt;   //!
   TBranch        *b_boostedTau_SubSubLeadingElectrontausumPFChargedHadronPt;   //!
   TBranch        *b_boostedTau_SubSubLeadingElectrontausumPFNeutralHadronPt;   //!
   TBranch        *b_boostedTau_SubSubLeadingElectrontausumPFPhotonPt;   //!
   TBranch        *b_boostedTau_SubSubLeadingMuonCorrIso;   //!
   TBranch        *b_boostedTau_SubSubLeadingMuonEta;   //!
   TBranch        *b_boostedTau_SubSubLeadingMuonPhi;   //!
   TBranch        *b_boostedTau_SubSubLeadingMuonPt;   //!
   TBranch        *b_boostedTau_SubSubLeadingMuondelR;   //!
   TBranch        *b_boostedTau_SubSubLeadingMuonsumPFChargedHadronPt;   //!
   TBranch        *b_boostedTau_SubSubLeadingMuonsumPFNeutralHadronPt;   //!
   TBranch        *b_boostedTau_SubSubLeadingMuonsumPFPhotonPt;   //!
   TBranch        *b_boostedTau_SubSubLeadingMuonsumPUPt;   //!
   TBranch        *b_boostedTau_SubSubLeadingMuontausumPFChargedHadronPt;   //!
   TBranch        *b_boostedTau_SubSubLeadingMuontausumPFNeutralHadronPt;   //!
   TBranch        *b_boostedTau_SubSubLeadingMuontausumPFPhotonPt;   //!
   TBranch        *b_boostedTau_chargedIso;   //!
   TBranch        *b_boostedTau_eta;   //!
   TBranch        *b_boostedTau_leadTkDeltaEta;   //!
   TBranch        *b_boostedTau_leadTkDeltaPhi;   //!
   TBranch        *b_boostedTau_leadTkPtOverTauPt;   //!
   TBranch        *b_boostedTau_mass;   //!
   TBranch        *b_boostedTau_neutralIso;   //!
   TBranch        *b_boostedTau_phi;   //!
   TBranch        *b_boostedTau_photonsOutsideSignalCone;   //!
   TBranch        *b_boostedTau_pt;   //!
   TBranch        *b_boostedTau_puCorr;   //!
   TBranch        *b_boostedTau_rawAntiEle2018;   //!
   TBranch        *b_boostedTau_rawDeepTau2018v2p7VSe;   //!
   TBranch        *b_boostedTau_rawDeepTau2018v2p7VSjet;   //!
   TBranch        *b_boostedTau_rawDeepTau2018v2p7VSmu;   //!
   TBranch        *b_boostedTau_rawIso;   //!
   TBranch        *b_boostedTau_rawIsodR03;   //!
   TBranch        *b_boostedTau_rawMVAnewDM2017v2;   //!
   TBranch        *b_boostedTau_rawMVAoldDM2017v2;   //!
   TBranch        *b_boostedTau_rawMVAoldDMdR032017v2;   //!
   TBranch        *b_CaloMET_phi;   //!
   TBranch        *b_CaloMET_pt;   //!
   TBranch        *b_CaloMET_sumEt;   //!
   TBranch        *b_ChsMET_phi;   //!
   TBranch        *b_ChsMET_pt;   //!
   TBranch        *b_ChsMET_sumEt;   //!
   TBranch        *b_nCorrT1METJet;   //!
   TBranch        *b_CorrT1METJet_area;   //!
   TBranch        *b_CorrT1METJet_eta;   //!
   TBranch        *b_CorrT1METJet_muonSubtrFactor;   //!
   TBranch        *b_CorrT1METJet_phi;   //!
   TBranch        *b_CorrT1METJet_rawPt;   //!
   TBranch        *b_DeepMETResolutionTune_phi;   //!
   TBranch        *b_DeepMETResolutionTune_pt;   //!
   TBranch        *b_DeepMETResponseTune_phi;   //!
   TBranch        *b_DeepMETResponseTune_pt;   //!
   TBranch        *b_nElectron;   //!
   TBranch        *b_Electron_seediEtaOriX;   //!
   TBranch        *b_Electron_convVeto;   //!
   TBranch        *b_Electron_cutBased;   //!
   TBranch        *b_Electron_cutBased_HEEP;   //!
   TBranch        *b_Electron_isPFcand;   //!
   TBranch        *b_Electron_jetNDauCharged;   //!
   TBranch        *b_Electron_lostHits;   //!
   TBranch        *b_Electron_mvaIso_WP80;   //!
   TBranch        *b_Electron_mvaIso_WP90;   //!
   TBranch        *b_Electron_mvaIso_WPL;   //!
   TBranch        *b_Electron_mvaNoIso_WP80;   //!
   TBranch        *b_Electron_mvaNoIso_WP90;   //!
   TBranch        *b_Electron_mvaNoIso_WPL;   //!
   TBranch        *b_Electron_seedGain;   //!
   TBranch        *b_Electron_tightCharge;   //!
   TBranch        *b_Electron_jetIdx;   //!
   TBranch        *b_Electron_photonIdx;   //!
   TBranch        *b_Electron_svIdx;   //!
   TBranch        *b_Electron_fsrPhotonIdx;   //!
   TBranch        *b_Electron_charge;   //!
   TBranch        *b_Electron_pdgId;   //!
   TBranch        *b_Electron_seediPhiOriY;   //!
   TBranch        *b_Electron_vidNestedWPBitmap;   //!
   TBranch        *b_Electron_vidNestedWPBitmapHEEP;   //!
   TBranch        *b_Electron_dEscaleDown;   //!
   TBranch        *b_Electron_dEscaleUp;   //!
   TBranch        *b_Electron_dEsigmaDown;   //!
   TBranch        *b_Electron_dEsigmaUp;   //!
   TBranch        *b_Electron_deltaEtaSC;   //!
   TBranch        *b_Electron_dr03EcalRecHitSumEt;   //!
   TBranch        *b_Electron_dr03HcalDepth1TowerSumEt;   //!
   TBranch        *b_Electron_dr03TkSumPt;   //!
   TBranch        *b_Electron_dr03TkSumPtHEEP;   //!
   TBranch        *b_Electron_dxy;   //!
   TBranch        *b_Electron_dxyErr;   //!
   TBranch        *b_Electron_dz;   //!
   TBranch        *b_Electron_dzErr;   //!
   TBranch        *b_Electron_eCorr;   //!
   TBranch        *b_Electron_eInvMinusPInv;   //!
   TBranch        *b_Electron_energyErr;   //!
   TBranch        *b_Electron_eta;   //!
   TBranch        *b_Electron_hoe;   //!
   TBranch        *b_Electron_ip3d;   //!
   TBranch        *b_Electron_jetPtRelv2;   //!
   TBranch        *b_Electron_jetRelIso;   //!
   TBranch        *b_Electron_mass;   //!
   TBranch        *b_Electron_miniPFRelIso_all;   //!
   TBranch        *b_Electron_miniPFRelIso_chg;   //!
   TBranch        *b_Electron_mvaHZZIso;   //!
   TBranch        *b_Electron_mvaIso;   //!
   TBranch        *b_Electron_mvaNoIso;   //!
   TBranch        *b_Electron_pfRelIso03_all;   //!
   TBranch        *b_Electron_pfRelIso03_chg;   //!
   TBranch        *b_Electron_phi;   //!
   TBranch        *b_Electron_pt;   //!
   TBranch        *b_Electron_r9;   //!
   TBranch        *b_Electron_scEtOverPt;   //!
   TBranch        *b_Electron_sieie;   //!
   TBranch        *b_Electron_sip3d;   //!
   TBranch        *b_Electron_mvaTTH;   //!
   TBranch        *b_nFatJet;   //!
   TBranch        *b_FatJet_jetId;   //!
   TBranch        *b_FatJet_nConstituents;   //!
   TBranch        *b_FatJet_subJetIdx1;   //!
   TBranch        *b_FatJet_subJetIdx2;   //!
   TBranch        *b_FatJet_electronIdx3SJ;   //!
   TBranch        *b_FatJet_muonIdx3SJ;   //!
   TBranch        *b_FatJet_area;   //!
   TBranch        *b_FatJet_btagCSVV2;   //!
   TBranch        *b_FatJet_btagDDBvLV2;   //!
   TBranch        *b_FatJet_btagDDCvBV2;   //!
   TBranch        *b_FatJet_btagDDCvLV2;   //!
   TBranch        *b_FatJet_btagDeepB;   //!
   TBranch        *b_FatJet_btagHbb;   //!
   TBranch        *b_FatJet_deepTagMD_H4qvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_HbbvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_TvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_WvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_ZHbbvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_ZHccvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_ZbbvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_ZvsQCD;   //!
   TBranch        *b_FatJet_deepTagMD_bbvsLight;   //!
   TBranch        *b_FatJet_deepTagMD_ccvsLight;   //!
   TBranch        *b_FatJet_deepTag_H;   //!
   TBranch        *b_FatJet_deepTag_QCD;   //!
   TBranch        *b_FatJet_deepTag_QCDothers;   //!
   TBranch        *b_FatJet_deepTag_TvsQCD;   //!
   TBranch        *b_FatJet_deepTag_WvsQCD;   //!
   TBranch        *b_FatJet_deepTag_ZvsQCD;   //!
   TBranch        *b_FatJet_eta;   //!
   TBranch        *b_FatJet_mass;   //!
   TBranch        *b_FatJet_msoftdrop;   //!
   TBranch        *b_FatJet_n2b1;   //!
   TBranch        *b_FatJet_n3b1;   //!
   TBranch        *b_FatJet_particleNetLegacy_QCD;   //!
   TBranch        *b_FatJet_particleNetLegacy_Xbb;   //!
   TBranch        *b_FatJet_particleNetLegacy_Xcc;   //!
   TBranch        *b_FatJet_particleNetLegacy_Xqq;   //!
   TBranch        *b_FatJet_particleNetLegacy_mass;   //!
   TBranch        *b_FatJet_particleNetWithMass_H4qvsQCD;   //!
   TBranch        *b_FatJet_particleNetWithMass_HbbvsQCD;   //!
   TBranch        *b_FatJet_particleNetWithMass_HccvsQCD;   //!
   TBranch        *b_FatJet_particleNetWithMass_QCD;   //!
   TBranch        *b_FatJet_particleNetWithMass_TvsQCD;   //!
   TBranch        *b_FatJet_particleNetWithMass_WvsQCD;   //!
   TBranch        *b_FatJet_particleNetWithMass_ZvsQCD;   //!
   TBranch        *b_FatJet_particleNet_QCD;   //!
   TBranch        *b_FatJet_particleNet_QCD0HF;   //!
   TBranch        *b_FatJet_particleNet_QCD1HF;   //!
   TBranch        *b_FatJet_particleNet_QCD2HF;   //!
   TBranch        *b_FatJet_particleNet_XbbVsQCD;   //!
   TBranch        *b_FatJet_particleNet_XccVsQCD;   //!
   TBranch        *b_FatJet_particleNet_XggVsQCD;   //!
   TBranch        *b_FatJet_particleNet_XqqVsQCD;   //!
   TBranch        *b_FatJet_particleNet_XteVsQCD;   //!
   TBranch        *b_FatJet_particleNet_XtmVsQCD;   //!
   TBranch        *b_FatJet_particleNet_XttVsQCD;   //!
   TBranch        *b_FatJet_particleNet_massCorr;   //!
   TBranch        *b_FatJet_phi;   //!
   TBranch        *b_FatJet_pt;   //!
   TBranch        *b_FatJet_rawFactor;   //!
   TBranch        *b_FatJet_tau1;   //!
   TBranch        *b_FatJet_tau2;   //!
   TBranch        *b_FatJet_tau3;   //!
   TBranch        *b_FatJet_tau4;   //!
   TBranch        *b_FatJet_lsf3;   //!
   TBranch        *b_nFsrPhoton;   //!
   TBranch        *b_FsrPhoton_electronIdx;   //!
   TBranch        *b_FsrPhoton_muonIdx;   //!
   TBranch        *b_FsrPhoton_dROverEt2;   //!
   TBranch        *b_FsrPhoton_eta;   //!
   TBranch        *b_FsrPhoton_phi;   //!
   TBranch        *b_FsrPhoton_pt;   //!
   TBranch        *b_FsrPhoton_relIso03;   //!
   TBranch        *b_nGenJetAK8;   //!
   TBranch        *b_GenJetAK8_eta;   //!
   TBranch        *b_GenJetAK8_mass;   //!
   TBranch        *b_GenJetAK8_phi;   //!
   TBranch        *b_GenJetAK8_pt;   //!
   TBranch        *b_nGenJet;   //!
   TBranch        *b_GenJet_eta;   //!
   TBranch        *b_GenJet_mass;   //!
   TBranch        *b_GenJet_phi;   //!
   TBranch        *b_GenJet_pt;   //!
   TBranch        *b_nGenPart;   //!
   TBranch        *b_GenPart_genPartIdxMother;   //!
   TBranch        *b_GenPart_statusFlags;   //!
   TBranch        *b_GenPart_pdgId;   //!
   TBranch        *b_GenPart_status;   //!
   TBranch        *b_GenPart_eta;   //!
   TBranch        *b_GenPart_mass;   //!
   TBranch        *b_GenPart_phi;   //!
   TBranch        *b_GenPart_pt;   //!
   TBranch        *b_nGenProton;   //!
   TBranch        *b_GenProton_isPU;   //!
   TBranch        *b_GenProton_px;   //!
   TBranch        *b_GenProton_py;   //!
   TBranch        *b_GenProton_pz;   //!
   TBranch        *b_GenProton_vz;   //!
   TBranch        *b_nSubGenJetAK8;   //!
   TBranch        *b_SubGenJetAK8_eta;   //!
   TBranch        *b_SubGenJetAK8_mass;   //!
   TBranch        *b_SubGenJetAK8_phi;   //!
   TBranch        *b_SubGenJetAK8_pt;   //!
   TBranch        *b_Generator_id1;   //!
   TBranch        *b_Generator_id2;   //!
   TBranch        *b_Generator_binvar;   //!
   TBranch        *b_Generator_scalePDF;   //!
   TBranch        *b_Generator_weight;   //!
   TBranch        *b_Generator_x1;   //!
   TBranch        *b_Generator_x2;   //!
   TBranch        *b_Generator_xpdf1;   //!
   TBranch        *b_Generator_xpdf2;   //!
   TBranch        *b_GenVtx_x;   //!
   TBranch        *b_GenVtx_y;   //!
   TBranch        *b_GenVtx_z;   //!
   TBranch        *b_nGenVisTau;   //!
   TBranch        *b_GenVisTau_status;   //!
   TBranch        *b_GenVisTau_charge;   //!
   TBranch        *b_GenVisTau_genPartIdxMother;   //!
   TBranch        *b_GenVisTau_eta;   //!
   TBranch        *b_GenVisTau_mass;   //!
   TBranch        *b_GenVisTau_phi;   //!
   TBranch        *b_GenVisTau_pt;   //!
   TBranch        *b_genWeight;   //!
   TBranch        *b_LHEWeight_originalXWGTUP;   //!
   TBranch        *b_nLHEPdfWeight;   //!
   TBranch        *b_LHEPdfWeight;   //!
   TBranch        *b_nLHEReweightingWeight;   //!
   TBranch        *b_LHEReweightingWeight;   //!
   TBranch        *b_nLHEScaleWeight;   //!
   TBranch        *b_LHEScaleWeight;   //!
   TBranch        *b_nPSWeight;   //!
   TBranch        *b_PSWeight;   //!
   TBranch        *b_nIsoTrack;   //!
   TBranch        *b_IsoTrack_isHighPurityTrack;   //!
   TBranch        *b_IsoTrack_isPFcand;   //!
   TBranch        *b_IsoTrack_isFromLostTrack;   //!
   TBranch        *b_IsoTrack_charge;   //!
   TBranch        *b_IsoTrack_fromPV;   //!
   TBranch        *b_IsoTrack_pdgId;   //!
   TBranch        *b_IsoTrack_dxy;   //!
   TBranch        *b_IsoTrack_dz;   //!
   TBranch        *b_IsoTrack_eta;   //!
   TBranch        *b_IsoTrack_pfRelIso03_all;   //!
   TBranch        *b_IsoTrack_pfRelIso03_chg;   //!
   TBranch        *b_IsoTrack_phi;   //!
   TBranch        *b_IsoTrack_pt;   //!
   TBranch        *b_IsoTrack_miniPFRelIso_all;   //!
   TBranch        *b_IsoTrack_miniPFRelIso_chg;   //!
   TBranch        *b_nJet;   //!
   TBranch        *b_Jet_jetId;   //!
   TBranch        *b_Jet_nConstituents;   //!
   TBranch        *b_Jet_nElectrons;   //!
   TBranch        *b_Jet_nMuons;   //!
   TBranch        *b_Jet_nSVs;   //!
   TBranch        *b_Jet_puId;   //!
   TBranch        *b_Jet_electronIdx1;   //!
   TBranch        *b_Jet_electronIdx2;   //!
   TBranch        *b_Jet_muonIdx1;   //!
   TBranch        *b_Jet_muonIdx2;   //!
   TBranch        *b_Jet_svIdx1;   //!
   TBranch        *b_Jet_svIdx2;   //!
   TBranch        *b_Jet_hfadjacentEtaStripsSize;   //!
   TBranch        *b_Jet_hfcentralEtaStripSize;   //!
   TBranch        *b_Jet_PNetRegPtRawCorr;   //!
   TBranch        *b_Jet_PNetRegPtRawCorrNeutrino;   //!
   TBranch        *b_Jet_PNetRegPtRawRes;   //!
   TBranch        *b_Jet_area;   //!
   TBranch        *b_Jet_btagCSVV2;   //!
   TBranch        *b_Jet_btagDeepB;   //!
   TBranch        *b_Jet_btagDeepCvB;   //!
   TBranch        *b_Jet_btagDeepCvL;   //!
   TBranch        *b_Jet_btagDeepFlavB;   //!
   TBranch        *b_Jet_btagDeepFlavCvB;   //!
   TBranch        *b_Jet_btagDeepFlavCvL;   //!
   TBranch        *b_Jet_btagDeepFlavQG;   //!
   TBranch        *b_Jet_btagPNetB;   //!
   TBranch        *b_Jet_btagPNetCvB;   //!
   TBranch        *b_Jet_btagPNetCvL;   //!
   TBranch        *b_Jet_btagPNetQvG;   //!
   TBranch        *b_Jet_btagPNetTauVJet;   //!
   TBranch        *b_Jet_btagRobustParTAK4B;   //!
   TBranch        *b_Jet_btagRobustParTAK4CvB;   //!
   TBranch        *b_Jet_btagRobustParTAK4CvL;   //!
   TBranch        *b_Jet_btagRobustParTAK4QG;   //!
   TBranch        *b_Jet_chEmEF;   //!
   TBranch        *b_Jet_chFPV0EF;   //!
   TBranch        *b_Jet_chHEF;   //!
   TBranch        *b_Jet_eta;   //!
   TBranch        *b_Jet_hfsigmaEtaEta;   //!
   TBranch        *b_Jet_hfsigmaPhiPhi;   //!
   TBranch        *b_Jet_mass;   //!
   TBranch        *b_Jet_muEF;   //!
   TBranch        *b_Jet_muonSubtrFactor;   //!
   TBranch        *b_Jet_neEmEF;   //!
   TBranch        *b_Jet_neHEF;   //!
   TBranch        *b_Jet_phi;   //!
   TBranch        *b_Jet_pt;   //!
   TBranch        *b_Jet_puIdDisc;   //!
   TBranch        *b_Jet_qgl;   //!
   TBranch        *b_Jet_rawFactor;   //!
   TBranch        *b_Jet_bRegCorr;   //!
   TBranch        *b_Jet_bRegRes;   //!
   TBranch        *b_Jet_cRegCorr;   //!
   TBranch        *b_Jet_cRegRes;   //!
   TBranch        *b_L1PreFiringWeight_Dn;   //!
   TBranch        *b_L1PreFiringWeight_ECAL_Dn;   //!
   TBranch        *b_L1PreFiringWeight_ECAL_Nom;   //!
   TBranch        *b_L1PreFiringWeight_ECAL_Up;   //!
   TBranch        *b_L1PreFiringWeight_Muon_Nom;   //!
   TBranch        *b_L1PreFiringWeight_Muon_StatDn;   //!
   TBranch        *b_L1PreFiringWeight_Muon_StatUp;   //!
   TBranch        *b_L1PreFiringWeight_Muon_SystDn;   //!
   TBranch        *b_L1PreFiringWeight_Muon_SystUp;   //!
   TBranch        *b_L1PreFiringWeight_Nom;   //!
   TBranch        *b_L1PreFiringWeight_Up;   //!
   TBranch        *b_LHE_Njets;   //!
   TBranch        *b_LHE_Nb;   //!
   TBranch        *b_LHE_Nc;   //!
   TBranch        *b_LHE_Nuds;   //!
   TBranch        *b_LHE_Nglu;   //!
   TBranch        *b_LHE_NpNLO;   //!
   TBranch        *b_LHE_NpLO;   //!
   TBranch        *b_LHE_HT;   //!
   TBranch        *b_LHE_HTIncoming;   //!
   TBranch        *b_LHE_Vpt;   //!
   TBranch        *b_LHE_AlphaS;   //!
   TBranch        *b_nLHEPart;   //!
   TBranch        *b_LHEPart_pdgId;   //!
   TBranch        *b_LHEPart_status;   //!
   TBranch        *b_LHEPart_spin;   //!
   TBranch        *b_LHEPart_pt;   //!
   TBranch        *b_LHEPart_eta;   //!
   TBranch        *b_LHEPart_phi;   //!
   TBranch        *b_LHEPart_mass;   //!
   TBranch        *b_LHEPart_incomingpz;   //!
   TBranch        *b_nLowPtElectron;   //!
   TBranch        *b_LowPtElectron_convVeto;   //!
   TBranch        *b_LowPtElectron_convWP;   //!
   TBranch        *b_LowPtElectron_lostHits;   //!
   TBranch        *b_LowPtElectron_electronIdx;   //!
   TBranch        *b_LowPtElectron_photonIdx;   //!
   TBranch        *b_LowPtElectron_charge;   //!
   TBranch        *b_LowPtElectron_pdgId;   //!
   TBranch        *b_LowPtElectron_ID;   //!
   TBranch        *b_LowPtElectron_convVtxRadius;   //!
   TBranch        *b_LowPtElectron_deltaEtaSC;   //!
   TBranch        *b_LowPtElectron_dxy;   //!
   TBranch        *b_LowPtElectron_dxyErr;   //!
   TBranch        *b_LowPtElectron_dz;   //!
   TBranch        *b_LowPtElectron_dzErr;   //!
   TBranch        *b_LowPtElectron_eInvMinusPInv;   //!
   TBranch        *b_LowPtElectron_embeddedID;   //!
   TBranch        *b_LowPtElectron_energyErr;   //!
   TBranch        *b_LowPtElectron_eta;   //!
   TBranch        *b_LowPtElectron_hoe;   //!
   TBranch        *b_LowPtElectron_mass;   //!
   TBranch        *b_LowPtElectron_miniPFRelIso_all;   //!
   TBranch        *b_LowPtElectron_miniPFRelIso_chg;   //!
   TBranch        *b_LowPtElectron_phi;   //!
   TBranch        *b_LowPtElectron_pt;   //!
   TBranch        *b_LowPtElectron_ptbiased;   //!
   TBranch        *b_LowPtElectron_r9;   //!
   TBranch        *b_LowPtElectron_scEtOverPt;   //!
   TBranch        *b_LowPtElectron_sieie;   //!
   TBranch        *b_LowPtElectron_unbiased;   //!
   TBranch        *b_GenMET_phi;   //!
   TBranch        *b_GenMET_pt;   //!
   TBranch        *b_MET_MetUnclustEnUpDeltaX;   //!
   TBranch        *b_MET_MetUnclustEnUpDeltaY;   //!
   TBranch        *b_MET_covXX;   //!
   TBranch        *b_MET_covXY;   //!
   TBranch        *b_MET_covYY;   //!
   TBranch        *b_MET_phi;   //!
   TBranch        *b_MET_pt;   //!
   TBranch        *b_MET_significance;   //!
   TBranch        *b_MET_sumEt;   //!
   TBranch        *b_MET_sumPtUnclustered;   //!
   TBranch        *b_nMuon;   //!
   TBranch        *b_Muon_highPtId;   //!
   TBranch        *b_Muon_highPurity;   //!
   TBranch        *b_Muon_inTimeMuon;   //!
   TBranch        *b_Muon_isGlobal;   //!
   TBranch        *b_Muon_isPFcand;   //!
   TBranch        *b_Muon_isStandalone;   //!
   TBranch        *b_Muon_isTracker;   //!
   TBranch        *b_Muon_jetNDauCharged;   //!
   TBranch        *b_Muon_looseId;   //!
   TBranch        *b_Muon_mediumId;   //!
   TBranch        *b_Muon_mediumPromptId;   //!
   TBranch        *b_Muon_miniIsoId;   //!
   TBranch        *b_Muon_multiIsoId;   //!
   TBranch        *b_Muon_mvaMuID_WP;   //!
   TBranch        *b_Muon_nStations;   //!
   TBranch        *b_Muon_nTrackerLayers;   //!
   TBranch        *b_Muon_pfIsoId;   //!
   TBranch        *b_Muon_puppiIsoId;   //!
   TBranch        *b_Muon_softId;   //!
   TBranch        *b_Muon_softMvaId;   //!
   TBranch        *b_Muon_tightCharge;   //!
   TBranch        *b_Muon_tightId;   //!
   TBranch        *b_Muon_tkIsoId;   //!
   TBranch        *b_Muon_triggerIdLoose;   //!
   TBranch        *b_Muon_jetIdx;   //!
   TBranch        *b_Muon_svIdx;   //!
   TBranch        *b_Muon_fsrPhotonIdx;   //!
   TBranch        *b_Muon_charge;   //!
   TBranch        *b_Muon_pdgId;   //!
   TBranch        *b_Muon_dxy;   //!
   TBranch        *b_Muon_dxyErr;   //!
   TBranch        *b_Muon_dxybs;   //!
   TBranch        *b_Muon_dz;   //!
   TBranch        *b_Muon_dzErr;   //!
   TBranch        *b_Muon_eta;   //!
   TBranch        *b_Muon_ip3d;   //!
   TBranch        *b_Muon_jetPtRelv2;   //!
   TBranch        *b_Muon_jetRelIso;   //!
   TBranch        *b_Muon_mass;   //!
   TBranch        *b_Muon_miniPFRelIso_all;   //!
   TBranch        *b_Muon_miniPFRelIso_chg;   //!
   TBranch        *b_Muon_mvaMuID;   //!
   TBranch        *b_Muon_pfRelIso03_all;   //!
   TBranch        *b_Muon_pfRelIso03_chg;   //!
   TBranch        *b_Muon_pfRelIso04_all;   //!
   TBranch        *b_Muon_phi;   //!
   TBranch        *b_Muon_pt;   //!
   TBranch        *b_Muon_ptErr;   //!
   TBranch        *b_Muon_segmentComp;   //!
   TBranch        *b_Muon_sip3d;   //!
   TBranch        *b_Muon_softMva;   //!
   TBranch        *b_Muon_tkRelIso;   //!
   TBranch        *b_Muon_tunepRelPt;   //!
   TBranch        *b_Muon_bsConstrainedChi2;   //!
   TBranch        *b_Muon_bsConstrainedPt;   //!
   TBranch        *b_Muon_bsConstrainedPtErr;   //!
   TBranch        *b_Muon_mvaLowPt;   //!
   TBranch        *b_Muon_mvaTTH;   //!
   TBranch        *b_nPhoton;   //!
   TBranch        *b_Photon_seediEtaOriX;   //!
   TBranch        *b_Photon_cutBased;   //!
   TBranch        *b_Photon_electronVeto;   //!
   TBranch        *b_Photon_hasConversionTracks;   //!
   TBranch        *b_Photon_isScEtaEB;   //!
   TBranch        *b_Photon_isScEtaEE;   //!
   TBranch        *b_Photon_mvaID_WP80;   //!
   TBranch        *b_Photon_mvaID_WP90;   //!
   TBranch        *b_Photon_pixelSeed;   //!
   TBranch        *b_Photon_seedGain;   //!
   TBranch        *b_Photon_electronIdx;   //!
   TBranch        *b_Photon_jetIdx;   //!
   TBranch        *b_Photon_seediPhiOriY;   //!
   TBranch        *b_Photon_vidNestedWPBitmap;   //!
   TBranch        *b_Photon_dEscaleDown;   //!
   TBranch        *b_Photon_dEscaleUp;   //!
   TBranch        *b_Photon_dEsigmaDown;   //!
   TBranch        *b_Photon_dEsigmaUp;   //!
   TBranch        *b_Photon_eCorr;   //!
   TBranch        *b_Photon_ecalPFClusterIso;   //!
   TBranch        *b_Photon_energyErr;   //!
   TBranch        *b_Photon_energyRaw;   //!
   TBranch        *b_Photon_esEffSigmaRR;   //!
   TBranch        *b_Photon_esEnergyOverRawE;   //!
   TBranch        *b_Photon_eta;   //!
   TBranch        *b_Photon_etaWidth;   //!
   TBranch        *b_Photon_haloTaggerMVAVal;   //!
   TBranch        *b_Photon_hcalPFClusterIso;   //!
   TBranch        *b_Photon_hoe;   //!
   TBranch        *b_Photon_mvaID;   //!
   TBranch        *b_Photon_pfChargedIso;   //!
   TBranch        *b_Photon_pfChargedIsoPFPV;   //!
   TBranch        *b_Photon_pfChargedIsoWorstVtx;   //!
   TBranch        *b_Photon_pfPhoIso03;   //!
   TBranch        *b_Photon_pfRelIso03_all;   //!
   TBranch        *b_Photon_pfRelIso03_chg;   //!
   TBranch        *b_Photon_phi;   //!
   TBranch        *b_Photon_phiWidth;   //!
   TBranch        *b_Photon_pt;   //!
   TBranch        *b_Photon_r9;   //!
   TBranch        *b_Photon_s4;   //!
   TBranch        *b_Photon_sieie;   //!
   TBranch        *b_Photon_sieip;   //!
   TBranch        *b_Photon_sipip;   //!
   TBranch        *b_Photon_trkSumPtHollowConeDR03;   //!
   TBranch        *b_Photon_trkSumPtSolidConeDR04;   //!
   TBranch        *b_Photon_x_calo;   //!
   TBranch        *b_Photon_y_calo;   //!
   TBranch        *b_Photon_z_calo;   //!
   TBranch        *b_Pileup_nPU;   //!
   TBranch        *b_Pileup_sumEOOT;   //!
   TBranch        *b_Pileup_sumLOOT;   //!
   TBranch        *b_Pileup_nTrueInt;   //!
   TBranch        *b_Pileup_pudensity;   //!
   TBranch        *b_Pileup_gpudensity;   //!
   TBranch        *b_PuppiMET_phi;   //!
   TBranch        *b_PuppiMET_phiJERDown;   //!
   TBranch        *b_PuppiMET_phiJERUp;   //!
   TBranch        *b_PuppiMET_phiJESDown;   //!
   TBranch        *b_PuppiMET_phiJESUp;   //!
   TBranch        *b_PuppiMET_phiUnclusteredDown;   //!
   TBranch        *b_PuppiMET_phiUnclusteredUp;   //!
   TBranch        *b_PuppiMET_pt;   //!
   TBranch        *b_PuppiMET_ptJERDown;   //!
   TBranch        *b_PuppiMET_ptJERUp;   //!
   TBranch        *b_PuppiMET_ptJESDown;   //!
   TBranch        *b_PuppiMET_ptJESUp;   //!
   TBranch        *b_PuppiMET_ptUnclusteredDown;   //!
   TBranch        *b_PuppiMET_ptUnclusteredUp;   //!
   TBranch        *b_PuppiMET_sumEt;   //!
   TBranch        *b_RawMET_phi;   //!
   TBranch        *b_RawMET_pt;   //!
   TBranch        *b_RawMET_sumEt;   //!
   TBranch        *b_RawPuppiMET_phi;   //!
   TBranch        *b_RawPuppiMET_pt;   //!
   TBranch        *b_RawPuppiMET_sumEt;   //!
   TBranch        *b_Rho_fixedGridRhoAll;   //!
   TBranch        *b_Rho_fixedGridRhoFastjetAll;   //!
   TBranch        *b_Rho_fixedGridRhoFastjetCentral;   //!
   TBranch        *b_Rho_fixedGridRhoFastjetCentralCalo;   //!
   TBranch        *b_Rho_fixedGridRhoFastjetCentralChargedPileUp;   //!
   TBranch        *b_Rho_fixedGridRhoFastjetCentralNeutral;   //!
   TBranch        *b_nGenDressedLepton;   //!
   TBranch        *b_GenDressedLepton_hasTauAnc;   //!
   TBranch        *b_GenDressedLepton_pdgId;   //!
   TBranch        *b_GenDressedLepton_eta;   //!
   TBranch        *b_GenDressedLepton_mass;   //!
   TBranch        *b_GenDressedLepton_phi;   //!
   TBranch        *b_GenDressedLepton_pt;   //!
   TBranch        *b_nGenIsolatedPhoton;   //!
   TBranch        *b_GenIsolatedPhoton_eta;   //!
   TBranch        *b_GenIsolatedPhoton_mass;   //!
   TBranch        *b_GenIsolatedPhoton_phi;   //!
   TBranch        *b_GenIsolatedPhoton_pt;   //!
   TBranch        *b_nSoftActivityJet;   //!
   TBranch        *b_SoftActivityJet_eta;   //!
   TBranch        *b_SoftActivityJet_phi;   //!
   TBranch        *b_SoftActivityJet_pt;   //!
   TBranch        *b_SoftActivityJetNjets10;   //!
   TBranch        *b_SoftActivityJetNjets2;   //!
   TBranch        *b_SoftActivityJetNjets5;   //!
   TBranch        *b_SoftActivityJetHT;   //!
   TBranch        *b_SoftActivityJetHT10;   //!
   TBranch        *b_SoftActivityJetHT2;   //!
   TBranch        *b_SoftActivityJetHT5;   //!
   TBranch        *b_nSubJet;   //!
   TBranch        *b_SubJet_btagCSVV2;   //!
   TBranch        *b_SubJet_btagDeepB;   //!
   TBranch        *b_SubJet_eta;   //!
   TBranch        *b_SubJet_mass;   //!
   TBranch        *b_SubJet_n2b1;   //!
   TBranch        *b_SubJet_n3b1;   //!
   TBranch        *b_SubJet_phi;   //!
   TBranch        *b_SubJet_pt;   //!
   TBranch        *b_SubJet_rawFactor;   //!
   TBranch        *b_SubJet_tau1;   //!
   TBranch        *b_SubJet_tau2;   //!
   TBranch        *b_SubJet_tau3;   //!
   TBranch        *b_SubJet_tau4;   //!
   TBranch        *b_nTau;   //!
   TBranch        *b_Tau_decayMode;   //!
   TBranch        *b_Tau_idAntiEleDeadECal;   //!
   TBranch        *b_Tau_idAntiMu;   //!
   TBranch        *b_Tau_idDecayModeNewDMs;   //!
   TBranch        *b_Tau_idDecayModeOldDMs;   //!
   TBranch        *b_Tau_idDeepTau2017v2p1VSe;   //!
   TBranch        *b_Tau_idDeepTau2017v2p1VSjet;   //!
   TBranch        *b_Tau_idDeepTau2017v2p1VSmu;   //!
   TBranch        *b_Tau_idDeepTau2018v2p5VSe;   //!
   TBranch        *b_Tau_idDeepTau2018v2p5VSjet;   //!
   TBranch        *b_Tau_idDeepTau2018v2p5VSmu;   //!
   TBranch        *b_Tau_nSVs;   //!
   TBranch        *b_Tau_charge;   //!
   TBranch        *b_Tau_decayModePNet;   //!
   TBranch        *b_Tau_eleIdx;   //!
   TBranch        *b_Tau_jetIdx;   //!
   TBranch        *b_Tau_muIdx;   //!
   TBranch        *b_Tau_svIdx1;   //!
   TBranch        *b_Tau_svIdx2;   //!
   TBranch        *b_Tau_Ecounter;   //!
   TBranch        *b_Tau_Mcounter;   //!
   TBranch        *b_Tau_SubLeadingElectronPhi;   //!
   TBranch        *b_Tau_SubLeadingMuonM;   //!
   TBranch        *b_Tau_SubSubLeadingElectronPhi;   //!
   TBranch        *b_Tau_SubSubLeadingMuonM;   //!
   TBranch        *b_Tau_LeadingElectronCorrIso;   //!
   TBranch        *b_Tau_LeadingElectronEta;   //!
   TBranch        *b_Tau_LeadingElectronM;   //!
   TBranch        *b_Tau_LeadingElectronPhi;   //!
   TBranch        *b_Tau_LeadingElectronPt;   //!
   TBranch        *b_Tau_LeadingElectrondelR;   //!
   TBranch        *b_Tau_LeadingElectronea;   //!
   TBranch        *b_Tau_LeadingElectronrho;   //!
   TBranch        *b_Tau_LeadingElectronsumPFChargedHadronPt;   //!
   TBranch        *b_Tau_LeadingElectronsumPFNeutralHadronPt;   //!
   TBranch        *b_Tau_LeadingElectronsumPFPhotonPt;   //!
   TBranch        *b_Tau_LeadingElectrontausumPFChargedHadronPt;   //!
   TBranch        *b_Tau_LeadingElectrontausumPFNeutralHadronPt;   //!
   TBranch        *b_Tau_LeadingElectrontausumPFPhotonPt;   //!
   TBranch        *b_Tau_LeadingMuonCorrIso;   //!
   TBranch        *b_Tau_LeadingMuonEta;   //!
   TBranch        *b_Tau_LeadingMuonM;   //!
   TBranch        *b_Tau_LeadingMuonPhi;   //!
   TBranch        *b_Tau_LeadingMuonPt;   //!
   TBranch        *b_Tau_LeadingMuondelR;   //!
   TBranch        *b_Tau_LeadingMuonsumPFChargedHadronPt;   //!
   TBranch        *b_Tau_LeadingMuonsumPFNeutralHadronPt;   //!
   TBranch        *b_Tau_LeadingMuonsumPFPhotonPt;   //!
   TBranch        *b_Tau_LeadingMuonsumPUPt;   //!
   TBranch        *b_Tau_LeadingMuontausumPFChargedHadronPt;   //!
   TBranch        *b_Tau_LeadingMuontausumPFNeutralHadronPt;   //!
   TBranch        *b_Tau_LeadingMuontausumPFPhotonPt;   //!
   TBranch        *b_Tau_SubLeadingElectronCorrIso;   //!
   TBranch        *b_Tau_SubLeadingElectronEta;   //!
   TBranch        *b_Tau_SubLeadingElectronM;   //!
   TBranch        *b_Tau_SubLeadingElectronPt;   //!
   TBranch        *b_Tau_SubLeadingElectrondelR;   //!
   TBranch        *b_Tau_SubLeadingElectronea;   //!
   TBranch        *b_Tau_SubLeadingElectronrho;   //!
   TBranch        *b_Tau_SubLeadingElectronsumPFChargedHadronPt;   //!
   TBranch        *b_Tau_SubLeadingElectronsumPFNeutralHadronPt;   //!
   TBranch        *b_Tau_SubLeadingElectronsumPFPhotonPt;   //!
   TBranch        *b_Tau_SubLeadingElectrontausumPFChargedHadronPt;   //!
   TBranch        *b_Tau_SubLeadingElectrontausumPFNeutralHadronPt;   //!
   TBranch        *b_Tau_SubLeadingElectrontausumPFPhotonPt;   //!
   TBranch        *b_Tau_SubLeadingMuonCorrIso;   //!
   TBranch        *b_Tau_SubLeadingMuonEta;   //!
   TBranch        *b_Tau_SubLeadingMuonPhi;   //!
   TBranch        *b_Tau_SubLeadingMuonPt;   //!
   TBranch        *b_Tau_SubLeadingMuondelR;   //!
   TBranch        *b_Tau_SubLeadingMuonsumPFChargedHadronPt;   //!
   TBranch        *b_Tau_SubLeadingMuonsumPFNeutralHadronPt;   //!
   TBranch        *b_Tau_SubLeadingMuonsumPFPhotonPt;   //!
   TBranch        *b_Tau_SubLeadingMuonsumPUPt;   //!
   TBranch        *b_Tau_SubLeadingMuontausumPFChargedHadronPt;   //!
   TBranch        *b_Tau_SubLeadingMuontausumPFNeutralHadronPt;   //!
   TBranch        *b_Tau_SubLeadingMuontausumPFPhotonPt;   //!
   TBranch        *b_Tau_SubSubLeadingElectronCorrIso;   //!
   TBranch        *b_Tau_SubSubLeadingElectronEta;   //!
   TBranch        *b_Tau_SubSubLeadingElectronM;   //!
   TBranch        *b_Tau_SubSubLeadingElectronPt;   //!
   TBranch        *b_Tau_SubSubLeadingElectrondelR;   //!
   TBranch        *b_Tau_SubSubLeadingElectronea;   //!
   TBranch        *b_Tau_SubSubLeadingElectronrho;   //!
   TBranch        *b_Tau_SubSubLeadingElectronsumPFChargedHadronPt;   //!
   TBranch        *b_Tau_SubSubLeadingElectronsumPFNeutralHadronPt;   //!
   TBranch        *b_Tau_SubSubLeadingElectronsumPFPhotonPt;   //!
   TBranch        *b_Tau_SubSubLeadingElectrontausumPFChargedHadronPt;   //!
   TBranch        *b_Tau_SubSubLeadingElectrontausumPFNeutralHadronPt;   //!
   TBranch        *b_Tau_SubSubLeadingElectrontausumPFPhotonPt;   //!
   TBranch        *b_Tau_SubSubLeadingMuonCorrIso;   //!
   TBranch        *b_Tau_SubSubLeadingMuonEta;   //!
   TBranch        *b_Tau_SubSubLeadingMuonPhi;   //!
   TBranch        *b_Tau_SubSubLeadingMuonPt;   //!
   TBranch        *b_Tau_SubSubLeadingMuondelR;   //!
   TBranch        *b_Tau_SubSubLeadingMuonsumPFChargedHadronPt;   //!
   TBranch        *b_Tau_SubSubLeadingMuonsumPFNeutralHadronPt;   //!
   TBranch        *b_Tau_SubSubLeadingMuonsumPFPhotonPt;   //!
   TBranch        *b_Tau_SubSubLeadingMuonsumPUPt;   //!
   TBranch        *b_Tau_SubSubLeadingMuontausumPFChargedHadronPt;   //!
   TBranch        *b_Tau_SubSubLeadingMuontausumPFNeutralHadronPt;   //!
   TBranch        *b_Tau_SubSubLeadingMuontausumPFPhotonPt;   //!
   TBranch        *b_Tau_chargedIso;   //!
   TBranch        *b_Tau_dxy;   //!
   TBranch        *b_Tau_dz;   //!
   TBranch        *b_Tau_eta;   //!
   TBranch        *b_Tau_leadTkDeltaEta;   //!
   TBranch        *b_Tau_leadTkDeltaPhi;   //!
   TBranch        *b_Tau_leadTkPtOverTauPt;   //!
   TBranch        *b_Tau_mass;   //!
   TBranch        *b_Tau_neutralIso;   //!
   TBranch        *b_Tau_phi;   //!
   TBranch        *b_Tau_photonsOutsideSignalCone;   //!
   TBranch        *b_Tau_probDM0PNet;   //!
   TBranch        *b_Tau_probDM10PNet;   //!
   TBranch        *b_Tau_probDM11PNet;   //!
   TBranch        *b_Tau_probDM1PNet;   //!
   TBranch        *b_Tau_probDM2PNet;   //!
   TBranch        *b_Tau_pt;   //!
   TBranch        *b_Tau_ptCorrPNet;   //!
   TBranch        *b_Tau_puCorr;   //!
   TBranch        *b_Tau_qConfPNet;   //!
   TBranch        *b_Tau_rawDeepTau2017v2p1VSe;   //!
   TBranch        *b_Tau_rawDeepTau2017v2p1VSjet;   //!
   TBranch        *b_Tau_rawDeepTau2017v2p1VSmu;   //!
   TBranch        *b_Tau_rawDeepTau2018v2p5VSe;   //!
   TBranch        *b_Tau_rawDeepTau2018v2p5VSjet;   //!
   TBranch        *b_Tau_rawDeepTau2018v2p5VSmu;   //!
   TBranch        *b_Tau_rawIso;   //!
   TBranch        *b_Tau_rawIsodR03;   //!
   TBranch        *b_Tau_rawPNetVSe;   //!
   TBranch        *b_Tau_rawPNetVSjet;   //!
   TBranch        *b_Tau_rawPNetVSmu;   //!
   TBranch        *b_TkMET_phi;   //!
   TBranch        *b_TkMET_pt;   //!
   TBranch        *b_TkMET_sumEt;   //!
   TBranch        *b_nTrigObj;   //!
   TBranch        *b_TrigObj_l1charge;   //!
   TBranch        *b_TrigObj_id;   //!
   TBranch        *b_TrigObj_l1iso;   //!
   TBranch        *b_TrigObj_filterBits;   //!
   TBranch        *b_TrigObj_pt;   //!
   TBranch        *b_TrigObj_eta;   //!
   TBranch        *b_TrigObj_phi;   //!
   TBranch        *b_TrigObj_l1pt;   //!
   TBranch        *b_TrigObj_l1pt_2;   //!
   TBranch        *b_TrigObj_l2pt;   //!
   TBranch        *b_genTtbarId;   //!
   TBranch        *b_nOtherPV;   //!
   TBranch        *b_OtherPV_z;   //!
   TBranch        *b_OtherPV_score;   //!
   TBranch        *b_PV_npvs;   //!
   TBranch        *b_PV_npvsGood;   //!
   TBranch        *b_PV_ndof;   //!
   TBranch        *b_PV_x;   //!
   TBranch        *b_PV_y;   //!
   TBranch        *b_PV_z;   //!
   TBranch        *b_PV_chi2;   //!
   TBranch        *b_PV_score;   //!
   TBranch        *b_nSV;   //!
   TBranch        *b_SV_charge;   //!
   TBranch        *b_SV_dlen;   //!
   TBranch        *b_SV_dlenSig;   //!
   TBranch        *b_SV_dxy;   //!
   TBranch        *b_SV_dxySig;   //!
   TBranch        *b_SV_pAngle;   //!
   TBranch        *b_boostedTau_genPartFlav;   //!
   TBranch        *b_boostedTau_genPartIdx;   //!
   TBranch        *b_Electron_genPartFlav;   //!
   TBranch        *b_Electron_genPartIdx;   //!
   TBranch        *b_FatJet_hadronFlavour;   //!
   TBranch        *b_FatJet_nBHadrons;   //!
   TBranch        *b_FatJet_nCHadrons;   //!
   TBranch        *b_FatJet_genJetAK8Idx;   //!
   TBranch        *b_GenJetAK8_hadronFlavour;   //!
   TBranch        *b_GenJetAK8_partonFlavour;   //!
   TBranch        *b_GenJet_hadronFlavour;   //!
   TBranch        *b_GenJet_partonFlavour;   //!
   TBranch        *b_GenVtx_t0;   //!
   TBranch        *b_Jet_hadronFlavour;   //!
   TBranch        *b_Jet_genJetIdx;   //!
   TBranch        *b_Jet_partonFlavour;   //!
   TBranch        *b_LowPtElectron_genPartFlav;   //!
   TBranch        *b_LowPtElectron_genPartIdx;   //!
   TBranch        *b_Muon_genPartFlav;   //!
   TBranch        *b_Muon_genPartIdx;   //!
   TBranch        *b_Photon_genPartFlav;   //!
   TBranch        *b_Photon_genPartIdx;   //!
   TBranch        *b_MET_fiducialGenPhi;   //!
   TBranch        *b_MET_fiducialGenPt;   //!
   TBranch        *b_SubJet_hadronFlavour;   //!
   TBranch        *b_SubJet_nBHadrons;   //!
   TBranch        *b_SubJet_nCHadrons;   //!
   TBranch        *b_SV_ntracks;   //!
   TBranch        *b_SV_chi2;   //!
   TBranch        *b_SV_eta;   //!
   TBranch        *b_SV_mass;   //!
   TBranch        *b_SV_ndof;   //!
   TBranch        *b_SV_phi;   //!
   TBranch        *b_SV_pt;   //!
   TBranch        *b_SV_x;   //!
   TBranch        *b_SV_y;   //!
   TBranch        *b_SV_z;   //!
   TBranch        *b_Tau_genPartFlav;   //!
   TBranch        *b_Tau_genPartIdx;   //!
   TBranch        *b_L1_AlwaysTrue;   //!
   TBranch        *b_L1_BPTX_AND_Ref1_VME;   //!
   TBranch        *b_L1_BPTX_AND_Ref3_VME;   //!
   TBranch        *b_L1_BPTX_AND_Ref4_VME;   //!
   TBranch        *b_L1_BPTX_BeamGas_B1_VME;   //!
   TBranch        *b_L1_BPTX_BeamGas_B2_VME;   //!
   TBranch        *b_L1_BPTX_BeamGas_Ref1_VME;   //!
   TBranch        *b_L1_BPTX_BeamGas_Ref2_VME;   //!
   TBranch        *b_L1_BPTX_NotOR_VME;   //!
   TBranch        *b_L1_BPTX_OR_Ref3_VME;   //!
   TBranch        *b_L1_BPTX_OR_Ref4_VME;   //!
   TBranch        *b_L1_BPTX_RefAND_VME;   //!
   TBranch        *b_L1_BptxMinus;   //!
   TBranch        *b_L1_BptxOR;   //!
   TBranch        *b_L1_BptxPlus;   //!
   TBranch        *b_L1_BptxXOR;   //!
   TBranch        *b_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142;   //!
   TBranch        *b_L1_DoubleEG8er2p5_HTT260er;   //!
   TBranch        *b_L1_DoubleEG8er2p5_HTT280er;   //!
   TBranch        *b_L1_DoubleEG8er2p5_HTT300er;   //!
   TBranch        *b_L1_DoubleEG8er2p5_HTT320er;   //!
   TBranch        *b_L1_DoubleEG8er2p5_HTT340er;   //!
   TBranch        *b_L1_DoubleEG_15_10_er2p5;   //!
   TBranch        *b_L1_DoubleEG_20_10_er2p5;   //!
   TBranch        *b_L1_DoubleEG_22_10_er2p5;   //!
   TBranch        *b_L1_DoubleEG_25_12_er2p5;   //!
   TBranch        *b_L1_DoubleEG_25_14_er2p5;   //!
   TBranch        *b_L1_DoubleEG_27_14_er2p5;   //!
   TBranch        *b_L1_DoubleEG_LooseIso20_10_er2p5;   //!
   TBranch        *b_L1_DoubleEG_LooseIso22_10_er2p5;   //!
   TBranch        *b_L1_DoubleEG_LooseIso22_12_er2p5;   //!
   TBranch        *b_L1_DoubleEG_LooseIso25_12_er2p5;   //!
   TBranch        *b_L1_DoubleIsoTau32er2p1;   //!
   TBranch        *b_L1_DoubleIsoTau34er2p1;   //!
   TBranch        *b_L1_DoubleIsoTau36er2p1;   //!
   TBranch        *b_L1_DoubleJet100er2p3_dEta_Max1p6;   //!
   TBranch        *b_L1_DoubleJet100er2p5;   //!
   TBranch        *b_L1_DoubleJet112er2p3_dEta_Max1p6;   //!
   TBranch        *b_L1_DoubleJet120er2p5;   //!
   TBranch        *b_L1_DoubleJet150er2p5;   //!
   TBranch        *b_L1_DoubleJet30er2p5_Mass_Min150_dEta_Max1p5;   //!
   TBranch        *b_L1_DoubleJet30er2p5_Mass_Min200_dEta_Max1p5;   //!
   TBranch        *b_L1_DoubleJet30er2p5_Mass_Min250_dEta_Max1p5;   //!
   TBranch        *b_L1_DoubleJet30er2p5_Mass_Min300_dEta_Max1p5;   //!
   TBranch        *b_L1_DoubleJet30er2p5_Mass_Min330_dEta_Max1p5;   //!
   TBranch        *b_L1_DoubleJet30er2p5_Mass_Min360_dEta_Max1p5;   //!
   TBranch        *b_L1_DoubleJet35_Mass_Min450_IsoTau45_RmOvlp;   //!
   TBranch        *b_L1_DoubleJet40er2p5;   //!
   TBranch        *b_L1_DoubleJet_100_30_DoubleJet30_Mass_Min620;   //!
   TBranch        *b_L1_DoubleJet_110_35_DoubleJet35_Mass_Min620;   //!
   TBranch        *b_L1_DoubleJet_115_40_DoubleJet40_Mass_Min620;   //!
   TBranch        *b_L1_DoubleJet_115_40_DoubleJet40_Mass_Min620_Jet60TT28;   //!
   TBranch        *b_L1_DoubleJet_120_45_DoubleJet45_Mass_Min620;   //!
   TBranch        *b_L1_DoubleJet_120_45_DoubleJet45_Mass_Min620_Jet60TT28;   //!
   TBranch        *b_L1_DoubleJet_80_30_Mass_Min420_DoubleMu0_SQ;   //!
   TBranch        *b_L1_DoubleJet_80_30_Mass_Min420_IsoTau40_RmOvlp;   //!
   TBranch        *b_L1_DoubleJet_80_30_Mass_Min420_Mu8;   //!
   TBranch        *b_L1_DoubleJet_90_30_DoubleJet30_Mass_Min620;   //!
   TBranch        *b_L1_DoubleLooseIsoEG22er2p1;   //!
   TBranch        *b_L1_DoubleLooseIsoEG24er2p1;   //!
   TBranch        *b_L1_DoubleMu0;   //!
   TBranch        *b_L1_DoubleMu0_Mass_Min1;   //!
   TBranch        *b_L1_DoubleMu0_OQ;   //!
   TBranch        *b_L1_DoubleMu0_SQ;   //!
   TBranch        *b_L1_DoubleMu0_SQ_OS;   //!
   TBranch        *b_L1_DoubleMu0_dR_Max1p6_Jet90er2p5_dR_Max0p8;   //!
   TBranch        *b_L1_DoubleMu0er1p4_SQ_OS_dR_Max1p4;   //!
   TBranch        *b_L1_DoubleMu0er1p5_SQ;   //!
   TBranch        *b_L1_DoubleMu0er1p5_SQ_OS;   //!
   TBranch        *b_L1_DoubleMu0er1p5_SQ_OS_dR_Max1p4;   //!
   TBranch        *b_L1_DoubleMu0er1p5_SQ_dR_Max1p4;   //!
   TBranch        *b_L1_DoubleMu0er2p0_SQ_OS_dR_Max1p4;   //!
   TBranch        *b_L1_DoubleMu0er2p0_SQ_dR_Max1p4;   //!
   TBranch        *b_L1_DoubleMu10_SQ;   //!
   TBranch        *b_L1_DoubleMu18er2p1;   //!
   TBranch        *b_L1_DoubleMu3_OS_DoubleEG7p5Upsilon;   //!
   TBranch        *b_L1_DoubleMu3_SQ_ETMHF50_HTT60er;   //!
   TBranch        *b_L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5;   //!
   TBranch        *b_L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5_OR_DoubleJet40er2p5;   //!
   TBranch        *b_L1_DoubleMu3_SQ_ETMHF60_Jet60er2p5;   //!
   TBranch        *b_L1_DoubleMu3_SQ_HTT220er;   //!
   TBranch        *b_L1_DoubleMu3_SQ_HTT240er;   //!
   TBranch        *b_L1_DoubleMu3_SQ_HTT260er;   //!
   TBranch        *b_L1_DoubleMu3_dR_Max1p6_Jet90er2p5_dR_Max0p8;   //!
   TBranch        *b_L1_DoubleMu4_SQ_EG9er2p5;   //!
   TBranch        *b_L1_DoubleMu4_SQ_OS;   //!
   TBranch        *b_L1_DoubleMu4_SQ_OS_dR_Max1p2;   //!
   TBranch        *b_L1_DoubleMu4p5_SQ_OS;   //!
   TBranch        *b_L1_DoubleMu4p5_SQ_OS_dR_Max1p2;   //!
   TBranch        *b_L1_DoubleMu4p5er2p0_SQ_OS;   //!
   TBranch        *b_L1_DoubleMu4p5er2p0_SQ_OS_Mass7to18;   //!
   TBranch        *b_L1_DoubleMu5Upsilon_OS_DoubleEG3;   //!
   TBranch        *b_L1_DoubleMu5_SQ_EG9er2p5;   //!
   TBranch        *b_L1_DoubleMu9_SQ;   //!
   TBranch        *b_L1_DoubleMu_12_5;   //!
   TBranch        *b_L1_DoubleMu_15_5_SQ;   //!
   TBranch        *b_L1_DoubleMu_15_7;   //!
   TBranch        *b_L1_DoubleMu_15_7_Mass_Min1;   //!
   TBranch        *b_L1_DoubleMu_15_7_SQ;   //!
   TBranch        *b_L1_DoubleTau70er2p1;   //!
   TBranch        *b_L1_ETM120;   //!
   TBranch        *b_L1_ETM150;   //!
   TBranch        *b_L1_ETMHF100;   //!
   TBranch        *b_L1_ETMHF100_HTT60er;   //!
   TBranch        *b_L1_ETMHF110;   //!
   TBranch        *b_L1_ETMHF110_HTT60er;   //!
   TBranch        *b_L1_ETMHF110_HTT60er_NotSecondBunchInTrain;   //!
   TBranch        *b_L1_ETMHF120;   //!
   TBranch        *b_L1_ETMHF120_HTT60er;   //!
   TBranch        *b_L1_ETMHF120_NotSecondBunchInTrain;   //!
   TBranch        *b_L1_ETMHF130;   //!
   TBranch        *b_L1_ETMHF130_HTT60er;   //!
   TBranch        *b_L1_ETMHF140;   //!
   TBranch        *b_L1_ETMHF150;   //!
   TBranch        *b_L1_ETMHF90_HTT60er;   //!
   TBranch        *b_L1_ETT1200;   //!
   TBranch        *b_L1_ETT1600;   //!
   TBranch        *b_L1_ETT2000;   //!
   TBranch        *b_L1_FirstBunchAfterTrain;   //!
   TBranch        *b_L1_FirstBunchBeforeTrain;   //!
   TBranch        *b_L1_FirstBunchInTrain;   //!
   TBranch        *b_L1_FirstCollisionInOrbit;   //!
   TBranch        *b_L1_FirstCollisionInTrain;   //!
   TBranch        *b_L1_HCAL_LaserMon_Trig;   //!
   TBranch        *b_L1_HCAL_LaserMon_Veto;   //!
   TBranch        *b_L1_HTT120er;   //!
   TBranch        *b_L1_HTT160er;   //!
   TBranch        *b_L1_HTT200er;   //!
   TBranch        *b_L1_HTT255er;   //!
   TBranch        *b_L1_HTT280er;   //!
   TBranch        *b_L1_HTT280er_QuadJet_70_55_40_35_er2p4;   //!
   TBranch        *b_L1_HTT320er;   //!
   TBranch        *b_L1_HTT320er_QuadJet_70_55_40_40_er2p4;   //!
   TBranch        *b_L1_HTT320er_QuadJet_80_60_er2p1_45_40_er2p3;   //!
   TBranch        *b_L1_HTT320er_QuadJet_80_60_er2p1_50_45_er2p3;   //!
   TBranch        *b_L1_HTT360er;   //!
   TBranch        *b_L1_HTT400er;   //!
   TBranch        *b_L1_HTT450er;   //!
   TBranch        *b_L1_IsoEG32er2p5_Mt40;   //!
   TBranch        *b_L1_IsoEG32er2p5_Mt44;   //!
   TBranch        *b_L1_IsoEG32er2p5_Mt48;   //!
   TBranch        *b_L1_IsoTau40er2p1_ETMHF100;   //!
   TBranch        *b_L1_IsoTau40er2p1_ETMHF110;   //!
   TBranch        *b_L1_IsoTau40er2p1_ETMHF120;   //!
   TBranch        *b_L1_IsoTau40er2p1_ETMHF90;   //!
   TBranch        *b_L1_IsolatedBunch;   //!
   TBranch        *b_L1_LastBunchInTrain;   //!
   TBranch        *b_L1_LastCollisionInTrain;   //!
   TBranch        *b_L1_LooseIsoEG22er2p1_IsoTau26er2p1_dR_Min0p3;   //!
   TBranch        *b_L1_LooseIsoEG22er2p1_Tau70er2p1_dR_Min0p3;   //!
   TBranch        *b_L1_LooseIsoEG24er2p1_HTT100er;   //!
   TBranch        *b_L1_LooseIsoEG24er2p1_IsoTau27er2p1_dR_Min0p3;   //!
   TBranch        *b_L1_LooseIsoEG26er2p1_HTT100er;   //!
   TBranch        *b_L1_LooseIsoEG26er2p1_Jet34er2p5_dR_Min0p3;   //!
   TBranch        *b_L1_LooseIsoEG28er2p1_HTT100er;   //!
   TBranch        *b_L1_LooseIsoEG28er2p1_Jet34er2p5_dR_Min0p3;   //!
   TBranch        *b_L1_LooseIsoEG30er2p1_HTT100er;   //!
   TBranch        *b_L1_LooseIsoEG30er2p1_Jet34er2p5_dR_Min0p3;   //!
   TBranch        *b_L1_MinimumBiasHF0_AND_BptxAND;   //!
   TBranch        *b_L1_Mu10er2p3_Jet32er2p3_dR_Max0p4_DoubleJet32er2p3_dEta_Max1p6;   //!
   TBranch        *b_L1_Mu12er2p3_Jet40er2p1_dR_Max0p4_DoubleJet40er2p1_dEta_Max1p6;   //!
   TBranch        *b_L1_Mu12er2p3_Jet40er2p3_dR_Max0p4_DoubleJet40er2p3_dEta_Max1p6;   //!
   TBranch        *b_L1_Mu18er2p1_Tau24er2p1;   //!
   TBranch        *b_L1_Mu18er2p1_Tau26er2p1;   //!
   TBranch        *b_L1_Mu20_EG10er2p5;   //!
   TBranch        *b_L1_Mu22er2p1_IsoTau32er2p1;   //!
   TBranch        *b_L1_Mu22er2p1_IsoTau34er2p1;   //!
   TBranch        *b_L1_Mu22er2p1_IsoTau36er2p1;   //!
   TBranch        *b_L1_Mu22er2p1_IsoTau40er2p1;   //!
   TBranch        *b_L1_Mu22er2p1_Tau70er2p1;   //!
   TBranch        *b_L1_Mu3_Jet120er2p5_dR_Max0p4;   //!
   TBranch        *b_L1_Mu3_Jet120er2p5_dR_Max0p8;   //!
   TBranch        *b_L1_Mu3_Jet16er2p5_dR_Max0p4;   //!
   TBranch        *b_L1_Mu3_Jet30er2p5;   //!
   TBranch        *b_L1_Mu3_Jet35er2p5_dR_Max0p4;   //!
   TBranch        *b_L1_Mu3_Jet60er2p5_dR_Max0p4;   //!
   TBranch        *b_L1_Mu3_Jet80er2p5_dR_Max0p4;   //!
   TBranch        *b_L1_Mu3er1p5_Jet100er2p5_ETMHF40;   //!
   TBranch        *b_L1_Mu3er1p5_Jet100er2p5_ETMHF50;   //!
   TBranch        *b_L1_Mu5_EG23er2p5;   //!
   TBranch        *b_L1_Mu5_LooseIsoEG20er2p5;   //!
   TBranch        *b_L1_Mu6_DoubleEG10er2p5;   //!
   TBranch        *b_L1_Mu6_DoubleEG12er2p5;   //!
   TBranch        *b_L1_Mu6_DoubleEG15er2p5;   //!
   TBranch        *b_L1_Mu6_DoubleEG17er2p5;   //!
   TBranch        *b_L1_Mu6_HTT240er;   //!
   TBranch        *b_L1_Mu6_HTT250er;   //!
   TBranch        *b_L1_Mu7_EG23er2p5;   //!
   TBranch        *b_L1_Mu7_LooseIsoEG20er2p5;   //!
   TBranch        *b_L1_Mu7_LooseIsoEG23er2p5;   //!
   TBranch        *b_L1_NotBptxOR;   //!
   TBranch        *b_L1_QuadJet36er2p5_IsoTau52er2p1;   //!
   TBranch        *b_L1_QuadJet60er2p5;   //!
   TBranch        *b_L1_QuadJet_95_75_65_20_DoubleJet_75_65_er2p5_Jet20_FWD3p0;   //!
   TBranch        *b_L1_QuadMu0;   //!
   TBranch        *b_L1_QuadMu0_OQ;   //!
   TBranch        *b_L1_QuadMu0_SQ;   //!
   TBranch        *b_L1_SecondBunchInTrain;   //!
   TBranch        *b_L1_SecondLastBunchInTrain;   //!
   TBranch        *b_L1_SingleEG10er2p5;   //!
   TBranch        *b_L1_SingleEG15er2p5;   //!
   TBranch        *b_L1_SingleEG26er2p5;   //!
   TBranch        *b_L1_SingleEG34er2p5;   //!
   TBranch        *b_L1_SingleEG36er2p5;   //!
   TBranch        *b_L1_SingleEG38er2p5;   //!
   TBranch        *b_L1_SingleEG40er2p5;   //!
   TBranch        *b_L1_SingleEG42er2p5;   //!
   TBranch        *b_L1_SingleEG45er2p5;   //!
   TBranch        *b_L1_SingleEG50;   //!
   TBranch        *b_L1_SingleEG60;   //!
   TBranch        *b_L1_SingleEG8er2p5;   //!
   TBranch        *b_L1_SingleIsoEG24er1p5;   //!
   TBranch        *b_L1_SingleIsoEG24er2p1;   //!
   TBranch        *b_L1_SingleIsoEG26er1p5;   //!
   TBranch        *b_L1_SingleIsoEG26er2p1;   //!
   TBranch        *b_L1_SingleIsoEG26er2p5;   //!
   TBranch        *b_L1_SingleIsoEG28er1p5;   //!
   TBranch        *b_L1_SingleIsoEG28er2p1;   //!
   TBranch        *b_L1_SingleIsoEG28er2p5;   //!
   TBranch        *b_L1_SingleIsoEG30er2p1;   //!
   TBranch        *b_L1_SingleIsoEG30er2p5;   //!
   TBranch        *b_L1_SingleIsoEG32er2p1;   //!
   TBranch        *b_L1_SingleIsoEG32er2p5;   //!
   TBranch        *b_L1_SingleIsoEG34er2p5;   //!
   TBranch        *b_L1_SingleJet10erHE;   //!
   TBranch        *b_L1_SingleJet120;   //!
   TBranch        *b_L1_SingleJet120_FWD3p0;   //!
   TBranch        *b_L1_SingleJet120er2p5;   //!
   TBranch        *b_L1_SingleJet12erHE;   //!
   TBranch        *b_L1_SingleJet140er2p5;   //!
   TBranch        *b_L1_SingleJet140er2p5_ETMHF80;   //!
   TBranch        *b_L1_SingleJet140er2p5_ETMHF90;   //!
   TBranch        *b_L1_SingleJet160er2p5;   //!
   TBranch        *b_L1_SingleJet180;   //!
   TBranch        *b_L1_SingleJet180er2p5;   //!
   TBranch        *b_L1_SingleJet200;   //!
   TBranch        *b_L1_SingleJet20er2p5_NotBptxOR;   //!
   TBranch        *b_L1_SingleJet20er2p5_NotBptxOR_3BX;   //!
   TBranch        *b_L1_SingleJet35;   //!
   TBranch        *b_L1_SingleJet35_FWD3p0;   //!
   TBranch        *b_L1_SingleJet35er2p5;   //!
   TBranch        *b_L1_SingleJet43er2p5_NotBptxOR_3BX;   //!
   TBranch        *b_L1_SingleJet46er2p5_NotBptxOR_3BX;   //!
   TBranch        *b_L1_SingleJet60;   //!
   TBranch        *b_L1_SingleJet60_FWD3p0;   //!
   TBranch        *b_L1_SingleJet60er2p5;   //!
   TBranch        *b_L1_SingleJet8erHE;   //!
   TBranch        *b_L1_SingleJet90;   //!
   TBranch        *b_L1_SingleJet90_FWD3p0;   //!
   TBranch        *b_L1_SingleJet90er2p5;   //!
   TBranch        *b_L1_SingleLooseIsoEG28er1p5;   //!
   TBranch        *b_L1_SingleLooseIsoEG30er1p5;   //!
   TBranch        *b_L1_SingleMu0_BMTF;   //!
   TBranch        *b_L1_SingleMu0_DQ;   //!
   TBranch        *b_L1_SingleMu0_EMTF;   //!
   TBranch        *b_L1_SingleMu0_OMTF;   //!
   TBranch        *b_L1_SingleMu10er1p5;   //!
   TBranch        *b_L1_SingleMu12_DQ_BMTF;   //!
   TBranch        *b_L1_SingleMu12_DQ_EMTF;   //!
   TBranch        *b_L1_SingleMu12_DQ_OMTF;   //!
   TBranch        *b_L1_SingleMu12er1p5;   //!
   TBranch        *b_L1_SingleMu14er1p5;   //!
   TBranch        *b_L1_SingleMu15_DQ;   //!
   TBranch        *b_L1_SingleMu16er1p5;   //!
   TBranch        *b_L1_SingleMu18;   //!
   TBranch        *b_L1_SingleMu18er1p5;   //!
   TBranch        *b_L1_SingleMu20;   //!
   TBranch        *b_L1_SingleMu22;   //!
   TBranch        *b_L1_SingleMu22_BMTF;   //!
   TBranch        *b_L1_SingleMu22_EMTF;   //!
   TBranch        *b_L1_SingleMu22_OMTF;   //!
   TBranch        *b_L1_SingleMu25;   //!
   TBranch        *b_L1_SingleMu3;   //!
   TBranch        *b_L1_SingleMu5;   //!
   TBranch        *b_L1_SingleMu6er1p5;   //!
   TBranch        *b_L1_SingleMu7;   //!
   TBranch        *b_L1_SingleMu7_DQ;   //!
   TBranch        *b_L1_SingleMu7er1p5;   //!
   TBranch        *b_L1_SingleMu8er1p5;   //!
   TBranch        *b_L1_SingleMu9er1p5;   //!
   TBranch        *b_L1_SingleMuCosmics;   //!
   TBranch        *b_L1_SingleMuCosmics_BMTF;   //!
   TBranch        *b_L1_SingleMuCosmics_EMTF;   //!
   TBranch        *b_L1_SingleMuCosmics_OMTF;   //!
   TBranch        *b_L1_SingleMuOpen;   //!
   TBranch        *b_L1_SingleMuOpen_NotBptxOR;   //!
   TBranch        *b_L1_SingleMuOpen_er1p1_NotBptxOR_3BX;   //!
   TBranch        *b_L1_SingleMuOpen_er1p4_NotBptxOR_3BX;   //!
   TBranch        *b_L1_SingleTau120er2p1;   //!
   TBranch        *b_L1_SingleTau130er2p1;   //!
   TBranch        *b_L1_TOTEM_1;   //!
   TBranch        *b_L1_TOTEM_2;   //!
   TBranch        *b_L1_TOTEM_3;   //!
   TBranch        *b_L1_TOTEM_4;   //!
   TBranch        *b_L1_TripleEG16er2p5;   //!
   TBranch        *b_L1_TripleEG_16_12_8_er2p5;   //!
   TBranch        *b_L1_TripleEG_16_15_8_er2p5;   //!
   TBranch        *b_L1_TripleEG_18_17_8_er2p5;   //!
   TBranch        *b_L1_TripleEG_18_18_12_er2p5;   //!
   TBranch        *b_L1_TripleJet_100_80_70_DoubleJet_80_70_er2p5;   //!
   TBranch        *b_L1_TripleJet_105_85_75_DoubleJet_85_75_er2p5;   //!
   TBranch        *b_L1_TripleJet_95_75_65_DoubleJet_75_65_er2p5;   //!
   TBranch        *b_L1_TripleMu0;   //!
   TBranch        *b_L1_TripleMu0_OQ;   //!
   TBranch        *b_L1_TripleMu0_SQ;   //!
   TBranch        *b_L1_TripleMu3;   //!
   TBranch        *b_L1_TripleMu3_SQ;   //!
   TBranch        *b_L1_TripleMu_5SQ_3SQ_0OQ;   //!
   TBranch        *b_L1_TripleMu_5SQ_3SQ_0OQ_DoubleMu_5_3_SQ_OS_Mass_Max9;   //!
   TBranch        *b_L1_TripleMu_5SQ_3SQ_0_DoubleMu_5_3_SQ_OS_Mass_Max9;   //!
   TBranch        *b_L1_TripleMu_5_3_3;   //!
   TBranch        *b_L1_TripleMu_5_3_3_SQ;   //!
   TBranch        *b_L1_TripleMu_5_3p5_2p5;   //!
   TBranch        *b_L1_TripleMu_5_3p5_2p5_DoubleMu_5_2p5_OS_Mass_5to17;   //!
   TBranch        *b_L1_TripleMu_5_3p5_2p5_OQ_DoubleMu_5_2p5_OQ_OS_Mass_5to17;   //!
   TBranch        *b_L1_TripleMu_5_4_2p5_DoubleMu_5_2p5_OS_Mass_5to17;   //!
   TBranch        *b_L1_TripleMu_5_5_3;   //!
   TBranch        *b_L1_UnpairedBunchBptxMinus;   //!
   TBranch        *b_L1_UnpairedBunchBptxPlus;   //!
   TBranch        *b_L1_ZeroBias;   //!
   TBranch        *b_L1_ZeroBias_copy;   //!
   TBranch        *b_L1_UnprefireableEvent;   //!
   TBranch        *b_Flag_HBHENoiseFilter;   //!
   TBranch        *b_Flag_HBHENoiseIsoFilter;   //!
   TBranch        *b_Flag_CSCTightHaloFilter;   //!
   TBranch        *b_Flag_CSCTightHaloTrkMuUnvetoFilter;   //!
   TBranch        *b_Flag_CSCTightHalo2015Filter;   //!
   TBranch        *b_Flag_globalTightHalo2016Filter;   //!
   TBranch        *b_Flag_globalSuperTightHalo2016Filter;   //!
   TBranch        *b_Flag_HcalStripHaloFilter;   //!
   TBranch        *b_Flag_hcalLaserEventFilter;   //!
   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_Flag_EcalDeadCellBoundaryEnergyFilter;   //!
   TBranch        *b_Flag_ecalBadCalibFilter;   //!
   TBranch        *b_Flag_goodVertices;   //!
   TBranch        *b_Flag_eeBadScFilter;   //!
   TBranch        *b_Flag_ecalLaserCorrFilter;   //!
   TBranch        *b_Flag_trkPOGFilters;   //!
   TBranch        *b_Flag_chargedHadronTrackResolutionFilter;   //!
   TBranch        *b_Flag_muonBadTrackFilter;   //!
   TBranch        *b_Flag_BadChargedCandidateFilter;   //!
   TBranch        *b_Flag_BadPFMuonFilter;   //!
   TBranch        *b_Flag_BadPFMuonDzFilter;   //!
   TBranch        *b_Flag_hfNoisyHitsFilter;   //!
   TBranch        *b_Flag_BadChargedCandidateSummer16Filter;   //!
   TBranch        *b_Flag_BadPFMuonSummer16Filter;   //!
   TBranch        *b_Flag_trkPOG_manystripclus53X;   //!
   TBranch        *b_Flag_trkPOG_toomanystripclus53X;   //!
   TBranch        *b_Flag_trkPOG_logErrorTooManyClusters;   //!
   TBranch        *b_Flag_METFilters;   //!
   TBranch        *b_L1Reco_step;   //!
   TBranch        *b_HLTriggerFirstPath;   //!
   TBranch        *b_HLT_AK8PFJet360_TrimMass30;   //!
   TBranch        *b_HLT_AK8PFJet380_TrimMass30;   //!
   TBranch        *b_HLT_AK8PFJet400_TrimMass30;   //!
   TBranch        *b_HLT_AK8PFJet420_TrimMass30;   //!
   TBranch        *b_HLT_AK8PFHT750_TrimMass50;   //!
   TBranch        *b_HLT_AK8PFHT800_TrimMass50;   //!
   TBranch        *b_HLT_AK8PFHT850_TrimMass50;   //!
   TBranch        *b_HLT_AK8PFHT900_TrimMass50;   //!
   TBranch        *b_HLT_CaloJet500_NoJetID;   //!
   TBranch        *b_HLT_CaloJet550_NoJetID;   //!
   TBranch        *b_HLT_DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL;   //!
   TBranch        *b_HLT_DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon;   //!
   TBranch        *b_HLT_Trimuon5_3p5_2_Upsilon_Muon;   //!
   TBranch        *b_HLT_TrimuonOpen_5_3p5_2_Upsilon_Muon;   //!
   TBranch        *b_HLT_DoubleEle25_CaloIdL_MW;   //!
   TBranch        *b_HLT_DoubleEle27_CaloIdL_MW;   //!
   TBranch        *b_HLT_DoubleEle33_CaloIdL_MW;   //!
   TBranch        *b_HLT_DoubleEle24_eta2p1_WPTight_Gsf;   //!
   TBranch        *b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350;   //!
   TBranch        *b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350;   //!
   TBranch        *b_HLT_Ele27_Ele37_CaloIdL_MW;   //!
   TBranch        *b_HLT_Mu27_Ele37_CaloIdL_MW;   //!
   TBranch        *b_HLT_Mu37_Ele27_CaloIdL_MW;   //!
   TBranch        *b_HLT_Mu37_TkMu27;   //!
   TBranch        *b_HLT_DoubleMu4_3_Bs;   //!
   TBranch        *b_HLT_DoubleMu4_3_Jpsi;   //!
   TBranch        *b_HLT_DoubleMu4_JpsiTrk_Displaced;   //!
   TBranch        *b_HLT_DoubleMu4_LowMassNonResonantTrk_Displaced;   //!
   TBranch        *b_HLT_DoubleMu3_Trk_Tau3mu;   //!
   TBranch        *b_HLT_DoubleMu3_TkMu_DsTau3Mu;   //!
   TBranch        *b_HLT_DoubleMu4_PsiPrimeTrk_Displaced;   //!
   TBranch        *b_HLT_DoubleMu4_Mass3p8_DZ_PFHT350;   //!
   TBranch        *b_HLT_Mu3_PFJet40;   //!
   TBranch        *b_HLT_Mu7p5_L2Mu2_Jpsi;   //!
   TBranch        *b_HLT_Mu7p5_L2Mu2_Upsilon;   //!
   TBranch        *b_HLT_Mu7p5_Track2_Jpsi;   //!
   TBranch        *b_HLT_Mu7p5_Track3p5_Jpsi;   //!
   TBranch        *b_HLT_Mu7p5_Track7_Jpsi;   //!
   TBranch        *b_HLT_Mu7p5_Track2_Upsilon;   //!
   TBranch        *b_HLT_Mu7p5_Track3p5_Upsilon;   //!
   TBranch        *b_HLT_Mu7p5_Track7_Upsilon;   //!
   TBranch        *b_HLT_Mu3_L1SingleMu5orSingleMu7;   //!
   TBranch        *b_HLT_DoublePhoton33_CaloIdL;   //!
   TBranch        *b_HLT_DoublePhoton70;   //!
   TBranch        *b_HLT_DoublePhoton85;   //!
   TBranch        *b_HLT_Ele20_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele15_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele17_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele20_WPLoose_Gsf;   //!
   TBranch        *b_HLT_Ele20_eta2p1_WPLoose_Gsf;   //!
   TBranch        *b_HLT_DiEle27_WPTightCaloOnly_L1DoubleEG;   //!
   TBranch        *b_HLT_Ele27_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele28_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele30_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele32_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele35_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele35_WPTight_Gsf_L1EGMT;   //!
   TBranch        *b_HLT_Ele38_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele40_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele32_WPTight_Gsf_L1DoubleEG;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_HT450_Beamspot;   //!
   TBranch        *b_HLT_HT300_Beamspot;   //!
   TBranch        *b_HLT_ZeroBias_Beamspot;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1;   //!
   TBranch        *b_HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;   //!
   TBranch        *b_HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;   //!
   TBranch        *b_HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1;   //!
   TBranch        *b_HLT_IsoMu20;   //!
   TBranch        *b_HLT_IsoMu24;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1;   //!
   TBranch        *b_HLT_IsoMu27;   //!
   TBranch        *b_HLT_IsoMu30;   //!
   TBranch        *b_HLT_UncorrectedJetE30_NoBPTX;   //!
   TBranch        *b_HLT_UncorrectedJetE30_NoBPTX3BX;   //!
   TBranch        *b_HLT_UncorrectedJetE60_NoBPTX3BX;   //!
   TBranch        *b_HLT_UncorrectedJetE70_NoBPTX3BX;   //!
   TBranch        *b_HLT_L1SingleMu18;   //!
   TBranch        *b_HLT_L1SingleMu25;   //!
   TBranch        *b_HLT_L2Mu10;   //!
   TBranch        *b_HLT_L2Mu10_NoVertex_NoBPTX3BX;   //!
   TBranch        *b_HLT_L2Mu10_NoVertex_NoBPTX;   //!
   TBranch        *b_HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX;   //!
   TBranch        *b_HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX;   //!
   TBranch        *b_HLT_L2Mu50;   //!
   TBranch        *b_HLT_L2Mu23NoVtx_2Cha;   //!
   TBranch        *b_HLT_L2Mu23NoVtx_2Cha_CosmicSeed;   //!
   TBranch        *b_HLT_DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4;   //!
   TBranch        *b_HLT_DoubleL2Mu30NoVtx_2Cha_Eta2p4;   //!
   TBranch        *b_HLT_DoubleL2Mu50;   //!
   TBranch        *b_HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed;   //!
   TBranch        *b_HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched;   //!
   TBranch        *b_HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed;   //!
   TBranch        *b_HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched;   //!
   TBranch        *b_HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4;   //!
   TBranch        *b_HLT_DoubleL2Mu23NoVtx_2Cha;   //!
   TBranch        *b_HLT_DoubleL2Mu23NoVtx_2Cha_NoL2Matched;   //!
   TBranch        *b_HLT_DoubleL2Mu25NoVtx_2Cha;   //!
   TBranch        *b_HLT_DoubleL2Mu25NoVtx_2Cha_NoL2Matched;   //!
   TBranch        *b_HLT_DoubleL2Mu25NoVtx_2Cha_Eta2p4;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL;   //!
   TBranch        *b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ;   //!
   TBranch        *b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8;   //!
   TBranch        *b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8;   //!
   TBranch        *b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8;   //!
   TBranch        *b_HLT_Mu25_TkMu0_Onia;   //!
   TBranch        *b_HLT_Mu30_TkMu0_Psi;   //!
   TBranch        *b_HLT_Mu30_TkMu0_Upsilon;   //!
   TBranch        *b_HLT_Mu20_TkMu0_Phi;   //!
   TBranch        *b_HLT_Mu25_TkMu0_Phi;   //!
   TBranch        *b_HLT_Mu12;   //!
   TBranch        *b_HLT_Mu15;   //!
   TBranch        *b_HLT_Mu20;   //!
   TBranch        *b_HLT_Mu27;   //!
   TBranch        *b_HLT_Mu50;   //!
   TBranch        *b_HLT_Mu55;   //!
   TBranch        *b_HLT_OldMu100;   //!
   TBranch        *b_HLT_TkMu100;   //!
   TBranch        *b_HLT_DiPFJetAve40;   //!
   TBranch        *b_HLT_DiPFJetAve60;   //!
   TBranch        *b_HLT_DiPFJetAve80;   //!
   TBranch        *b_HLT_DiPFJetAve140;   //!
   TBranch        *b_HLT_DiPFJetAve200;   //!
   TBranch        *b_HLT_DiPFJetAve260;   //!
   TBranch        *b_HLT_DiPFJetAve320;   //!
   TBranch        *b_HLT_DiPFJetAve400;   //!
   TBranch        *b_HLT_DiPFJetAve500;   //!
   TBranch        *b_HLT_DiPFJetAve60_HFJEC;   //!
   TBranch        *b_HLT_DiPFJetAve80_HFJEC;   //!
   TBranch        *b_HLT_DiPFJetAve100_HFJEC;   //!
   TBranch        *b_HLT_DiPFJetAve160_HFJEC;   //!
   TBranch        *b_HLT_DiPFJetAve220_HFJEC;   //!
   TBranch        *b_HLT_DiPFJetAve300_HFJEC;   //!
   TBranch        *b_HLT_AK8PFJet15;   //!
   TBranch        *b_HLT_AK8PFJet25;   //!
   TBranch        *b_HLT_AK8PFJet40;   //!
   TBranch        *b_HLT_AK8PFJet60;   //!
   TBranch        *b_HLT_AK8PFJet80;   //!
   TBranch        *b_HLT_AK8PFJet140;   //!
   TBranch        *b_HLT_AK8PFJet200;   //!
   TBranch        *b_HLT_AK8PFJet260;   //!
   TBranch        *b_HLT_AK8PFJet320;   //!
   TBranch        *b_HLT_AK8PFJet400;   //!
   TBranch        *b_HLT_AK8PFJet450;   //!
   TBranch        *b_HLT_AK8PFJet500;   //!
   TBranch        *b_HLT_AK8PFJet550;   //!
   TBranch        *b_HLT_PFJet15;   //!
   TBranch        *b_HLT_PFJet25;   //!
   TBranch        *b_HLT_PFJet40;   //!
   TBranch        *b_HLT_PFJet60;   //!
   TBranch        *b_HLT_PFJet80;   //!
   TBranch        *b_HLT_PFJet140;   //!
   TBranch        *b_HLT_PFJet200;   //!
   TBranch        *b_HLT_PFJet260;   //!
   TBranch        *b_HLT_PFJet320;   //!
   TBranch        *b_HLT_PFJet400;   //!
   TBranch        *b_HLT_PFJet450;   //!
   TBranch        *b_HLT_PFJet500;   //!
   TBranch        *b_HLT_PFJet550;   //!
   TBranch        *b_HLT_PFJetFwd15;   //!
   TBranch        *b_HLT_PFJetFwd25;   //!
   TBranch        *b_HLT_PFJetFwd40;   //!
   TBranch        *b_HLT_PFJetFwd60;   //!
   TBranch        *b_HLT_PFJetFwd80;   //!
   TBranch        *b_HLT_PFJetFwd140;   //!
   TBranch        *b_HLT_PFJetFwd200;   //!
   TBranch        *b_HLT_PFJetFwd260;   //!
   TBranch        *b_HLT_PFJetFwd320;   //!
   TBranch        *b_HLT_PFJetFwd400;   //!
   TBranch        *b_HLT_PFJetFwd450;   //!
   TBranch        *b_HLT_PFJetFwd500;   //!
   TBranch        *b_HLT_AK8PFJetFwd15;   //!
   TBranch        *b_HLT_AK8PFJetFwd25;   //!
   TBranch        *b_HLT_AK8PFJetFwd40;   //!
   TBranch        *b_HLT_AK8PFJetFwd60;   //!
   TBranch        *b_HLT_AK8PFJetFwd80;   //!
   TBranch        *b_HLT_AK8PFJetFwd140;   //!
   TBranch        *b_HLT_AK8PFJetFwd200;   //!
   TBranch        *b_HLT_AK8PFJetFwd260;   //!
   TBranch        *b_HLT_AK8PFJetFwd320;   //!
   TBranch        *b_HLT_AK8PFJetFwd400;   //!
   TBranch        *b_HLT_AK8PFJetFwd450;   //!
   TBranch        *b_HLT_AK8PFJetFwd500;   //!
   TBranch        *b_HLT_PFHT180;   //!
   TBranch        *b_HLT_PFHT250;   //!
   TBranch        *b_HLT_PFHT370;   //!
   TBranch        *b_HLT_PFHT430;   //!
   TBranch        *b_HLT_PFHT510;   //!
   TBranch        *b_HLT_PFHT590;   //!
   TBranch        *b_HLT_PFHT680;   //!
   TBranch        *b_HLT_PFHT780;   //!
   TBranch        *b_HLT_PFHT890;   //!
   TBranch        *b_HLT_PFHT1050;   //!
   TBranch        *b_HLT_PFHT500_PFMET100_PFMHT100_IDTight;   //!
   TBranch        *b_HLT_PFHT500_PFMET110_PFMHT110_IDTight;   //!
   TBranch        *b_HLT_PFHT700_PFMET85_PFMHT85_IDTight;   //!
   TBranch        *b_HLT_PFHT700_PFMET95_PFMHT95_IDTight;   //!
   TBranch        *b_HLT_PFHT800_PFMET75_PFMHT75_IDTight;   //!
   TBranch        *b_HLT_PFHT800_PFMET85_PFMHT85_IDTight;   //!
   TBranch        *b_HLT_PFMET110_PFMHT110_IDTight;   //!
   TBranch        *b_HLT_PFMET120_PFMHT120_IDTight;   //!
   TBranch        *b_HLT_PFMET130_PFMHT130_IDTight;   //!
   TBranch        *b_HLT_PFMET140_PFMHT140_IDTight;   //!
   TBranch        *b_HLT_PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1;   //!
   TBranch        *b_HLT_PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1;   //!
   TBranch        *b_HLT_PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1;   //!
   TBranch        *b_HLT_PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1;   //!
   TBranch        *b_HLT_PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1;   //!
   TBranch        *b_HLT_PFMET120_PFMHT120_IDTight_PFHT60;   //!
   TBranch        *b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60;   //!
   TBranch        *b_HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60;   //!
   TBranch        *b_HLT_PFMETTypeOne110_PFMHT110_IDTight;   //!
   TBranch        *b_HLT_PFMETTypeOne120_PFMHT120_IDTight;   //!
   TBranch        *b_HLT_PFMETTypeOne130_PFMHT130_IDTight;   //!
   TBranch        *b_HLT_PFMETTypeOne140_PFMHT140_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu130_PFMHTNoMu130_IDTight;   //!
   TBranch        *b_HLT_PFMETNoMu140_PFMHTNoMu140_IDTight;   //!
   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight;   //!
   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight;   //!
   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight;   //!
   TBranch        *b_HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight;   //!
   TBranch        *b_HLT_L1ETMHadSeeds;   //!
   TBranch        *b_HLT_CaloMHT90;   //!
   TBranch        *b_HLT_CaloMET80_NotCleaned;   //!
   TBranch        *b_HLT_CaloMET90_NotCleaned;   //!
   TBranch        *b_HLT_CaloMET100_NotCleaned;   //!
   TBranch        *b_HLT_CaloMET110_NotCleaned;   //!
   TBranch        *b_HLT_CaloMET250_NotCleaned;   //!
   TBranch        *b_HLT_CaloMET70_HBHECleaned;   //!
   TBranch        *b_HLT_CaloMET80_HBHECleaned;   //!
   TBranch        *b_HLT_CaloMET90_HBHECleaned;   //!
   TBranch        *b_HLT_CaloMET100_HBHECleaned;   //!
   TBranch        *b_HLT_CaloMET250_HBHECleaned;   //!
   TBranch        *b_HLT_CaloMET300_HBHECleaned;   //!
   TBranch        *b_HLT_CaloMET350_HBHECleaned;   //!
   TBranch        *b_HLT_PFMET200_NotCleaned;   //!
   TBranch        *b_HLT_PFMET200_HBHECleaned;   //!
   TBranch        *b_HLT_PFMET250_HBHECleaned;   //!
   TBranch        *b_HLT_PFMET300_HBHECleaned;   //!
   TBranch        *b_HLT_PFMET200_HBHE_BeamHaloCleaned;   //!
   TBranch        *b_HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned;   //!
   TBranch        *b_HLT_MET105_IsoTrk50;   //!
   TBranch        *b_HLT_MET120_IsoTrk50;   //!
   TBranch        *b_HLT_SingleJet30_Mu12_SinglePFJet40;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets40_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets100_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets200_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets350_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_DoublePFJets40_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_DoublePFJets100_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_DoublePFJets200_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_DoublePFJets350_CaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71;   //!
   TBranch        *b_HLT_Photon300_NoHE;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL;   //!
   TBranch        *b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ;   //!
   TBranch        *b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL;   //!
   TBranch        *b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ;   //!
   TBranch        *b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL;   //!
   TBranch        *b_HLT_Mu19_TrkIsoVVL;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet20_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet40_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet70_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet110_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet170_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK4Jet300_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK8DiJet170_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK8Jet170_DoubleMu5;   //!
   TBranch        *b_HLT_BTagMu_AK8Jet300_Mu5;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet20_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet40_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet70_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet110_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK4DiJet170_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK4Jet300_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK8DiJet170_Mu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK8Jet170_DoubleMu5_noalgo;   //!
   TBranch        *b_HLT_BTagMu_AK8Jet300_Mu5_noalgo;   //!
   TBranch        *b_HLT_Ele15_Ele8_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Mu12_DoublePhoton20;   //!
   TBranch        *b_HLT_TriplePhoton_20_20_20_CaloIdLV2;   //!
   TBranch        *b_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL;   //!
   TBranch        *b_HLT_TriplePhoton_30_30_10_CaloIdLV2;   //!
   TBranch        *b_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL;   //!
   TBranch        *b_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL;   //!
   TBranch        *b_HLT_Photon20;   //!
   TBranch        *b_HLT_Photon33;   //!
   TBranch        *b_HLT_Photon50;   //!
   TBranch        *b_HLT_Photon75;   //!
   TBranch        *b_HLT_Photon90;   //!
   TBranch        *b_HLT_Photon120;   //!
   TBranch        *b_HLT_Photon150;   //!
   TBranch        *b_HLT_Photon175;   //!
   TBranch        *b_HLT_Photon200;   //!
   TBranch        *b_HLT_Photon100EB_TightID_TightIso;   //!
   TBranch        *b_HLT_Photon110EB_TightID_TightIso;   //!
   TBranch        *b_HLT_Photon120EB_TightID_TightIso;   //!
   TBranch        *b_HLT_Photon100EBHE10;   //!
   TBranch        *b_HLT_Photon100EEHE10;   //!
   TBranch        *b_HLT_Photon100EE_TightID_TightIso;   //!
   TBranch        *b_HLT_Photon50_R9Id90_HE10_IsoM;   //!
   TBranch        *b_HLT_Photon75_R9Id90_HE10_IsoM;   //!
   TBranch        *b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3;   //!
   TBranch        *b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3;   //!
   TBranch        *b_HLT_Photon90_R9Id90_HE10_IsoM;   //!
   TBranch        *b_HLT_Photon120_R9Id90_HE10_IsoM;   //!
   TBranch        *b_HLT_Photon165_R9Id90_HE10_IsoM;   //!
   TBranch        *b_HLT_Photon90_CaloIdL_PFHT700;   //!
   TBranch        *b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90;   //!
   TBranch        *b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95;   //!
   TBranch        *b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55;   //!
   TBranch        *b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55;   //!
   TBranch        *b_HLT_Photon35_TwoProngs35;   //!
   TBranch        *b_HLT_IsoMu24_TwoProngs35;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi_L1_NoOS;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi_NoVertexing_NoOS;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi_NoVertexing;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi_L1_4R_0er1p5R;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R;   //!
   TBranch        *b_HLT_Dimuon0_Jpsi3p5_Muon2;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_L1_4p5;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_L1_5;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_L1_4p5NoOS;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_L1_4p5er2p0;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_L1_4p5er2p0M;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_NoVertexing;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_L1_5M;   //!
   TBranch        *b_HLT_Dimuon0_LowMass_L1_0er1p5R;   //!
   TBranch        *b_HLT_Dimuon0_LowMass_L1_0er1p5;   //!
   TBranch        *b_HLT_Dimuon0_LowMass;   //!
   TBranch        *b_HLT_Dimuon0_LowMass_L1_4;   //!
   TBranch        *b_HLT_Dimuon0_LowMass_L1_4R;   //!
   TBranch        *b_HLT_Dimuon0_LowMass_L1_TM530;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_Muon_L1_TM0;   //!
   TBranch        *b_HLT_Dimuon0_Upsilon_Muon_NoL1Mass;   //!
   TBranch        *b_HLT_TripleMu_5_3_3_Mass3p8_DZ;   //!
   TBranch        *b_HLT_TripleMu_10_5_5_DZ;   //!
   TBranch        *b_HLT_TripleMu_12_10_5;   //!
   TBranch        *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15;   //!
   TBranch        *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1;   //!
   TBranch        *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15;   //!
   TBranch        *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1;   //!
   TBranch        *b_HLT_DoubleMu3_DZ_PFMET50_PFMHT60;   //!
   TBranch        *b_HLT_DoubleMu3_DZ_PFMET70_PFMHT70;   //!
   TBranch        *b_HLT_DoubleMu3_DZ_PFMET90_PFMHT90;   //!
   TBranch        *b_HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass;   //!
   TBranch        *b_HLT_DoubleMu4_Jpsi_Displaced;   //!
   TBranch        *b_HLT_DoubleMu4_Jpsi_NoVertexing;   //!
   TBranch        *b_HLT_DoubleMu4_JpsiTrkTrk_Displaced;   //!
   TBranch        *b_HLT_DoubleMu43NoFiltersNoVtx;   //!
   TBranch        *b_HLT_DoubleMu48NoFiltersNoVtx;   //!
   TBranch        *b_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL;   //!
   TBranch        *b_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL;   //!
   TBranch        *b_HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL;   //!
   TBranch        *b_HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL;   //!
   TBranch        *b_HLT_DoubleMu33NoFiltersNoVtxDisplaced;   //!
   TBranch        *b_HLT_DoubleMu40NoFiltersNoVtxDisplaced;   //!
   TBranch        *b_HLT_DoubleMu20_7_Mass0to30_L1_DM4;   //!
   TBranch        *b_HLT_DoubleMu20_7_Mass0to30_L1_DM4EG;   //!
   TBranch        *b_HLT_HT425;   //!
   TBranch        *b_HLT_HT430_DisplacedDijet40_DisplacedTrack;   //!
   TBranch        *b_HLT_HT500_DisplacedDijet40_DisplacedTrack;   //!
   TBranch        *b_HLT_HT430_DisplacedDijet60_DisplacedTrack;   //!
   TBranch        *b_HLT_HT400_DisplacedDijet40_DisplacedTrack;   //!
   TBranch        *b_HLT_HT650_DisplacedDijet60_Inclusive;   //!
   TBranch        *b_HLT_HT550_DisplacedDijet60_Inclusive;   //!
   TBranch        *b_HLT_DiJet110_35_Mjj650_PFMET110;   //!
   TBranch        *b_HLT_DiJet110_35_Mjj650_PFMET120;   //!
   TBranch        *b_HLT_DiJet110_35_Mjj650_PFMET130;   //!
   TBranch        *b_HLT_TripleJet110_35_35_Mjj650_PFMET110;   //!
   TBranch        *b_HLT_TripleJet110_35_35_Mjj650_PFMET120;   //!
   TBranch        *b_HLT_TripleJet110_35_35_Mjj650_PFMET130;   //!
   TBranch        *b_HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned;   //!
   TBranch        *b_HLT_Ele28_eta2p1_WPTight_Gsf_HT150;   //!
   TBranch        *b_HLT_Ele28_HighEta_SC20_Mass55;   //!
   TBranch        *b_HLT_DoubleMu20_7_Mass0to30_Photon23;   //!
   TBranch        *b_HLT_Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5;   //!
   TBranch        *b_HLT_Ele15_IsoVVVL_PFHT450_PFMET50;   //!
   TBranch        *b_HLT_Ele15_IsoVVVL_PFHT450;   //!
   TBranch        *b_HLT_Ele50_IsoVVVL_PFHT450;   //!
   TBranch        *b_HLT_Ele15_IsoVVVL_PFHT600;   //!
   TBranch        *b_HLT_Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60;   //!
   TBranch        *b_HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60;   //!
   TBranch        *b_HLT_Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5;   //!
   TBranch        *b_HLT_Mu15_IsoVVVL_PFHT450_PFMET50;   //!
   TBranch        *b_HLT_Mu15_IsoVVVL_PFHT450;   //!
   TBranch        *b_HLT_Mu50_IsoVVVL_PFHT450;   //!
   TBranch        *b_HLT_Mu15_IsoVVVL_PFHT600;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight;   //!
   TBranch        *b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight;   //!
   TBranch        *b_HLT_Dimuon10_PsiPrime_Barrel_Seagulls;   //!
   TBranch        *b_HLT_Dimuon20_Jpsi_Barrel_Seagulls;   //!
   TBranch        *b_HLT_Dimuon12_Upsilon_y1p4;   //!
   TBranch        *b_HLT_Dimuon14_Phi_Barrel_Seagulls;   //!
   TBranch        *b_HLT_Dimuon18_PsiPrime;   //!
   TBranch        *b_HLT_Dimuon25_Jpsi;   //!
   TBranch        *b_HLT_Dimuon18_PsiPrime_noCorrL1;   //!
   TBranch        *b_HLT_Dimuon24_Upsilon_noCorrL1;   //!
   TBranch        *b_HLT_Dimuon24_Phi_noCorrL1;   //!
   TBranch        *b_HLT_Dimuon25_Jpsi_noCorrL1;   //!
   TBranch        *b_HLT_DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8;   //!
   TBranch        *b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ;   //!
   TBranch        *b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL;   //!
   TBranch        *b_HLT_DoubleIsoMu20_eta2p1;   //!
   TBranch        *b_HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx;   //!
   TBranch        *b_HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx;   //!
   TBranch        *b_HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx;   //!
   TBranch        *b_HLT_Mu8;   //!
   TBranch        *b_HLT_Mu17;   //!
   TBranch        *b_HLT_Mu19;   //!
   TBranch        *b_HLT_Mu17_Photon30_IsoCaloId;   //!
   TBranch        *b_HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30;   //!
   TBranch        *b_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30;   //!
   TBranch        *b_HLT_Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30;   //!
   TBranch        *b_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30;   //!
   TBranch        *b_HLT_Ele8_CaloIdM_TrackIdM_PFJet30;   //!
   TBranch        *b_HLT_Ele17_CaloIdM_TrackIdM_PFJet30;   //!
   TBranch        *b_HLT_Ele23_CaloIdM_TrackIdM_PFJet30;   //!
   TBranch        *b_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165;   //!
   TBranch        *b_HLT_Ele115_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele135_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele145_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele200_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele250_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_Ele300_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5;   //!
   TBranch        *b_HLT_PFHT330PT30_QuadPFJet_75_60_45_40;   //!
   TBranch        *b_HLT_PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94;   //!
   TBranch        *b_HLT_PFHT400_SixPFJet32;   //!
   TBranch        *b_HLT_PFHT450_SixPFJet36_PFBTagDeepCSV_1p59;   //!
   TBranch        *b_HLT_PFHT450_SixPFJet36;   //!
   TBranch        *b_HLT_PFHT350;   //!
   TBranch        *b_HLT_PFHT350MinPFJet15;   //!
   TBranch        *b_HLT_Photon60_R9Id90_CaloIdL_IsoL;   //!
   TBranch        *b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL;   //!
   TBranch        *b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15;   //!
   TBranch        *b_HLT_ECALHT800;   //!
   TBranch        *b_HLT_DiSC30_18_EIso_AND_HE_Mass70;   //!
   TBranch        *b_HLT_Physics;   //!
   TBranch        *b_HLT_Physics_part0;   //!
   TBranch        *b_HLT_Physics_part1;   //!
   TBranch        *b_HLT_Physics_part2;   //!
   TBranch        *b_HLT_Physics_part3;   //!
   TBranch        *b_HLT_Physics_part4;   //!
   TBranch        *b_HLT_Physics_part5;   //!
   TBranch        *b_HLT_Physics_part6;   //!
   TBranch        *b_HLT_Physics_part7;   //!
   TBranch        *b_HLT_Random;   //!
   TBranch        *b_HLT_ZeroBias;   //!
   TBranch        *b_HLT_ZeroBias_Alignment;   //!
   TBranch        *b_HLT_ZeroBias_part0;   //!
   TBranch        *b_HLT_ZeroBias_part1;   //!
   TBranch        *b_HLT_ZeroBias_part2;   //!
   TBranch        *b_HLT_ZeroBias_part3;   //!
   TBranch        *b_HLT_ZeroBias_part4;   //!
   TBranch        *b_HLT_ZeroBias_part5;   //!
   TBranch        *b_HLT_ZeroBias_part6;   //!
   TBranch        *b_HLT_ZeroBias_part7;   //!
   TBranch        *b_HLT_AK4CaloJet30;   //!
   TBranch        *b_HLT_AK4CaloJet40;   //!
   TBranch        *b_HLT_AK4CaloJet50;   //!
   TBranch        *b_HLT_AK4CaloJet80;   //!
   TBranch        *b_HLT_AK4CaloJet100;   //!
   TBranch        *b_HLT_AK4CaloJet120;   //!
   TBranch        *b_HLT_AK4PFJet30;   //!
   TBranch        *b_HLT_AK4PFJet50;   //!
   TBranch        *b_HLT_AK4PFJet80;   //!
   TBranch        *b_HLT_AK4PFJet100;   //!
   TBranch        *b_HLT_AK4PFJet120;   //!
   TBranch        *b_HLT_SinglePhoton10_Eta3p1ForPPRef;   //!
   TBranch        *b_HLT_SinglePhoton20_Eta3p1ForPPRef;   //!
   TBranch        *b_HLT_SinglePhoton30_Eta3p1ForPPRef;   //!
   TBranch        *b_HLT_Photon20_HoverELoose;   //!
   TBranch        *b_HLT_Photon30_HoverELoose;   //!
   TBranch        *b_HLT_EcalCalibration;   //!
   TBranch        *b_HLT_HcalCalibration;   //!
   TBranch        *b_HLT_L1UnpairedBunchBptxMinus;   //!
   TBranch        *b_HLT_L1UnpairedBunchBptxPlus;   //!
   TBranch        *b_HLT_L1NotBptxOR;   //!
   TBranch        *b_HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142;   //!
   TBranch        *b_HLT_CDC_L2cosmic_5_er1p0;   //!
   TBranch        *b_HLT_CDC_L2cosmic_5p5_er1p0;   //!
   TBranch        *b_HLT_HcalNZS;   //!
   TBranch        *b_HLT_HcalPhiSym;   //!
   TBranch        *b_HLT_HcalIsolatedbunch;   //!
   TBranch        *b_HLT_IsoTrackHB;   //!
   TBranch        *b_HLT_IsoTrackHE;   //!
   TBranch        *b_HLT_ZeroBias_FirstCollisionAfterAbortGap;   //!
   TBranch        *b_HLT_ZeroBias_IsolatedBunches;   //!
   TBranch        *b_HLT_ZeroBias_FirstCollisionInTrain;   //!
   TBranch        *b_HLT_ZeroBias_LastCollisionInTrain;   //!
   TBranch        *b_HLT_ZeroBias_FirstBXAfterTrain;   //!
   TBranch        *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1;   //!
   TBranch        *b_HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1;   //!
   TBranch        *b_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL;   //!
   TBranch        *b_HLT_Rsq0p35;   //!
   TBranch        *b_HLT_Rsq0p40;   //!
   TBranch        *b_HLT_RsqMR300_Rsq0p09_MR200;   //!
   TBranch        *b_HLT_RsqMR320_Rsq0p09_MR200;   //!
   TBranch        *b_HLT_RsqMR300_Rsq0p09_MR200_4jet;   //!
   TBranch        *b_HLT_RsqMR320_Rsq0p09_MR200_4jet;   //!
   TBranch        *b_HLT_IsoMu27_MET90;   //!
   TBranch        *b_HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;   //!
   TBranch        *b_HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg;   //!
   TBranch        *b_HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1;   //!
   TBranch        *b_HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1;   //!
   TBranch        *b_HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1;   //!
   TBranch        *b_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50;   //!
   TBranch        *b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3;   //!
   TBranch        *b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3;   //!
   TBranch        *b_HLT_PFMET100_PFMHT100_IDTight_PFHT60;   //!
   TBranch        *b_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60;   //!
   TBranch        *b_HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60;   //!
   TBranch        *b_HLT_Mu18_Mu9_SameSign;   //!
   TBranch        *b_HLT_Mu18_Mu9_SameSign_DZ;   //!
   TBranch        *b_HLT_Mu18_Mu9;   //!
   TBranch        *b_HLT_Mu18_Mu9_DZ;   //!
   TBranch        *b_HLT_Mu20_Mu10_SameSign;   //!
   TBranch        *b_HLT_Mu20_Mu10_SameSign_DZ;   //!
   TBranch        *b_HLT_Mu20_Mu10;   //!
   TBranch        *b_HLT_Mu20_Mu10_DZ;   //!
   TBranch        *b_HLT_Mu23_Mu12_SameSign;   //!
   TBranch        *b_HLT_Mu23_Mu12_SameSign_DZ;   //!
   TBranch        *b_HLT_Mu23_Mu12;   //!
   TBranch        *b_HLT_Mu23_Mu12_DZ;   //!
   TBranch        *b_HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi1p05;   //!
   TBranch        *b_HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi;   //!
   TBranch        *b_HLT_DoubleMu3_DCA_PFMET50_PFMHT60;   //!
   TBranch        *b_HLT_TripleMu_5_3_3_Mass3p8_DCA;   //!
   TBranch        *b_HLT_QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;   //!
   TBranch        *b_HLT_QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;   //!
   TBranch        *b_HLT_QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;   //!
   TBranch        *b_HLT_QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2;   //!
   TBranch        *b_HLT_QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2;   //!
   TBranch        *b_HLT_QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2;   //!
   TBranch        *b_HLT_QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2;   //!
   TBranch        *b_HLT_QuadPFJet98_83_71_15;   //!
   TBranch        *b_HLT_QuadPFJet103_88_75_15;   //!
   TBranch        *b_HLT_QuadPFJet105_88_76_15;   //!
   TBranch        *b_HLT_QuadPFJet111_90_80_15;   //!
   TBranch        *b_HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17;   //!
   TBranch        *b_HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1;   //!
   TBranch        *b_HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02;   //!
   TBranch        *b_HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2;   //!
   TBranch        *b_HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4;   //!
   TBranch        *b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55;   //!
   TBranch        *b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto;   //!
   TBranch        *b_HLT_Mu12_IP6_part0;   //!
   TBranch        *b_HLT_Mu12_IP6_part1;   //!
   TBranch        *b_HLT_Mu12_IP6_part2;   //!
   TBranch        *b_HLT_Mu12_IP6_part3;   //!
   TBranch        *b_HLT_Mu12_IP6_part4;   //!
   TBranch        *b_HLT_Mu9_IP5_part0;   //!
   TBranch        *b_HLT_Mu9_IP5_part1;   //!
   TBranch        *b_HLT_Mu9_IP5_part2;   //!
   TBranch        *b_HLT_Mu9_IP5_part3;   //!
   TBranch        *b_HLT_Mu9_IP5_part4;   //!
   TBranch        *b_HLT_Mu7_IP4_part0;   //!
   TBranch        *b_HLT_Mu7_IP4_part1;   //!
   TBranch        *b_HLT_Mu7_IP4_part2;   //!
   TBranch        *b_HLT_Mu7_IP4_part3;   //!
   TBranch        *b_HLT_Mu7_IP4_part4;   //!
   TBranch        *b_HLT_Mu9_IP4_part0;   //!
   TBranch        *b_HLT_Mu9_IP4_part1;   //!
   TBranch        *b_HLT_Mu9_IP4_part2;   //!
   TBranch        *b_HLT_Mu9_IP4_part3;   //!
   TBranch        *b_HLT_Mu9_IP4_part4;   //!
   TBranch        *b_HLT_Mu8_IP5_part0;   //!
   TBranch        *b_HLT_Mu8_IP5_part1;   //!
   TBranch        *b_HLT_Mu8_IP5_part2;   //!
   TBranch        *b_HLT_Mu8_IP5_part3;   //!
   TBranch        *b_HLT_Mu8_IP5_part4;   //!
   TBranch        *b_HLT_Mu8_IP6_part0;   //!
   TBranch        *b_HLT_Mu8_IP6_part1;   //!
   TBranch        *b_HLT_Mu8_IP6_part2;   //!
   TBranch        *b_HLT_Mu8_IP6_part3;   //!
   TBranch        *b_HLT_Mu8_IP6_part4;   //!
   TBranch        *b_HLT_Mu9_IP6_part0;   //!
   TBranch        *b_HLT_Mu9_IP6_part1;   //!
   TBranch        *b_HLT_Mu9_IP6_part2;   //!
   TBranch        *b_HLT_Mu9_IP6_part3;   //!
   TBranch        *b_HLT_Mu9_IP6_part4;   //!
   TBranch        *b_HLT_Mu8_IP3_part0;   //!
   TBranch        *b_HLT_Mu8_IP3_part1;   //!
   TBranch        *b_HLT_Mu8_IP3_part2;   //!
   TBranch        *b_HLT_Mu8_IP3_part3;   //!
   TBranch        *b_HLT_Mu8_IP3_part4;   //!
   TBranch        *b_HLT_QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1;   //!
   TBranch        *b_HLT_TrkMu6NoFiltersNoVtx;   //!
   TBranch        *b_HLT_TrkMu16NoFiltersNoVtx;   //!
   TBranch        *b_HLT_DoubleTrkMu_16_6_NoFiltersNoVtx;   //!
   TBranch        *b_HLTriggerFinalPath;   //!
   TBranch        *b_L1simulation_step;   //!

//
//   boostHTT2(TTree *tree=0);
//   virtual ~boostHTT2();
//   virtual Int_t    Cut(Long64_t entry);
//   virtual Int_t    GetEntry(Long64_t entry);
//   virtual Long64_t LoadTree(Long64_t entry);
//   virtual void     Init(TTree *tree);
//   virtual void     Loop();
//   virtual Bool_t   Notify();
//   virtual void     Show(Long64_t entry = -1);
//};
//
//#endif
//
//#ifdef boostHTT2_cxx
//boostHTT2::boostHTT2(TTree *tree) : tree(0)
//{
//// if parameter tree is not specified (or zero), connect the file
//// used to generate this class and read the Tree.
//   if (tree == 0) {
//      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/eos/uscms/store/user/abdollah/SkimBoostedH2/2017/mt/v2_fast_Hadd/ZZ4l.root");
//      if (!f || !f->IsOpen()) {
//         f = new TFile("/eos/uscms/store/user/abdollah/SkimBoostedH2/2017/mt/v2_fast_Hadd/ZZ4l.root");
//      }
//      f->GetObject("mutau_tree",tree);
//
//   }
//   Init(tree);
//}
//
//boostHTT2::~boostHTT2()
//{
//   if (!fChain) return;
//   delete tree->GetCurrentFile();
//}
//
//Int_t boostHTT2::GetEntry(Long64_t entry)
//{
//// Read contents of entry.
//   if (!fChain) return 0;
//   return tree->GetEntry(entry);
//}
//Long64_t boostHTT2::LoadTree(Long64_t entry)
//{
//// Set the environment to read one entry
//   if (!fChain) return -5;
//   Long64_t centry = tree->LoadTree(entry);
//   if (centry < 0) return centry;
//   if (tree->GetTreeNumber() != fCurrent) {
//      fCurrent = tree->GetTreeNumber();
//      Notify();
//   }
//   return centry;
//}
//
//void boostHTT2::Init(TTree *tree)
//{
//   // The Init() function is called when the selector needs to initialize
//   // a new tree or chain. Typically here the branch addresses and branch
//   // pointers of the tree will be set.
//   // It is normally not necessary to make changes to the generated
//   // code, but the routine can be extended by the user if needed.
//   // Init() will be called many times when running on PROOF
//   // (once per file to be processed).
//
//   // Set object pointer

//   pdf = 0;
//   nPU = 0;
//   puBX = 0;
//   puTrue = 0;
//   lhePID = 0;
//   mcPID = 0;
//   mcPt = 0;
//   mcMass = 0;
//   mcEta = 0;
//   mcPhi = 0;
//   mcE = 0;
//   mcEt = 0;
//   mcGMomPID = 0;
//   mcMomPID = 0;
//   mcMomPt = 0;
//   mcMomMass = 0;
//   mcMomEta = 0;
//   mcMomPhi = 0;
//   mcStatusFlag = 0;
//   mcParentage = 0;
//   mcStatus = 0;
//   eleCharge = 0;
//   eleEn = 0;
//   eleSCEn = 0;
//   eleD0 = 0;
//   eleDz = 0;
//   eleSIP = 0;
//   elePt = 0;
//   eleEta = 0;
//   elePhi = 0;
//   eleSCEta = 0;
//   eleSCPhi = 0;
//   eleSCRawEn = 0;
//   eleBrem = 0;
//   eleConvVeto = 0;
//   eleMissHits = 0;
//   elePFChIso = 0;
//   elePFPhoIso = 0;
//   elePFNeuIso = 0;
//   elePFPUIso = 0;
//   elePFClusEcalIso = 0;
//   elePFClusHcalIso = 0;
//   eleIDMVAIso = 0;
//   eleIDMVANoIso = 0;
//   eleFiredSingleTrgs = 0;
//   eleFiredDoubleTrgs = 0;
//   eleFiredL1Trgs = 0;
//   eleIDbit = 0;
//   eleScale_stat_up = 0;
//   eleScale_stat_dn = 0;
//   eleScale_syst_up = 0;
//   eleScale_syst_dn = 0;
//   eleScale_gain_up = 0;
//   eleScale_gain_dn = 0;
//   muPt = 0;
//   muEn = 0;
//   muEta = 0;
//   muPhi = 0;
//   muCharge = 0;
//   muType = 0;
//   muIDbit = 0;
//   muD0 = 0;
//   muDz = 0;
//   muSIP = 0;
//   muChi2NDF = 0;
//   muMuonHits = 0;
//   muStations = 0;
//   muMatches = 0;
//   muIsoTrk = 0;
//   muPFChIso = 0;
//   muPFPhoIso = 0;
//   muPFNeuIso = 0;
//   muPFPUIso = 0;
//   muPFChIso03 = 0;
//   muPFPhoIso03 = 0;
//   muPFNeuIso03 = 0;
//   muPFPUIso03 = 0;
//   muFiredTrgs = 0;
//   muFiredL1Trgs = 0;
//   muBestTrkPt = 0;
//   muBestTrkType = 0;
//   jetPt = 0;
//   jetEn = 0;
//   jetEta = 0;
//   jetPhi = 0;
//   jetRawPt = 0;
//   jetRawEn = 0;
//   jetMt = 0;
//   jetArea = 0;
//   jetLeadTrackPt = 0;
//   jetLeadTrackEta = 0;
//   jetLeadTrackPhi = 0;
//   jetLepTrackPID = 0;
//   jetLepTrackPt = 0;
//   jetLepTrackEta = 0;
//   jetLepTrackPhi = 0;
//   jetCSV2BJetTags = 0;
//   jetDeepCSVTags_b = 0;
//   jetDeepCSVTags_bb = 0;
//   jetDeepCSVTags_c = 0;
//   jetDeepCSVTags_udsg = 0;
//   jetPartonID = 0;
//   jetHadFlvr = 0;
//   jetP4Smear = 0;
//   jetP4SmearUp = 0;
//   jetP4SmearDo = 0;
//   jetPFLooseId = 0;
//   jetID = 0;
//   jetPUID = 0;
//   jetPUFullID = 0;
//   jetJECUnc = 0;
//   jetFiredTrgs = 0;
//   jetCHF = 0;
//   jetNHF = 0;
//   jetCEF = 0;
//   jetNEF = 0;
//   jetNCH = 0;
//   jetNNP = 0;
//   jetMUF = 0;
//   boostedTaupfTausDiscriminationByDecayModeFinding = 0;
//   boostedTaupfTausDiscriminationByDecayModeFindingNewDMs = 0;
//   boostedTauByMVA6LooseElectronRejection = 0;
//   boostedTauByMVA6TightElectronRejection = 0;
//   boostedTauByLooseMuonRejection3 = 0;
//   boostedTauByTightMuonRejection3 = 0;
//   boostedTauCombinedIsolationDeltaBetaCorrRaw3Hits = 0;
//   boostedTauByIsolationMVArun2v1DBoldDMwLTraw = 0;
//   boostedTauByIsolationMVArun2v1DBoldDMwLTrawNew = 0;
//   boostedTauByTightIsolationMVArun2v1DBoldDMwLT = 0;
//   boostedTauByTightIsolationMVArun2v1DBoldDMwLTNew = 0;
//   boostedTauByVLooseIsolationMVArun2v1DBoldDMwLTNew = 0;
//   boostedTauByMediumIsolationMVArun2v1DBoldDMwLTNew = 0;
//   boostedTauByVTightIsolationMVArun2v1DBoldDMwLTNew = 0;
//   boostedTauByLooseIsolationMVArun2v1DBoldDMwLT = 0;
//   boostedTauByLooseIsolationMVArun2v1DBoldDMwLTNew = 0;
//   boostedTauEta = 0;
//   boostedTauPhi = 0;
//   boostedTauPt = 0;
//   boostedTauEt = 0;
//   boostedTauCharge = 0;
//   boostedTauP = 0;
//   boostedTauPx = 0;
//   boostedTauPy = 0;
//   boostedTauPz = 0;
//   boostedTauVz = 0;
//   boostedTauEnergy = 0;
//   boostedTauMass = 0;
//   boostedTauDxy = 0;
//   boostedTauZImpact = 0;
//   boostedTauDecayMode = 0;
//   boostedTauLeadChargedHadronExists = 0;
//   boostedTauLeadChargedHadronEta = 0;
//   boostedTauLeadChargedHadronPhi = 0;
//   boostedTauLeadChargedHadronPt = 0;
//   boostedTauChargedIsoPtSum = 0;
//   boostedTauChargedIsoPtSumNoOverLap = 0;
//   boostedTauNeutralIsoPtSum = 0;
//   boostedTauNeutralIsoPtSumNoOverLap = 0;
//   boostedTauPuCorrPtSum = 0;
//   boostedTauNumSignalPFChargedHadrCands = 0;
//   boostedTauNumSignalPFNeutrHadrCands = 0;
//   boostedTauNumSignalPFGammaCands = 0;
//   boostedTauNumSignalPFCands = 0;
//   boostedTauNumIsolationPFChargedHadrCands = 0;
//   boostedTauNumIsolationPFNeutrHadrCands = 0;
//   boostedTauNumIsolationPFGammaCands = 0;
//   boostedTauNumIsolationPFCands = 0;
//   boostedTaufootprintCorrection = 0;
//   boostedTauphotonPtSumOutsideSignalCone = 0;
//   boostedTaudz = 0;
//   boostedTaudxy = 0;
//   boostedTauByDeepTau2017v1VSjetraw = 0;
//   boostedTauByDeepTau2017v1VSeraw = 0;
//   boostedTauByDeepTau2017v1VSmuraw = 0;
//   boostedTaubyVVVLooseDeepTau2017v1VSjet = 0;
//   boostedTaubyVLooseDeepTau2017v1VSjet = 0;
//   boostedTaubyLooseDeepTau2017v1VSjet = 0;
//   boostedTaubyMediumDeepTau2017v1VSjet = 0;
//   boostedTaubyTightDeepTau2017v1VSjet = 0;
//   boostedTaubyVVTightDeepTau2017v1VSjet = 0;
//   boostedTaubyVVVLooseDeepTau2017v1VSe = 0;
//   boostedTaubyLooseDeepTau2017v1VSe = 0;
//   boostedTaubyTightDeepTau2017v1VSe = 0;
//   boostedTaubyVVTightDeepTau2017v1VSe = 0;
//   boostedTaubyVVVLooseDeepTau2017v1VSmu = 0;
//   boostedTaubyLooseDeepTau2017v1VSmu = 0;
//   boostedTaubyTightDeepTau2017v1VSmu = 0;
//   boostedTaubyVVTightDeepTau2017v1VSmu = 0;
//   boostedTauagainstElectronVLooseMVA62018 = 0;
//   boostedTauagainstElectronLooseMVA62018 = 0;
//   boostedTauagainstElectronTightMVA62018 = 0;
//   AK8JetPt = 0;
//   AK8JetEn = 0;
//   AK8JetRawPt = 0;
//   AK8JetRawEn = 0;
//   AK8JetEta = 0;
//   AK8JetPhi = 0;
//   AK8JetMass = 0;
//   AK8Jet_tau1 = 0;
//   AK8Jet_tau2 = 0;
//   AK8Jet_tau3 = 0;
//   AK8Jetnconstituents = 0;
//   AK8JetPFLooseId = 0;
//   AK8JetPFTightLepVetoId = 0;
//   AK8JetSoftDropMass = 0;
//   AK8JetSoftDropMassCorr = 0;
//   AK8JetPrunedMass = 0;
//   AK8JetPrunedMassCorr = 0;
//   AK8JetpfBoostedDSVBTag = 0;
//   AK8JetCSV = 0;
//   AK8JetJECUnc = 0;
//   AK8JetL2L3corr = 0;
//   AK8puppiPt = 0;
//   AK8puppiMass = 0;
//   AK8puppiEta = 0;
//   AK8puppiPhi = 0;
//   AK8puppiSDL2L3corr = 0;
//   AK8puppiSDMass = 0;
//   AK8puppiSDMassL2L3Corr = 0;
//   AK8JetPartonID = 0;
//   AK8JetHadFlvr = 0;
//   nAK8SDSJ = 0;
//   AK8SDSJPt = 0;
//   AK8SDSJEta = 0;
//   AK8SDSJPhi = 0;
//   AK8SDSJMass = 0;
//   AK8SDSJE = 0;
//   AK8SDSJCharge = 0;
//   AK8SDSJFlavour = 0;
//   AK8SDSJCSV = 0;
//   nAK8puppiSDSJ = 0;
//   AK8puppiSDSJPt = 0;
//   AK8puppiSDSJEta = 0;
//   AK8puppiSDSJPhi = 0;
//   AK8puppiSDSJMass = 0;
//   AK8puppiSDSJE = 0;
//   AK8puppiSDSJCharge = 0;
//   AK8puppiSDSJFlavour = 0;
//   AK8puppiSDSJCSV = 0;
//   // Set branch addresses and branch pointers
//   if (!tree) return;
//   fChain = tree;
//   fCurrent = -1;
//   tree->SetMakeClass(1);
//

// TTree *  Xttree( TFile * f_Double, string channel){


TTree* Xttree(TTree* tree) {    

    if (!tree) {
        std::cerr << "Error: null TTree passed to Xttree\n";
        return nullptr;
    }

    // TTree *fChain = (TTree*) f_Double->Get(channel.c_str());

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(6);
   tree->SetBranchAddress("run", &run, &b_run);
   tree->SetBranchAddress("luminosityBlock", &luminosityBlock, &b_luminosityBlock);
   tree->SetBranchAddress("event", &event, &b_event);
   tree->SetBranchAddress("bunchCrossing", &bunchCrossing, &b_bunchCrossing);
   tree->SetBranchAddress("HTXS_njets25", &HTXS_njets25, &b_HTXS_njets25);
   tree->SetBranchAddress("HTXS_njets30", &HTXS_njets30, &b_HTXS_njets30);
   tree->SetBranchAddress("HTXS_stage1_1_cat_pTjet25GeV", &HTXS_stage1_1_cat_pTjet25GeV, &b_HTXS_stage1_1_cat_pTjet25GeV);
   tree->SetBranchAddress("HTXS_stage1_1_cat_pTjet30GeV", &HTXS_stage1_1_cat_pTjet30GeV, &b_HTXS_stage1_1_cat_pTjet30GeV);
   tree->SetBranchAddress("HTXS_stage1_1_fine_cat_pTjet25GeV", &HTXS_stage1_1_fine_cat_pTjet25GeV, &b_HTXS_stage1_1_fine_cat_pTjet25GeV);
   tree->SetBranchAddress("HTXS_stage1_1_fine_cat_pTjet30GeV", &HTXS_stage1_1_fine_cat_pTjet30GeV, &b_HTXS_stage1_1_fine_cat_pTjet30GeV);
   tree->SetBranchAddress("HTXS_stage1_2_cat_pTjet25GeV", &HTXS_stage1_2_cat_pTjet25GeV, &b_HTXS_stage1_2_cat_pTjet25GeV);
   tree->SetBranchAddress("HTXS_stage1_2_cat_pTjet30GeV", &HTXS_stage1_2_cat_pTjet30GeV, &b_HTXS_stage1_2_cat_pTjet30GeV);
   tree->SetBranchAddress("HTXS_stage1_2_fine_cat_pTjet25GeV", &HTXS_stage1_2_fine_cat_pTjet25GeV, &b_HTXS_stage1_2_fine_cat_pTjet25GeV);
   tree->SetBranchAddress("HTXS_stage1_2_fine_cat_pTjet30GeV", &HTXS_stage1_2_fine_cat_pTjet30GeV, &b_HTXS_stage1_2_fine_cat_pTjet30GeV);
   tree->SetBranchAddress("HTXS_stage_0", &HTXS_stage_0, &b_HTXS_stage_0);
   tree->SetBranchAddress("HTXS_stage_1_pTjet25", &HTXS_stage_1_pTjet25, &b_HTXS_stage_1_pTjet25);
   tree->SetBranchAddress("HTXS_stage_1_pTjet30", &HTXS_stage_1_pTjet30, &b_HTXS_stage_1_pTjet30);
   tree->SetBranchAddress("HTXS_Higgs_pt", &HTXS_Higgs_pt, &b_HTXS_Higgs_pt);
   tree->SetBranchAddress("HTXS_Higgs_y", &HTXS_Higgs_y, &b_HTXS_Higgs_y);
   tree->SetBranchAddress("BeamSpot_type", &BeamSpot_type, &b_BeamSpot_type);
   tree->SetBranchAddress("BeamSpot_sigmaZ", &BeamSpot_sigmaZ, &b_BeamSpot_sigmaZ);
   tree->SetBranchAddress("BeamSpot_sigmaZError", &BeamSpot_sigmaZError, &b_BeamSpot_sigmaZError);
   tree->SetBranchAddress("BeamSpot_z", &BeamSpot_z, &b_BeamSpot_z);
   tree->SetBranchAddress("BeamSpot_zError", &BeamSpot_zError, &b_BeamSpot_zError);
   tree->SetBranchAddress("nboostedTau", &nboostedTau, &b_nboostedTau);
   tree->SetBranchAddress("boostedTau_idAntiEle2018", boostedTau_idAntiEle2018, &b_boostedTau_idAntiEle2018);
   tree->SetBranchAddress("boostedTau_idAntiMu", boostedTau_idAntiMu, &b_boostedTau_idAntiMu);
   tree->SetBranchAddress("boostedTau_idDecayModeNewDMs", boostedTau_idDecayModeNewDMs, &b_boostedTau_idDecayModeNewDMs);
   tree->SetBranchAddress("boostedTau_idDecayModeOldDMs", boostedTau_idDecayModeOldDMs, &b_boostedTau_idDecayModeOldDMs);
   tree->SetBranchAddress("boostedTau_idDeepTau2018v2p7VSe", boostedTau_idDeepTau2018v2p7VSe, &b_boostedTau_idDeepTau2018v2p7VSe);
   tree->SetBranchAddress("boostedTau_idDeepTau2018v2p7VSjet", boostedTau_idDeepTau2018v2p7VSjet, &b_boostedTau_idDeepTau2018v2p7VSjet);
   tree->SetBranchAddress("boostedTau_idDeepTau2018v2p7VSmu", boostedTau_idDeepTau2018v2p7VSmu, &b_boostedTau_idDeepTau2018v2p7VSmu);
   tree->SetBranchAddress("boostedTau_idMVAnewDM2017v2", boostedTau_idMVAnewDM2017v2, &b_boostedTau_idMVAnewDM2017v2);
   tree->SetBranchAddress("boostedTau_idMVAoldDM2017v2", boostedTau_idMVAoldDM2017v2, &b_boostedTau_idMVAoldDM2017v2);
   tree->SetBranchAddress("boostedTau_idMVAoldDMdR032017v2", boostedTau_idMVAoldDMdR032017v2, &b_boostedTau_idMVAoldDMdR032017v2);
   tree->SetBranchAddress("boostedTau_jetIdx", boostedTau_jetIdx, &b_boostedTau_jetIdx);
   tree->SetBranchAddress("boostedTau_rawAntiEleCat2018", boostedTau_rawAntiEleCat2018, &b_boostedTau_rawAntiEleCat2018);
   tree->SetBranchAddress("boostedTau_Ecounter", boostedTau_Ecounter, &b_boostedTau_Ecounter);
   tree->SetBranchAddress("boostedTau_Mcounter", boostedTau_Mcounter, &b_boostedTau_Mcounter);
   tree->SetBranchAddress("boostedTau_SubLeadingElectronPhi", boostedTau_SubLeadingElectronPhi, &b_boostedTau_SubLeadingElectronPhi);
   tree->SetBranchAddress("boostedTau_SubLeadingMuonM", boostedTau_SubLeadingMuonM, &b_boostedTau_SubLeadingMuonM);
   tree->SetBranchAddress("boostedTau_SubSubLeadingElectronPhi", boostedTau_SubSubLeadingElectronPhi, &b_boostedTau_SubSubLeadingElectronPhi);
   tree->SetBranchAddress("boostedTau_SubSubLeadingMuonM", boostedTau_SubSubLeadingMuonM, &b_boostedTau_SubSubLeadingMuonM);
   tree->SetBranchAddress("boostedTau_charge", boostedTau_charge, &b_boostedTau_charge);
   tree->SetBranchAddress("boostedTau_decayMode", boostedTau_decayMode, &b_boostedTau_decayMode);
   tree->SetBranchAddress("boostedTau_LeadingElectronCorrIso", boostedTau_LeadingElectronCorrIso, &b_boostedTau_LeadingElectronCorrIso);
   tree->SetBranchAddress("boostedTau_LeadingElectronEta", boostedTau_LeadingElectronEta, &b_boostedTau_LeadingElectronEta);
   tree->SetBranchAddress("boostedTau_LeadingElectronM", boostedTau_LeadingElectronM, &b_boostedTau_LeadingElectronM);
   tree->SetBranchAddress("boostedTau_LeadingElectronPhi", boostedTau_LeadingElectronPhi, &b_boostedTau_LeadingElectronPhi);
   tree->SetBranchAddress("boostedTau_LeadingElectronPt", boostedTau_LeadingElectronPt, &b_boostedTau_LeadingElectronPt);
   tree->SetBranchAddress("boostedTau_LeadingElectrondelR", boostedTau_LeadingElectrondelR, &b_boostedTau_LeadingElectrondelR);
   tree->SetBranchAddress("boostedTau_LeadingElectronea", boostedTau_LeadingElectronea, &b_boostedTau_LeadingElectronea);
   tree->SetBranchAddress("boostedTau_LeadingElectronrho", boostedTau_LeadingElectronrho, &b_boostedTau_LeadingElectronrho);
   tree->SetBranchAddress("boostedTau_LeadingElectronsumPFChargedHadronPt", boostedTau_LeadingElectronsumPFChargedHadronPt, &b_boostedTau_LeadingElectronsumPFChargedHadronPt);
   tree->SetBranchAddress("boostedTau_LeadingElectronsumPFNeutralHadronPt", boostedTau_LeadingElectronsumPFNeutralHadronPt, &b_boostedTau_LeadingElectronsumPFNeutralHadronPt);
   tree->SetBranchAddress("boostedTau_LeadingElectronsumPFPhotonPt", boostedTau_LeadingElectronsumPFPhotonPt, &b_boostedTau_LeadingElectronsumPFPhotonPt);
   tree->SetBranchAddress("boostedTau_LeadingElectrontausumPFChargedHadronPt", boostedTau_LeadingElectrontausumPFChargedHadronPt, &b_boostedTau_LeadingElectrontausumPFChargedHadronPt);
   tree->SetBranchAddress("boostedTau_LeadingElectrontausumPFNeutralHadronPt", boostedTau_LeadingElectrontausumPFNeutralHadronPt, &b_boostedTau_LeadingElectrontausumPFNeutralHadronPt);
   tree->SetBranchAddress("boostedTau_LeadingElectrontausumPFPhotonPt", boostedTau_LeadingElectrontausumPFPhotonPt, &b_boostedTau_LeadingElectrontausumPFPhotonPt);
   tree->SetBranchAddress("boostedTau_LeadingMuonCorrIso", boostedTau_LeadingMuonCorrIso, &b_boostedTau_LeadingMuonCorrIso);
   tree->SetBranchAddress("boostedTau_LeadingMuonEta", boostedTau_LeadingMuonEta, &b_boostedTau_LeadingMuonEta);
   tree->SetBranchAddress("boostedTau_LeadingMuonM", boostedTau_LeadingMuonM, &b_boostedTau_LeadingMuonM);
   tree->SetBranchAddress("boostedTau_LeadingMuonPhi", boostedTau_LeadingMuonPhi, &b_boostedTau_LeadingMuonPhi);
   tree->SetBranchAddress("boostedTau_LeadingMuonPt", boostedTau_LeadingMuonPt, &b_boostedTau_LeadingMuonPt);
   tree->SetBranchAddress("boostedTau_LeadingMuondelR", boostedTau_LeadingMuondelR, &b_boostedTau_LeadingMuondelR);
   tree->SetBranchAddress("boostedTau_LeadingMuonsumPFChargedHadronPt", boostedTau_LeadingMuonsumPFChargedHadronPt, &b_boostedTau_LeadingMuonsumPFChargedHadronPt);
   tree->SetBranchAddress("boostedTau_LeadingMuonsumPFNeutralHadronPt", boostedTau_LeadingMuonsumPFNeutralHadronPt, &b_boostedTau_LeadingMuonsumPFNeutralHadronPt);
   tree->SetBranchAddress("boostedTau_LeadingMuonsumPFPhotonPt", boostedTau_LeadingMuonsumPFPhotonPt, &b_boostedTau_LeadingMuonsumPFPhotonPt);
   tree->SetBranchAddress("boostedTau_LeadingMuonsumPUPt", boostedTau_LeadingMuonsumPUPt, &b_boostedTau_LeadingMuonsumPUPt);
   tree->SetBranchAddress("boostedTau_LeadingMuontausumPFChargedHadronPt", boostedTau_LeadingMuontausumPFChargedHadronPt, &b_boostedTau_LeadingMuontausumPFChargedHadronPt);
   tree->SetBranchAddress("boostedTau_LeadingMuontausumPFNeutralHadronPt", boostedTau_LeadingMuontausumPFNeutralHadronPt, &b_boostedTau_LeadingMuontausumPFNeutralHadronPt);
   tree->SetBranchAddress("boostedTau_LeadingMuontausumPFPhotonPt", boostedTau_LeadingMuontausumPFPhotonPt, &b_boostedTau_LeadingMuontausumPFPhotonPt);
   tree->SetBranchAddress("boostedTau_SubLeadingElectronCorrIso", boostedTau_SubLeadingElectronCorrIso, &b_boostedTau_SubLeadingElectronCorrIso);
   tree->SetBranchAddress("boostedTau_SubLeadingElectronEta", boostedTau_SubLeadingElectronEta, &b_boostedTau_SubLeadingElectronEta);
   tree->SetBranchAddress("boostedTau_SubLeadingElectronM", boostedTau_SubLeadingElectronM, &b_boostedTau_SubLeadingElectronM);
   tree->SetBranchAddress("boostedTau_SubLeadingElectronPt", boostedTau_SubLeadingElectronPt, &b_boostedTau_SubLeadingElectronPt);
   tree->SetBranchAddress("boostedTau_SubLeadingElectrondelR", boostedTau_SubLeadingElectrondelR, &b_boostedTau_SubLeadingElectrondelR);
   tree->SetBranchAddress("boostedTau_SubLeadingElectronea", boostedTau_SubLeadingElectronea, &b_boostedTau_SubLeadingElectronea);
   tree->SetBranchAddress("boostedTau_SubLeadingElectronrho", boostedTau_SubLeadingElectronrho, &b_boostedTau_SubLeadingElectronrho);
   tree->SetBranchAddress("boostedTau_SubLeadingElectronsumPFChargedHadronPt", boostedTau_SubLeadingElectronsumPFChargedHadronPt, &b_boostedTau_SubLeadingElectronsumPFChargedHadronPt);
   tree->SetBranchAddress("boostedTau_SubLeadingElectronsumPFNeutralHadronPt", boostedTau_SubLeadingElectronsumPFNeutralHadronPt, &b_boostedTau_SubLeadingElectronsumPFNeutralHadronPt);
   tree->SetBranchAddress("boostedTau_SubLeadingElectronsumPFPhotonPt", boostedTau_SubLeadingElectronsumPFPhotonPt, &b_boostedTau_SubLeadingElectronsumPFPhotonPt);
   tree->SetBranchAddress("boostedTau_SubLeadingElectrontausumPFChargedHadronPt", boostedTau_SubLeadingElectrontausumPFChargedHadronPt, &b_boostedTau_SubLeadingElectrontausumPFChargedHadronPt);
   tree->SetBranchAddress("boostedTau_SubLeadingElectrontausumPFNeutralHadronPt", boostedTau_SubLeadingElectrontausumPFNeutralHadronPt, &b_boostedTau_SubLeadingElectrontausumPFNeutralHadronPt);
   tree->SetBranchAddress("boostedTau_SubLeadingElectrontausumPFPhotonPt", boostedTau_SubLeadingElectrontausumPFPhotonPt, &b_boostedTau_SubLeadingElectrontausumPFPhotonPt);
   tree->SetBranchAddress("boostedTau_SubLeadingMuonCorrIso", boostedTau_SubLeadingMuonCorrIso, &b_boostedTau_SubLeadingMuonCorrIso);
   tree->SetBranchAddress("boostedTau_SubLeadingMuonEta", boostedTau_SubLeadingMuonEta, &b_boostedTau_SubLeadingMuonEta);
   tree->SetBranchAddress("boostedTau_SubLeadingMuonPhi", boostedTau_SubLeadingMuonPhi, &b_boostedTau_SubLeadingMuonPhi);
   tree->SetBranchAddress("boostedTau_SubLeadingMuonPt", boostedTau_SubLeadingMuonPt, &b_boostedTau_SubLeadingMuonPt);
   tree->SetBranchAddress("boostedTau_SubLeadingMuondelR", boostedTau_SubLeadingMuondelR, &b_boostedTau_SubLeadingMuondelR);
   tree->SetBranchAddress("boostedTau_SubLeadingMuonsumPFChargedHadronPt", boostedTau_SubLeadingMuonsumPFChargedHadronPt, &b_boostedTau_SubLeadingMuonsumPFChargedHadronPt);
   tree->SetBranchAddress("boostedTau_SubLeadingMuonsumPFNeutralHadronPt", boostedTau_SubLeadingMuonsumPFNeutralHadronPt, &b_boostedTau_SubLeadingMuonsumPFNeutralHadronPt);
   tree->SetBranchAddress("boostedTau_SubLeadingMuonsumPFPhotonPt", boostedTau_SubLeadingMuonsumPFPhotonPt, &b_boostedTau_SubLeadingMuonsumPFPhotonPt);
   tree->SetBranchAddress("boostedTau_SubLeadingMuonsumPUPt", boostedTau_SubLeadingMuonsumPUPt, &b_boostedTau_SubLeadingMuonsumPUPt);
   tree->SetBranchAddress("boostedTau_SubLeadingMuontausumPFChargedHadronPt", boostedTau_SubLeadingMuontausumPFChargedHadronPt, &b_boostedTau_SubLeadingMuontausumPFChargedHadronPt);
   tree->SetBranchAddress("boostedTau_SubLeadingMuontausumPFNeutralHadronPt", boostedTau_SubLeadingMuontausumPFNeutralHadronPt, &b_boostedTau_SubLeadingMuontausumPFNeutralHadronPt);
   tree->SetBranchAddress("boostedTau_SubLeadingMuontausumPFPhotonPt", boostedTau_SubLeadingMuontausumPFPhotonPt, &b_boostedTau_SubLeadingMuontausumPFPhotonPt);
   tree->SetBranchAddress("boostedTau_SubSubLeadingElectronCorrIso", boostedTau_SubSubLeadingElectronCorrIso, &b_boostedTau_SubSubLeadingElectronCorrIso);
   tree->SetBranchAddress("boostedTau_SubSubLeadingElectronEta", boostedTau_SubSubLeadingElectronEta, &b_boostedTau_SubSubLeadingElectronEta);
   tree->SetBranchAddress("boostedTau_SubSubLeadingElectronM", boostedTau_SubSubLeadingElectronM, &b_boostedTau_SubSubLeadingElectronM);
   tree->SetBranchAddress("boostedTau_SubSubLeadingElectronPt", boostedTau_SubSubLeadingElectronPt, &b_boostedTau_SubSubLeadingElectronPt);
   tree->SetBranchAddress("boostedTau_SubSubLeadingElectrondelR", boostedTau_SubSubLeadingElectrondelR, &b_boostedTau_SubSubLeadingElectrondelR);
   tree->SetBranchAddress("boostedTau_SubSubLeadingElectronea", boostedTau_SubSubLeadingElectronea, &b_boostedTau_SubSubLeadingElectronea);
   tree->SetBranchAddress("boostedTau_SubSubLeadingElectronrho", boostedTau_SubSubLeadingElectronrho, &b_boostedTau_SubSubLeadingElectronrho);
   tree->SetBranchAddress("boostedTau_SubSubLeadingElectronsumPFChargedHadronPt", boostedTau_SubSubLeadingElectronsumPFChargedHadronPt, &b_boostedTau_SubSubLeadingElectronsumPFChargedHadronPt);
   tree->SetBranchAddress("boostedTau_SubSubLeadingElectronsumPFNeutralHadronPt", boostedTau_SubSubLeadingElectronsumPFNeutralHadronPt, &b_boostedTau_SubSubLeadingElectronsumPFNeutralHadronPt);
   tree->SetBranchAddress("boostedTau_SubSubLeadingElectronsumPFPhotonPt", boostedTau_SubSubLeadingElectronsumPFPhotonPt, &b_boostedTau_SubSubLeadingElectronsumPFPhotonPt);
   tree->SetBranchAddress("boostedTau_SubSubLeadingElectrontausumPFChargedHadronPt", boostedTau_SubSubLeadingElectrontausumPFChargedHadronPt, &b_boostedTau_SubSubLeadingElectrontausumPFChargedHadronPt);
   tree->SetBranchAddress("boostedTau_SubSubLeadingElectrontausumPFNeutralHadronPt", boostedTau_SubSubLeadingElectrontausumPFNeutralHadronPt, &b_boostedTau_SubSubLeadingElectrontausumPFNeutralHadronPt);
   tree->SetBranchAddress("boostedTau_SubSubLeadingElectrontausumPFPhotonPt", boostedTau_SubSubLeadingElectrontausumPFPhotonPt, &b_boostedTau_SubSubLeadingElectrontausumPFPhotonPt);
   tree->SetBranchAddress("boostedTau_SubSubLeadingMuonCorrIso", boostedTau_SubSubLeadingMuonCorrIso, &b_boostedTau_SubSubLeadingMuonCorrIso);
   tree->SetBranchAddress("boostedTau_SubSubLeadingMuonEta", boostedTau_SubSubLeadingMuonEta, &b_boostedTau_SubSubLeadingMuonEta);
   tree->SetBranchAddress("boostedTau_SubSubLeadingMuonPhi", boostedTau_SubSubLeadingMuonPhi, &b_boostedTau_SubSubLeadingMuonPhi);
   tree->SetBranchAddress("boostedTau_SubSubLeadingMuonPt", boostedTau_SubSubLeadingMuonPt, &b_boostedTau_SubSubLeadingMuonPt);
   tree->SetBranchAddress("boostedTau_SubSubLeadingMuondelR", boostedTau_SubSubLeadingMuondelR, &b_boostedTau_SubSubLeadingMuondelR);
   tree->SetBranchAddress("boostedTau_SubSubLeadingMuonsumPFChargedHadronPt", boostedTau_SubSubLeadingMuonsumPFChargedHadronPt, &b_boostedTau_SubSubLeadingMuonsumPFChargedHadronPt);
   tree->SetBranchAddress("boostedTau_SubSubLeadingMuonsumPFNeutralHadronPt", boostedTau_SubSubLeadingMuonsumPFNeutralHadronPt, &b_boostedTau_SubSubLeadingMuonsumPFNeutralHadronPt);
   tree->SetBranchAddress("boostedTau_SubSubLeadingMuonsumPFPhotonPt", boostedTau_SubSubLeadingMuonsumPFPhotonPt, &b_boostedTau_SubSubLeadingMuonsumPFPhotonPt);
   tree->SetBranchAddress("boostedTau_SubSubLeadingMuonsumPUPt", boostedTau_SubSubLeadingMuonsumPUPt, &b_boostedTau_SubSubLeadingMuonsumPUPt);
   tree->SetBranchAddress("boostedTau_SubSubLeadingMuontausumPFChargedHadronPt", boostedTau_SubSubLeadingMuontausumPFChargedHadronPt, &b_boostedTau_SubSubLeadingMuontausumPFChargedHadronPt);
   tree->SetBranchAddress("boostedTau_SubSubLeadingMuontausumPFNeutralHadronPt", boostedTau_SubSubLeadingMuontausumPFNeutralHadronPt, &b_boostedTau_SubSubLeadingMuontausumPFNeutralHadronPt);
   tree->SetBranchAddress("boostedTau_SubSubLeadingMuontausumPFPhotonPt", boostedTau_SubSubLeadingMuontausumPFPhotonPt, &b_boostedTau_SubSubLeadingMuontausumPFPhotonPt);
   tree->SetBranchAddress("boostedTau_chargedIso", boostedTau_chargedIso, &b_boostedTau_chargedIso);
   tree->SetBranchAddress("boostedTau_eta", boostedTau_eta, &b_boostedTau_eta);
   tree->SetBranchAddress("boostedTau_leadTkDeltaEta", boostedTau_leadTkDeltaEta, &b_boostedTau_leadTkDeltaEta);
   tree->SetBranchAddress("boostedTau_leadTkDeltaPhi", boostedTau_leadTkDeltaPhi, &b_boostedTau_leadTkDeltaPhi);
   tree->SetBranchAddress("boostedTau_leadTkPtOverTauPt", boostedTau_leadTkPtOverTauPt, &b_boostedTau_leadTkPtOverTauPt);
   tree->SetBranchAddress("boostedTau_mass", boostedTau_mass, &b_boostedTau_mass);
   tree->SetBranchAddress("boostedTau_neutralIso", boostedTau_neutralIso, &b_boostedTau_neutralIso);
   tree->SetBranchAddress("boostedTau_phi", boostedTau_phi, &b_boostedTau_phi);
   tree->SetBranchAddress("boostedTau_photonsOutsideSignalCone", boostedTau_photonsOutsideSignalCone, &b_boostedTau_photonsOutsideSignalCone);
   tree->SetBranchAddress("boostedTau_pt", boostedTau_pt, &b_boostedTau_pt);
   tree->SetBranchAddress("boostedTau_puCorr", boostedTau_puCorr, &b_boostedTau_puCorr);
   tree->SetBranchAddress("boostedTau_rawAntiEle2018", boostedTau_rawAntiEle2018, &b_boostedTau_rawAntiEle2018);
   tree->SetBranchAddress("boostedTau_rawDeepTau2018v2p7VSe", boostedTau_rawDeepTau2018v2p7VSe, &b_boostedTau_rawDeepTau2018v2p7VSe);
   tree->SetBranchAddress("boostedTau_rawDeepTau2018v2p7VSjet", boostedTau_rawDeepTau2018v2p7VSjet, &b_boostedTau_rawDeepTau2018v2p7VSjet);
   tree->SetBranchAddress("boostedTau_rawDeepTau2018v2p7VSmu", boostedTau_rawDeepTau2018v2p7VSmu, &b_boostedTau_rawDeepTau2018v2p7VSmu);
   tree->SetBranchAddress("boostedTau_rawIso", boostedTau_rawIso, &b_boostedTau_rawIso);
   tree->SetBranchAddress("boostedTau_rawIsodR03", boostedTau_rawIsodR03, &b_boostedTau_rawIsodR03);
   tree->SetBranchAddress("boostedTau_rawMVAnewDM2017v2", boostedTau_rawMVAnewDM2017v2, &b_boostedTau_rawMVAnewDM2017v2);
   tree->SetBranchAddress("boostedTau_rawMVAoldDM2017v2", boostedTau_rawMVAoldDM2017v2, &b_boostedTau_rawMVAoldDM2017v2);
   tree->SetBranchAddress("boostedTau_rawMVAoldDMdR032017v2", boostedTau_rawMVAoldDMdR032017v2, &b_boostedTau_rawMVAoldDMdR032017v2);
   tree->SetBranchAddress("CaloMET_phi", &CaloMET_phi, &b_CaloMET_phi);
   tree->SetBranchAddress("CaloMET_pt", &CaloMET_pt, &b_CaloMET_pt);
   tree->SetBranchAddress("CaloMET_sumEt", &CaloMET_sumEt, &b_CaloMET_sumEt);
   tree->SetBranchAddress("ChsMET_phi", &ChsMET_phi, &b_ChsMET_phi);
   tree->SetBranchAddress("ChsMET_pt", &ChsMET_pt, &b_ChsMET_pt);
   tree->SetBranchAddress("ChsMET_sumEt", &ChsMET_sumEt, &b_ChsMET_sumEt);
   tree->SetBranchAddress("nCorrT1METJet", &nCorrT1METJet, &b_nCorrT1METJet);
   tree->SetBranchAddress("CorrT1METJet_area", CorrT1METJet_area, &b_CorrT1METJet_area);
   tree->SetBranchAddress("CorrT1METJet_eta", CorrT1METJet_eta, &b_CorrT1METJet_eta);
   tree->SetBranchAddress("CorrT1METJet_muonSubtrFactor", CorrT1METJet_muonSubtrFactor, &b_CorrT1METJet_muonSubtrFactor);
   tree->SetBranchAddress("CorrT1METJet_phi", CorrT1METJet_phi, &b_CorrT1METJet_phi);
   tree->SetBranchAddress("CorrT1METJet_rawPt", CorrT1METJet_rawPt, &b_CorrT1METJet_rawPt);
   tree->SetBranchAddress("DeepMETResolutionTune_phi", &DeepMETResolutionTune_phi, &b_DeepMETResolutionTune_phi);
   tree->SetBranchAddress("DeepMETResolutionTune_pt", &DeepMETResolutionTune_pt, &b_DeepMETResolutionTune_pt);
   tree->SetBranchAddress("DeepMETResponseTune_phi", &DeepMETResponseTune_phi, &b_DeepMETResponseTune_phi);
   tree->SetBranchAddress("DeepMETResponseTune_pt", &DeepMETResponseTune_pt, &b_DeepMETResponseTune_pt);
   tree->SetBranchAddress("nElectron", &nElectron, &b_nElectron);
   tree->SetBranchAddress("Electron_seediEtaOriX", Electron_seediEtaOriX, &b_Electron_seediEtaOriX);
   tree->SetBranchAddress("Electron_convVeto", Electron_convVeto, &b_Electron_convVeto);
   tree->SetBranchAddress("Electron_cutBased", Electron_cutBased, &b_Electron_cutBased);
   tree->SetBranchAddress("Electron_cutBased_HEEP", Electron_cutBased_HEEP, &b_Electron_cutBased_HEEP);
   tree->SetBranchAddress("Electron_isPFcand", Electron_isPFcand, &b_Electron_isPFcand);
   tree->SetBranchAddress("Electron_jetNDauCharged", Electron_jetNDauCharged, &b_Electron_jetNDauCharged);
   tree->SetBranchAddress("Electron_lostHits", Electron_lostHits, &b_Electron_lostHits);
   tree->SetBranchAddress("Electron_mvaIso_WP80", Electron_mvaIso_WP80, &b_Electron_mvaIso_WP80);
   tree->SetBranchAddress("Electron_mvaIso_WP90", Electron_mvaIso_WP90, &b_Electron_mvaIso_WP90);
   tree->SetBranchAddress("Electron_mvaIso_WPL", Electron_mvaIso_WPL, &b_Electron_mvaIso_WPL);
   tree->SetBranchAddress("Electron_mvaNoIso_WP80", Electron_mvaNoIso_WP80, &b_Electron_mvaNoIso_WP80);
   tree->SetBranchAddress("Electron_mvaNoIso_WP90", Electron_mvaNoIso_WP90, &b_Electron_mvaNoIso_WP90);
   tree->SetBranchAddress("Electron_mvaNoIso_WPL", Electron_mvaNoIso_WPL, &b_Electron_mvaNoIso_WPL);
   tree->SetBranchAddress("Electron_seedGain", Electron_seedGain, &b_Electron_seedGain);
   tree->SetBranchAddress("Electron_tightCharge", Electron_tightCharge, &b_Electron_tightCharge);
   tree->SetBranchAddress("Electron_jetIdx", Electron_jetIdx, &b_Electron_jetIdx);
   tree->SetBranchAddress("Electron_photonIdx", Electron_photonIdx, &b_Electron_photonIdx);
   tree->SetBranchAddress("Electron_svIdx", Electron_svIdx, &b_Electron_svIdx);
   tree->SetBranchAddress("Electron_fsrPhotonIdx", Electron_fsrPhotonIdx, &b_Electron_fsrPhotonIdx);
   tree->SetBranchAddress("Electron_charge", Electron_charge, &b_Electron_charge);
   tree->SetBranchAddress("Electron_pdgId", Electron_pdgId, &b_Electron_pdgId);
   tree->SetBranchAddress("Electron_seediPhiOriY", Electron_seediPhiOriY, &b_Electron_seediPhiOriY);
   tree->SetBranchAddress("Electron_vidNestedWPBitmap", Electron_vidNestedWPBitmap, &b_Electron_vidNestedWPBitmap);
   tree->SetBranchAddress("Electron_vidNestedWPBitmapHEEP", Electron_vidNestedWPBitmapHEEP, &b_Electron_vidNestedWPBitmapHEEP);
   tree->SetBranchAddress("Electron_dEscaleDown", Electron_dEscaleDown, &b_Electron_dEscaleDown);
   tree->SetBranchAddress("Electron_dEscaleUp", Electron_dEscaleUp, &b_Electron_dEscaleUp);
   tree->SetBranchAddress("Electron_dEsigmaDown", Electron_dEsigmaDown, &b_Electron_dEsigmaDown);
   tree->SetBranchAddress("Electron_dEsigmaUp", Electron_dEsigmaUp, &b_Electron_dEsigmaUp);
   tree->SetBranchAddress("Electron_deltaEtaSC", Electron_deltaEtaSC, &b_Electron_deltaEtaSC);
   tree->SetBranchAddress("Electron_dr03EcalRecHitSumEt", Electron_dr03EcalRecHitSumEt, &b_Electron_dr03EcalRecHitSumEt);
   tree->SetBranchAddress("Electron_dr03HcalDepth1TowerSumEt", Electron_dr03HcalDepth1TowerSumEt, &b_Electron_dr03HcalDepth1TowerSumEt);
   tree->SetBranchAddress("Electron_dr03TkSumPt", Electron_dr03TkSumPt, &b_Electron_dr03TkSumPt);
   tree->SetBranchAddress("Electron_dr03TkSumPtHEEP", Electron_dr03TkSumPtHEEP, &b_Electron_dr03TkSumPtHEEP);
   tree->SetBranchAddress("Electron_dxy", Electron_dxy, &b_Electron_dxy);
   tree->SetBranchAddress("Electron_dxyErr", Electron_dxyErr, &b_Electron_dxyErr);
   tree->SetBranchAddress("Electron_dz", Electron_dz, &b_Electron_dz);
   tree->SetBranchAddress("Electron_dzErr", Electron_dzErr, &b_Electron_dzErr);
   tree->SetBranchAddress("Electron_eCorr", Electron_eCorr, &b_Electron_eCorr);
   tree->SetBranchAddress("Electron_eInvMinusPInv", Electron_eInvMinusPInv, &b_Electron_eInvMinusPInv);
   tree->SetBranchAddress("Electron_energyErr", Electron_energyErr, &b_Electron_energyErr);
   tree->SetBranchAddress("Electron_eta", Electron_eta, &b_Electron_eta);
   tree->SetBranchAddress("Electron_hoe", Electron_hoe, &b_Electron_hoe);
   tree->SetBranchAddress("Electron_ip3d", Electron_ip3d, &b_Electron_ip3d);
   tree->SetBranchAddress("Electron_jetPtRelv2", Electron_jetPtRelv2, &b_Electron_jetPtRelv2);
   tree->SetBranchAddress("Electron_jetRelIso", Electron_jetRelIso, &b_Electron_jetRelIso);
   tree->SetBranchAddress("Electron_mass", Electron_mass, &b_Electron_mass);
   tree->SetBranchAddress("Electron_miniPFRelIso_all", Electron_miniPFRelIso_all, &b_Electron_miniPFRelIso_all);
   tree->SetBranchAddress("Electron_miniPFRelIso_chg", Electron_miniPFRelIso_chg, &b_Electron_miniPFRelIso_chg);
   tree->SetBranchAddress("Electron_mvaHZZIso", Electron_mvaHZZIso, &b_Electron_mvaHZZIso);
   tree->SetBranchAddress("Electron_mvaIso", Electron_mvaIso, &b_Electron_mvaIso);
   tree->SetBranchAddress("Electron_mvaNoIso", Electron_mvaNoIso, &b_Electron_mvaNoIso);
   tree->SetBranchAddress("Electron_pfRelIso03_all", Electron_pfRelIso03_all, &b_Electron_pfRelIso03_all);
   tree->SetBranchAddress("Electron_pfRelIso03_chg", Electron_pfRelIso03_chg, &b_Electron_pfRelIso03_chg);
   tree->SetBranchAddress("Electron_phi", Electron_phi, &b_Electron_phi);
   tree->SetBranchAddress("Electron_pt", Electron_pt, &b_Electron_pt);
   tree->SetBranchAddress("Electron_r9", Electron_r9, &b_Electron_r9);
   tree->SetBranchAddress("Electron_scEtOverPt", Electron_scEtOverPt, &b_Electron_scEtOverPt);
   tree->SetBranchAddress("Electron_sieie", Electron_sieie, &b_Electron_sieie);
   tree->SetBranchAddress("Electron_sip3d", Electron_sip3d, &b_Electron_sip3d);
   tree->SetBranchAddress("Electron_mvaTTH", Electron_mvaTTH, &b_Electron_mvaTTH);
   tree->SetBranchAddress("nFatJet", &nFatJet, &b_nFatJet);
   tree->SetBranchAddress("FatJet_jetId", FatJet_jetId, &b_FatJet_jetId);
   tree->SetBranchAddress("FatJet_nConstituents", FatJet_nConstituents, &b_FatJet_nConstituents);
   tree->SetBranchAddress("FatJet_subJetIdx1", FatJet_subJetIdx1, &b_FatJet_subJetIdx1);
   tree->SetBranchAddress("FatJet_subJetIdx2", FatJet_subJetIdx2, &b_FatJet_subJetIdx2);
   tree->SetBranchAddress("FatJet_electronIdx3SJ", FatJet_electronIdx3SJ, &b_FatJet_electronIdx3SJ);
   tree->SetBranchAddress("FatJet_muonIdx3SJ", FatJet_muonIdx3SJ, &b_FatJet_muonIdx3SJ);
   tree->SetBranchAddress("FatJet_area", FatJet_area, &b_FatJet_area);
   tree->SetBranchAddress("FatJet_btagCSVV2", FatJet_btagCSVV2, &b_FatJet_btagCSVV2);
   tree->SetBranchAddress("FatJet_btagDDBvLV2", FatJet_btagDDBvLV2, &b_FatJet_btagDDBvLV2);
   tree->SetBranchAddress("FatJet_btagDDCvBV2", FatJet_btagDDCvBV2, &b_FatJet_btagDDCvBV2);
   tree->SetBranchAddress("FatJet_btagDDCvLV2", FatJet_btagDDCvLV2, &b_FatJet_btagDDCvLV2);
   tree->SetBranchAddress("FatJet_btagDeepB", FatJet_btagDeepB, &b_FatJet_btagDeepB);
   tree->SetBranchAddress("FatJet_btagHbb", FatJet_btagHbb, &b_FatJet_btagHbb);
   tree->SetBranchAddress("FatJet_deepTagMD_H4qvsQCD", FatJet_deepTagMD_H4qvsQCD, &b_FatJet_deepTagMD_H4qvsQCD);
   tree->SetBranchAddress("FatJet_deepTagMD_HbbvsQCD", FatJet_deepTagMD_HbbvsQCD, &b_FatJet_deepTagMD_HbbvsQCD);
   tree->SetBranchAddress("FatJet_deepTagMD_TvsQCD", FatJet_deepTagMD_TvsQCD, &b_FatJet_deepTagMD_TvsQCD);
   tree->SetBranchAddress("FatJet_deepTagMD_WvsQCD", FatJet_deepTagMD_WvsQCD, &b_FatJet_deepTagMD_WvsQCD);
   tree->SetBranchAddress("FatJet_deepTagMD_ZHbbvsQCD", FatJet_deepTagMD_ZHbbvsQCD, &b_FatJet_deepTagMD_ZHbbvsQCD);
   tree->SetBranchAddress("FatJet_deepTagMD_ZHccvsQCD", FatJet_deepTagMD_ZHccvsQCD, &b_FatJet_deepTagMD_ZHccvsQCD);
   tree->SetBranchAddress("FatJet_deepTagMD_ZbbvsQCD", FatJet_deepTagMD_ZbbvsQCD, &b_FatJet_deepTagMD_ZbbvsQCD);
   tree->SetBranchAddress("FatJet_deepTagMD_ZvsQCD", FatJet_deepTagMD_ZvsQCD, &b_FatJet_deepTagMD_ZvsQCD);
   tree->SetBranchAddress("FatJet_deepTagMD_bbvsLight", FatJet_deepTagMD_bbvsLight, &b_FatJet_deepTagMD_bbvsLight);
   tree->SetBranchAddress("FatJet_deepTagMD_ccvsLight", FatJet_deepTagMD_ccvsLight, &b_FatJet_deepTagMD_ccvsLight);
   tree->SetBranchAddress("FatJet_deepTag_H", FatJet_deepTag_H, &b_FatJet_deepTag_H);
   tree->SetBranchAddress("FatJet_deepTag_QCD", FatJet_deepTag_QCD, &b_FatJet_deepTag_QCD);
   tree->SetBranchAddress("FatJet_deepTag_QCDothers", FatJet_deepTag_QCDothers, &b_FatJet_deepTag_QCDothers);
   tree->SetBranchAddress("FatJet_deepTag_TvsQCD", FatJet_deepTag_TvsQCD, &b_FatJet_deepTag_TvsQCD);
   tree->SetBranchAddress("FatJet_deepTag_WvsQCD", FatJet_deepTag_WvsQCD, &b_FatJet_deepTag_WvsQCD);
   tree->SetBranchAddress("FatJet_deepTag_ZvsQCD", FatJet_deepTag_ZvsQCD, &b_FatJet_deepTag_ZvsQCD);
   tree->SetBranchAddress("FatJet_eta", FatJet_eta, &b_FatJet_eta);
   tree->SetBranchAddress("FatJet_mass", FatJet_mass, &b_FatJet_mass);
   tree->SetBranchAddress("FatJet_msoftdrop", FatJet_msoftdrop, &b_FatJet_msoftdrop);
   tree->SetBranchAddress("FatJet_n2b1", FatJet_n2b1, &b_FatJet_n2b1);
   tree->SetBranchAddress("FatJet_n3b1", FatJet_n3b1, &b_FatJet_n3b1);
   tree->SetBranchAddress("FatJet_particleNetLegacy_QCD", FatJet_particleNetLegacy_QCD, &b_FatJet_particleNetLegacy_QCD);
   tree->SetBranchAddress("FatJet_particleNetLegacy_Xbb", FatJet_particleNetLegacy_Xbb, &b_FatJet_particleNetLegacy_Xbb);
   tree->SetBranchAddress("FatJet_particleNetLegacy_Xcc", FatJet_particleNetLegacy_Xcc, &b_FatJet_particleNetLegacy_Xcc);
   tree->SetBranchAddress("FatJet_particleNetLegacy_Xqq", FatJet_particleNetLegacy_Xqq, &b_FatJet_particleNetLegacy_Xqq);
   tree->SetBranchAddress("FatJet_particleNetLegacy_mass", FatJet_particleNetLegacy_mass, &b_FatJet_particleNetLegacy_mass);
   tree->SetBranchAddress("FatJet_particleNetWithMass_H4qvsQCD", FatJet_particleNetWithMass_H4qvsQCD, &b_FatJet_particleNetWithMass_H4qvsQCD);
   tree->SetBranchAddress("FatJet_particleNetWithMass_HbbvsQCD", FatJet_particleNetWithMass_HbbvsQCD, &b_FatJet_particleNetWithMass_HbbvsQCD);
   tree->SetBranchAddress("FatJet_particleNetWithMass_HccvsQCD", FatJet_particleNetWithMass_HccvsQCD, &b_FatJet_particleNetWithMass_HccvsQCD);
   tree->SetBranchAddress("FatJet_particleNetWithMass_QCD", FatJet_particleNetWithMass_QCD, &b_FatJet_particleNetWithMass_QCD);
   tree->SetBranchAddress("FatJet_particleNetWithMass_TvsQCD", FatJet_particleNetWithMass_TvsQCD, &b_FatJet_particleNetWithMass_TvsQCD);
   tree->SetBranchAddress("FatJet_particleNetWithMass_WvsQCD", FatJet_particleNetWithMass_WvsQCD, &b_FatJet_particleNetWithMass_WvsQCD);
   tree->SetBranchAddress("FatJet_particleNetWithMass_ZvsQCD", FatJet_particleNetWithMass_ZvsQCD, &b_FatJet_particleNetWithMass_ZvsQCD);
   tree->SetBranchAddress("FatJet_particleNet_QCD", FatJet_particleNet_QCD, &b_FatJet_particleNet_QCD);
   tree->SetBranchAddress("FatJet_particleNet_QCD0HF", FatJet_particleNet_QCD0HF, &b_FatJet_particleNet_QCD0HF);
   tree->SetBranchAddress("FatJet_particleNet_QCD1HF", FatJet_particleNet_QCD1HF, &b_FatJet_particleNet_QCD1HF);
   tree->SetBranchAddress("FatJet_particleNet_QCD2HF", FatJet_particleNet_QCD2HF, &b_FatJet_particleNet_QCD2HF);
   tree->SetBranchAddress("FatJet_particleNet_XbbVsQCD", FatJet_particleNet_XbbVsQCD, &b_FatJet_particleNet_XbbVsQCD);
   tree->SetBranchAddress("FatJet_particleNet_XccVsQCD", FatJet_particleNet_XccVsQCD, &b_FatJet_particleNet_XccVsQCD);
   tree->SetBranchAddress("FatJet_particleNet_XggVsQCD", FatJet_particleNet_XggVsQCD, &b_FatJet_particleNet_XggVsQCD);
   tree->SetBranchAddress("FatJet_particleNet_XqqVsQCD", FatJet_particleNet_XqqVsQCD, &b_FatJet_particleNet_XqqVsQCD);
   tree->SetBranchAddress("FatJet_particleNet_XteVsQCD", FatJet_particleNet_XteVsQCD, &b_FatJet_particleNet_XteVsQCD);
   tree->SetBranchAddress("FatJet_particleNet_XtmVsQCD", FatJet_particleNet_XtmVsQCD, &b_FatJet_particleNet_XtmVsQCD);
   tree->SetBranchAddress("FatJet_particleNet_XttVsQCD", FatJet_particleNet_XttVsQCD, &b_FatJet_particleNet_XttVsQCD);
   tree->SetBranchAddress("FatJet_particleNet_massCorr", FatJet_particleNet_massCorr, &b_FatJet_particleNet_massCorr);
   tree->SetBranchAddress("FatJet_phi", FatJet_phi, &b_FatJet_phi);
   tree->SetBranchAddress("FatJet_pt", FatJet_pt, &b_FatJet_pt);
   tree->SetBranchAddress("FatJet_rawFactor", FatJet_rawFactor, &b_FatJet_rawFactor);
   tree->SetBranchAddress("FatJet_tau1", FatJet_tau1, &b_FatJet_tau1);
   tree->SetBranchAddress("FatJet_tau2", FatJet_tau2, &b_FatJet_tau2);
   tree->SetBranchAddress("FatJet_tau3", FatJet_tau3, &b_FatJet_tau3);
   tree->SetBranchAddress("FatJet_tau4", FatJet_tau4, &b_FatJet_tau4);
   tree->SetBranchAddress("FatJet_lsf3", FatJet_lsf3, &b_FatJet_lsf3);
   tree->SetBranchAddress("nFsrPhoton", &nFsrPhoton, &b_nFsrPhoton);
   tree->SetBranchAddress("FsrPhoton_electronIdx", FsrPhoton_electronIdx, &b_FsrPhoton_electronIdx);
   tree->SetBranchAddress("FsrPhoton_muonIdx", FsrPhoton_muonIdx, &b_FsrPhoton_muonIdx);
   tree->SetBranchAddress("FsrPhoton_dROverEt2", FsrPhoton_dROverEt2, &b_FsrPhoton_dROverEt2);
   tree->SetBranchAddress("FsrPhoton_eta", FsrPhoton_eta, &b_FsrPhoton_eta);
   tree->SetBranchAddress("FsrPhoton_phi", FsrPhoton_phi, &b_FsrPhoton_phi);
   tree->SetBranchAddress("FsrPhoton_pt", FsrPhoton_pt, &b_FsrPhoton_pt);
   tree->SetBranchAddress("FsrPhoton_relIso03", FsrPhoton_relIso03, &b_FsrPhoton_relIso03);
   tree->SetBranchAddress("nGenJetAK8", &nGenJetAK8, &b_nGenJetAK8);
   tree->SetBranchAddress("GenJetAK8_eta", GenJetAK8_eta, &b_GenJetAK8_eta);
   tree->SetBranchAddress("GenJetAK8_mass", GenJetAK8_mass, &b_GenJetAK8_mass);
   tree->SetBranchAddress("GenJetAK8_phi", GenJetAK8_phi, &b_GenJetAK8_phi);
   tree->SetBranchAddress("GenJetAK8_pt", GenJetAK8_pt, &b_GenJetAK8_pt);
   tree->SetBranchAddress("nGenJet", &nGenJet, &b_nGenJet);
   tree->SetBranchAddress("GenJet_eta", GenJet_eta, &b_GenJet_eta);
   tree->SetBranchAddress("GenJet_mass", GenJet_mass, &b_GenJet_mass);
   tree->SetBranchAddress("GenJet_phi", GenJet_phi, &b_GenJet_phi);
   tree->SetBranchAddress("GenJet_pt", GenJet_pt, &b_GenJet_pt);
   tree->SetBranchAddress("nGenPart", &nGenPart, &b_nGenPart);
   tree->SetBranchAddress("GenPart_genPartIdxMother", GenPart_genPartIdxMother, &b_GenPart_genPartIdxMother);
   tree->SetBranchAddress("GenPart_statusFlags", GenPart_statusFlags, &b_GenPart_statusFlags);
   tree->SetBranchAddress("GenPart_pdgId", GenPart_pdgId, &b_GenPart_pdgId);
   tree->SetBranchAddress("GenPart_status", GenPart_status, &b_GenPart_status);
   tree->SetBranchAddress("GenPart_eta", GenPart_eta, &b_GenPart_eta);
   tree->SetBranchAddress("GenPart_mass", GenPart_mass, &b_GenPart_mass);
   tree->SetBranchAddress("GenPart_phi", GenPart_phi, &b_GenPart_phi);
   tree->SetBranchAddress("GenPart_pt", GenPart_pt, &b_GenPart_pt);
   tree->SetBranchAddress("nGenProton", &nGenProton, &b_nGenProton);
   tree->SetBranchAddress("GenProton_isPU", GenProton_isPU, &b_GenProton_isPU);
   tree->SetBranchAddress("GenProton_px", GenProton_px, &b_GenProton_px);
   tree->SetBranchAddress("GenProton_py", GenProton_py, &b_GenProton_py);
   tree->SetBranchAddress("GenProton_pz", GenProton_pz, &b_GenProton_pz);
   tree->SetBranchAddress("GenProton_vz", GenProton_vz, &b_GenProton_vz);
   tree->SetBranchAddress("nSubGenJetAK8", &nSubGenJetAK8, &b_nSubGenJetAK8);
   tree->SetBranchAddress("SubGenJetAK8_eta", SubGenJetAK8_eta, &b_SubGenJetAK8_eta);
   tree->SetBranchAddress("SubGenJetAK8_mass", SubGenJetAK8_mass, &b_SubGenJetAK8_mass);
   tree->SetBranchAddress("SubGenJetAK8_phi", SubGenJetAK8_phi, &b_SubGenJetAK8_phi);
   tree->SetBranchAddress("SubGenJetAK8_pt", SubGenJetAK8_pt, &b_SubGenJetAK8_pt);
   tree->SetBranchAddress("Generator_id1", &Generator_id1, &b_Generator_id1);
   tree->SetBranchAddress("Generator_id2", &Generator_id2, &b_Generator_id2);
   tree->SetBranchAddress("Generator_binvar", &Generator_binvar, &b_Generator_binvar);
   tree->SetBranchAddress("Generator_scalePDF", &Generator_scalePDF, &b_Generator_scalePDF);
   tree->SetBranchAddress("Generator_weight", &Generator_weight, &b_Generator_weight);
   tree->SetBranchAddress("Generator_x1", &Generator_x1, &b_Generator_x1);
   tree->SetBranchAddress("Generator_x2", &Generator_x2, &b_Generator_x2);
   tree->SetBranchAddress("Generator_xpdf1", &Generator_xpdf1, &b_Generator_xpdf1);
   tree->SetBranchAddress("Generator_xpdf2", &Generator_xpdf2, &b_Generator_xpdf2);
   tree->SetBranchAddress("GenVtx_x", &GenVtx_x, &b_GenVtx_x);
   tree->SetBranchAddress("GenVtx_y", &GenVtx_y, &b_GenVtx_y);
   tree->SetBranchAddress("GenVtx_z", &GenVtx_z, &b_GenVtx_z);
   tree->SetBranchAddress("nGenVisTau", &nGenVisTau, &b_nGenVisTau);
   tree->SetBranchAddress("GenVisTau_status", GenVisTau_status, &b_GenVisTau_status);
   tree->SetBranchAddress("GenVisTau_charge", GenVisTau_charge, &b_GenVisTau_charge);
   tree->SetBranchAddress("GenVisTau_genPartIdxMother", GenVisTau_genPartIdxMother, &b_GenVisTau_genPartIdxMother);
   tree->SetBranchAddress("GenVisTau_eta", GenVisTau_eta, &b_GenVisTau_eta);
   tree->SetBranchAddress("GenVisTau_mass", GenVisTau_mass, &b_GenVisTau_mass);
   tree->SetBranchAddress("GenVisTau_phi", GenVisTau_phi, &b_GenVisTau_phi);
   tree->SetBranchAddress("GenVisTau_pt", GenVisTau_pt, &b_GenVisTau_pt);
   tree->SetBranchAddress("genWeight", &genWeight, &b_genWeight);
   tree->SetBranchAddress("LHEWeight_originalXWGTUP", &LHEWeight_originalXWGTUP, &b_LHEWeight_originalXWGTUP);
   tree->SetBranchAddress("nLHEPdfWeight", &nLHEPdfWeight, &b_nLHEPdfWeight);
   tree->SetBranchAddress("LHEPdfWeight", LHEPdfWeight, &b_LHEPdfWeight);
   tree->SetBranchAddress("nLHEReweightingWeight", &nLHEReweightingWeight, &b_nLHEReweightingWeight);
   tree->SetBranchAddress("LHEReweightingWeight", &LHEReweightingWeight, &b_LHEReweightingWeight);
   tree->SetBranchAddress("nLHEScaleWeight", &nLHEScaleWeight, &b_nLHEScaleWeight);
   tree->SetBranchAddress("LHEScaleWeight", LHEScaleWeight, &b_LHEScaleWeight);
   tree->SetBranchAddress("nPSWeight", &nPSWeight, &b_nPSWeight);
   tree->SetBranchAddress("PSWeight", PSWeight, &b_PSWeight);
   tree->SetBranchAddress("nIsoTrack", &nIsoTrack, &b_nIsoTrack);
   tree->SetBranchAddress("IsoTrack_isHighPurityTrack", IsoTrack_isHighPurityTrack, &b_IsoTrack_isHighPurityTrack);
   tree->SetBranchAddress("IsoTrack_isPFcand", IsoTrack_isPFcand, &b_IsoTrack_isPFcand);
   tree->SetBranchAddress("IsoTrack_isFromLostTrack", IsoTrack_isFromLostTrack, &b_IsoTrack_isFromLostTrack);
   tree->SetBranchAddress("IsoTrack_charge", IsoTrack_charge, &b_IsoTrack_charge);
   tree->SetBranchAddress("IsoTrack_fromPV", IsoTrack_fromPV, &b_IsoTrack_fromPV);
   tree->SetBranchAddress("IsoTrack_pdgId", IsoTrack_pdgId, &b_IsoTrack_pdgId);
   tree->SetBranchAddress("IsoTrack_dxy", IsoTrack_dxy, &b_IsoTrack_dxy);
   tree->SetBranchAddress("IsoTrack_dz", IsoTrack_dz, &b_IsoTrack_dz);
   tree->SetBranchAddress("IsoTrack_eta", IsoTrack_eta, &b_IsoTrack_eta);
   tree->SetBranchAddress("IsoTrack_pfRelIso03_all", IsoTrack_pfRelIso03_all, &b_IsoTrack_pfRelIso03_all);
   tree->SetBranchAddress("IsoTrack_pfRelIso03_chg", IsoTrack_pfRelIso03_chg, &b_IsoTrack_pfRelIso03_chg);
   tree->SetBranchAddress("IsoTrack_phi", IsoTrack_phi, &b_IsoTrack_phi);
   tree->SetBranchAddress("IsoTrack_pt", IsoTrack_pt, &b_IsoTrack_pt);
   tree->SetBranchAddress("IsoTrack_miniPFRelIso_all", IsoTrack_miniPFRelIso_all, &b_IsoTrack_miniPFRelIso_all);
   tree->SetBranchAddress("IsoTrack_miniPFRelIso_chg", IsoTrack_miniPFRelIso_chg, &b_IsoTrack_miniPFRelIso_chg);
   tree->SetBranchAddress("nJet", &nJet, &b_nJet);
   tree->SetBranchAddress("Jet_jetId", Jet_jetId, &b_Jet_jetId);
   tree->SetBranchAddress("Jet_nConstituents", Jet_nConstituents, &b_Jet_nConstituents);
   tree->SetBranchAddress("Jet_nElectrons", Jet_nElectrons, &b_Jet_nElectrons);
   tree->SetBranchAddress("Jet_nMuons", Jet_nMuons, &b_Jet_nMuons);
   tree->SetBranchAddress("Jet_nSVs", Jet_nSVs, &b_Jet_nSVs);
   tree->SetBranchAddress("Jet_puId", Jet_puId, &b_Jet_puId);
   tree->SetBranchAddress("Jet_electronIdx1", Jet_electronIdx1, &b_Jet_electronIdx1);
   tree->SetBranchAddress("Jet_electronIdx2", Jet_electronIdx2, &b_Jet_electronIdx2);
   tree->SetBranchAddress("Jet_muonIdx1", Jet_muonIdx1, &b_Jet_muonIdx1);
   tree->SetBranchAddress("Jet_muonIdx2", Jet_muonIdx2, &b_Jet_muonIdx2);
   tree->SetBranchAddress("Jet_svIdx1", Jet_svIdx1, &b_Jet_svIdx1);
   tree->SetBranchAddress("Jet_svIdx2", Jet_svIdx2, &b_Jet_svIdx2);
   tree->SetBranchAddress("Jet_hfadjacentEtaStripsSize", Jet_hfadjacentEtaStripsSize, &b_Jet_hfadjacentEtaStripsSize);
   tree->SetBranchAddress("Jet_hfcentralEtaStripSize", Jet_hfcentralEtaStripSize, &b_Jet_hfcentralEtaStripSize);
   tree->SetBranchAddress("Jet_PNetRegPtRawCorr", Jet_PNetRegPtRawCorr, &b_Jet_PNetRegPtRawCorr);
   tree->SetBranchAddress("Jet_PNetRegPtRawCorrNeutrino", Jet_PNetRegPtRawCorrNeutrino, &b_Jet_PNetRegPtRawCorrNeutrino);
   tree->SetBranchAddress("Jet_PNetRegPtRawRes", Jet_PNetRegPtRawRes, &b_Jet_PNetRegPtRawRes);
   tree->SetBranchAddress("Jet_area", Jet_area, &b_Jet_area);
   tree->SetBranchAddress("Jet_btagCSVV2", Jet_btagCSVV2, &b_Jet_btagCSVV2);
   tree->SetBranchAddress("Jet_btagDeepB", Jet_btagDeepB, &b_Jet_btagDeepB);
   tree->SetBranchAddress("Jet_btagDeepCvB", Jet_btagDeepCvB, &b_Jet_btagDeepCvB);
   tree->SetBranchAddress("Jet_btagDeepCvL", Jet_btagDeepCvL, &b_Jet_btagDeepCvL);
   tree->SetBranchAddress("Jet_btagDeepFlavB", Jet_btagDeepFlavB, &b_Jet_btagDeepFlavB);
   tree->SetBranchAddress("Jet_btagDeepFlavCvB", Jet_btagDeepFlavCvB, &b_Jet_btagDeepFlavCvB);
   tree->SetBranchAddress("Jet_btagDeepFlavCvL", Jet_btagDeepFlavCvL, &b_Jet_btagDeepFlavCvL);
   tree->SetBranchAddress("Jet_btagDeepFlavQG", Jet_btagDeepFlavQG, &b_Jet_btagDeepFlavQG);
   tree->SetBranchAddress("Jet_btagPNetB", Jet_btagPNetB, &b_Jet_btagPNetB);
   tree->SetBranchAddress("Jet_btagPNetCvB", Jet_btagPNetCvB, &b_Jet_btagPNetCvB);
   tree->SetBranchAddress("Jet_btagPNetCvL", Jet_btagPNetCvL, &b_Jet_btagPNetCvL);
   tree->SetBranchAddress("Jet_btagPNetQvG", Jet_btagPNetQvG, &b_Jet_btagPNetQvG);
   tree->SetBranchAddress("Jet_btagPNetTauVJet", Jet_btagPNetTauVJet, &b_Jet_btagPNetTauVJet);
   tree->SetBranchAddress("Jet_btagRobustParTAK4B", Jet_btagRobustParTAK4B, &b_Jet_btagRobustParTAK4B);
   tree->SetBranchAddress("Jet_btagRobustParTAK4CvB", Jet_btagRobustParTAK4CvB, &b_Jet_btagRobustParTAK4CvB);
   tree->SetBranchAddress("Jet_btagRobustParTAK4CvL", Jet_btagRobustParTAK4CvL, &b_Jet_btagRobustParTAK4CvL);
   tree->SetBranchAddress("Jet_btagRobustParTAK4QG", Jet_btagRobustParTAK4QG, &b_Jet_btagRobustParTAK4QG);
   tree->SetBranchAddress("Jet_chEmEF", Jet_chEmEF, &b_Jet_chEmEF);
   tree->SetBranchAddress("Jet_chFPV0EF", Jet_chFPV0EF, &b_Jet_chFPV0EF);
   tree->SetBranchAddress("Jet_chHEF", Jet_chHEF, &b_Jet_chHEF);
   tree->SetBranchAddress("Jet_eta", Jet_eta, &b_Jet_eta);
   tree->SetBranchAddress("Jet_hfsigmaEtaEta", Jet_hfsigmaEtaEta, &b_Jet_hfsigmaEtaEta);
   tree->SetBranchAddress("Jet_hfsigmaPhiPhi", Jet_hfsigmaPhiPhi, &b_Jet_hfsigmaPhiPhi);
   tree->SetBranchAddress("Jet_mass", Jet_mass, &b_Jet_mass);
   tree->SetBranchAddress("Jet_muEF", Jet_muEF, &b_Jet_muEF);
   tree->SetBranchAddress("Jet_muonSubtrFactor", Jet_muonSubtrFactor, &b_Jet_muonSubtrFactor);
   tree->SetBranchAddress("Jet_neEmEF", Jet_neEmEF, &b_Jet_neEmEF);
   tree->SetBranchAddress("Jet_neHEF", Jet_neHEF, &b_Jet_neHEF);
   tree->SetBranchAddress("Jet_phi", Jet_phi, &b_Jet_phi);
   tree->SetBranchAddress("Jet_pt", Jet_pt, &b_Jet_pt);
   tree->SetBranchAddress("Jet_puIdDisc", Jet_puIdDisc, &b_Jet_puIdDisc);
   tree->SetBranchAddress("Jet_qgl", Jet_qgl, &b_Jet_qgl);
   tree->SetBranchAddress("Jet_rawFactor", Jet_rawFactor, &b_Jet_rawFactor);
   tree->SetBranchAddress("Jet_bRegCorr", Jet_bRegCorr, &b_Jet_bRegCorr);
   tree->SetBranchAddress("Jet_bRegRes", Jet_bRegRes, &b_Jet_bRegRes);
   tree->SetBranchAddress("Jet_cRegCorr", Jet_cRegCorr, &b_Jet_cRegCorr);
   tree->SetBranchAddress("Jet_cRegRes", Jet_cRegRes, &b_Jet_cRegRes);
   tree->SetBranchAddress("L1PreFiringWeight_Dn", &L1PreFiringWeight_Dn, &b_L1PreFiringWeight_Dn);
   tree->SetBranchAddress("L1PreFiringWeight_ECAL_Dn", &L1PreFiringWeight_ECAL_Dn, &b_L1PreFiringWeight_ECAL_Dn);
   tree->SetBranchAddress("L1PreFiringWeight_ECAL_Nom", &L1PreFiringWeight_ECAL_Nom, &b_L1PreFiringWeight_ECAL_Nom);
   tree->SetBranchAddress("L1PreFiringWeight_ECAL_Up", &L1PreFiringWeight_ECAL_Up, &b_L1PreFiringWeight_ECAL_Up);
   tree->SetBranchAddress("L1PreFiringWeight_Muon_Nom", &L1PreFiringWeight_Muon_Nom, &b_L1PreFiringWeight_Muon_Nom);
   tree->SetBranchAddress("L1PreFiringWeight_Muon_StatDn", &L1PreFiringWeight_Muon_StatDn, &b_L1PreFiringWeight_Muon_StatDn);
   tree->SetBranchAddress("L1PreFiringWeight_Muon_StatUp", &L1PreFiringWeight_Muon_StatUp, &b_L1PreFiringWeight_Muon_StatUp);
   tree->SetBranchAddress("L1PreFiringWeight_Muon_SystDn", &L1PreFiringWeight_Muon_SystDn, &b_L1PreFiringWeight_Muon_SystDn);
   tree->SetBranchAddress("L1PreFiringWeight_Muon_SystUp", &L1PreFiringWeight_Muon_SystUp, &b_L1PreFiringWeight_Muon_SystUp);
   tree->SetBranchAddress("L1PreFiringWeight_Nom", &L1PreFiringWeight_Nom, &b_L1PreFiringWeight_Nom);
   tree->SetBranchAddress("L1PreFiringWeight_Up", &L1PreFiringWeight_Up, &b_L1PreFiringWeight_Up);
   tree->SetBranchAddress("LHE_Njets", &LHE_Njets, &b_LHE_Njets);
   tree->SetBranchAddress("LHE_Nb", &LHE_Nb, &b_LHE_Nb);
   tree->SetBranchAddress("LHE_Nc", &LHE_Nc, &b_LHE_Nc);
   tree->SetBranchAddress("LHE_Nuds", &LHE_Nuds, &b_LHE_Nuds);
   tree->SetBranchAddress("LHE_Nglu", &LHE_Nglu, &b_LHE_Nglu);
   tree->SetBranchAddress("LHE_NpNLO", &LHE_NpNLO, &b_LHE_NpNLO);
   tree->SetBranchAddress("LHE_NpLO", &LHE_NpLO, &b_LHE_NpLO);
   tree->SetBranchAddress("LHE_HT", &LHE_HT, &b_LHE_HT);
   tree->SetBranchAddress("LHE_HTIncoming", &LHE_HTIncoming, &b_LHE_HTIncoming);
   tree->SetBranchAddress("LHE_Vpt", &LHE_Vpt, &b_LHE_Vpt);
   tree->SetBranchAddress("LHE_AlphaS", &LHE_AlphaS, &b_LHE_AlphaS);
   tree->SetBranchAddress("nLHEPart", &nLHEPart, &b_nLHEPart);
   tree->SetBranchAddress("LHEPart_pdgId", LHEPart_pdgId, &b_LHEPart_pdgId);
   tree->SetBranchAddress("LHEPart_status", LHEPart_status, &b_LHEPart_status);
   tree->SetBranchAddress("LHEPart_spin", LHEPart_spin, &b_LHEPart_spin);
   tree->SetBranchAddress("LHEPart_pt", LHEPart_pt, &b_LHEPart_pt);
   tree->SetBranchAddress("LHEPart_eta", LHEPart_eta, &b_LHEPart_eta);
   tree->SetBranchAddress("LHEPart_phi", LHEPart_phi, &b_LHEPart_phi);
   tree->SetBranchAddress("LHEPart_mass", LHEPart_mass, &b_LHEPart_mass);
   tree->SetBranchAddress("LHEPart_incomingpz", LHEPart_incomingpz, &b_LHEPart_incomingpz);
   tree->SetBranchAddress("nLowPtElectron", &nLowPtElectron, &b_nLowPtElectron);
   tree->SetBranchAddress("LowPtElectron_convVeto", LowPtElectron_convVeto, &b_LowPtElectron_convVeto);
   tree->SetBranchAddress("LowPtElectron_convWP", LowPtElectron_convWP, &b_LowPtElectron_convWP);
   tree->SetBranchAddress("LowPtElectron_lostHits", LowPtElectron_lostHits, &b_LowPtElectron_lostHits);
   tree->SetBranchAddress("LowPtElectron_electronIdx", LowPtElectron_electronIdx, &b_LowPtElectron_electronIdx);
   tree->SetBranchAddress("LowPtElectron_photonIdx", LowPtElectron_photonIdx, &b_LowPtElectron_photonIdx);
   tree->SetBranchAddress("LowPtElectron_charge", LowPtElectron_charge, &b_LowPtElectron_charge);
   tree->SetBranchAddress("LowPtElectron_pdgId", LowPtElectron_pdgId, &b_LowPtElectron_pdgId);
   tree->SetBranchAddress("LowPtElectron_ID", LowPtElectron_ID, &b_LowPtElectron_ID);
   tree->SetBranchAddress("LowPtElectron_convVtxRadius", LowPtElectron_convVtxRadius, &b_LowPtElectron_convVtxRadius);
   tree->SetBranchAddress("LowPtElectron_deltaEtaSC", LowPtElectron_deltaEtaSC, &b_LowPtElectron_deltaEtaSC);
   tree->SetBranchAddress("LowPtElectron_dxy", LowPtElectron_dxy, &b_LowPtElectron_dxy);
   tree->SetBranchAddress("LowPtElectron_dxyErr", LowPtElectron_dxyErr, &b_LowPtElectron_dxyErr);
   tree->SetBranchAddress("LowPtElectron_dz", LowPtElectron_dz, &b_LowPtElectron_dz);
   tree->SetBranchAddress("LowPtElectron_dzErr", LowPtElectron_dzErr, &b_LowPtElectron_dzErr);
   tree->SetBranchAddress("LowPtElectron_eInvMinusPInv", LowPtElectron_eInvMinusPInv, &b_LowPtElectron_eInvMinusPInv);
   tree->SetBranchAddress("LowPtElectron_embeddedID", LowPtElectron_embeddedID, &b_LowPtElectron_embeddedID);
   tree->SetBranchAddress("LowPtElectron_energyErr", LowPtElectron_energyErr, &b_LowPtElectron_energyErr);
   tree->SetBranchAddress("LowPtElectron_eta", LowPtElectron_eta, &b_LowPtElectron_eta);
   tree->SetBranchAddress("LowPtElectron_hoe", LowPtElectron_hoe, &b_LowPtElectron_hoe);
   tree->SetBranchAddress("LowPtElectron_mass", LowPtElectron_mass, &b_LowPtElectron_mass);
   tree->SetBranchAddress("LowPtElectron_miniPFRelIso_all", LowPtElectron_miniPFRelIso_all, &b_LowPtElectron_miniPFRelIso_all);
   tree->SetBranchAddress("LowPtElectron_miniPFRelIso_chg", LowPtElectron_miniPFRelIso_chg, &b_LowPtElectron_miniPFRelIso_chg);
   tree->SetBranchAddress("LowPtElectron_phi", LowPtElectron_phi, &b_LowPtElectron_phi);
   tree->SetBranchAddress("LowPtElectron_pt", LowPtElectron_pt, &b_LowPtElectron_pt);
   tree->SetBranchAddress("LowPtElectron_ptbiased", LowPtElectron_ptbiased, &b_LowPtElectron_ptbiased);
   tree->SetBranchAddress("LowPtElectron_r9", LowPtElectron_r9, &b_LowPtElectron_r9);
   tree->SetBranchAddress("LowPtElectron_scEtOverPt", LowPtElectron_scEtOverPt, &b_LowPtElectron_scEtOverPt);
   tree->SetBranchAddress("LowPtElectron_sieie", LowPtElectron_sieie, &b_LowPtElectron_sieie);
   tree->SetBranchAddress("LowPtElectron_unbiased", LowPtElectron_unbiased, &b_LowPtElectron_unbiased);
   tree->SetBranchAddress("GenMET_phi", &GenMET_phi, &b_GenMET_phi);
   tree->SetBranchAddress("GenMET_pt", &GenMET_pt, &b_GenMET_pt);
   tree->SetBranchAddress("MET_MetUnclustEnUpDeltaX", &MET_MetUnclustEnUpDeltaX, &b_MET_MetUnclustEnUpDeltaX);
   tree->SetBranchAddress("MET_MetUnclustEnUpDeltaY", &MET_MetUnclustEnUpDeltaY, &b_MET_MetUnclustEnUpDeltaY);
   tree->SetBranchAddress("MET_covXX", &MET_covXX, &b_MET_covXX);
   tree->SetBranchAddress("MET_covXY", &MET_covXY, &b_MET_covXY);
   tree->SetBranchAddress("MET_covYY", &MET_covYY, &b_MET_covYY);
   tree->SetBranchAddress("MET_phi", &MET_phi, &b_MET_phi);
   tree->SetBranchAddress("MET_pt", &MET_pt, &b_MET_pt);
   tree->SetBranchAddress("MET_significance", &MET_significance, &b_MET_significance);
   tree->SetBranchAddress("MET_sumEt", &MET_sumEt, &b_MET_sumEt);
   tree->SetBranchAddress("MET_sumPtUnclustered", &MET_sumPtUnclustered, &b_MET_sumPtUnclustered);
   tree->SetBranchAddress("nMuon", &nMuon, &b_nMuon);
   tree->SetBranchAddress("Muon_highPtId", Muon_highPtId, &b_Muon_highPtId);
   tree->SetBranchAddress("Muon_highPurity", Muon_highPurity, &b_Muon_highPurity);
   tree->SetBranchAddress("Muon_inTimeMuon", Muon_inTimeMuon, &b_Muon_inTimeMuon);
   tree->SetBranchAddress("Muon_isGlobal", Muon_isGlobal, &b_Muon_isGlobal);
   tree->SetBranchAddress("Muon_isPFcand", Muon_isPFcand, &b_Muon_isPFcand);
   tree->SetBranchAddress("Muon_isStandalone", Muon_isStandalone, &b_Muon_isStandalone);
   tree->SetBranchAddress("Muon_isTracker", Muon_isTracker, &b_Muon_isTracker);
   tree->SetBranchAddress("Muon_jetNDauCharged", Muon_jetNDauCharged, &b_Muon_jetNDauCharged);
   tree->SetBranchAddress("Muon_looseId", Muon_looseId, &b_Muon_looseId);
   tree->SetBranchAddress("Muon_mediumId", Muon_mediumId, &b_Muon_mediumId);
   tree->SetBranchAddress("Muon_mediumPromptId", Muon_mediumPromptId, &b_Muon_mediumPromptId);
   tree->SetBranchAddress("Muon_miniIsoId", Muon_miniIsoId, &b_Muon_miniIsoId);
   tree->SetBranchAddress("Muon_multiIsoId", Muon_multiIsoId, &b_Muon_multiIsoId);
   tree->SetBranchAddress("Muon_mvaMuID_WP", Muon_mvaMuID_WP, &b_Muon_mvaMuID_WP);
   tree->SetBranchAddress("Muon_nStations", Muon_nStations, &b_Muon_nStations);
   tree->SetBranchAddress("Muon_nTrackerLayers", Muon_nTrackerLayers, &b_Muon_nTrackerLayers);
   tree->SetBranchAddress("Muon_pfIsoId", Muon_pfIsoId, &b_Muon_pfIsoId);
   tree->SetBranchAddress("Muon_puppiIsoId", Muon_puppiIsoId, &b_Muon_puppiIsoId);
   tree->SetBranchAddress("Muon_softId", Muon_softId, &b_Muon_softId);
   tree->SetBranchAddress("Muon_softMvaId", Muon_softMvaId, &b_Muon_softMvaId);
   tree->SetBranchAddress("Muon_tightCharge", Muon_tightCharge, &b_Muon_tightCharge);
   tree->SetBranchAddress("Muon_tightId", Muon_tightId, &b_Muon_tightId);
   tree->SetBranchAddress("Muon_tkIsoId", Muon_tkIsoId, &b_Muon_tkIsoId);
   tree->SetBranchAddress("Muon_triggerIdLoose", Muon_triggerIdLoose, &b_Muon_triggerIdLoose);
   tree->SetBranchAddress("Muon_jetIdx", Muon_jetIdx, &b_Muon_jetIdx);
   tree->SetBranchAddress("Muon_svIdx", Muon_svIdx, &b_Muon_svIdx);
   tree->SetBranchAddress("Muon_fsrPhotonIdx", Muon_fsrPhotonIdx, &b_Muon_fsrPhotonIdx);
   tree->SetBranchAddress("Muon_charge", Muon_charge, &b_Muon_charge);
   tree->SetBranchAddress("Muon_pdgId", Muon_pdgId, &b_Muon_pdgId);
   tree->SetBranchAddress("Muon_dxy", Muon_dxy, &b_Muon_dxy);
   tree->SetBranchAddress("Muon_dxyErr", Muon_dxyErr, &b_Muon_dxyErr);
   tree->SetBranchAddress("Muon_dxybs", Muon_dxybs, &b_Muon_dxybs);
   tree->SetBranchAddress("Muon_dz", Muon_dz, &b_Muon_dz);
   tree->SetBranchAddress("Muon_dzErr", Muon_dzErr, &b_Muon_dzErr);
   tree->SetBranchAddress("Muon_eta", Muon_eta, &b_Muon_eta);
   tree->SetBranchAddress("Muon_ip3d", Muon_ip3d, &b_Muon_ip3d);
   tree->SetBranchAddress("Muon_jetPtRelv2", Muon_jetPtRelv2, &b_Muon_jetPtRelv2);
   tree->SetBranchAddress("Muon_jetRelIso", Muon_jetRelIso, &b_Muon_jetRelIso);
   tree->SetBranchAddress("Muon_mass", Muon_mass, &b_Muon_mass);
   tree->SetBranchAddress("Muon_miniPFRelIso_all", Muon_miniPFRelIso_all, &b_Muon_miniPFRelIso_all);
   tree->SetBranchAddress("Muon_miniPFRelIso_chg", Muon_miniPFRelIso_chg, &b_Muon_miniPFRelIso_chg);
   tree->SetBranchAddress("Muon_mvaMuID", Muon_mvaMuID, &b_Muon_mvaMuID);
   tree->SetBranchAddress("Muon_pfRelIso03_all", Muon_pfRelIso03_all, &b_Muon_pfRelIso03_all);
   tree->SetBranchAddress("Muon_pfRelIso03_chg", Muon_pfRelIso03_chg, &b_Muon_pfRelIso03_chg);
   tree->SetBranchAddress("Muon_pfRelIso04_all", Muon_pfRelIso04_all, &b_Muon_pfRelIso04_all);
   tree->SetBranchAddress("Muon_phi", Muon_phi, &b_Muon_phi);
   tree->SetBranchAddress("Muon_pt", Muon_pt, &b_Muon_pt);
   tree->SetBranchAddress("Muon_ptErr", Muon_ptErr, &b_Muon_ptErr);
   tree->SetBranchAddress("Muon_segmentComp", Muon_segmentComp, &b_Muon_segmentComp);
   tree->SetBranchAddress("Muon_sip3d", Muon_sip3d, &b_Muon_sip3d);
   tree->SetBranchAddress("Muon_softMva", Muon_softMva, &b_Muon_softMva);
   tree->SetBranchAddress("Muon_tkRelIso", Muon_tkRelIso, &b_Muon_tkRelIso);
   tree->SetBranchAddress("Muon_tunepRelPt", Muon_tunepRelPt, &b_Muon_tunepRelPt);
   tree->SetBranchAddress("Muon_bsConstrainedChi2", Muon_bsConstrainedChi2, &b_Muon_bsConstrainedChi2);
   tree->SetBranchAddress("Muon_bsConstrainedPt", Muon_bsConstrainedPt, &b_Muon_bsConstrainedPt);
   tree->SetBranchAddress("Muon_bsConstrainedPtErr", Muon_bsConstrainedPtErr, &b_Muon_bsConstrainedPtErr);
   tree->SetBranchAddress("Muon_mvaLowPt", Muon_mvaLowPt, &b_Muon_mvaLowPt);
   tree->SetBranchAddress("Muon_mvaTTH", Muon_mvaTTH, &b_Muon_mvaTTH);
   tree->SetBranchAddress("nPhoton", &nPhoton, &b_nPhoton);
   tree->SetBranchAddress("Photon_seediEtaOriX", Photon_seediEtaOriX, &b_Photon_seediEtaOriX);
   tree->SetBranchAddress("Photon_cutBased", Photon_cutBased, &b_Photon_cutBased);
   tree->SetBranchAddress("Photon_electronVeto", Photon_electronVeto, &b_Photon_electronVeto);
   tree->SetBranchAddress("Photon_hasConversionTracks", Photon_hasConversionTracks, &b_Photon_hasConversionTracks);
   tree->SetBranchAddress("Photon_isScEtaEB", Photon_isScEtaEB, &b_Photon_isScEtaEB);
   tree->SetBranchAddress("Photon_isScEtaEE", Photon_isScEtaEE, &b_Photon_isScEtaEE);
   tree->SetBranchAddress("Photon_mvaID_WP80", Photon_mvaID_WP80, &b_Photon_mvaID_WP80);
   tree->SetBranchAddress("Photon_mvaID_WP90", Photon_mvaID_WP90, &b_Photon_mvaID_WP90);
   tree->SetBranchAddress("Photon_pixelSeed", Photon_pixelSeed, &b_Photon_pixelSeed);
   tree->SetBranchAddress("Photon_seedGain", Photon_seedGain, &b_Photon_seedGain);
   tree->SetBranchAddress("Photon_electronIdx", Photon_electronIdx, &b_Photon_electronIdx);
   tree->SetBranchAddress("Photon_jetIdx", Photon_jetIdx, &b_Photon_jetIdx);
   tree->SetBranchAddress("Photon_seediPhiOriY", Photon_seediPhiOriY, &b_Photon_seediPhiOriY);
   tree->SetBranchAddress("Photon_vidNestedWPBitmap", Photon_vidNestedWPBitmap, &b_Photon_vidNestedWPBitmap);
   tree->SetBranchAddress("Photon_dEscaleDown", Photon_dEscaleDown, &b_Photon_dEscaleDown);
   tree->SetBranchAddress("Photon_dEscaleUp", Photon_dEscaleUp, &b_Photon_dEscaleUp);
   tree->SetBranchAddress("Photon_dEsigmaDown", Photon_dEsigmaDown, &b_Photon_dEsigmaDown);
   tree->SetBranchAddress("Photon_dEsigmaUp", Photon_dEsigmaUp, &b_Photon_dEsigmaUp);
   tree->SetBranchAddress("Photon_eCorr", Photon_eCorr, &b_Photon_eCorr);
   tree->SetBranchAddress("Photon_ecalPFClusterIso", Photon_ecalPFClusterIso, &b_Photon_ecalPFClusterIso);
   tree->SetBranchAddress("Photon_energyErr", Photon_energyErr, &b_Photon_energyErr);
   tree->SetBranchAddress("Photon_energyRaw", Photon_energyRaw, &b_Photon_energyRaw);
   tree->SetBranchAddress("Photon_esEffSigmaRR", Photon_esEffSigmaRR, &b_Photon_esEffSigmaRR);
   tree->SetBranchAddress("Photon_esEnergyOverRawE", Photon_esEnergyOverRawE, &b_Photon_esEnergyOverRawE);
   tree->SetBranchAddress("Photon_eta", Photon_eta, &b_Photon_eta);
   tree->SetBranchAddress("Photon_etaWidth", Photon_etaWidth, &b_Photon_etaWidth);
   tree->SetBranchAddress("Photon_haloTaggerMVAVal", Photon_haloTaggerMVAVal, &b_Photon_haloTaggerMVAVal);
   tree->SetBranchAddress("Photon_hcalPFClusterIso", Photon_hcalPFClusterIso, &b_Photon_hcalPFClusterIso);
   tree->SetBranchAddress("Photon_hoe", Photon_hoe, &b_Photon_hoe);
   tree->SetBranchAddress("Photon_mvaID", Photon_mvaID, &b_Photon_mvaID);
   tree->SetBranchAddress("Photon_pfChargedIso", Photon_pfChargedIso, &b_Photon_pfChargedIso);
   tree->SetBranchAddress("Photon_pfChargedIsoPFPV", Photon_pfChargedIsoPFPV, &b_Photon_pfChargedIsoPFPV);
   tree->SetBranchAddress("Photon_pfChargedIsoWorstVtx", Photon_pfChargedIsoWorstVtx, &b_Photon_pfChargedIsoWorstVtx);
   tree->SetBranchAddress("Photon_pfPhoIso03", Photon_pfPhoIso03, &b_Photon_pfPhoIso03);
   tree->SetBranchAddress("Photon_pfRelIso03_all", Photon_pfRelIso03_all, &b_Photon_pfRelIso03_all);
   tree->SetBranchAddress("Photon_pfRelIso03_chg", Photon_pfRelIso03_chg, &b_Photon_pfRelIso03_chg);
   tree->SetBranchAddress("Photon_phi", Photon_phi, &b_Photon_phi);
   tree->SetBranchAddress("Photon_phiWidth", Photon_phiWidth, &b_Photon_phiWidth);
   tree->SetBranchAddress("Photon_pt", Photon_pt, &b_Photon_pt);
   tree->SetBranchAddress("Photon_r9", Photon_r9, &b_Photon_r9);
   tree->SetBranchAddress("Photon_s4", Photon_s4, &b_Photon_s4);
   tree->SetBranchAddress("Photon_sieie", Photon_sieie, &b_Photon_sieie);
   tree->SetBranchAddress("Photon_sieip", Photon_sieip, &b_Photon_sieip);
   tree->SetBranchAddress("Photon_sipip", Photon_sipip, &b_Photon_sipip);
   tree->SetBranchAddress("Photon_trkSumPtHollowConeDR03", Photon_trkSumPtHollowConeDR03, &b_Photon_trkSumPtHollowConeDR03);
   tree->SetBranchAddress("Photon_trkSumPtSolidConeDR04", Photon_trkSumPtSolidConeDR04, &b_Photon_trkSumPtSolidConeDR04);
   tree->SetBranchAddress("Photon_x_calo", Photon_x_calo, &b_Photon_x_calo);
   tree->SetBranchAddress("Photon_y_calo", Photon_y_calo, &b_Photon_y_calo);
   tree->SetBranchAddress("Photon_z_calo", Photon_z_calo, &b_Photon_z_calo);
   tree->SetBranchAddress("Pileup_nPU", &Pileup_nPU, &b_Pileup_nPU);
   tree->SetBranchAddress("Pileup_sumEOOT", &Pileup_sumEOOT, &b_Pileup_sumEOOT);
   tree->SetBranchAddress("Pileup_sumLOOT", &Pileup_sumLOOT, &b_Pileup_sumLOOT);
   tree->SetBranchAddress("Pileup_nTrueInt", &Pileup_nTrueInt, &b_Pileup_nTrueInt);
   tree->SetBranchAddress("Pileup_pudensity", &Pileup_pudensity, &b_Pileup_pudensity);
   tree->SetBranchAddress("Pileup_gpudensity", &Pileup_gpudensity, &b_Pileup_gpudensity);
   tree->SetBranchAddress("PuppiMET_phi", &PuppiMET_phi, &b_PuppiMET_phi);
   tree->SetBranchAddress("PuppiMET_phiJERDown", &PuppiMET_phiJERDown, &b_PuppiMET_phiJERDown);
   tree->SetBranchAddress("PuppiMET_phiJERUp", &PuppiMET_phiJERUp, &b_PuppiMET_phiJERUp);
   tree->SetBranchAddress("PuppiMET_phiJESDown", &PuppiMET_phiJESDown, &b_PuppiMET_phiJESDown);
   tree->SetBranchAddress("PuppiMET_phiJESUp", &PuppiMET_phiJESUp, &b_PuppiMET_phiJESUp);
   tree->SetBranchAddress("PuppiMET_phiUnclusteredDown", &PuppiMET_phiUnclusteredDown, &b_PuppiMET_phiUnclusteredDown);
   tree->SetBranchAddress("PuppiMET_phiUnclusteredUp", &PuppiMET_phiUnclusteredUp, &b_PuppiMET_phiUnclusteredUp);
   tree->SetBranchAddress("PuppiMET_pt", &PuppiMET_pt, &b_PuppiMET_pt);
   tree->SetBranchAddress("PuppiMET_ptJERDown", &PuppiMET_ptJERDown, &b_PuppiMET_ptJERDown);
   tree->SetBranchAddress("PuppiMET_ptJERUp", &PuppiMET_ptJERUp, &b_PuppiMET_ptJERUp);
   tree->SetBranchAddress("PuppiMET_ptJESDown", &PuppiMET_ptJESDown, &b_PuppiMET_ptJESDown);
   tree->SetBranchAddress("PuppiMET_ptJESUp", &PuppiMET_ptJESUp, &b_PuppiMET_ptJESUp);
   tree->SetBranchAddress("PuppiMET_ptUnclusteredDown", &PuppiMET_ptUnclusteredDown, &b_PuppiMET_ptUnclusteredDown);
   tree->SetBranchAddress("PuppiMET_ptUnclusteredUp", &PuppiMET_ptUnclusteredUp, &b_PuppiMET_ptUnclusteredUp);
   tree->SetBranchAddress("PuppiMET_sumEt", &PuppiMET_sumEt, &b_PuppiMET_sumEt);
   tree->SetBranchAddress("RawMET_phi", &RawMET_phi, &b_RawMET_phi);
   tree->SetBranchAddress("RawMET_pt", &RawMET_pt, &b_RawMET_pt);
   tree->SetBranchAddress("RawMET_sumEt", &RawMET_sumEt, &b_RawMET_sumEt);
   tree->SetBranchAddress("RawPuppiMET_phi", &RawPuppiMET_phi, &b_RawPuppiMET_phi);
   tree->SetBranchAddress("RawPuppiMET_pt", &RawPuppiMET_pt, &b_RawPuppiMET_pt);
   tree->SetBranchAddress("RawPuppiMET_sumEt", &RawPuppiMET_sumEt, &b_RawPuppiMET_sumEt);
   tree->SetBranchAddress("Rho_fixedGridRhoAll", &Rho_fixedGridRhoAll, &b_Rho_fixedGridRhoAll);
   tree->SetBranchAddress("Rho_fixedGridRhoFastjetAll", &Rho_fixedGridRhoFastjetAll, &b_Rho_fixedGridRhoFastjetAll);
   tree->SetBranchAddress("Rho_fixedGridRhoFastjetCentral", &Rho_fixedGridRhoFastjetCentral, &b_Rho_fixedGridRhoFastjetCentral);
   tree->SetBranchAddress("Rho_fixedGridRhoFastjetCentralCalo", &Rho_fixedGridRhoFastjetCentralCalo, &b_Rho_fixedGridRhoFastjetCentralCalo);
   tree->SetBranchAddress("Rho_fixedGridRhoFastjetCentralChargedPileUp", &Rho_fixedGridRhoFastjetCentralChargedPileUp, &b_Rho_fixedGridRhoFastjetCentralChargedPileUp);
   tree->SetBranchAddress("Rho_fixedGridRhoFastjetCentralNeutral", &Rho_fixedGridRhoFastjetCentralNeutral, &b_Rho_fixedGridRhoFastjetCentralNeutral);
   tree->SetBranchAddress("nGenDressedLepton", &nGenDressedLepton, &b_nGenDressedLepton);
   tree->SetBranchAddress("GenDressedLepton_hasTauAnc", GenDressedLepton_hasTauAnc, &b_GenDressedLepton_hasTauAnc);
   tree->SetBranchAddress("GenDressedLepton_pdgId", GenDressedLepton_pdgId, &b_GenDressedLepton_pdgId);
   tree->SetBranchAddress("GenDressedLepton_eta", GenDressedLepton_eta, &b_GenDressedLepton_eta);
   tree->SetBranchAddress("GenDressedLepton_mass", GenDressedLepton_mass, &b_GenDressedLepton_mass);
   tree->SetBranchAddress("GenDressedLepton_phi", GenDressedLepton_phi, &b_GenDressedLepton_phi);
   tree->SetBranchAddress("GenDressedLepton_pt", GenDressedLepton_pt, &b_GenDressedLepton_pt);
   tree->SetBranchAddress("nGenIsolatedPhoton", &nGenIsolatedPhoton, &b_nGenIsolatedPhoton);
   tree->SetBranchAddress("GenIsolatedPhoton_eta", GenIsolatedPhoton_eta, &b_GenIsolatedPhoton_eta);
   tree->SetBranchAddress("GenIsolatedPhoton_mass", GenIsolatedPhoton_mass, &b_GenIsolatedPhoton_mass);
   tree->SetBranchAddress("GenIsolatedPhoton_phi", GenIsolatedPhoton_phi, &b_GenIsolatedPhoton_phi);
   tree->SetBranchAddress("GenIsolatedPhoton_pt", GenIsolatedPhoton_pt, &b_GenIsolatedPhoton_pt);
   tree->SetBranchAddress("nSoftActivityJet", &nSoftActivityJet, &b_nSoftActivityJet);
   tree->SetBranchAddress("SoftActivityJet_eta", SoftActivityJet_eta, &b_SoftActivityJet_eta);
   tree->SetBranchAddress("SoftActivityJet_phi", SoftActivityJet_phi, &b_SoftActivityJet_phi);
   tree->SetBranchAddress("SoftActivityJet_pt", SoftActivityJet_pt, &b_SoftActivityJet_pt);
   tree->SetBranchAddress("SoftActivityJetNjets10", &SoftActivityJetNjets10, &b_SoftActivityJetNjets10);
   tree->SetBranchAddress("SoftActivityJetNjets2", &SoftActivityJetNjets2, &b_SoftActivityJetNjets2);
   tree->SetBranchAddress("SoftActivityJetNjets5", &SoftActivityJetNjets5, &b_SoftActivityJetNjets5);
   tree->SetBranchAddress("SoftActivityJetHT", &SoftActivityJetHT, &b_SoftActivityJetHT);
   tree->SetBranchAddress("SoftActivityJetHT10", &SoftActivityJetHT10, &b_SoftActivityJetHT10);
   tree->SetBranchAddress("SoftActivityJetHT2", &SoftActivityJetHT2, &b_SoftActivityJetHT2);
   tree->SetBranchAddress("SoftActivityJetHT5", &SoftActivityJetHT5, &b_SoftActivityJetHT5);
   tree->SetBranchAddress("nSubJet", &nSubJet, &b_nSubJet);
   tree->SetBranchAddress("SubJet_btagCSVV2", SubJet_btagCSVV2, &b_SubJet_btagCSVV2);
   tree->SetBranchAddress("SubJet_btagDeepB", SubJet_btagDeepB, &b_SubJet_btagDeepB);
   tree->SetBranchAddress("SubJet_eta", SubJet_eta, &b_SubJet_eta);
   tree->SetBranchAddress("SubJet_mass", SubJet_mass, &b_SubJet_mass);
   tree->SetBranchAddress("SubJet_n2b1", SubJet_n2b1, &b_SubJet_n2b1);
   tree->SetBranchAddress("SubJet_n3b1", SubJet_n3b1, &b_SubJet_n3b1);
   tree->SetBranchAddress("SubJet_phi", SubJet_phi, &b_SubJet_phi);
   tree->SetBranchAddress("SubJet_pt", SubJet_pt, &b_SubJet_pt);
   tree->SetBranchAddress("SubJet_rawFactor", SubJet_rawFactor, &b_SubJet_rawFactor);
   tree->SetBranchAddress("SubJet_tau1", SubJet_tau1, &b_SubJet_tau1);
   tree->SetBranchAddress("SubJet_tau2", SubJet_tau2, &b_SubJet_tau2);
   tree->SetBranchAddress("SubJet_tau3", SubJet_tau3, &b_SubJet_tau3);
   tree->SetBranchAddress("SubJet_tau4", SubJet_tau4, &b_SubJet_tau4);
   tree->SetBranchAddress("nTau", &nTau, &b_nTau);
   tree->SetBranchAddress("Tau_decayMode", Tau_decayMode, &b_Tau_decayMode);
   tree->SetBranchAddress("Tau_idAntiEleDeadECal", Tau_idAntiEleDeadECal, &b_Tau_idAntiEleDeadECal);
   tree->SetBranchAddress("Tau_idAntiMu", Tau_idAntiMu, &b_Tau_idAntiMu);
   tree->SetBranchAddress("Tau_idDecayModeNewDMs", Tau_idDecayModeNewDMs, &b_Tau_idDecayModeNewDMs);
   tree->SetBranchAddress("Tau_idDecayModeOldDMs", Tau_idDecayModeOldDMs, &b_Tau_idDecayModeOldDMs);
   tree->SetBranchAddress("Tau_idDeepTau2017v2p1VSe", Tau_idDeepTau2017v2p1VSe, &b_Tau_idDeepTau2017v2p1VSe);
   tree->SetBranchAddress("Tau_idDeepTau2017v2p1VSjet", Tau_idDeepTau2017v2p1VSjet, &b_Tau_idDeepTau2017v2p1VSjet);
   tree->SetBranchAddress("Tau_idDeepTau2017v2p1VSmu", Tau_idDeepTau2017v2p1VSmu, &b_Tau_idDeepTau2017v2p1VSmu);
   tree->SetBranchAddress("Tau_idDeepTau2018v2p5VSe", Tau_idDeepTau2018v2p5VSe, &b_Tau_idDeepTau2018v2p5VSe);
   tree->SetBranchAddress("Tau_idDeepTau2018v2p5VSjet", Tau_idDeepTau2018v2p5VSjet, &b_Tau_idDeepTau2018v2p5VSjet);
   tree->SetBranchAddress("Tau_idDeepTau2018v2p5VSmu", Tau_idDeepTau2018v2p5VSmu, &b_Tau_idDeepTau2018v2p5VSmu);
   tree->SetBranchAddress("Tau_nSVs", Tau_nSVs, &b_Tau_nSVs);
   tree->SetBranchAddress("Tau_charge", Tau_charge, &b_Tau_charge);
   tree->SetBranchAddress("Tau_decayModePNet", Tau_decayModePNet, &b_Tau_decayModePNet);
   tree->SetBranchAddress("Tau_eleIdx", Tau_eleIdx, &b_Tau_eleIdx);
   tree->SetBranchAddress("Tau_jetIdx", Tau_jetIdx, &b_Tau_jetIdx);
   tree->SetBranchAddress("Tau_muIdx", Tau_muIdx, &b_Tau_muIdx);
   tree->SetBranchAddress("Tau_svIdx1", Tau_svIdx1, &b_Tau_svIdx1);
   tree->SetBranchAddress("Tau_svIdx2", Tau_svIdx2, &b_Tau_svIdx2);
   tree->SetBranchAddress("Tau_Ecounter", Tau_Ecounter, &b_Tau_Ecounter);
   tree->SetBranchAddress("Tau_Mcounter", Tau_Mcounter, &b_Tau_Mcounter);
   tree->SetBranchAddress("Tau_SubLeadingElectronPhi", Tau_SubLeadingElectronPhi, &b_Tau_SubLeadingElectronPhi);
   tree->SetBranchAddress("Tau_SubLeadingMuonM", Tau_SubLeadingMuonM, &b_Tau_SubLeadingMuonM);
   tree->SetBranchAddress("Tau_SubSubLeadingElectronPhi", Tau_SubSubLeadingElectronPhi, &b_Tau_SubSubLeadingElectronPhi);
   tree->SetBranchAddress("Tau_SubSubLeadingMuonM", Tau_SubSubLeadingMuonM, &b_Tau_SubSubLeadingMuonM);
   tree->SetBranchAddress("Tau_LeadingElectronCorrIso", Tau_LeadingElectronCorrIso, &b_Tau_LeadingElectronCorrIso);
   tree->SetBranchAddress("Tau_LeadingElectronEta", Tau_LeadingElectronEta, &b_Tau_LeadingElectronEta);
   tree->SetBranchAddress("Tau_LeadingElectronM", Tau_LeadingElectronM, &b_Tau_LeadingElectronM);
   tree->SetBranchAddress("Tau_LeadingElectronPhi", Tau_LeadingElectronPhi, &b_Tau_LeadingElectronPhi);
   tree->SetBranchAddress("Tau_LeadingElectronPt", Tau_LeadingElectronPt, &b_Tau_LeadingElectronPt);
   tree->SetBranchAddress("Tau_LeadingElectrondelR", Tau_LeadingElectrondelR, &b_Tau_LeadingElectrondelR);
   tree->SetBranchAddress("Tau_LeadingElectronea", Tau_LeadingElectronea, &b_Tau_LeadingElectronea);
   tree->SetBranchAddress("Tau_LeadingElectronrho", Tau_LeadingElectronrho, &b_Tau_LeadingElectronrho);
   tree->SetBranchAddress("Tau_LeadingElectronsumPFChargedHadronPt", Tau_LeadingElectronsumPFChargedHadronPt, &b_Tau_LeadingElectronsumPFChargedHadronPt);
   tree->SetBranchAddress("Tau_LeadingElectronsumPFNeutralHadronPt", Tau_LeadingElectronsumPFNeutralHadronPt, &b_Tau_LeadingElectronsumPFNeutralHadronPt);
   tree->SetBranchAddress("Tau_LeadingElectronsumPFPhotonPt", Tau_LeadingElectronsumPFPhotonPt, &b_Tau_LeadingElectronsumPFPhotonPt);
   tree->SetBranchAddress("Tau_LeadingElectrontausumPFChargedHadronPt", Tau_LeadingElectrontausumPFChargedHadronPt, &b_Tau_LeadingElectrontausumPFChargedHadronPt);
   tree->SetBranchAddress("Tau_LeadingElectrontausumPFNeutralHadronPt", Tau_LeadingElectrontausumPFNeutralHadronPt, &b_Tau_LeadingElectrontausumPFNeutralHadronPt);
   tree->SetBranchAddress("Tau_LeadingElectrontausumPFPhotonPt", Tau_LeadingElectrontausumPFPhotonPt, &b_Tau_LeadingElectrontausumPFPhotonPt);
   tree->SetBranchAddress("Tau_LeadingMuonCorrIso", Tau_LeadingMuonCorrIso, &b_Tau_LeadingMuonCorrIso);
   tree->SetBranchAddress("Tau_LeadingMuonEta", Tau_LeadingMuonEta, &b_Tau_LeadingMuonEta);
   tree->SetBranchAddress("Tau_LeadingMuonM", Tau_LeadingMuonM, &b_Tau_LeadingMuonM);
   tree->SetBranchAddress("Tau_LeadingMuonPhi", Tau_LeadingMuonPhi, &b_Tau_LeadingMuonPhi);
   tree->SetBranchAddress("Tau_LeadingMuonPt", Tau_LeadingMuonPt, &b_Tau_LeadingMuonPt);
   tree->SetBranchAddress("Tau_LeadingMuondelR", Tau_LeadingMuondelR, &b_Tau_LeadingMuondelR);
   tree->SetBranchAddress("Tau_LeadingMuonsumPFChargedHadronPt", Tau_LeadingMuonsumPFChargedHadronPt, &b_Tau_LeadingMuonsumPFChargedHadronPt);
   tree->SetBranchAddress("Tau_LeadingMuonsumPFNeutralHadronPt", Tau_LeadingMuonsumPFNeutralHadronPt, &b_Tau_LeadingMuonsumPFNeutralHadronPt);
   tree->SetBranchAddress("Tau_LeadingMuonsumPFPhotonPt", Tau_LeadingMuonsumPFPhotonPt, &b_Tau_LeadingMuonsumPFPhotonPt);
   tree->SetBranchAddress("Tau_LeadingMuonsumPUPt", Tau_LeadingMuonsumPUPt, &b_Tau_LeadingMuonsumPUPt);
   tree->SetBranchAddress("Tau_LeadingMuontausumPFChargedHadronPt", Tau_LeadingMuontausumPFChargedHadronPt, &b_Tau_LeadingMuontausumPFChargedHadronPt);
   tree->SetBranchAddress("Tau_LeadingMuontausumPFNeutralHadronPt", Tau_LeadingMuontausumPFNeutralHadronPt, &b_Tau_LeadingMuontausumPFNeutralHadronPt);
   tree->SetBranchAddress("Tau_LeadingMuontausumPFPhotonPt", Tau_LeadingMuontausumPFPhotonPt, &b_Tau_LeadingMuontausumPFPhotonPt);
   tree->SetBranchAddress("Tau_SubLeadingElectronCorrIso", Tau_SubLeadingElectronCorrIso, &b_Tau_SubLeadingElectronCorrIso);
   tree->SetBranchAddress("Tau_SubLeadingElectronEta", Tau_SubLeadingElectronEta, &b_Tau_SubLeadingElectronEta);
   tree->SetBranchAddress("Tau_SubLeadingElectronM", Tau_SubLeadingElectronM, &b_Tau_SubLeadingElectronM);
   tree->SetBranchAddress("Tau_SubLeadingElectronPt", Tau_SubLeadingElectronPt, &b_Tau_SubLeadingElectronPt);
   tree->SetBranchAddress("Tau_SubLeadingElectrondelR", Tau_SubLeadingElectrondelR, &b_Tau_SubLeadingElectrondelR);
   tree->SetBranchAddress("Tau_SubLeadingElectronea", Tau_SubLeadingElectronea, &b_Tau_SubLeadingElectronea);
   tree->SetBranchAddress("Tau_SubLeadingElectronrho", Tau_SubLeadingElectronrho, &b_Tau_SubLeadingElectronrho);
   tree->SetBranchAddress("Tau_SubLeadingElectronsumPFChargedHadronPt", Tau_SubLeadingElectronsumPFChargedHadronPt, &b_Tau_SubLeadingElectronsumPFChargedHadronPt);
   tree->SetBranchAddress("Tau_SubLeadingElectronsumPFNeutralHadronPt", Tau_SubLeadingElectronsumPFNeutralHadronPt, &b_Tau_SubLeadingElectronsumPFNeutralHadronPt);
   tree->SetBranchAddress("Tau_SubLeadingElectronsumPFPhotonPt", Tau_SubLeadingElectronsumPFPhotonPt, &b_Tau_SubLeadingElectronsumPFPhotonPt);
   tree->SetBranchAddress("Tau_SubLeadingElectrontausumPFChargedHadronPt", Tau_SubLeadingElectrontausumPFChargedHadronPt, &b_Tau_SubLeadingElectrontausumPFChargedHadronPt);
   tree->SetBranchAddress("Tau_SubLeadingElectrontausumPFNeutralHadronPt", Tau_SubLeadingElectrontausumPFNeutralHadronPt, &b_Tau_SubLeadingElectrontausumPFNeutralHadronPt);
   tree->SetBranchAddress("Tau_SubLeadingElectrontausumPFPhotonPt", Tau_SubLeadingElectrontausumPFPhotonPt, &b_Tau_SubLeadingElectrontausumPFPhotonPt);
   tree->SetBranchAddress("Tau_SubLeadingMuonCorrIso", Tau_SubLeadingMuonCorrIso, &b_Tau_SubLeadingMuonCorrIso);
   tree->SetBranchAddress("Tau_SubLeadingMuonEta", Tau_SubLeadingMuonEta, &b_Tau_SubLeadingMuonEta);
   tree->SetBranchAddress("Tau_SubLeadingMuonPhi", Tau_SubLeadingMuonPhi, &b_Tau_SubLeadingMuonPhi);
   tree->SetBranchAddress("Tau_SubLeadingMuonPt", Tau_SubLeadingMuonPt, &b_Tau_SubLeadingMuonPt);
   tree->SetBranchAddress("Tau_SubLeadingMuondelR", Tau_SubLeadingMuondelR, &b_Tau_SubLeadingMuondelR);
   tree->SetBranchAddress("Tau_SubLeadingMuonsumPFChargedHadronPt", Tau_SubLeadingMuonsumPFChargedHadronPt, &b_Tau_SubLeadingMuonsumPFChargedHadronPt);
   tree->SetBranchAddress("Tau_SubLeadingMuonsumPFNeutralHadronPt", Tau_SubLeadingMuonsumPFNeutralHadronPt, &b_Tau_SubLeadingMuonsumPFNeutralHadronPt);
   tree->SetBranchAddress("Tau_SubLeadingMuonsumPFPhotonPt", Tau_SubLeadingMuonsumPFPhotonPt, &b_Tau_SubLeadingMuonsumPFPhotonPt);
   tree->SetBranchAddress("Tau_SubLeadingMuonsumPUPt", Tau_SubLeadingMuonsumPUPt, &b_Tau_SubLeadingMuonsumPUPt);
   tree->SetBranchAddress("Tau_SubLeadingMuontausumPFChargedHadronPt", Tau_SubLeadingMuontausumPFChargedHadronPt, &b_Tau_SubLeadingMuontausumPFChargedHadronPt);
   tree->SetBranchAddress("Tau_SubLeadingMuontausumPFNeutralHadronPt", Tau_SubLeadingMuontausumPFNeutralHadronPt, &b_Tau_SubLeadingMuontausumPFNeutralHadronPt);
   tree->SetBranchAddress("Tau_SubLeadingMuontausumPFPhotonPt", Tau_SubLeadingMuontausumPFPhotonPt, &b_Tau_SubLeadingMuontausumPFPhotonPt);
   tree->SetBranchAddress("Tau_SubSubLeadingElectronCorrIso", Tau_SubSubLeadingElectronCorrIso, &b_Tau_SubSubLeadingElectronCorrIso);
   tree->SetBranchAddress("Tau_SubSubLeadingElectronEta", Tau_SubSubLeadingElectronEta, &b_Tau_SubSubLeadingElectronEta);
   tree->SetBranchAddress("Tau_SubSubLeadingElectronM", Tau_SubSubLeadingElectronM, &b_Tau_SubSubLeadingElectronM);
   tree->SetBranchAddress("Tau_SubSubLeadingElectronPt", Tau_SubSubLeadingElectronPt, &b_Tau_SubSubLeadingElectronPt);
   tree->SetBranchAddress("Tau_SubSubLeadingElectrondelR", Tau_SubSubLeadingElectrondelR, &b_Tau_SubSubLeadingElectrondelR);
   tree->SetBranchAddress("Tau_SubSubLeadingElectronea", Tau_SubSubLeadingElectronea, &b_Tau_SubSubLeadingElectronea);
   tree->SetBranchAddress("Tau_SubSubLeadingElectronrho", Tau_SubSubLeadingElectronrho, &b_Tau_SubSubLeadingElectronrho);
   tree->SetBranchAddress("Tau_SubSubLeadingElectronsumPFChargedHadronPt", Tau_SubSubLeadingElectronsumPFChargedHadronPt, &b_Tau_SubSubLeadingElectronsumPFChargedHadronPt);
   tree->SetBranchAddress("Tau_SubSubLeadingElectronsumPFNeutralHadronPt", Tau_SubSubLeadingElectronsumPFNeutralHadronPt, &b_Tau_SubSubLeadingElectronsumPFNeutralHadronPt);
   tree->SetBranchAddress("Tau_SubSubLeadingElectronsumPFPhotonPt", Tau_SubSubLeadingElectronsumPFPhotonPt, &b_Tau_SubSubLeadingElectronsumPFPhotonPt);
   tree->SetBranchAddress("Tau_SubSubLeadingElectrontausumPFChargedHadronPt", Tau_SubSubLeadingElectrontausumPFChargedHadronPt, &b_Tau_SubSubLeadingElectrontausumPFChargedHadronPt);
   tree->SetBranchAddress("Tau_SubSubLeadingElectrontausumPFNeutralHadronPt", Tau_SubSubLeadingElectrontausumPFNeutralHadronPt, &b_Tau_SubSubLeadingElectrontausumPFNeutralHadronPt);
   tree->SetBranchAddress("Tau_SubSubLeadingElectrontausumPFPhotonPt", Tau_SubSubLeadingElectrontausumPFPhotonPt, &b_Tau_SubSubLeadingElectrontausumPFPhotonPt);
   tree->SetBranchAddress("Tau_SubSubLeadingMuonCorrIso", Tau_SubSubLeadingMuonCorrIso, &b_Tau_SubSubLeadingMuonCorrIso);
   tree->SetBranchAddress("Tau_SubSubLeadingMuonEta", Tau_SubSubLeadingMuonEta, &b_Tau_SubSubLeadingMuonEta);
   tree->SetBranchAddress("Tau_SubSubLeadingMuonPhi", Tau_SubSubLeadingMuonPhi, &b_Tau_SubSubLeadingMuonPhi);
   tree->SetBranchAddress("Tau_SubSubLeadingMuonPt", Tau_SubSubLeadingMuonPt, &b_Tau_SubSubLeadingMuonPt);
   tree->SetBranchAddress("Tau_SubSubLeadingMuondelR", Tau_SubSubLeadingMuondelR, &b_Tau_SubSubLeadingMuondelR);
   tree->SetBranchAddress("Tau_SubSubLeadingMuonsumPFChargedHadronPt", Tau_SubSubLeadingMuonsumPFChargedHadronPt, &b_Tau_SubSubLeadingMuonsumPFChargedHadronPt);
   tree->SetBranchAddress("Tau_SubSubLeadingMuonsumPFNeutralHadronPt", Tau_SubSubLeadingMuonsumPFNeutralHadronPt, &b_Tau_SubSubLeadingMuonsumPFNeutralHadronPt);
   tree->SetBranchAddress("Tau_SubSubLeadingMuonsumPFPhotonPt", Tau_SubSubLeadingMuonsumPFPhotonPt, &b_Tau_SubSubLeadingMuonsumPFPhotonPt);
   tree->SetBranchAddress("Tau_SubSubLeadingMuonsumPUPt", Tau_SubSubLeadingMuonsumPUPt, &b_Tau_SubSubLeadingMuonsumPUPt);
   tree->SetBranchAddress("Tau_SubSubLeadingMuontausumPFChargedHadronPt", Tau_SubSubLeadingMuontausumPFChargedHadronPt, &b_Tau_SubSubLeadingMuontausumPFChargedHadronPt);
   tree->SetBranchAddress("Tau_SubSubLeadingMuontausumPFNeutralHadronPt", Tau_SubSubLeadingMuontausumPFNeutralHadronPt, &b_Tau_SubSubLeadingMuontausumPFNeutralHadronPt);
   tree->SetBranchAddress("Tau_SubSubLeadingMuontausumPFPhotonPt", Tau_SubSubLeadingMuontausumPFPhotonPt, &b_Tau_SubSubLeadingMuontausumPFPhotonPt);
   tree->SetBranchAddress("Tau_chargedIso", Tau_chargedIso, &b_Tau_chargedIso);
   tree->SetBranchAddress("Tau_dxy", Tau_dxy, &b_Tau_dxy);
   tree->SetBranchAddress("Tau_dz", Tau_dz, &b_Tau_dz);
   tree->SetBranchAddress("Tau_eta", Tau_eta, &b_Tau_eta);
   tree->SetBranchAddress("Tau_leadTkDeltaEta", Tau_leadTkDeltaEta, &b_Tau_leadTkDeltaEta);
   tree->SetBranchAddress("Tau_leadTkDeltaPhi", Tau_leadTkDeltaPhi, &b_Tau_leadTkDeltaPhi);
   tree->SetBranchAddress("Tau_leadTkPtOverTauPt", Tau_leadTkPtOverTauPt, &b_Tau_leadTkPtOverTauPt);
   tree->SetBranchAddress("Tau_mass", Tau_mass, &b_Tau_mass);
   tree->SetBranchAddress("Tau_neutralIso", Tau_neutralIso, &b_Tau_neutralIso);
   tree->SetBranchAddress("Tau_phi", Tau_phi, &b_Tau_phi);
   tree->SetBranchAddress("Tau_photonsOutsideSignalCone", Tau_photonsOutsideSignalCone, &b_Tau_photonsOutsideSignalCone);
   tree->SetBranchAddress("Tau_probDM0PNet", Tau_probDM0PNet, &b_Tau_probDM0PNet);
   tree->SetBranchAddress("Tau_probDM10PNet", Tau_probDM10PNet, &b_Tau_probDM10PNet);
   tree->SetBranchAddress("Tau_probDM11PNet", Tau_probDM11PNet, &b_Tau_probDM11PNet);
   tree->SetBranchAddress("Tau_probDM1PNet", Tau_probDM1PNet, &b_Tau_probDM1PNet);
   tree->SetBranchAddress("Tau_probDM2PNet", Tau_probDM2PNet, &b_Tau_probDM2PNet);
   tree->SetBranchAddress("Tau_pt", Tau_pt, &b_Tau_pt);
   tree->SetBranchAddress("Tau_ptCorrPNet", Tau_ptCorrPNet, &b_Tau_ptCorrPNet);
   tree->SetBranchAddress("Tau_puCorr", Tau_puCorr, &b_Tau_puCorr);
   tree->SetBranchAddress("Tau_qConfPNet", Tau_qConfPNet, &b_Tau_qConfPNet);
   tree->SetBranchAddress("Tau_rawDeepTau2017v2p1VSe", Tau_rawDeepTau2017v2p1VSe, &b_Tau_rawDeepTau2017v2p1VSe);
   tree->SetBranchAddress("Tau_rawDeepTau2017v2p1VSjet", Tau_rawDeepTau2017v2p1VSjet, &b_Tau_rawDeepTau2017v2p1VSjet);
   tree->SetBranchAddress("Tau_rawDeepTau2017v2p1VSmu", Tau_rawDeepTau2017v2p1VSmu, &b_Tau_rawDeepTau2017v2p1VSmu);
   tree->SetBranchAddress("Tau_rawDeepTau2018v2p5VSe", Tau_rawDeepTau2018v2p5VSe, &b_Tau_rawDeepTau2018v2p5VSe);
   tree->SetBranchAddress("Tau_rawDeepTau2018v2p5VSjet", Tau_rawDeepTau2018v2p5VSjet, &b_Tau_rawDeepTau2018v2p5VSjet);
   tree->SetBranchAddress("Tau_rawDeepTau2018v2p5VSmu", Tau_rawDeepTau2018v2p5VSmu, &b_Tau_rawDeepTau2018v2p5VSmu);
   tree->SetBranchAddress("Tau_rawIso", Tau_rawIso, &b_Tau_rawIso);
   tree->SetBranchAddress("Tau_rawIsodR03", Tau_rawIsodR03, &b_Tau_rawIsodR03);
   tree->SetBranchAddress("Tau_rawPNetVSe", Tau_rawPNetVSe, &b_Tau_rawPNetVSe);
   tree->SetBranchAddress("Tau_rawPNetVSjet", Tau_rawPNetVSjet, &b_Tau_rawPNetVSjet);
   tree->SetBranchAddress("Tau_rawPNetVSmu", Tau_rawPNetVSmu, &b_Tau_rawPNetVSmu);
   tree->SetBranchAddress("TkMET_phi", &TkMET_phi, &b_TkMET_phi);
   tree->SetBranchAddress("TkMET_pt", &TkMET_pt, &b_TkMET_pt);
   tree->SetBranchAddress("TkMET_sumEt", &TkMET_sumEt, &b_TkMET_sumEt);
   tree->SetBranchAddress("nTrigObj", &nTrigObj, &b_nTrigObj);
   tree->SetBranchAddress("TrigObj_l1charge", TrigObj_l1charge, &b_TrigObj_l1charge);
   tree->SetBranchAddress("TrigObj_id", TrigObj_id, &b_TrigObj_id);
   tree->SetBranchAddress("TrigObj_l1iso", TrigObj_l1iso, &b_TrigObj_l1iso);
   tree->SetBranchAddress("TrigObj_filterBits", TrigObj_filterBits, &b_TrigObj_filterBits);
   tree->SetBranchAddress("TrigObj_pt", TrigObj_pt, &b_TrigObj_pt);
   tree->SetBranchAddress("TrigObj_eta", TrigObj_eta, &b_TrigObj_eta);
   tree->SetBranchAddress("TrigObj_phi", TrigObj_phi, &b_TrigObj_phi);
   tree->SetBranchAddress("TrigObj_l1pt", TrigObj_l1pt, &b_TrigObj_l1pt);
   tree->SetBranchAddress("TrigObj_l1pt_2", TrigObj_l1pt_2, &b_TrigObj_l1pt_2);
   tree->SetBranchAddress("TrigObj_l2pt", TrigObj_l2pt, &b_TrigObj_l2pt);
   tree->SetBranchAddress("genTtbarId", &genTtbarId, &b_genTtbarId);
   tree->SetBranchAddress("nOtherPV", &nOtherPV, &b_nOtherPV);
   tree->SetBranchAddress("OtherPV_z", OtherPV_z, &b_OtherPV_z);
   tree->SetBranchAddress("OtherPV_score", OtherPV_score, &b_OtherPV_score);
   tree->SetBranchAddress("PV_npvs", &PV_npvs, &b_PV_npvs);
   tree->SetBranchAddress("PV_npvsGood", &PV_npvsGood, &b_PV_npvsGood);
   tree->SetBranchAddress("PV_ndof", &PV_ndof, &b_PV_ndof);
   tree->SetBranchAddress("PV_x", &PV_x, &b_PV_x);
   tree->SetBranchAddress("PV_y", &PV_y, &b_PV_y);
   tree->SetBranchAddress("PV_z", &PV_z, &b_PV_z);
   tree->SetBranchAddress("PV_chi2", &PV_chi2, &b_PV_chi2);
   tree->SetBranchAddress("PV_score", &PV_score, &b_PV_score);
   tree->SetBranchAddress("nSV", &nSV, &b_nSV);
   tree->SetBranchAddress("SV_charge", SV_charge, &b_SV_charge);
   tree->SetBranchAddress("SV_dlen", SV_dlen, &b_SV_dlen);
   tree->SetBranchAddress("SV_dlenSig", SV_dlenSig, &b_SV_dlenSig);
   tree->SetBranchAddress("SV_dxy", SV_dxy, &b_SV_dxy);
   tree->SetBranchAddress("SV_dxySig", SV_dxySig, &b_SV_dxySig);
   tree->SetBranchAddress("SV_pAngle", SV_pAngle, &b_SV_pAngle);
   tree->SetBranchAddress("boostedTau_genPartFlav", boostedTau_genPartFlav, &b_boostedTau_genPartFlav);
   tree->SetBranchAddress("boostedTau_genPartIdx", boostedTau_genPartIdx, &b_boostedTau_genPartIdx);
   tree->SetBranchAddress("Electron_genPartFlav", Electron_genPartFlav, &b_Electron_genPartFlav);
   tree->SetBranchAddress("Electron_genPartIdx", Electron_genPartIdx, &b_Electron_genPartIdx);
   tree->SetBranchAddress("FatJet_hadronFlavour", FatJet_hadronFlavour, &b_FatJet_hadronFlavour);
   tree->SetBranchAddress("FatJet_nBHadrons", FatJet_nBHadrons, &b_FatJet_nBHadrons);
   tree->SetBranchAddress("FatJet_nCHadrons", FatJet_nCHadrons, &b_FatJet_nCHadrons);
   tree->SetBranchAddress("FatJet_genJetAK8Idx", FatJet_genJetAK8Idx, &b_FatJet_genJetAK8Idx);
   tree->SetBranchAddress("GenJetAK8_hadronFlavour", GenJetAK8_hadronFlavour, &b_GenJetAK8_hadronFlavour);
   tree->SetBranchAddress("GenJetAK8_partonFlavour", GenJetAK8_partonFlavour, &b_GenJetAK8_partonFlavour);
   tree->SetBranchAddress("GenJet_hadronFlavour", GenJet_hadronFlavour, &b_GenJet_hadronFlavour);
   tree->SetBranchAddress("GenJet_partonFlavour", GenJet_partonFlavour, &b_GenJet_partonFlavour);
   tree->SetBranchAddress("GenVtx_t0", &GenVtx_t0, &b_GenVtx_t0);
   tree->SetBranchAddress("Jet_hadronFlavour", Jet_hadronFlavour, &b_Jet_hadronFlavour);
   tree->SetBranchAddress("Jet_genJetIdx", Jet_genJetIdx, &b_Jet_genJetIdx);
   tree->SetBranchAddress("Jet_partonFlavour", Jet_partonFlavour, &b_Jet_partonFlavour);
   tree->SetBranchAddress("LowPtElectron_genPartFlav", LowPtElectron_genPartFlav, &b_LowPtElectron_genPartFlav);
   tree->SetBranchAddress("LowPtElectron_genPartIdx", LowPtElectron_genPartIdx, &b_LowPtElectron_genPartIdx);
   tree->SetBranchAddress("Muon_genPartFlav", Muon_genPartFlav, &b_Muon_genPartFlav);
   tree->SetBranchAddress("Muon_genPartIdx", Muon_genPartIdx, &b_Muon_genPartIdx);
   tree->SetBranchAddress("Photon_genPartFlav", Photon_genPartFlav, &b_Photon_genPartFlav);
   tree->SetBranchAddress("Photon_genPartIdx", Photon_genPartIdx, &b_Photon_genPartIdx);
   tree->SetBranchAddress("MET_fiducialGenPhi", &MET_fiducialGenPhi, &b_MET_fiducialGenPhi);
   tree->SetBranchAddress("MET_fiducialGenPt", &MET_fiducialGenPt, &b_MET_fiducialGenPt);
   tree->SetBranchAddress("SubJet_hadronFlavour", SubJet_hadronFlavour, &b_SubJet_hadronFlavour);
   tree->SetBranchAddress("SubJet_nBHadrons", SubJet_nBHadrons, &b_SubJet_nBHadrons);
   tree->SetBranchAddress("SubJet_nCHadrons", SubJet_nCHadrons, &b_SubJet_nCHadrons);
   tree->SetBranchAddress("SV_ntracks", SV_ntracks, &b_SV_ntracks);
   tree->SetBranchAddress("SV_chi2", SV_chi2, &b_SV_chi2);
   tree->SetBranchAddress("SV_eta", SV_eta, &b_SV_eta);
   tree->SetBranchAddress("SV_mass", SV_mass, &b_SV_mass);
   tree->SetBranchAddress("SV_ndof", SV_ndof, &b_SV_ndof);
   tree->SetBranchAddress("SV_phi", SV_phi, &b_SV_phi);
   tree->SetBranchAddress("SV_pt", SV_pt, &b_SV_pt);
   tree->SetBranchAddress("SV_x", SV_x, &b_SV_x);
   tree->SetBranchAddress("SV_y", SV_y, &b_SV_y);
   tree->SetBranchAddress("SV_z", SV_z, &b_SV_z);
   tree->SetBranchAddress("Tau_genPartFlav", Tau_genPartFlav, &b_Tau_genPartFlav);
   tree->SetBranchAddress("Tau_genPartIdx", Tau_genPartIdx, &b_Tau_genPartIdx);
   tree->SetBranchAddress("L1_AlwaysTrue", &L1_AlwaysTrue, &b_L1_AlwaysTrue);
   tree->SetBranchAddress("L1_BPTX_AND_Ref1_VME", &L1_BPTX_AND_Ref1_VME, &b_L1_BPTX_AND_Ref1_VME);
   tree->SetBranchAddress("L1_BPTX_AND_Ref3_VME", &L1_BPTX_AND_Ref3_VME, &b_L1_BPTX_AND_Ref3_VME);
   tree->SetBranchAddress("L1_BPTX_AND_Ref4_VME", &L1_BPTX_AND_Ref4_VME, &b_L1_BPTX_AND_Ref4_VME);
   tree->SetBranchAddress("L1_BPTX_BeamGas_B1_VME", &L1_BPTX_BeamGas_B1_VME, &b_L1_BPTX_BeamGas_B1_VME);
   tree->SetBranchAddress("L1_BPTX_BeamGas_B2_VME", &L1_BPTX_BeamGas_B2_VME, &b_L1_BPTX_BeamGas_B2_VME);
   tree->SetBranchAddress("L1_BPTX_BeamGas_Ref1_VME", &L1_BPTX_BeamGas_Ref1_VME, &b_L1_BPTX_BeamGas_Ref1_VME);
   tree->SetBranchAddress("L1_BPTX_BeamGas_Ref2_VME", &L1_BPTX_BeamGas_Ref2_VME, &b_L1_BPTX_BeamGas_Ref2_VME);
   tree->SetBranchAddress("L1_BPTX_NotOR_VME", &L1_BPTX_NotOR_VME, &b_L1_BPTX_NotOR_VME);
   tree->SetBranchAddress("L1_BPTX_OR_Ref3_VME", &L1_BPTX_OR_Ref3_VME, &b_L1_BPTX_OR_Ref3_VME);
   tree->SetBranchAddress("L1_BPTX_OR_Ref4_VME", &L1_BPTX_OR_Ref4_VME, &b_L1_BPTX_OR_Ref4_VME);
   tree->SetBranchAddress("L1_BPTX_RefAND_VME", &L1_BPTX_RefAND_VME, &b_L1_BPTX_RefAND_VME);
   tree->SetBranchAddress("L1_BptxMinus", &L1_BptxMinus, &b_L1_BptxMinus);
   tree->SetBranchAddress("L1_BptxOR", &L1_BptxOR, &b_L1_BptxOR);
   tree->SetBranchAddress("L1_BptxPlus", &L1_BptxPlus, &b_L1_BptxPlus);
   tree->SetBranchAddress("L1_BptxXOR", &L1_BptxXOR, &b_L1_BptxXOR);
   tree->SetBranchAddress("L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142", &L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142, &b_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142);
   tree->SetBranchAddress("L1_DoubleEG8er2p5_HTT260er", &L1_DoubleEG8er2p5_HTT260er, &b_L1_DoubleEG8er2p5_HTT260er);
   tree->SetBranchAddress("L1_DoubleEG8er2p5_HTT280er", &L1_DoubleEG8er2p5_HTT280er, &b_L1_DoubleEG8er2p5_HTT280er);
   tree->SetBranchAddress("L1_DoubleEG8er2p5_HTT300er", &L1_DoubleEG8er2p5_HTT300er, &b_L1_DoubleEG8er2p5_HTT300er);
   tree->SetBranchAddress("L1_DoubleEG8er2p5_HTT320er", &L1_DoubleEG8er2p5_HTT320er, &b_L1_DoubleEG8er2p5_HTT320er);
   tree->SetBranchAddress("L1_DoubleEG8er2p5_HTT340er", &L1_DoubleEG8er2p5_HTT340er, &b_L1_DoubleEG8er2p5_HTT340er);
   tree->SetBranchAddress("L1_DoubleEG_15_10_er2p5", &L1_DoubleEG_15_10_er2p5, &b_L1_DoubleEG_15_10_er2p5);
   tree->SetBranchAddress("L1_DoubleEG_20_10_er2p5", &L1_DoubleEG_20_10_er2p5, &b_L1_DoubleEG_20_10_er2p5);
   tree->SetBranchAddress("L1_DoubleEG_22_10_er2p5", &L1_DoubleEG_22_10_er2p5, &b_L1_DoubleEG_22_10_er2p5);
   tree->SetBranchAddress("L1_DoubleEG_25_12_er2p5", &L1_DoubleEG_25_12_er2p5, &b_L1_DoubleEG_25_12_er2p5);
   tree->SetBranchAddress("L1_DoubleEG_25_14_er2p5", &L1_DoubleEG_25_14_er2p5, &b_L1_DoubleEG_25_14_er2p5);
   tree->SetBranchAddress("L1_DoubleEG_27_14_er2p5", &L1_DoubleEG_27_14_er2p5, &b_L1_DoubleEG_27_14_er2p5);
   tree->SetBranchAddress("L1_DoubleEG_LooseIso20_10_er2p5", &L1_DoubleEG_LooseIso20_10_er2p5, &b_L1_DoubleEG_LooseIso20_10_er2p5);
   tree->SetBranchAddress("L1_DoubleEG_LooseIso22_10_er2p5", &L1_DoubleEG_LooseIso22_10_er2p5, &b_L1_DoubleEG_LooseIso22_10_er2p5);
   tree->SetBranchAddress("L1_DoubleEG_LooseIso22_12_er2p5", &L1_DoubleEG_LooseIso22_12_er2p5, &b_L1_DoubleEG_LooseIso22_12_er2p5);
   tree->SetBranchAddress("L1_DoubleEG_LooseIso25_12_er2p5", &L1_DoubleEG_LooseIso25_12_er2p5, &b_L1_DoubleEG_LooseIso25_12_er2p5);
   tree->SetBranchAddress("L1_DoubleIsoTau32er2p1", &L1_DoubleIsoTau32er2p1, &b_L1_DoubleIsoTau32er2p1);
   tree->SetBranchAddress("L1_DoubleIsoTau34er2p1", &L1_DoubleIsoTau34er2p1, &b_L1_DoubleIsoTau34er2p1);
   tree->SetBranchAddress("L1_DoubleIsoTau36er2p1", &L1_DoubleIsoTau36er2p1, &b_L1_DoubleIsoTau36er2p1);
   tree->SetBranchAddress("L1_DoubleJet100er2p3_dEta_Max1p6", &L1_DoubleJet100er2p3_dEta_Max1p6, &b_L1_DoubleJet100er2p3_dEta_Max1p6);
   tree->SetBranchAddress("L1_DoubleJet100er2p5", &L1_DoubleJet100er2p5, &b_L1_DoubleJet100er2p5);
   tree->SetBranchAddress("L1_DoubleJet112er2p3_dEta_Max1p6", &L1_DoubleJet112er2p3_dEta_Max1p6, &b_L1_DoubleJet112er2p3_dEta_Max1p6);
   tree->SetBranchAddress("L1_DoubleJet120er2p5", &L1_DoubleJet120er2p5, &b_L1_DoubleJet120er2p5);
   tree->SetBranchAddress("L1_DoubleJet150er2p5", &L1_DoubleJet150er2p5, &b_L1_DoubleJet150er2p5);
   tree->SetBranchAddress("L1_DoubleJet30er2p5_Mass_Min150_dEta_Max1p5", &L1_DoubleJet30er2p5_Mass_Min150_dEta_Max1p5, &b_L1_DoubleJet30er2p5_Mass_Min150_dEta_Max1p5);
   tree->SetBranchAddress("L1_DoubleJet30er2p5_Mass_Min200_dEta_Max1p5", &L1_DoubleJet30er2p5_Mass_Min200_dEta_Max1p5, &b_L1_DoubleJet30er2p5_Mass_Min200_dEta_Max1p5);
   tree->SetBranchAddress("L1_DoubleJet30er2p5_Mass_Min250_dEta_Max1p5", &L1_DoubleJet30er2p5_Mass_Min250_dEta_Max1p5, &b_L1_DoubleJet30er2p5_Mass_Min250_dEta_Max1p5);
   tree->SetBranchAddress("L1_DoubleJet30er2p5_Mass_Min300_dEta_Max1p5", &L1_DoubleJet30er2p5_Mass_Min300_dEta_Max1p5, &b_L1_DoubleJet30er2p5_Mass_Min300_dEta_Max1p5);
   tree->SetBranchAddress("L1_DoubleJet30er2p5_Mass_Min330_dEta_Max1p5", &L1_DoubleJet30er2p5_Mass_Min330_dEta_Max1p5, &b_L1_DoubleJet30er2p5_Mass_Min330_dEta_Max1p5);
   tree->SetBranchAddress("L1_DoubleJet30er2p5_Mass_Min360_dEta_Max1p5", &L1_DoubleJet30er2p5_Mass_Min360_dEta_Max1p5, &b_L1_DoubleJet30er2p5_Mass_Min360_dEta_Max1p5);
   tree->SetBranchAddress("L1_DoubleJet35_Mass_Min450_IsoTau45_RmOvlp", &L1_DoubleJet35_Mass_Min450_IsoTau45_RmOvlp, &b_L1_DoubleJet35_Mass_Min450_IsoTau45_RmOvlp);
   tree->SetBranchAddress("L1_DoubleJet40er2p5", &L1_DoubleJet40er2p5, &b_L1_DoubleJet40er2p5);
   tree->SetBranchAddress("L1_DoubleJet_100_30_DoubleJet30_Mass_Min620", &L1_DoubleJet_100_30_DoubleJet30_Mass_Min620, &b_L1_DoubleJet_100_30_DoubleJet30_Mass_Min620);
   tree->SetBranchAddress("L1_DoubleJet_110_35_DoubleJet35_Mass_Min620", &L1_DoubleJet_110_35_DoubleJet35_Mass_Min620, &b_L1_DoubleJet_110_35_DoubleJet35_Mass_Min620);
   tree->SetBranchAddress("L1_DoubleJet_115_40_DoubleJet40_Mass_Min620", &L1_DoubleJet_115_40_DoubleJet40_Mass_Min620, &b_L1_DoubleJet_115_40_DoubleJet40_Mass_Min620);
   tree->SetBranchAddress("L1_DoubleJet_115_40_DoubleJet40_Mass_Min620_Jet60TT28", &L1_DoubleJet_115_40_DoubleJet40_Mass_Min620_Jet60TT28, &b_L1_DoubleJet_115_40_DoubleJet40_Mass_Min620_Jet60TT28);
   tree->SetBranchAddress("L1_DoubleJet_120_45_DoubleJet45_Mass_Min620", &L1_DoubleJet_120_45_DoubleJet45_Mass_Min620, &b_L1_DoubleJet_120_45_DoubleJet45_Mass_Min620);
   tree->SetBranchAddress("L1_DoubleJet_120_45_DoubleJet45_Mass_Min620_Jet60TT28", &L1_DoubleJet_120_45_DoubleJet45_Mass_Min620_Jet60TT28, &b_L1_DoubleJet_120_45_DoubleJet45_Mass_Min620_Jet60TT28);
   tree->SetBranchAddress("L1_DoubleJet_80_30_Mass_Min420_DoubleMu0_SQ", &L1_DoubleJet_80_30_Mass_Min420_DoubleMu0_SQ, &b_L1_DoubleJet_80_30_Mass_Min420_DoubleMu0_SQ);
   tree->SetBranchAddress("L1_DoubleJet_80_30_Mass_Min420_IsoTau40_RmOvlp", &L1_DoubleJet_80_30_Mass_Min420_IsoTau40_RmOvlp, &b_L1_DoubleJet_80_30_Mass_Min420_IsoTau40_RmOvlp);
   tree->SetBranchAddress("L1_DoubleJet_80_30_Mass_Min420_Mu8", &L1_DoubleJet_80_30_Mass_Min420_Mu8, &b_L1_DoubleJet_80_30_Mass_Min420_Mu8);
   tree->SetBranchAddress("L1_DoubleJet_90_30_DoubleJet30_Mass_Min620", &L1_DoubleJet_90_30_DoubleJet30_Mass_Min620, &b_L1_DoubleJet_90_30_DoubleJet30_Mass_Min620);
   tree->SetBranchAddress("L1_DoubleLooseIsoEG22er2p1", &L1_DoubleLooseIsoEG22er2p1, &b_L1_DoubleLooseIsoEG22er2p1);
   tree->SetBranchAddress("L1_DoubleLooseIsoEG24er2p1", &L1_DoubleLooseIsoEG24er2p1, &b_L1_DoubleLooseIsoEG24er2p1);
   tree->SetBranchAddress("L1_DoubleMu0", &L1_DoubleMu0, &b_L1_DoubleMu0);
   tree->SetBranchAddress("L1_DoubleMu0_Mass_Min1", &L1_DoubleMu0_Mass_Min1, &b_L1_DoubleMu0_Mass_Min1);
   tree->SetBranchAddress("L1_DoubleMu0_OQ", &L1_DoubleMu0_OQ, &b_L1_DoubleMu0_OQ);
   tree->SetBranchAddress("L1_DoubleMu0_SQ", &L1_DoubleMu0_SQ, &b_L1_DoubleMu0_SQ);
   tree->SetBranchAddress("L1_DoubleMu0_SQ_OS", &L1_DoubleMu0_SQ_OS, &b_L1_DoubleMu0_SQ_OS);
   tree->SetBranchAddress("L1_DoubleMu0_dR_Max1p6_Jet90er2p5_dR_Max0p8", &L1_DoubleMu0_dR_Max1p6_Jet90er2p5_dR_Max0p8, &b_L1_DoubleMu0_dR_Max1p6_Jet90er2p5_dR_Max0p8);
   tree->SetBranchAddress("L1_DoubleMu0er1p4_SQ_OS_dR_Max1p4", &L1_DoubleMu0er1p4_SQ_OS_dR_Max1p4, &b_L1_DoubleMu0er1p4_SQ_OS_dR_Max1p4);
   tree->SetBranchAddress("L1_DoubleMu0er1p5_SQ", &L1_DoubleMu0er1p5_SQ, &b_L1_DoubleMu0er1p5_SQ);
   tree->SetBranchAddress("L1_DoubleMu0er1p5_SQ_OS", &L1_DoubleMu0er1p5_SQ_OS, &b_L1_DoubleMu0er1p5_SQ_OS);
   tree->SetBranchAddress("L1_DoubleMu0er1p5_SQ_OS_dR_Max1p4", &L1_DoubleMu0er1p5_SQ_OS_dR_Max1p4, &b_L1_DoubleMu0er1p5_SQ_OS_dR_Max1p4);
   tree->SetBranchAddress("L1_DoubleMu0er1p5_SQ_dR_Max1p4", &L1_DoubleMu0er1p5_SQ_dR_Max1p4, &b_L1_DoubleMu0er1p5_SQ_dR_Max1p4);
   tree->SetBranchAddress("L1_DoubleMu0er2p0_SQ_OS_dR_Max1p4", &L1_DoubleMu0er2p0_SQ_OS_dR_Max1p4, &b_L1_DoubleMu0er2p0_SQ_OS_dR_Max1p4);
   tree->SetBranchAddress("L1_DoubleMu0er2p0_SQ_dR_Max1p4", &L1_DoubleMu0er2p0_SQ_dR_Max1p4, &b_L1_DoubleMu0er2p0_SQ_dR_Max1p4);
   tree->SetBranchAddress("L1_DoubleMu10_SQ", &L1_DoubleMu10_SQ, &b_L1_DoubleMu10_SQ);
   tree->SetBranchAddress("L1_DoubleMu18er2p1", &L1_DoubleMu18er2p1, &b_L1_DoubleMu18er2p1);
   tree->SetBranchAddress("L1_DoubleMu3_OS_DoubleEG7p5Upsilon", &L1_DoubleMu3_OS_DoubleEG7p5Upsilon, &b_L1_DoubleMu3_OS_DoubleEG7p5Upsilon);
   tree->SetBranchAddress("L1_DoubleMu3_SQ_ETMHF50_HTT60er", &L1_DoubleMu3_SQ_ETMHF50_HTT60er, &b_L1_DoubleMu3_SQ_ETMHF50_HTT60er);
   tree->SetBranchAddress("L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5", &L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5, &b_L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5);
   tree->SetBranchAddress("L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5_OR_DoubleJet40er2p5", &L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5_OR_DoubleJet40er2p5, &b_L1_DoubleMu3_SQ_ETMHF50_Jet60er2p5_OR_DoubleJet40er2p5);
   tree->SetBranchAddress("L1_DoubleMu3_SQ_ETMHF60_Jet60er2p5", &L1_DoubleMu3_SQ_ETMHF60_Jet60er2p5, &b_L1_DoubleMu3_SQ_ETMHF60_Jet60er2p5);
   tree->SetBranchAddress("L1_DoubleMu3_SQ_HTT220er", &L1_DoubleMu3_SQ_HTT220er, &b_L1_DoubleMu3_SQ_HTT220er);
   tree->SetBranchAddress("L1_DoubleMu3_SQ_HTT240er", &L1_DoubleMu3_SQ_HTT240er, &b_L1_DoubleMu3_SQ_HTT240er);
   tree->SetBranchAddress("L1_DoubleMu3_SQ_HTT260er", &L1_DoubleMu3_SQ_HTT260er, &b_L1_DoubleMu3_SQ_HTT260er);
   tree->SetBranchAddress("L1_DoubleMu3_dR_Max1p6_Jet90er2p5_dR_Max0p8", &L1_DoubleMu3_dR_Max1p6_Jet90er2p5_dR_Max0p8, &b_L1_DoubleMu3_dR_Max1p6_Jet90er2p5_dR_Max0p8);
   tree->SetBranchAddress("L1_DoubleMu4_SQ_EG9er2p5", &L1_DoubleMu4_SQ_EG9er2p5, &b_L1_DoubleMu4_SQ_EG9er2p5);
   tree->SetBranchAddress("L1_DoubleMu4_SQ_OS", &L1_DoubleMu4_SQ_OS, &b_L1_DoubleMu4_SQ_OS);
   tree->SetBranchAddress("L1_DoubleMu4_SQ_OS_dR_Max1p2", &L1_DoubleMu4_SQ_OS_dR_Max1p2, &b_L1_DoubleMu4_SQ_OS_dR_Max1p2);
   tree->SetBranchAddress("L1_DoubleMu4p5_SQ_OS", &L1_DoubleMu4p5_SQ_OS, &b_L1_DoubleMu4p5_SQ_OS);
   tree->SetBranchAddress("L1_DoubleMu4p5_SQ_OS_dR_Max1p2", &L1_DoubleMu4p5_SQ_OS_dR_Max1p2, &b_L1_DoubleMu4p5_SQ_OS_dR_Max1p2);
   tree->SetBranchAddress("L1_DoubleMu4p5er2p0_SQ_OS", &L1_DoubleMu4p5er2p0_SQ_OS, &b_L1_DoubleMu4p5er2p0_SQ_OS);
   tree->SetBranchAddress("L1_DoubleMu4p5er2p0_SQ_OS_Mass7to18", &L1_DoubleMu4p5er2p0_SQ_OS_Mass7to18, &b_L1_DoubleMu4p5er2p0_SQ_OS_Mass7to18);
   tree->SetBranchAddress("L1_DoubleMu5Upsilon_OS_DoubleEG3", &L1_DoubleMu5Upsilon_OS_DoubleEG3, &b_L1_DoubleMu5Upsilon_OS_DoubleEG3);
   tree->SetBranchAddress("L1_DoubleMu5_SQ_EG9er2p5", &L1_DoubleMu5_SQ_EG9er2p5, &b_L1_DoubleMu5_SQ_EG9er2p5);
   tree->SetBranchAddress("L1_DoubleMu9_SQ", &L1_DoubleMu9_SQ, &b_L1_DoubleMu9_SQ);
   tree->SetBranchAddress("L1_DoubleMu_12_5", &L1_DoubleMu_12_5, &b_L1_DoubleMu_12_5);
   tree->SetBranchAddress("L1_DoubleMu_15_5_SQ", &L1_DoubleMu_15_5_SQ, &b_L1_DoubleMu_15_5_SQ);
   tree->SetBranchAddress("L1_DoubleMu_15_7", &L1_DoubleMu_15_7, &b_L1_DoubleMu_15_7);
   tree->SetBranchAddress("L1_DoubleMu_15_7_Mass_Min1", &L1_DoubleMu_15_7_Mass_Min1, &b_L1_DoubleMu_15_7_Mass_Min1);
   tree->SetBranchAddress("L1_DoubleMu_15_7_SQ", &L1_DoubleMu_15_7_SQ, &b_L1_DoubleMu_15_7_SQ);
   tree->SetBranchAddress("L1_DoubleTau70er2p1", &L1_DoubleTau70er2p1, &b_L1_DoubleTau70er2p1);
   tree->SetBranchAddress("L1_ETM120", &L1_ETM120, &b_L1_ETM120);
   tree->SetBranchAddress("L1_ETM150", &L1_ETM150, &b_L1_ETM150);
   tree->SetBranchAddress("L1_ETMHF100", &L1_ETMHF100, &b_L1_ETMHF100);
   tree->SetBranchAddress("L1_ETMHF100_HTT60er", &L1_ETMHF100_HTT60er, &b_L1_ETMHF100_HTT60er);
   tree->SetBranchAddress("L1_ETMHF110", &L1_ETMHF110, &b_L1_ETMHF110);
   tree->SetBranchAddress("L1_ETMHF110_HTT60er", &L1_ETMHF110_HTT60er, &b_L1_ETMHF110_HTT60er);
   tree->SetBranchAddress("L1_ETMHF110_HTT60er_NotSecondBunchInTrain", &L1_ETMHF110_HTT60er_NotSecondBunchInTrain, &b_L1_ETMHF110_HTT60er_NotSecondBunchInTrain);
   tree->SetBranchAddress("L1_ETMHF120", &L1_ETMHF120, &b_L1_ETMHF120);
   tree->SetBranchAddress("L1_ETMHF120_HTT60er", &L1_ETMHF120_HTT60er, &b_L1_ETMHF120_HTT60er);
   tree->SetBranchAddress("L1_ETMHF120_NotSecondBunchInTrain", &L1_ETMHF120_NotSecondBunchInTrain, &b_L1_ETMHF120_NotSecondBunchInTrain);
   tree->SetBranchAddress("L1_ETMHF130", &L1_ETMHF130, &b_L1_ETMHF130);
   tree->SetBranchAddress("L1_ETMHF130_HTT60er", &L1_ETMHF130_HTT60er, &b_L1_ETMHF130_HTT60er);
   tree->SetBranchAddress("L1_ETMHF140", &L1_ETMHF140, &b_L1_ETMHF140);
   tree->SetBranchAddress("L1_ETMHF150", &L1_ETMHF150, &b_L1_ETMHF150);
   tree->SetBranchAddress("L1_ETMHF90_HTT60er", &L1_ETMHF90_HTT60er, &b_L1_ETMHF90_HTT60er);
   tree->SetBranchAddress("L1_ETT1200", &L1_ETT1200, &b_L1_ETT1200);
   tree->SetBranchAddress("L1_ETT1600", &L1_ETT1600, &b_L1_ETT1600);
   tree->SetBranchAddress("L1_ETT2000", &L1_ETT2000, &b_L1_ETT2000);
   tree->SetBranchAddress("L1_FirstBunchAfterTrain", &L1_FirstBunchAfterTrain, &b_L1_FirstBunchAfterTrain);
   tree->SetBranchAddress("L1_FirstBunchBeforeTrain", &L1_FirstBunchBeforeTrain, &b_L1_FirstBunchBeforeTrain);
   tree->SetBranchAddress("L1_FirstBunchInTrain", &L1_FirstBunchInTrain, &b_L1_FirstBunchInTrain);
   tree->SetBranchAddress("L1_FirstCollisionInOrbit", &L1_FirstCollisionInOrbit, &b_L1_FirstCollisionInOrbit);
   tree->SetBranchAddress("L1_FirstCollisionInTrain", &L1_FirstCollisionInTrain, &b_L1_FirstCollisionInTrain);
   tree->SetBranchAddress("L1_HCAL_LaserMon_Trig", &L1_HCAL_LaserMon_Trig, &b_L1_HCAL_LaserMon_Trig);
   tree->SetBranchAddress("L1_HCAL_LaserMon_Veto", &L1_HCAL_LaserMon_Veto, &b_L1_HCAL_LaserMon_Veto);
   tree->SetBranchAddress("L1_HTT120er", &L1_HTT120er, &b_L1_HTT120er);
   tree->SetBranchAddress("L1_HTT160er", &L1_HTT160er, &b_L1_HTT160er);
   tree->SetBranchAddress("L1_HTT200er", &L1_HTT200er, &b_L1_HTT200er);
   tree->SetBranchAddress("L1_HTT255er", &L1_HTT255er, &b_L1_HTT255er);
   tree->SetBranchAddress("L1_HTT280er", &L1_HTT280er, &b_L1_HTT280er);
   tree->SetBranchAddress("L1_HTT280er_QuadJet_70_55_40_35_er2p4", &L1_HTT280er_QuadJet_70_55_40_35_er2p4, &b_L1_HTT280er_QuadJet_70_55_40_35_er2p4);
   tree->SetBranchAddress("L1_HTT320er", &L1_HTT320er, &b_L1_HTT320er);
   tree->SetBranchAddress("L1_HTT320er_QuadJet_70_55_40_40_er2p4", &L1_HTT320er_QuadJet_70_55_40_40_er2p4, &b_L1_HTT320er_QuadJet_70_55_40_40_er2p4);
   tree->SetBranchAddress("L1_HTT320er_QuadJet_80_60_er2p1_45_40_er2p3", &L1_HTT320er_QuadJet_80_60_er2p1_45_40_er2p3, &b_L1_HTT320er_QuadJet_80_60_er2p1_45_40_er2p3);
   tree->SetBranchAddress("L1_HTT320er_QuadJet_80_60_er2p1_50_45_er2p3", &L1_HTT320er_QuadJet_80_60_er2p1_50_45_er2p3, &b_L1_HTT320er_QuadJet_80_60_er2p1_50_45_er2p3);
   tree->SetBranchAddress("L1_HTT360er", &L1_HTT360er, &b_L1_HTT360er);
   tree->SetBranchAddress("L1_HTT400er", &L1_HTT400er, &b_L1_HTT400er);
   tree->SetBranchAddress("L1_HTT450er", &L1_HTT450er, &b_L1_HTT450er);
   tree->SetBranchAddress("L1_IsoEG32er2p5_Mt40", &L1_IsoEG32er2p5_Mt40, &b_L1_IsoEG32er2p5_Mt40);
   tree->SetBranchAddress("L1_IsoEG32er2p5_Mt44", &L1_IsoEG32er2p5_Mt44, &b_L1_IsoEG32er2p5_Mt44);
   tree->SetBranchAddress("L1_IsoEG32er2p5_Mt48", &L1_IsoEG32er2p5_Mt48, &b_L1_IsoEG32er2p5_Mt48);
   tree->SetBranchAddress("L1_IsoTau40er2p1_ETMHF100", &L1_IsoTau40er2p1_ETMHF100, &b_L1_IsoTau40er2p1_ETMHF100);
   tree->SetBranchAddress("L1_IsoTau40er2p1_ETMHF110", &L1_IsoTau40er2p1_ETMHF110, &b_L1_IsoTau40er2p1_ETMHF110);
   tree->SetBranchAddress("L1_IsoTau40er2p1_ETMHF120", &L1_IsoTau40er2p1_ETMHF120, &b_L1_IsoTau40er2p1_ETMHF120);
   tree->SetBranchAddress("L1_IsoTau40er2p1_ETMHF90", &L1_IsoTau40er2p1_ETMHF90, &b_L1_IsoTau40er2p1_ETMHF90);
   tree->SetBranchAddress("L1_IsolatedBunch", &L1_IsolatedBunch, &b_L1_IsolatedBunch);
   tree->SetBranchAddress("L1_LastBunchInTrain", &L1_LastBunchInTrain, &b_L1_LastBunchInTrain);
   tree->SetBranchAddress("L1_LastCollisionInTrain", &L1_LastCollisionInTrain, &b_L1_LastCollisionInTrain);
   tree->SetBranchAddress("L1_LooseIsoEG22er2p1_IsoTau26er2p1_dR_Min0p3", &L1_LooseIsoEG22er2p1_IsoTau26er2p1_dR_Min0p3, &b_L1_LooseIsoEG22er2p1_IsoTau26er2p1_dR_Min0p3);
   tree->SetBranchAddress("L1_LooseIsoEG22er2p1_Tau70er2p1_dR_Min0p3", &L1_LooseIsoEG22er2p1_Tau70er2p1_dR_Min0p3, &b_L1_LooseIsoEG22er2p1_Tau70er2p1_dR_Min0p3);
   tree->SetBranchAddress("L1_LooseIsoEG24er2p1_HTT100er", &L1_LooseIsoEG24er2p1_HTT100er, &b_L1_LooseIsoEG24er2p1_HTT100er);
   tree->SetBranchAddress("L1_LooseIsoEG24er2p1_IsoTau27er2p1_dR_Min0p3", &L1_LooseIsoEG24er2p1_IsoTau27er2p1_dR_Min0p3, &b_L1_LooseIsoEG24er2p1_IsoTau27er2p1_dR_Min0p3);
   tree->SetBranchAddress("L1_LooseIsoEG26er2p1_HTT100er", &L1_LooseIsoEG26er2p1_HTT100er, &b_L1_LooseIsoEG26er2p1_HTT100er);
   tree->SetBranchAddress("L1_LooseIsoEG26er2p1_Jet34er2p5_dR_Min0p3", &L1_LooseIsoEG26er2p1_Jet34er2p5_dR_Min0p3, &b_L1_LooseIsoEG26er2p1_Jet34er2p5_dR_Min0p3);
   tree->SetBranchAddress("L1_LooseIsoEG28er2p1_HTT100er", &L1_LooseIsoEG28er2p1_HTT100er, &b_L1_LooseIsoEG28er2p1_HTT100er);
   tree->SetBranchAddress("L1_LooseIsoEG28er2p1_Jet34er2p5_dR_Min0p3", &L1_LooseIsoEG28er2p1_Jet34er2p5_dR_Min0p3, &b_L1_LooseIsoEG28er2p1_Jet34er2p5_dR_Min0p3);
   tree->SetBranchAddress("L1_LooseIsoEG30er2p1_HTT100er", &L1_LooseIsoEG30er2p1_HTT100er, &b_L1_LooseIsoEG30er2p1_HTT100er);
   tree->SetBranchAddress("L1_LooseIsoEG30er2p1_Jet34er2p5_dR_Min0p3", &L1_LooseIsoEG30er2p1_Jet34er2p5_dR_Min0p3, &b_L1_LooseIsoEG30er2p1_Jet34er2p5_dR_Min0p3);
   tree->SetBranchAddress("L1_MinimumBiasHF0_AND_BptxAND", &L1_MinimumBiasHF0_AND_BptxAND, &b_L1_MinimumBiasHF0_AND_BptxAND);
   tree->SetBranchAddress("L1_Mu10er2p3_Jet32er2p3_dR_Max0p4_DoubleJet32er2p3_dEta_Max1p6", &L1_Mu10er2p3_Jet32er2p3_dR_Max0p4_DoubleJet32er2p3_dEta_Max1p6, &b_L1_Mu10er2p3_Jet32er2p3_dR_Max0p4_DoubleJet32er2p3_dEta_Max1p6);
   tree->SetBranchAddress("L1_Mu12er2p3_Jet40er2p1_dR_Max0p4_DoubleJet40er2p1_dEta_Max1p6", &L1_Mu12er2p3_Jet40er2p1_dR_Max0p4_DoubleJet40er2p1_dEta_Max1p6, &b_L1_Mu12er2p3_Jet40er2p1_dR_Max0p4_DoubleJet40er2p1_dEta_Max1p6);
   tree->SetBranchAddress("L1_Mu12er2p3_Jet40er2p3_dR_Max0p4_DoubleJet40er2p3_dEta_Max1p6", &L1_Mu12er2p3_Jet40er2p3_dR_Max0p4_DoubleJet40er2p3_dEta_Max1p6, &b_L1_Mu12er2p3_Jet40er2p3_dR_Max0p4_DoubleJet40er2p3_dEta_Max1p6);
   tree->SetBranchAddress("L1_Mu18er2p1_Tau24er2p1", &L1_Mu18er2p1_Tau24er2p1, &b_L1_Mu18er2p1_Tau24er2p1);
   tree->SetBranchAddress("L1_Mu18er2p1_Tau26er2p1", &L1_Mu18er2p1_Tau26er2p1, &b_L1_Mu18er2p1_Tau26er2p1);
   tree->SetBranchAddress("L1_Mu20_EG10er2p5", &L1_Mu20_EG10er2p5, &b_L1_Mu20_EG10er2p5);
   tree->SetBranchAddress("L1_Mu22er2p1_IsoTau32er2p1", &L1_Mu22er2p1_IsoTau32er2p1, &b_L1_Mu22er2p1_IsoTau32er2p1);
   tree->SetBranchAddress("L1_Mu22er2p1_IsoTau34er2p1", &L1_Mu22er2p1_IsoTau34er2p1, &b_L1_Mu22er2p1_IsoTau34er2p1);
   tree->SetBranchAddress("L1_Mu22er2p1_IsoTau36er2p1", &L1_Mu22er2p1_IsoTau36er2p1, &b_L1_Mu22er2p1_IsoTau36er2p1);
   tree->SetBranchAddress("L1_Mu22er2p1_IsoTau40er2p1", &L1_Mu22er2p1_IsoTau40er2p1, &b_L1_Mu22er2p1_IsoTau40er2p1);
   tree->SetBranchAddress("L1_Mu22er2p1_Tau70er2p1", &L1_Mu22er2p1_Tau70er2p1, &b_L1_Mu22er2p1_Tau70er2p1);
   tree->SetBranchAddress("L1_Mu3_Jet120er2p5_dR_Max0p4", &L1_Mu3_Jet120er2p5_dR_Max0p4, &b_L1_Mu3_Jet120er2p5_dR_Max0p4);
   tree->SetBranchAddress("L1_Mu3_Jet120er2p5_dR_Max0p8", &L1_Mu3_Jet120er2p5_dR_Max0p8, &b_L1_Mu3_Jet120er2p5_dR_Max0p8);
   tree->SetBranchAddress("L1_Mu3_Jet16er2p5_dR_Max0p4", &L1_Mu3_Jet16er2p5_dR_Max0p4, &b_L1_Mu3_Jet16er2p5_dR_Max0p4);
   tree->SetBranchAddress("L1_Mu3_Jet30er2p5", &L1_Mu3_Jet30er2p5, &b_L1_Mu3_Jet30er2p5);
   tree->SetBranchAddress("L1_Mu3_Jet35er2p5_dR_Max0p4", &L1_Mu3_Jet35er2p5_dR_Max0p4, &b_L1_Mu3_Jet35er2p5_dR_Max0p4);
   tree->SetBranchAddress("L1_Mu3_Jet60er2p5_dR_Max0p4", &L1_Mu3_Jet60er2p5_dR_Max0p4, &b_L1_Mu3_Jet60er2p5_dR_Max0p4);
   tree->SetBranchAddress("L1_Mu3_Jet80er2p5_dR_Max0p4", &L1_Mu3_Jet80er2p5_dR_Max0p4, &b_L1_Mu3_Jet80er2p5_dR_Max0p4);
   tree->SetBranchAddress("L1_Mu3er1p5_Jet100er2p5_ETMHF40", &L1_Mu3er1p5_Jet100er2p5_ETMHF40, &b_L1_Mu3er1p5_Jet100er2p5_ETMHF40);
   tree->SetBranchAddress("L1_Mu3er1p5_Jet100er2p5_ETMHF50", &L1_Mu3er1p5_Jet100er2p5_ETMHF50, &b_L1_Mu3er1p5_Jet100er2p5_ETMHF50);
   tree->SetBranchAddress("L1_Mu5_EG23er2p5", &L1_Mu5_EG23er2p5, &b_L1_Mu5_EG23er2p5);
   tree->SetBranchAddress("L1_Mu5_LooseIsoEG20er2p5", &L1_Mu5_LooseIsoEG20er2p5, &b_L1_Mu5_LooseIsoEG20er2p5);
   tree->SetBranchAddress("L1_Mu6_DoubleEG10er2p5", &L1_Mu6_DoubleEG10er2p5, &b_L1_Mu6_DoubleEG10er2p5);
   tree->SetBranchAddress("L1_Mu6_DoubleEG12er2p5", &L1_Mu6_DoubleEG12er2p5, &b_L1_Mu6_DoubleEG12er2p5);
   tree->SetBranchAddress("L1_Mu6_DoubleEG15er2p5", &L1_Mu6_DoubleEG15er2p5, &b_L1_Mu6_DoubleEG15er2p5);
   tree->SetBranchAddress("L1_Mu6_DoubleEG17er2p5", &L1_Mu6_DoubleEG17er2p5, &b_L1_Mu6_DoubleEG17er2p5);
   tree->SetBranchAddress("L1_Mu6_HTT240er", &L1_Mu6_HTT240er, &b_L1_Mu6_HTT240er);
   tree->SetBranchAddress("L1_Mu6_HTT250er", &L1_Mu6_HTT250er, &b_L1_Mu6_HTT250er);
   tree->SetBranchAddress("L1_Mu7_EG23er2p5", &L1_Mu7_EG23er2p5, &b_L1_Mu7_EG23er2p5);
   tree->SetBranchAddress("L1_Mu7_LooseIsoEG20er2p5", &L1_Mu7_LooseIsoEG20er2p5, &b_L1_Mu7_LooseIsoEG20er2p5);
   tree->SetBranchAddress("L1_Mu7_LooseIsoEG23er2p5", &L1_Mu7_LooseIsoEG23er2p5, &b_L1_Mu7_LooseIsoEG23er2p5);
   tree->SetBranchAddress("L1_NotBptxOR", &L1_NotBptxOR, &b_L1_NotBptxOR);
   tree->SetBranchAddress("L1_QuadJet36er2p5_IsoTau52er2p1", &L1_QuadJet36er2p5_IsoTau52er2p1, &b_L1_QuadJet36er2p5_IsoTau52er2p1);
   tree->SetBranchAddress("L1_QuadJet60er2p5", &L1_QuadJet60er2p5, &b_L1_QuadJet60er2p5);
   tree->SetBranchAddress("L1_QuadJet_95_75_65_20_DoubleJet_75_65_er2p5_Jet20_FWD3p0", &L1_QuadJet_95_75_65_20_DoubleJet_75_65_er2p5_Jet20_FWD3p0, &b_L1_QuadJet_95_75_65_20_DoubleJet_75_65_er2p5_Jet20_FWD3p0);
   tree->SetBranchAddress("L1_QuadMu0", &L1_QuadMu0, &b_L1_QuadMu0);
   tree->SetBranchAddress("L1_QuadMu0_OQ", &L1_QuadMu0_OQ, &b_L1_QuadMu0_OQ);
   tree->SetBranchAddress("L1_QuadMu0_SQ", &L1_QuadMu0_SQ, &b_L1_QuadMu0_SQ);
   tree->SetBranchAddress("L1_SecondBunchInTrain", &L1_SecondBunchInTrain, &b_L1_SecondBunchInTrain);
   tree->SetBranchAddress("L1_SecondLastBunchInTrain", &L1_SecondLastBunchInTrain, &b_L1_SecondLastBunchInTrain);
   tree->SetBranchAddress("L1_SingleEG10er2p5", &L1_SingleEG10er2p5, &b_L1_SingleEG10er2p5);
   tree->SetBranchAddress("L1_SingleEG15er2p5", &L1_SingleEG15er2p5, &b_L1_SingleEG15er2p5);
   tree->SetBranchAddress("L1_SingleEG26er2p5", &L1_SingleEG26er2p5, &b_L1_SingleEG26er2p5);
   tree->SetBranchAddress("L1_SingleEG34er2p5", &L1_SingleEG34er2p5, &b_L1_SingleEG34er2p5);
   tree->SetBranchAddress("L1_SingleEG36er2p5", &L1_SingleEG36er2p5, &b_L1_SingleEG36er2p5);
   tree->SetBranchAddress("L1_SingleEG38er2p5", &L1_SingleEG38er2p5, &b_L1_SingleEG38er2p5);
   tree->SetBranchAddress("L1_SingleEG40er2p5", &L1_SingleEG40er2p5, &b_L1_SingleEG40er2p5);
   tree->SetBranchAddress("L1_SingleEG42er2p5", &L1_SingleEG42er2p5, &b_L1_SingleEG42er2p5);
   tree->SetBranchAddress("L1_SingleEG45er2p5", &L1_SingleEG45er2p5, &b_L1_SingleEG45er2p5);
   tree->SetBranchAddress("L1_SingleEG50", &L1_SingleEG50, &b_L1_SingleEG50);
   tree->SetBranchAddress("L1_SingleEG60", &L1_SingleEG60, &b_L1_SingleEG60);
   tree->SetBranchAddress("L1_SingleEG8er2p5", &L1_SingleEG8er2p5, &b_L1_SingleEG8er2p5);
   tree->SetBranchAddress("L1_SingleIsoEG24er1p5", &L1_SingleIsoEG24er1p5, &b_L1_SingleIsoEG24er1p5);
   tree->SetBranchAddress("L1_SingleIsoEG24er2p1", &L1_SingleIsoEG24er2p1, &b_L1_SingleIsoEG24er2p1);
   tree->SetBranchAddress("L1_SingleIsoEG26er1p5", &L1_SingleIsoEG26er1p5, &b_L1_SingleIsoEG26er1p5);
   tree->SetBranchAddress("L1_SingleIsoEG26er2p1", &L1_SingleIsoEG26er2p1, &b_L1_SingleIsoEG26er2p1);
   tree->SetBranchAddress("L1_SingleIsoEG26er2p5", &L1_SingleIsoEG26er2p5, &b_L1_SingleIsoEG26er2p5);
   tree->SetBranchAddress("L1_SingleIsoEG28er1p5", &L1_SingleIsoEG28er1p5, &b_L1_SingleIsoEG28er1p5);
   tree->SetBranchAddress("L1_SingleIsoEG28er2p1", &L1_SingleIsoEG28er2p1, &b_L1_SingleIsoEG28er2p1);
   tree->SetBranchAddress("L1_SingleIsoEG28er2p5", &L1_SingleIsoEG28er2p5, &b_L1_SingleIsoEG28er2p5);
   tree->SetBranchAddress("L1_SingleIsoEG30er2p1", &L1_SingleIsoEG30er2p1, &b_L1_SingleIsoEG30er2p1);
   tree->SetBranchAddress("L1_SingleIsoEG30er2p5", &L1_SingleIsoEG30er2p5, &b_L1_SingleIsoEG30er2p5);
   tree->SetBranchAddress("L1_SingleIsoEG32er2p1", &L1_SingleIsoEG32er2p1, &b_L1_SingleIsoEG32er2p1);
   tree->SetBranchAddress("L1_SingleIsoEG32er2p5", &L1_SingleIsoEG32er2p5, &b_L1_SingleIsoEG32er2p5);
   tree->SetBranchAddress("L1_SingleIsoEG34er2p5", &L1_SingleIsoEG34er2p5, &b_L1_SingleIsoEG34er2p5);
   tree->SetBranchAddress("L1_SingleJet10erHE", &L1_SingleJet10erHE, &b_L1_SingleJet10erHE);
   tree->SetBranchAddress("L1_SingleJet120", &L1_SingleJet120, &b_L1_SingleJet120);
   tree->SetBranchAddress("L1_SingleJet120_FWD3p0", &L1_SingleJet120_FWD3p0, &b_L1_SingleJet120_FWD3p0);
   tree->SetBranchAddress("L1_SingleJet120er2p5", &L1_SingleJet120er2p5, &b_L1_SingleJet120er2p5);
   tree->SetBranchAddress("L1_SingleJet12erHE", &L1_SingleJet12erHE, &b_L1_SingleJet12erHE);
   tree->SetBranchAddress("L1_SingleJet140er2p5", &L1_SingleJet140er2p5, &b_L1_SingleJet140er2p5);
   tree->SetBranchAddress("L1_SingleJet140er2p5_ETMHF80", &L1_SingleJet140er2p5_ETMHF80, &b_L1_SingleJet140er2p5_ETMHF80);
   tree->SetBranchAddress("L1_SingleJet140er2p5_ETMHF90", &L1_SingleJet140er2p5_ETMHF90, &b_L1_SingleJet140er2p5_ETMHF90);
   tree->SetBranchAddress("L1_SingleJet160er2p5", &L1_SingleJet160er2p5, &b_L1_SingleJet160er2p5);
   tree->SetBranchAddress("L1_SingleJet180", &L1_SingleJet180, &b_L1_SingleJet180);
   tree->SetBranchAddress("L1_SingleJet180er2p5", &L1_SingleJet180er2p5, &b_L1_SingleJet180er2p5);
   tree->SetBranchAddress("L1_SingleJet200", &L1_SingleJet200, &b_L1_SingleJet200);
   tree->SetBranchAddress("L1_SingleJet20er2p5_NotBptxOR", &L1_SingleJet20er2p5_NotBptxOR, &b_L1_SingleJet20er2p5_NotBptxOR);
   tree->SetBranchAddress("L1_SingleJet20er2p5_NotBptxOR_3BX", &L1_SingleJet20er2p5_NotBptxOR_3BX, &b_L1_SingleJet20er2p5_NotBptxOR_3BX);
   tree->SetBranchAddress("L1_SingleJet35", &L1_SingleJet35, &b_L1_SingleJet35);
   tree->SetBranchAddress("L1_SingleJet35_FWD3p0", &L1_SingleJet35_FWD3p0, &b_L1_SingleJet35_FWD3p0);
   tree->SetBranchAddress("L1_SingleJet35er2p5", &L1_SingleJet35er2p5, &b_L1_SingleJet35er2p5);
   tree->SetBranchAddress("L1_SingleJet43er2p5_NotBptxOR_3BX", &L1_SingleJet43er2p5_NotBptxOR_3BX, &b_L1_SingleJet43er2p5_NotBptxOR_3BX);
   tree->SetBranchAddress("L1_SingleJet46er2p5_NotBptxOR_3BX", &L1_SingleJet46er2p5_NotBptxOR_3BX, &b_L1_SingleJet46er2p5_NotBptxOR_3BX);
   tree->SetBranchAddress("L1_SingleJet60", &L1_SingleJet60, &b_L1_SingleJet60);
   tree->SetBranchAddress("L1_SingleJet60_FWD3p0", &L1_SingleJet60_FWD3p0, &b_L1_SingleJet60_FWD3p0);
   tree->SetBranchAddress("L1_SingleJet60er2p5", &L1_SingleJet60er2p5, &b_L1_SingleJet60er2p5);
   tree->SetBranchAddress("L1_SingleJet8erHE", &L1_SingleJet8erHE, &b_L1_SingleJet8erHE);
   tree->SetBranchAddress("L1_SingleJet90", &L1_SingleJet90, &b_L1_SingleJet90);
   tree->SetBranchAddress("L1_SingleJet90_FWD3p0", &L1_SingleJet90_FWD3p0, &b_L1_SingleJet90_FWD3p0);
   tree->SetBranchAddress("L1_SingleJet90er2p5", &L1_SingleJet90er2p5, &b_L1_SingleJet90er2p5);
   tree->SetBranchAddress("L1_SingleLooseIsoEG28er1p5", &L1_SingleLooseIsoEG28er1p5, &b_L1_SingleLooseIsoEG28er1p5);
   tree->SetBranchAddress("L1_SingleLooseIsoEG30er1p5", &L1_SingleLooseIsoEG30er1p5, &b_L1_SingleLooseIsoEG30er1p5);
   tree->SetBranchAddress("L1_SingleMu0_BMTF", &L1_SingleMu0_BMTF, &b_L1_SingleMu0_BMTF);
   tree->SetBranchAddress("L1_SingleMu0_DQ", &L1_SingleMu0_DQ, &b_L1_SingleMu0_DQ);
   tree->SetBranchAddress("L1_SingleMu0_EMTF", &L1_SingleMu0_EMTF, &b_L1_SingleMu0_EMTF);
   tree->SetBranchAddress("L1_SingleMu0_OMTF", &L1_SingleMu0_OMTF, &b_L1_SingleMu0_OMTF);
   tree->SetBranchAddress("L1_SingleMu10er1p5", &L1_SingleMu10er1p5, &b_L1_SingleMu10er1p5);
   tree->SetBranchAddress("L1_SingleMu12_DQ_BMTF", &L1_SingleMu12_DQ_BMTF, &b_L1_SingleMu12_DQ_BMTF);
   tree->SetBranchAddress("L1_SingleMu12_DQ_EMTF", &L1_SingleMu12_DQ_EMTF, &b_L1_SingleMu12_DQ_EMTF);
   tree->SetBranchAddress("L1_SingleMu12_DQ_OMTF", &L1_SingleMu12_DQ_OMTF, &b_L1_SingleMu12_DQ_OMTF);
   tree->SetBranchAddress("L1_SingleMu12er1p5", &L1_SingleMu12er1p5, &b_L1_SingleMu12er1p5);
   tree->SetBranchAddress("L1_SingleMu14er1p5", &L1_SingleMu14er1p5, &b_L1_SingleMu14er1p5);
   tree->SetBranchAddress("L1_SingleMu15_DQ", &L1_SingleMu15_DQ, &b_L1_SingleMu15_DQ);
   tree->SetBranchAddress("L1_SingleMu16er1p5", &L1_SingleMu16er1p5, &b_L1_SingleMu16er1p5);
   tree->SetBranchAddress("L1_SingleMu18", &L1_SingleMu18, &b_L1_SingleMu18);
   tree->SetBranchAddress("L1_SingleMu18er1p5", &L1_SingleMu18er1p5, &b_L1_SingleMu18er1p5);
   tree->SetBranchAddress("L1_SingleMu20", &L1_SingleMu20, &b_L1_SingleMu20);
   tree->SetBranchAddress("L1_SingleMu22", &L1_SingleMu22, &b_L1_SingleMu22);
   tree->SetBranchAddress("L1_SingleMu22_BMTF", &L1_SingleMu22_BMTF, &b_L1_SingleMu22_BMTF);
   tree->SetBranchAddress("L1_SingleMu22_EMTF", &L1_SingleMu22_EMTF, &b_L1_SingleMu22_EMTF);
   tree->SetBranchAddress("L1_SingleMu22_OMTF", &L1_SingleMu22_OMTF, &b_L1_SingleMu22_OMTF);
   tree->SetBranchAddress("L1_SingleMu25", &L1_SingleMu25, &b_L1_SingleMu25);
   tree->SetBranchAddress("L1_SingleMu3", &L1_SingleMu3, &b_L1_SingleMu3);
   tree->SetBranchAddress("L1_SingleMu5", &L1_SingleMu5, &b_L1_SingleMu5);
   tree->SetBranchAddress("L1_SingleMu6er1p5", &L1_SingleMu6er1p5, &b_L1_SingleMu6er1p5);
   tree->SetBranchAddress("L1_SingleMu7", &L1_SingleMu7, &b_L1_SingleMu7);
   tree->SetBranchAddress("L1_SingleMu7_DQ", &L1_SingleMu7_DQ, &b_L1_SingleMu7_DQ);
   tree->SetBranchAddress("L1_SingleMu7er1p5", &L1_SingleMu7er1p5, &b_L1_SingleMu7er1p5);
   tree->SetBranchAddress("L1_SingleMu8er1p5", &L1_SingleMu8er1p5, &b_L1_SingleMu8er1p5);
   tree->SetBranchAddress("L1_SingleMu9er1p5", &L1_SingleMu9er1p5, &b_L1_SingleMu9er1p5);
   tree->SetBranchAddress("L1_SingleMuCosmics", &L1_SingleMuCosmics, &b_L1_SingleMuCosmics);
   tree->SetBranchAddress("L1_SingleMuCosmics_BMTF", &L1_SingleMuCosmics_BMTF, &b_L1_SingleMuCosmics_BMTF);
   tree->SetBranchAddress("L1_SingleMuCosmics_EMTF", &L1_SingleMuCosmics_EMTF, &b_L1_SingleMuCosmics_EMTF);
   tree->SetBranchAddress("L1_SingleMuCosmics_OMTF", &L1_SingleMuCosmics_OMTF, &b_L1_SingleMuCosmics_OMTF);
   tree->SetBranchAddress("L1_SingleMuOpen", &L1_SingleMuOpen, &b_L1_SingleMuOpen);
   tree->SetBranchAddress("L1_SingleMuOpen_NotBptxOR", &L1_SingleMuOpen_NotBptxOR, &b_L1_SingleMuOpen_NotBptxOR);
   tree->SetBranchAddress("L1_SingleMuOpen_er1p1_NotBptxOR_3BX", &L1_SingleMuOpen_er1p1_NotBptxOR_3BX, &b_L1_SingleMuOpen_er1p1_NotBptxOR_3BX);
   tree->SetBranchAddress("L1_SingleMuOpen_er1p4_NotBptxOR_3BX", &L1_SingleMuOpen_er1p4_NotBptxOR_3BX, &b_L1_SingleMuOpen_er1p4_NotBptxOR_3BX);
   tree->SetBranchAddress("L1_SingleTau120er2p1", &L1_SingleTau120er2p1, &b_L1_SingleTau120er2p1);
   tree->SetBranchAddress("L1_SingleTau130er2p1", &L1_SingleTau130er2p1, &b_L1_SingleTau130er2p1);
   tree->SetBranchAddress("L1_TOTEM_1", &L1_TOTEM_1, &b_L1_TOTEM_1);
   tree->SetBranchAddress("L1_TOTEM_2", &L1_TOTEM_2, &b_L1_TOTEM_2);
   tree->SetBranchAddress("L1_TOTEM_3", &L1_TOTEM_3, &b_L1_TOTEM_3);
   tree->SetBranchAddress("L1_TOTEM_4", &L1_TOTEM_4, &b_L1_TOTEM_4);
   tree->SetBranchAddress("L1_TripleEG16er2p5", &L1_TripleEG16er2p5, &b_L1_TripleEG16er2p5);
   tree->SetBranchAddress("L1_TripleEG_16_12_8_er2p5", &L1_TripleEG_16_12_8_er2p5, &b_L1_TripleEG_16_12_8_er2p5);
   tree->SetBranchAddress("L1_TripleEG_16_15_8_er2p5", &L1_TripleEG_16_15_8_er2p5, &b_L1_TripleEG_16_15_8_er2p5);
   tree->SetBranchAddress("L1_TripleEG_18_17_8_er2p5", &L1_TripleEG_18_17_8_er2p5, &b_L1_TripleEG_18_17_8_er2p5);
   tree->SetBranchAddress("L1_TripleEG_18_18_12_er2p5", &L1_TripleEG_18_18_12_er2p5, &b_L1_TripleEG_18_18_12_er2p5);
   tree->SetBranchAddress("L1_TripleJet_100_80_70_DoubleJet_80_70_er2p5", &L1_TripleJet_100_80_70_DoubleJet_80_70_er2p5, &b_L1_TripleJet_100_80_70_DoubleJet_80_70_er2p5);
   tree->SetBranchAddress("L1_TripleJet_105_85_75_DoubleJet_85_75_er2p5", &L1_TripleJet_105_85_75_DoubleJet_85_75_er2p5, &b_L1_TripleJet_105_85_75_DoubleJet_85_75_er2p5);
   tree->SetBranchAddress("L1_TripleJet_95_75_65_DoubleJet_75_65_er2p5", &L1_TripleJet_95_75_65_DoubleJet_75_65_er2p5, &b_L1_TripleJet_95_75_65_DoubleJet_75_65_er2p5);
   tree->SetBranchAddress("L1_TripleMu0", &L1_TripleMu0, &b_L1_TripleMu0);
   tree->SetBranchAddress("L1_TripleMu0_OQ", &L1_TripleMu0_OQ, &b_L1_TripleMu0_OQ);
   tree->SetBranchAddress("L1_TripleMu0_SQ", &L1_TripleMu0_SQ, &b_L1_TripleMu0_SQ);
   tree->SetBranchAddress("L1_TripleMu3", &L1_TripleMu3, &b_L1_TripleMu3);
   tree->SetBranchAddress("L1_TripleMu3_SQ", &L1_TripleMu3_SQ, &b_L1_TripleMu3_SQ);
   tree->SetBranchAddress("L1_TripleMu_5SQ_3SQ_0OQ", &L1_TripleMu_5SQ_3SQ_0OQ, &b_L1_TripleMu_5SQ_3SQ_0OQ);
   tree->SetBranchAddress("L1_TripleMu_5SQ_3SQ_0OQ_DoubleMu_5_3_SQ_OS_Mass_Max9", &L1_TripleMu_5SQ_3SQ_0OQ_DoubleMu_5_3_SQ_OS_Mass_Max9, &b_L1_TripleMu_5SQ_3SQ_0OQ_DoubleMu_5_3_SQ_OS_Mass_Max9);
   tree->SetBranchAddress("L1_TripleMu_5SQ_3SQ_0_DoubleMu_5_3_SQ_OS_Mass_Max9", &L1_TripleMu_5SQ_3SQ_0_DoubleMu_5_3_SQ_OS_Mass_Max9, &b_L1_TripleMu_5SQ_3SQ_0_DoubleMu_5_3_SQ_OS_Mass_Max9);
   tree->SetBranchAddress("L1_TripleMu_5_3_3", &L1_TripleMu_5_3_3, &b_L1_TripleMu_5_3_3);
   tree->SetBranchAddress("L1_TripleMu_5_3_3_SQ", &L1_TripleMu_5_3_3_SQ, &b_L1_TripleMu_5_3_3_SQ);
   tree->SetBranchAddress("L1_TripleMu_5_3p5_2p5", &L1_TripleMu_5_3p5_2p5, &b_L1_TripleMu_5_3p5_2p5);
   tree->SetBranchAddress("L1_TripleMu_5_3p5_2p5_DoubleMu_5_2p5_OS_Mass_5to17", &L1_TripleMu_5_3p5_2p5_DoubleMu_5_2p5_OS_Mass_5to17, &b_L1_TripleMu_5_3p5_2p5_DoubleMu_5_2p5_OS_Mass_5to17);
   tree->SetBranchAddress("L1_TripleMu_5_3p5_2p5_OQ_DoubleMu_5_2p5_OQ_OS_Mass_5to17", &L1_TripleMu_5_3p5_2p5_OQ_DoubleMu_5_2p5_OQ_OS_Mass_5to17, &b_L1_TripleMu_5_3p5_2p5_OQ_DoubleMu_5_2p5_OQ_OS_Mass_5to17);
   tree->SetBranchAddress("L1_TripleMu_5_4_2p5_DoubleMu_5_2p5_OS_Mass_5to17", &L1_TripleMu_5_4_2p5_DoubleMu_5_2p5_OS_Mass_5to17, &b_L1_TripleMu_5_4_2p5_DoubleMu_5_2p5_OS_Mass_5to17);
   tree->SetBranchAddress("L1_TripleMu_5_5_3", &L1_TripleMu_5_5_3, &b_L1_TripleMu_5_5_3);
   tree->SetBranchAddress("L1_UnpairedBunchBptxMinus", &L1_UnpairedBunchBptxMinus, &b_L1_UnpairedBunchBptxMinus);
   tree->SetBranchAddress("L1_UnpairedBunchBptxPlus", &L1_UnpairedBunchBptxPlus, &b_L1_UnpairedBunchBptxPlus);
   tree->SetBranchAddress("L1_ZeroBias", &L1_ZeroBias, &b_L1_ZeroBias);
   tree->SetBranchAddress("L1_ZeroBias_copy", &L1_ZeroBias_copy, &b_L1_ZeroBias_copy);
   tree->SetBranchAddress("L1_UnprefireableEvent", &L1_UnprefireableEvent, &b_L1_UnprefireableEvent);
   tree->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
   tree->SetBranchAddress("Flag_HBHENoiseIsoFilter", &Flag_HBHENoiseIsoFilter, &b_Flag_HBHENoiseIsoFilter);
   tree->SetBranchAddress("Flag_CSCTightHaloFilter", &Flag_CSCTightHaloFilter, &b_Flag_CSCTightHaloFilter);
   tree->SetBranchAddress("Flag_CSCTightHaloTrkMuUnvetoFilter", &Flag_CSCTightHaloTrkMuUnvetoFilter, &b_Flag_CSCTightHaloTrkMuUnvetoFilter);
   tree->SetBranchAddress("Flag_CSCTightHalo2015Filter", &Flag_CSCTightHalo2015Filter, &b_Flag_CSCTightHalo2015Filter);
   tree->SetBranchAddress("Flag_globalTightHalo2016Filter", &Flag_globalTightHalo2016Filter, &b_Flag_globalTightHalo2016Filter);
   tree->SetBranchAddress("Flag_globalSuperTightHalo2016Filter", &Flag_globalSuperTightHalo2016Filter, &b_Flag_globalSuperTightHalo2016Filter);
   tree->SetBranchAddress("Flag_HcalStripHaloFilter", &Flag_HcalStripHaloFilter, &b_Flag_HcalStripHaloFilter);
   tree->SetBranchAddress("Flag_hcalLaserEventFilter", &Flag_hcalLaserEventFilter, &b_Flag_hcalLaserEventFilter);
   tree->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
   tree->SetBranchAddress("Flag_EcalDeadCellBoundaryEnergyFilter", &Flag_EcalDeadCellBoundaryEnergyFilter, &b_Flag_EcalDeadCellBoundaryEnergyFilter);
   tree->SetBranchAddress("Flag_ecalBadCalibFilter", &Flag_ecalBadCalibFilter, &b_Flag_ecalBadCalibFilter);
   tree->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
   tree->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
   tree->SetBranchAddress("Flag_ecalLaserCorrFilter", &Flag_ecalLaserCorrFilter, &b_Flag_ecalLaserCorrFilter);
   tree->SetBranchAddress("Flag_trkPOGFilters", &Flag_trkPOGFilters, &b_Flag_trkPOGFilters);
   tree->SetBranchAddress("Flag_chargedHadronTrackResolutionFilter", &Flag_chargedHadronTrackResolutionFilter, &b_Flag_chargedHadronTrackResolutionFilter);
   tree->SetBranchAddress("Flag_muonBadTrackFilter", &Flag_muonBadTrackFilter, &b_Flag_muonBadTrackFilter);
   tree->SetBranchAddress("Flag_BadChargedCandidateFilter", &Flag_BadChargedCandidateFilter, &b_Flag_BadChargedCandidateFilter);
   tree->SetBranchAddress("Flag_BadPFMuonFilter", &Flag_BadPFMuonFilter, &b_Flag_BadPFMuonFilter);
   tree->SetBranchAddress("Flag_BadPFMuonDzFilter", &Flag_BadPFMuonDzFilter, &b_Flag_BadPFMuonDzFilter);
   tree->SetBranchAddress("Flag_hfNoisyHitsFilter", &Flag_hfNoisyHitsFilter, &b_Flag_hfNoisyHitsFilter);
   tree->SetBranchAddress("Flag_BadChargedCandidateSummer16Filter", &Flag_BadChargedCandidateSummer16Filter, &b_Flag_BadChargedCandidateSummer16Filter);
   tree->SetBranchAddress("Flag_BadPFMuonSummer16Filter", &Flag_BadPFMuonSummer16Filter, &b_Flag_BadPFMuonSummer16Filter);
   tree->SetBranchAddress("Flag_trkPOG_manystripclus53X", &Flag_trkPOG_manystripclus53X, &b_Flag_trkPOG_manystripclus53X);
   tree->SetBranchAddress("Flag_trkPOG_toomanystripclus53X", &Flag_trkPOG_toomanystripclus53X, &b_Flag_trkPOG_toomanystripclus53X);
   tree->SetBranchAddress("Flag_trkPOG_logErrorTooManyClusters", &Flag_trkPOG_logErrorTooManyClusters, &b_Flag_trkPOG_logErrorTooManyClusters);
   tree->SetBranchAddress("Flag_METFilters", &Flag_METFilters, &b_Flag_METFilters);
   tree->SetBranchAddress("L1Reco_step", &L1Reco_step, &b_L1Reco_step);
   tree->SetBranchAddress("HLTriggerFirstPath", &HLTriggerFirstPath, &b_HLTriggerFirstPath);
   tree->SetBranchAddress("HLT_AK8PFJet360_TrimMass30", &HLT_AK8PFJet360_TrimMass30, &b_HLT_AK8PFJet360_TrimMass30);
   tree->SetBranchAddress("HLT_AK8PFJet380_TrimMass30", &HLT_AK8PFJet380_TrimMass30, &b_HLT_AK8PFJet380_TrimMass30);
   tree->SetBranchAddress("HLT_AK8PFJet400_TrimMass30", &HLT_AK8PFJet400_TrimMass30, &b_HLT_AK8PFJet400_TrimMass30);
   tree->SetBranchAddress("HLT_AK8PFJet420_TrimMass30", &HLT_AK8PFJet420_TrimMass30, &b_HLT_AK8PFJet420_TrimMass30);
   tree->SetBranchAddress("HLT_AK8PFHT750_TrimMass50", &HLT_AK8PFHT750_TrimMass50, &b_HLT_AK8PFHT750_TrimMass50);
   tree->SetBranchAddress("HLT_AK8PFHT800_TrimMass50", &HLT_AK8PFHT800_TrimMass50, &b_HLT_AK8PFHT800_TrimMass50);
   tree->SetBranchAddress("HLT_AK8PFHT850_TrimMass50", &HLT_AK8PFHT850_TrimMass50, &b_HLT_AK8PFHT850_TrimMass50);
   tree->SetBranchAddress("HLT_AK8PFHT900_TrimMass50", &HLT_AK8PFHT900_TrimMass50, &b_HLT_AK8PFHT900_TrimMass50);
   tree->SetBranchAddress("HLT_CaloJet500_NoJetID", &HLT_CaloJet500_NoJetID, &b_HLT_CaloJet500_NoJetID);
   tree->SetBranchAddress("HLT_CaloJet550_NoJetID", &HLT_CaloJet550_NoJetID, &b_HLT_CaloJet550_NoJetID);
   tree->SetBranchAddress("HLT_DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL", &HLT_DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL, &b_HLT_DoubleMu5_Upsilon_DoubleEle3_CaloIdL_TrackIdL);
   tree->SetBranchAddress("HLT_DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon", &HLT_DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon, &b_HLT_DoubleMu3_DoubleEle7p5_CaloIdL_TrackIdL_Upsilon);
   tree->SetBranchAddress("HLT_Trimuon5_3p5_2_Upsilon_Muon", &HLT_Trimuon5_3p5_2_Upsilon_Muon, &b_HLT_Trimuon5_3p5_2_Upsilon_Muon);
   tree->SetBranchAddress("HLT_TrimuonOpen_5_3p5_2_Upsilon_Muon", &HLT_TrimuonOpen_5_3p5_2_Upsilon_Muon, &b_HLT_TrimuonOpen_5_3p5_2_Upsilon_Muon);
   tree->SetBranchAddress("HLT_DoubleEle25_CaloIdL_MW", &HLT_DoubleEle25_CaloIdL_MW, &b_HLT_DoubleEle25_CaloIdL_MW);
   tree->SetBranchAddress("HLT_DoubleEle27_CaloIdL_MW", &HLT_DoubleEle27_CaloIdL_MW, &b_HLT_DoubleEle27_CaloIdL_MW);
   tree->SetBranchAddress("HLT_DoubleEle33_CaloIdL_MW", &HLT_DoubleEle33_CaloIdL_MW, &b_HLT_DoubleEle33_CaloIdL_MW);
   tree->SetBranchAddress("HLT_DoubleEle24_eta2p1_WPTight_Gsf", &HLT_DoubleEle24_eta2p1_WPTight_Gsf, &b_HLT_DoubleEle24_eta2p1_WPTight_Gsf);
   tree->SetBranchAddress("HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350", &HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350, &b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350);
   tree->SetBranchAddress("HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350", &HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350, &b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350);
   tree->SetBranchAddress("HLT_Ele27_Ele37_CaloIdL_MW", &HLT_Ele27_Ele37_CaloIdL_MW, &b_HLT_Ele27_Ele37_CaloIdL_MW);
   tree->SetBranchAddress("HLT_Mu27_Ele37_CaloIdL_MW", &HLT_Mu27_Ele37_CaloIdL_MW, &b_HLT_Mu27_Ele37_CaloIdL_MW);
   tree->SetBranchAddress("HLT_Mu37_Ele27_CaloIdL_MW", &HLT_Mu37_Ele27_CaloIdL_MW, &b_HLT_Mu37_Ele27_CaloIdL_MW);
   tree->SetBranchAddress("HLT_Mu37_TkMu27", &HLT_Mu37_TkMu27, &b_HLT_Mu37_TkMu27);
   tree->SetBranchAddress("HLT_DoubleMu4_3_Bs", &HLT_DoubleMu4_3_Bs, &b_HLT_DoubleMu4_3_Bs);
   tree->SetBranchAddress("HLT_DoubleMu4_3_Jpsi", &HLT_DoubleMu4_3_Jpsi, &b_HLT_DoubleMu4_3_Jpsi);
   tree->SetBranchAddress("HLT_DoubleMu4_JpsiTrk_Displaced", &HLT_DoubleMu4_JpsiTrk_Displaced, &b_HLT_DoubleMu4_JpsiTrk_Displaced);
   tree->SetBranchAddress("HLT_DoubleMu4_LowMassNonResonantTrk_Displaced", &HLT_DoubleMu4_LowMassNonResonantTrk_Displaced, &b_HLT_DoubleMu4_LowMassNonResonantTrk_Displaced);
   tree->SetBranchAddress("HLT_DoubleMu3_Trk_Tau3mu", &HLT_DoubleMu3_Trk_Tau3mu, &b_HLT_DoubleMu3_Trk_Tau3mu);
   tree->SetBranchAddress("HLT_DoubleMu3_TkMu_DsTau3Mu", &HLT_DoubleMu3_TkMu_DsTau3Mu, &b_HLT_DoubleMu3_TkMu_DsTau3Mu);
   tree->SetBranchAddress("HLT_DoubleMu4_PsiPrimeTrk_Displaced", &HLT_DoubleMu4_PsiPrimeTrk_Displaced, &b_HLT_DoubleMu4_PsiPrimeTrk_Displaced);
   tree->SetBranchAddress("HLT_DoubleMu4_Mass3p8_DZ_PFHT350", &HLT_DoubleMu4_Mass3p8_DZ_PFHT350, &b_HLT_DoubleMu4_Mass3p8_DZ_PFHT350);
   tree->SetBranchAddress("HLT_Mu3_PFJet40", &HLT_Mu3_PFJet40, &b_HLT_Mu3_PFJet40);
   tree->SetBranchAddress("HLT_Mu7p5_L2Mu2_Jpsi", &HLT_Mu7p5_L2Mu2_Jpsi, &b_HLT_Mu7p5_L2Mu2_Jpsi);
   tree->SetBranchAddress("HLT_Mu7p5_L2Mu2_Upsilon", &HLT_Mu7p5_L2Mu2_Upsilon, &b_HLT_Mu7p5_L2Mu2_Upsilon);
   tree->SetBranchAddress("HLT_Mu7p5_Track2_Jpsi", &HLT_Mu7p5_Track2_Jpsi, &b_HLT_Mu7p5_Track2_Jpsi);
   tree->SetBranchAddress("HLT_Mu7p5_Track3p5_Jpsi", &HLT_Mu7p5_Track3p5_Jpsi, &b_HLT_Mu7p5_Track3p5_Jpsi);
   tree->SetBranchAddress("HLT_Mu7p5_Track7_Jpsi", &HLT_Mu7p5_Track7_Jpsi, &b_HLT_Mu7p5_Track7_Jpsi);
   tree->SetBranchAddress("HLT_Mu7p5_Track2_Upsilon", &HLT_Mu7p5_Track2_Upsilon, &b_HLT_Mu7p5_Track2_Upsilon);
   tree->SetBranchAddress("HLT_Mu7p5_Track3p5_Upsilon", &HLT_Mu7p5_Track3p5_Upsilon, &b_HLT_Mu7p5_Track3p5_Upsilon);
   tree->SetBranchAddress("HLT_Mu7p5_Track7_Upsilon", &HLT_Mu7p5_Track7_Upsilon, &b_HLT_Mu7p5_Track7_Upsilon);
   tree->SetBranchAddress("HLT_Mu3_L1SingleMu5orSingleMu7", &HLT_Mu3_L1SingleMu5orSingleMu7, &b_HLT_Mu3_L1SingleMu5orSingleMu7);
   tree->SetBranchAddress("HLT_DoublePhoton33_CaloIdL", &HLT_DoublePhoton33_CaloIdL, &b_HLT_DoublePhoton33_CaloIdL);
   tree->SetBranchAddress("HLT_DoublePhoton70", &HLT_DoublePhoton70, &b_HLT_DoublePhoton70);
   tree->SetBranchAddress("HLT_DoublePhoton85", &HLT_DoublePhoton85, &b_HLT_DoublePhoton85);
   tree->SetBranchAddress("HLT_Ele20_WPTight_Gsf", &HLT_Ele20_WPTight_Gsf, &b_HLT_Ele20_WPTight_Gsf);
   tree->SetBranchAddress("HLT_Ele15_WPLoose_Gsf", &HLT_Ele15_WPLoose_Gsf, &b_HLT_Ele15_WPLoose_Gsf);
   tree->SetBranchAddress("HLT_Ele17_WPLoose_Gsf", &HLT_Ele17_WPLoose_Gsf, &b_HLT_Ele17_WPLoose_Gsf);
   tree->SetBranchAddress("HLT_Ele20_WPLoose_Gsf", &HLT_Ele20_WPLoose_Gsf, &b_HLT_Ele20_WPLoose_Gsf);
   tree->SetBranchAddress("HLT_Ele20_eta2p1_WPLoose_Gsf", &HLT_Ele20_eta2p1_WPLoose_Gsf, &b_HLT_Ele20_eta2p1_WPLoose_Gsf);
   tree->SetBranchAddress("HLT_DiEle27_WPTightCaloOnly_L1DoubleEG", &HLT_DiEle27_WPTightCaloOnly_L1DoubleEG, &b_HLT_DiEle27_WPTightCaloOnly_L1DoubleEG);
   tree->SetBranchAddress("HLT_Ele27_WPTight_Gsf", &HLT_Ele27_WPTight_Gsf, &b_HLT_Ele27_WPTight_Gsf);
   tree->SetBranchAddress("HLT_Ele28_WPTight_Gsf", &HLT_Ele28_WPTight_Gsf, &b_HLT_Ele28_WPTight_Gsf);
   tree->SetBranchAddress("HLT_Ele30_WPTight_Gsf", &HLT_Ele30_WPTight_Gsf, &b_HLT_Ele30_WPTight_Gsf);
   tree->SetBranchAddress("HLT_Ele32_WPTight_Gsf", &HLT_Ele32_WPTight_Gsf, &b_HLT_Ele32_WPTight_Gsf);
   tree->SetBranchAddress("HLT_Ele35_WPTight_Gsf", &HLT_Ele35_WPTight_Gsf, &b_HLT_Ele35_WPTight_Gsf);
   tree->SetBranchAddress("HLT_Ele35_WPTight_Gsf_L1EGMT", &HLT_Ele35_WPTight_Gsf_L1EGMT, &b_HLT_Ele35_WPTight_Gsf_L1EGMT);
   tree->SetBranchAddress("HLT_Ele38_WPTight_Gsf", &HLT_Ele38_WPTight_Gsf, &b_HLT_Ele38_WPTight_Gsf);
   tree->SetBranchAddress("HLT_Ele40_WPTight_Gsf", &HLT_Ele40_WPTight_Gsf, &b_HLT_Ele40_WPTight_Gsf);
   tree->SetBranchAddress("HLT_Ele32_WPTight_Gsf_L1DoubleEG", &HLT_Ele32_WPTight_Gsf_L1DoubleEG, &b_HLT_Ele32_WPTight_Gsf_L1DoubleEG);
   tree->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_CrossL1);
   tree->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_CrossL1);
   tree->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_CrossL1);
   tree->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1);
   tree->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1);
   tree->SetBranchAddress("HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1", &HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1, &b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTauHPS30_eta2p1_TightID_CrossL1);
   tree->SetBranchAddress("HLT_HT450_Beamspot", &HLT_HT450_Beamspot, &b_HLT_HT450_Beamspot);
   tree->SetBranchAddress("HLT_HT300_Beamspot", &HLT_HT300_Beamspot, &b_HLT_HT300_Beamspot);
   tree->SetBranchAddress("HLT_ZeroBias_Beamspot", &HLT_ZeroBias_Beamspot, &b_HLT_ZeroBias_Beamspot);
   tree->SetBranchAddress("HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1", &HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1, &b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_CrossL1);
   tree->SetBranchAddress("HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1", &HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1, &b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_CrossL1);
   tree->SetBranchAddress("HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1", &HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1, &b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_CrossL1);
   tree->SetBranchAddress("HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", &HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1, &b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1);
   tree->SetBranchAddress("HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", &HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1, &b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1);
   tree->SetBranchAddress("HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1", &HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1, &b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTauHPS27_eta2p1_TightID_CrossL1);
   tree->SetBranchAddress("HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1", &HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1, &b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1);
   tree->SetBranchAddress("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1", &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1, &b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1);
   tree->SetBranchAddress("HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1", &HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1, &b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg_CrossL1);
   tree->SetBranchAddress("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1", &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1, &b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg_CrossL1);
   tree->SetBranchAddress("HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", &HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1, &b_HLT_IsoMu27_LooseChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1);
   tree->SetBranchAddress("HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", &HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1, &b_HLT_IsoMu27_MediumChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1);
   tree->SetBranchAddress("HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1", &HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1, &b_HLT_IsoMu27_TightChargedIsoPFTauHPS20_Trk1_eta2p1_SingleL1);
   tree->SetBranchAddress("HLT_IsoMu20", &HLT_IsoMu20, &b_HLT_IsoMu20);
   tree->SetBranchAddress("HLT_IsoMu24", &HLT_IsoMu24, &b_HLT_IsoMu24);
   tree->SetBranchAddress("HLT_IsoMu24_eta2p1", &HLT_IsoMu24_eta2p1, &b_HLT_IsoMu24_eta2p1);
   tree->SetBranchAddress("HLT_IsoMu27", &HLT_IsoMu27, &b_HLT_IsoMu27);
   tree->SetBranchAddress("HLT_IsoMu30", &HLT_IsoMu30, &b_HLT_IsoMu30);
   tree->SetBranchAddress("HLT_UncorrectedJetE30_NoBPTX", &HLT_UncorrectedJetE30_NoBPTX, &b_HLT_UncorrectedJetE30_NoBPTX);
   tree->SetBranchAddress("HLT_UncorrectedJetE30_NoBPTX3BX", &HLT_UncorrectedJetE30_NoBPTX3BX, &b_HLT_UncorrectedJetE30_NoBPTX3BX);
   tree->SetBranchAddress("HLT_UncorrectedJetE60_NoBPTX3BX", &HLT_UncorrectedJetE60_NoBPTX3BX, &b_HLT_UncorrectedJetE60_NoBPTX3BX);
   tree->SetBranchAddress("HLT_UncorrectedJetE70_NoBPTX3BX", &HLT_UncorrectedJetE70_NoBPTX3BX, &b_HLT_UncorrectedJetE70_NoBPTX3BX);
   tree->SetBranchAddress("HLT_L1SingleMu18", &HLT_L1SingleMu18, &b_HLT_L1SingleMu18);
   tree->SetBranchAddress("HLT_L1SingleMu25", &HLT_L1SingleMu25, &b_HLT_L1SingleMu25);
   tree->SetBranchAddress("HLT_L2Mu10", &HLT_L2Mu10, &b_HLT_L2Mu10);
   tree->SetBranchAddress("HLT_L2Mu10_NoVertex_NoBPTX3BX", &HLT_L2Mu10_NoVertex_NoBPTX3BX, &b_HLT_L2Mu10_NoVertex_NoBPTX3BX);
   tree->SetBranchAddress("HLT_L2Mu10_NoVertex_NoBPTX", &HLT_L2Mu10_NoVertex_NoBPTX, &b_HLT_L2Mu10_NoVertex_NoBPTX);
   tree->SetBranchAddress("HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX", &HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX, &b_HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX);
   tree->SetBranchAddress("HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX", &HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX, &b_HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX);
   tree->SetBranchAddress("HLT_L2Mu50", &HLT_L2Mu50, &b_HLT_L2Mu50);
   tree->SetBranchAddress("HLT_L2Mu23NoVtx_2Cha", &HLT_L2Mu23NoVtx_2Cha, &b_HLT_L2Mu23NoVtx_2Cha);
   tree->SetBranchAddress("HLT_L2Mu23NoVtx_2Cha_CosmicSeed", &HLT_L2Mu23NoVtx_2Cha_CosmicSeed, &b_HLT_L2Mu23NoVtx_2Cha_CosmicSeed);
   tree->SetBranchAddress("HLT_DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4", &HLT_DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4, &b_HLT_DoubleL2Mu30NoVtx_2Cha_CosmicSeed_Eta2p4);
   tree->SetBranchAddress("HLT_DoubleL2Mu30NoVtx_2Cha_Eta2p4", &HLT_DoubleL2Mu30NoVtx_2Cha_Eta2p4, &b_HLT_DoubleL2Mu30NoVtx_2Cha_Eta2p4);
   tree->SetBranchAddress("HLT_DoubleL2Mu50", &HLT_DoubleL2Mu50, &b_HLT_DoubleL2Mu50);
   tree->SetBranchAddress("HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed", &HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed, &b_HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed);
   tree->SetBranchAddress("HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched", &HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched, &b_HLT_DoubleL2Mu23NoVtx_2Cha_CosmicSeed_NoL2Matched);
   tree->SetBranchAddress("HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed", &HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed, &b_HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed);
   tree->SetBranchAddress("HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched", &HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched, &b_HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_NoL2Matched);
   tree->SetBranchAddress("HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4", &HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4, &b_HLT_DoubleL2Mu25NoVtx_2Cha_CosmicSeed_Eta2p4);
   tree->SetBranchAddress("HLT_DoubleL2Mu23NoVtx_2Cha", &HLT_DoubleL2Mu23NoVtx_2Cha, &b_HLT_DoubleL2Mu23NoVtx_2Cha);
   tree->SetBranchAddress("HLT_DoubleL2Mu23NoVtx_2Cha_NoL2Matched", &HLT_DoubleL2Mu23NoVtx_2Cha_NoL2Matched, &b_HLT_DoubleL2Mu23NoVtx_2Cha_NoL2Matched);
   tree->SetBranchAddress("HLT_DoubleL2Mu25NoVtx_2Cha", &HLT_DoubleL2Mu25NoVtx_2Cha, &b_HLT_DoubleL2Mu25NoVtx_2Cha);
   tree->SetBranchAddress("HLT_DoubleL2Mu25NoVtx_2Cha_NoL2Matched", &HLT_DoubleL2Mu25NoVtx_2Cha_NoL2Matched, &b_HLT_DoubleL2Mu25NoVtx_2Cha_NoL2Matched);
   tree->SetBranchAddress("HLT_DoubleL2Mu25NoVtx_2Cha_Eta2p4", &HLT_DoubleL2Mu25NoVtx_2Cha_Eta2p4, &b_HLT_DoubleL2Mu25NoVtx_2Cha_Eta2p4);
   tree->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL);
   tree->SetBranchAddress("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL", &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL, &b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL);
   tree->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ);
   tree->SetBranchAddress("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ", &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ, &b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ);
   tree->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8);
   tree->SetBranchAddress("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8", &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8, &b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8);
   tree->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8);
   tree->SetBranchAddress("HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8", &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8, &b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8);
   tree->SetBranchAddress("HLT_Mu25_TkMu0_Onia", &HLT_Mu25_TkMu0_Onia, &b_HLT_Mu25_TkMu0_Onia);
   tree->SetBranchAddress("HLT_Mu30_TkMu0_Psi", &HLT_Mu30_TkMu0_Psi, &b_HLT_Mu30_TkMu0_Psi);
   tree->SetBranchAddress("HLT_Mu30_TkMu0_Upsilon", &HLT_Mu30_TkMu0_Upsilon, &b_HLT_Mu30_TkMu0_Upsilon);
   tree->SetBranchAddress("HLT_Mu20_TkMu0_Phi", &HLT_Mu20_TkMu0_Phi, &b_HLT_Mu20_TkMu0_Phi);
   tree->SetBranchAddress("HLT_Mu25_TkMu0_Phi", &HLT_Mu25_TkMu0_Phi, &b_HLT_Mu25_TkMu0_Phi);
   tree->SetBranchAddress("HLT_Mu12", &HLT_Mu12, &b_HLT_Mu12);
   tree->SetBranchAddress("HLT_Mu15", &HLT_Mu15, &b_HLT_Mu15);
   tree->SetBranchAddress("HLT_Mu20", &HLT_Mu20, &b_HLT_Mu20);
   tree->SetBranchAddress("HLT_Mu27", &HLT_Mu27, &b_HLT_Mu27);
   tree->SetBranchAddress("HLT_Mu50", &HLT_Mu50, &b_HLT_Mu50);
   tree->SetBranchAddress("HLT_Mu55", &HLT_Mu55, &b_HLT_Mu55);
   tree->SetBranchAddress("HLT_OldMu100", &HLT_OldMu100, &b_HLT_OldMu100);
   tree->SetBranchAddress("HLT_TkMu100", &HLT_TkMu100, &b_HLT_TkMu100);
   tree->SetBranchAddress("HLT_DiPFJetAve40", &HLT_DiPFJetAve40, &b_HLT_DiPFJetAve40);
   tree->SetBranchAddress("HLT_DiPFJetAve60", &HLT_DiPFJetAve60, &b_HLT_DiPFJetAve60);
   tree->SetBranchAddress("HLT_DiPFJetAve80", &HLT_DiPFJetAve80, &b_HLT_DiPFJetAve80);
   tree->SetBranchAddress("HLT_DiPFJetAve140", &HLT_DiPFJetAve140, &b_HLT_DiPFJetAve140);
   tree->SetBranchAddress("HLT_DiPFJetAve200", &HLT_DiPFJetAve200, &b_HLT_DiPFJetAve200);
   tree->SetBranchAddress("HLT_DiPFJetAve260", &HLT_DiPFJetAve260, &b_HLT_DiPFJetAve260);
   tree->SetBranchAddress("HLT_DiPFJetAve320", &HLT_DiPFJetAve320, &b_HLT_DiPFJetAve320);
   tree->SetBranchAddress("HLT_DiPFJetAve400", &HLT_DiPFJetAve400, &b_HLT_DiPFJetAve400);
   tree->SetBranchAddress("HLT_DiPFJetAve500", &HLT_DiPFJetAve500, &b_HLT_DiPFJetAve500);
   tree->SetBranchAddress("HLT_DiPFJetAve60_HFJEC", &HLT_DiPFJetAve60_HFJEC, &b_HLT_DiPFJetAve60_HFJEC);
   tree->SetBranchAddress("HLT_DiPFJetAve80_HFJEC", &HLT_DiPFJetAve80_HFJEC, &b_HLT_DiPFJetAve80_HFJEC);
   tree->SetBranchAddress("HLT_DiPFJetAve100_HFJEC", &HLT_DiPFJetAve100_HFJEC, &b_HLT_DiPFJetAve100_HFJEC);
   tree->SetBranchAddress("HLT_DiPFJetAve160_HFJEC", &HLT_DiPFJetAve160_HFJEC, &b_HLT_DiPFJetAve160_HFJEC);
   tree->SetBranchAddress("HLT_DiPFJetAve220_HFJEC", &HLT_DiPFJetAve220_HFJEC, &b_HLT_DiPFJetAve220_HFJEC);
   tree->SetBranchAddress("HLT_DiPFJetAve300_HFJEC", &HLT_DiPFJetAve300_HFJEC, &b_HLT_DiPFJetAve300_HFJEC);
   tree->SetBranchAddress("HLT_AK8PFJet15", &HLT_AK8PFJet15, &b_HLT_AK8PFJet15);
   tree->SetBranchAddress("HLT_AK8PFJet25", &HLT_AK8PFJet25, &b_HLT_AK8PFJet25);
   tree->SetBranchAddress("HLT_AK8PFJet40", &HLT_AK8PFJet40, &b_HLT_AK8PFJet40);
   tree->SetBranchAddress("HLT_AK8PFJet60", &HLT_AK8PFJet60, &b_HLT_AK8PFJet60);
   tree->SetBranchAddress("HLT_AK8PFJet80", &HLT_AK8PFJet80, &b_HLT_AK8PFJet80);
   tree->SetBranchAddress("HLT_AK8PFJet140", &HLT_AK8PFJet140, &b_HLT_AK8PFJet140);
   tree->SetBranchAddress("HLT_AK8PFJet200", &HLT_AK8PFJet200, &b_HLT_AK8PFJet200);
   tree->SetBranchAddress("HLT_AK8PFJet260", &HLT_AK8PFJet260, &b_HLT_AK8PFJet260);
   tree->SetBranchAddress("HLT_AK8PFJet320", &HLT_AK8PFJet320, &b_HLT_AK8PFJet320);
   tree->SetBranchAddress("HLT_AK8PFJet400", &HLT_AK8PFJet400, &b_HLT_AK8PFJet400);
   tree->SetBranchAddress("HLT_AK8PFJet450", &HLT_AK8PFJet450, &b_HLT_AK8PFJet450);
   tree->SetBranchAddress("HLT_AK8PFJet500", &HLT_AK8PFJet500, &b_HLT_AK8PFJet500);
   tree->SetBranchAddress("HLT_AK8PFJet550", &HLT_AK8PFJet550, &b_HLT_AK8PFJet550);
   tree->SetBranchAddress("HLT_PFJet15", &HLT_PFJet15, &b_HLT_PFJet15);
   tree->SetBranchAddress("HLT_PFJet25", &HLT_PFJet25, &b_HLT_PFJet25);
   tree->SetBranchAddress("HLT_PFJet40", &HLT_PFJet40, &b_HLT_PFJet40);
   tree->SetBranchAddress("HLT_PFJet60", &HLT_PFJet60, &b_HLT_PFJet60);
   tree->SetBranchAddress("HLT_PFJet80", &HLT_PFJet80, &b_HLT_PFJet80);
   tree->SetBranchAddress("HLT_PFJet140", &HLT_PFJet140, &b_HLT_PFJet140);
   tree->SetBranchAddress("HLT_PFJet200", &HLT_PFJet200, &b_HLT_PFJet200);
   tree->SetBranchAddress("HLT_PFJet260", &HLT_PFJet260, &b_HLT_PFJet260);
   tree->SetBranchAddress("HLT_PFJet320", &HLT_PFJet320, &b_HLT_PFJet320);
   tree->SetBranchAddress("HLT_PFJet400", &HLT_PFJet400, &b_HLT_PFJet400);
   tree->SetBranchAddress("HLT_PFJet450", &HLT_PFJet450, &b_HLT_PFJet450);
   tree->SetBranchAddress("HLT_PFJet500", &HLT_PFJet500, &b_HLT_PFJet500);
   tree->SetBranchAddress("HLT_PFJet550", &HLT_PFJet550, &b_HLT_PFJet550);
   tree->SetBranchAddress("HLT_PFJetFwd15", &HLT_PFJetFwd15, &b_HLT_PFJetFwd15);
   tree->SetBranchAddress("HLT_PFJetFwd25", &HLT_PFJetFwd25, &b_HLT_PFJetFwd25);
   tree->SetBranchAddress("HLT_PFJetFwd40", &HLT_PFJetFwd40, &b_HLT_PFJetFwd40);
   tree->SetBranchAddress("HLT_PFJetFwd60", &HLT_PFJetFwd60, &b_HLT_PFJetFwd60);
   tree->SetBranchAddress("HLT_PFJetFwd80", &HLT_PFJetFwd80, &b_HLT_PFJetFwd80);
   tree->SetBranchAddress("HLT_PFJetFwd140", &HLT_PFJetFwd140, &b_HLT_PFJetFwd140);
   tree->SetBranchAddress("HLT_PFJetFwd200", &HLT_PFJetFwd200, &b_HLT_PFJetFwd200);
   tree->SetBranchAddress("HLT_PFJetFwd260", &HLT_PFJetFwd260, &b_HLT_PFJetFwd260);
   tree->SetBranchAddress("HLT_PFJetFwd320", &HLT_PFJetFwd320, &b_HLT_PFJetFwd320);
   tree->SetBranchAddress("HLT_PFJetFwd400", &HLT_PFJetFwd400, &b_HLT_PFJetFwd400);
   tree->SetBranchAddress("HLT_PFJetFwd450", &HLT_PFJetFwd450, &b_HLT_PFJetFwd450);
   tree->SetBranchAddress("HLT_PFJetFwd500", &HLT_PFJetFwd500, &b_HLT_PFJetFwd500);
   tree->SetBranchAddress("HLT_AK8PFJetFwd15", &HLT_AK8PFJetFwd15, &b_HLT_AK8PFJetFwd15);
   tree->SetBranchAddress("HLT_AK8PFJetFwd25", &HLT_AK8PFJetFwd25, &b_HLT_AK8PFJetFwd25);
   tree->SetBranchAddress("HLT_AK8PFJetFwd40", &HLT_AK8PFJetFwd40, &b_HLT_AK8PFJetFwd40);
   tree->SetBranchAddress("HLT_AK8PFJetFwd60", &HLT_AK8PFJetFwd60, &b_HLT_AK8PFJetFwd60);
   tree->SetBranchAddress("HLT_AK8PFJetFwd80", &HLT_AK8PFJetFwd80, &b_HLT_AK8PFJetFwd80);
   tree->SetBranchAddress("HLT_AK8PFJetFwd140", &HLT_AK8PFJetFwd140, &b_HLT_AK8PFJetFwd140);
   tree->SetBranchAddress("HLT_AK8PFJetFwd200", &HLT_AK8PFJetFwd200, &b_HLT_AK8PFJetFwd200);
   tree->SetBranchAddress("HLT_AK8PFJetFwd260", &HLT_AK8PFJetFwd260, &b_HLT_AK8PFJetFwd260);
   tree->SetBranchAddress("HLT_AK8PFJetFwd320", &HLT_AK8PFJetFwd320, &b_HLT_AK8PFJetFwd320);
   tree->SetBranchAddress("HLT_AK8PFJetFwd400", &HLT_AK8PFJetFwd400, &b_HLT_AK8PFJetFwd400);
   tree->SetBranchAddress("HLT_AK8PFJetFwd450", &HLT_AK8PFJetFwd450, &b_HLT_AK8PFJetFwd450);
   tree->SetBranchAddress("HLT_AK8PFJetFwd500", &HLT_AK8PFJetFwd500, &b_HLT_AK8PFJetFwd500);
   tree->SetBranchAddress("HLT_PFHT180", &HLT_PFHT180, &b_HLT_PFHT180);
   tree->SetBranchAddress("HLT_PFHT250", &HLT_PFHT250, &b_HLT_PFHT250);
   tree->SetBranchAddress("HLT_PFHT370", &HLT_PFHT370, &b_HLT_PFHT370);
   tree->SetBranchAddress("HLT_PFHT430", &HLT_PFHT430, &b_HLT_PFHT430);
   tree->SetBranchAddress("HLT_PFHT510", &HLT_PFHT510, &b_HLT_PFHT510);
   tree->SetBranchAddress("HLT_PFHT590", &HLT_PFHT590, &b_HLT_PFHT590);
   tree->SetBranchAddress("HLT_PFHT680", &HLT_PFHT680, &b_HLT_PFHT680);
   tree->SetBranchAddress("HLT_PFHT780", &HLT_PFHT780, &b_HLT_PFHT780);
   tree->SetBranchAddress("HLT_PFHT890", &HLT_PFHT890, &b_HLT_PFHT890);
   tree->SetBranchAddress("HLT_PFHT1050", &HLT_PFHT1050, &b_HLT_PFHT1050);
   tree->SetBranchAddress("HLT_PFHT500_PFMET100_PFMHT100_IDTight", &HLT_PFHT500_PFMET100_PFMHT100_IDTight, &b_HLT_PFHT500_PFMET100_PFMHT100_IDTight);
   tree->SetBranchAddress("HLT_PFHT500_PFMET110_PFMHT110_IDTight", &HLT_PFHT500_PFMET110_PFMHT110_IDTight, &b_HLT_PFHT500_PFMET110_PFMHT110_IDTight);
   tree->SetBranchAddress("HLT_PFHT700_PFMET85_PFMHT85_IDTight", &HLT_PFHT700_PFMET85_PFMHT85_IDTight, &b_HLT_PFHT700_PFMET85_PFMHT85_IDTight);
   tree->SetBranchAddress("HLT_PFHT700_PFMET95_PFMHT95_IDTight", &HLT_PFHT700_PFMET95_PFMHT95_IDTight, &b_HLT_PFHT700_PFMET95_PFMHT95_IDTight);
   tree->SetBranchAddress("HLT_PFHT800_PFMET75_PFMHT75_IDTight", &HLT_PFHT800_PFMET75_PFMHT75_IDTight, &b_HLT_PFHT800_PFMET75_PFMHT75_IDTight);
   tree->SetBranchAddress("HLT_PFHT800_PFMET85_PFMHT85_IDTight", &HLT_PFHT800_PFMET85_PFMHT85_IDTight, &b_HLT_PFHT800_PFMET85_PFMHT85_IDTight);
   tree->SetBranchAddress("HLT_PFMET110_PFMHT110_IDTight", &HLT_PFMET110_PFMHT110_IDTight, &b_HLT_PFMET110_PFMHT110_IDTight);
   tree->SetBranchAddress("HLT_PFMET120_PFMHT120_IDTight", &HLT_PFMET120_PFMHT120_IDTight, &b_HLT_PFMET120_PFMHT120_IDTight);
   tree->SetBranchAddress("HLT_PFMET130_PFMHT130_IDTight", &HLT_PFMET130_PFMHT130_IDTight, &b_HLT_PFMET130_PFMHT130_IDTight);
   tree->SetBranchAddress("HLT_PFMET140_PFMHT140_IDTight", &HLT_PFMET140_PFMHT140_IDTight, &b_HLT_PFMET140_PFMHT140_IDTight);
   tree->SetBranchAddress("HLT_PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1", &HLT_PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1, &b_HLT_PFMET100_PFMHT100_IDTight_CaloBTagDeepCSV_3p1);
   tree->SetBranchAddress("HLT_PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1", &HLT_PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1, &b_HLT_PFMET110_PFMHT110_IDTight_CaloBTagDeepCSV_3p1);
   tree->SetBranchAddress("HLT_PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1", &HLT_PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1, &b_HLT_PFMET120_PFMHT120_IDTight_CaloBTagDeepCSV_3p1);
   tree->SetBranchAddress("HLT_PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1", &HLT_PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1, &b_HLT_PFMET130_PFMHT130_IDTight_CaloBTagDeepCSV_3p1);
   tree->SetBranchAddress("HLT_PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1", &HLT_PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1, &b_HLT_PFMET140_PFMHT140_IDTight_CaloBTagDeepCSV_3p1);
   tree->SetBranchAddress("HLT_PFMET120_PFMHT120_IDTight_PFHT60", &HLT_PFMET120_PFMHT120_IDTight_PFHT60, &b_HLT_PFMET120_PFMHT120_IDTight_PFHT60);
   tree->SetBranchAddress("HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60", &HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60, &b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60);
   tree->SetBranchAddress("HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60", &HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60, &b_HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60);
   tree->SetBranchAddress("HLT_PFMETTypeOne110_PFMHT110_IDTight", &HLT_PFMETTypeOne110_PFMHT110_IDTight, &b_HLT_PFMETTypeOne110_PFMHT110_IDTight);
   tree->SetBranchAddress("HLT_PFMETTypeOne120_PFMHT120_IDTight", &HLT_PFMETTypeOne120_PFMHT120_IDTight, &b_HLT_PFMETTypeOne120_PFMHT120_IDTight);
   tree->SetBranchAddress("HLT_PFMETTypeOne130_PFMHT130_IDTight", &HLT_PFMETTypeOne130_PFMHT130_IDTight, &b_HLT_PFMETTypeOne130_PFMHT130_IDTight);
   tree->SetBranchAddress("HLT_PFMETTypeOne140_PFMHT140_IDTight", &HLT_PFMETTypeOne140_PFMHT140_IDTight, &b_HLT_PFMETTypeOne140_PFMHT140_IDTight);
   tree->SetBranchAddress("HLT_PFMETNoMu110_PFMHTNoMu110_IDTight", &HLT_PFMETNoMu110_PFMHTNoMu110_IDTight, &b_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight);
   tree->SetBranchAddress("HLT_PFMETNoMu120_PFMHTNoMu120_IDTight", &HLT_PFMETNoMu120_PFMHTNoMu120_IDTight, &b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight);
   tree->SetBranchAddress("HLT_PFMETNoMu130_PFMHTNoMu130_IDTight", &HLT_PFMETNoMu130_PFMHTNoMu130_IDTight, &b_HLT_PFMETNoMu130_PFMHTNoMu130_IDTight);
   tree->SetBranchAddress("HLT_PFMETNoMu140_PFMHTNoMu140_IDTight", &HLT_PFMETNoMu140_PFMHTNoMu140_IDTight, &b_HLT_PFMETNoMu140_PFMHTNoMu140_IDTight);
   tree->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight);
   tree->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight);
   tree->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight);
   tree->SetBranchAddress("HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight", &HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight, &b_HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight);
   tree->SetBranchAddress("HLT_L1ETMHadSeeds", &HLT_L1ETMHadSeeds, &b_HLT_L1ETMHadSeeds);
   tree->SetBranchAddress("HLT_CaloMHT90", &HLT_CaloMHT90, &b_HLT_CaloMHT90);
   tree->SetBranchAddress("HLT_CaloMET80_NotCleaned", &HLT_CaloMET80_NotCleaned, &b_HLT_CaloMET80_NotCleaned);
   tree->SetBranchAddress("HLT_CaloMET90_NotCleaned", &HLT_CaloMET90_NotCleaned, &b_HLT_CaloMET90_NotCleaned);
   tree->SetBranchAddress("HLT_CaloMET100_NotCleaned", &HLT_CaloMET100_NotCleaned, &b_HLT_CaloMET100_NotCleaned);
   tree->SetBranchAddress("HLT_CaloMET110_NotCleaned", &HLT_CaloMET110_NotCleaned, &b_HLT_CaloMET110_NotCleaned);
   tree->SetBranchAddress("HLT_CaloMET250_NotCleaned", &HLT_CaloMET250_NotCleaned, &b_HLT_CaloMET250_NotCleaned);
   tree->SetBranchAddress("HLT_CaloMET70_HBHECleaned", &HLT_CaloMET70_HBHECleaned, &b_HLT_CaloMET70_HBHECleaned);
   tree->SetBranchAddress("HLT_CaloMET80_HBHECleaned", &HLT_CaloMET80_HBHECleaned, &b_HLT_CaloMET80_HBHECleaned);
   tree->SetBranchAddress("HLT_CaloMET90_HBHECleaned", &HLT_CaloMET90_HBHECleaned, &b_HLT_CaloMET90_HBHECleaned);
   tree->SetBranchAddress("HLT_CaloMET100_HBHECleaned", &HLT_CaloMET100_HBHECleaned, &b_HLT_CaloMET100_HBHECleaned);
   tree->SetBranchAddress("HLT_CaloMET250_HBHECleaned", &HLT_CaloMET250_HBHECleaned, &b_HLT_CaloMET250_HBHECleaned);
   tree->SetBranchAddress("HLT_CaloMET300_HBHECleaned", &HLT_CaloMET300_HBHECleaned, &b_HLT_CaloMET300_HBHECleaned);
   tree->SetBranchAddress("HLT_CaloMET350_HBHECleaned", &HLT_CaloMET350_HBHECleaned, &b_HLT_CaloMET350_HBHECleaned);
   tree->SetBranchAddress("HLT_PFMET200_NotCleaned", &HLT_PFMET200_NotCleaned, &b_HLT_PFMET200_NotCleaned);
   tree->SetBranchAddress("HLT_PFMET200_HBHECleaned", &HLT_PFMET200_HBHECleaned, &b_HLT_PFMET200_HBHECleaned);
   tree->SetBranchAddress("HLT_PFMET250_HBHECleaned", &HLT_PFMET250_HBHECleaned, &b_HLT_PFMET250_HBHECleaned);
   tree->SetBranchAddress("HLT_PFMET300_HBHECleaned", &HLT_PFMET300_HBHECleaned, &b_HLT_PFMET300_HBHECleaned);
   tree->SetBranchAddress("HLT_PFMET200_HBHE_BeamHaloCleaned", &HLT_PFMET200_HBHE_BeamHaloCleaned, &b_HLT_PFMET200_HBHE_BeamHaloCleaned);
   tree->SetBranchAddress("HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned", &HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned, &b_HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned);
   tree->SetBranchAddress("HLT_MET105_IsoTrk50", &HLT_MET105_IsoTrk50, &b_HLT_MET105_IsoTrk50);
   tree->SetBranchAddress("HLT_MET120_IsoTrk50", &HLT_MET120_IsoTrk50, &b_HLT_MET120_IsoTrk50);
   tree->SetBranchAddress("HLT_SingleJet30_Mu12_SinglePFJet40", &HLT_SingleJet30_Mu12_SinglePFJet40, &b_HLT_SingleJet30_Mu12_SinglePFJet40);
   tree->SetBranchAddress("HLT_Mu12_DoublePFJets40_CaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets40_CaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets40_CaloBTagDeepCSV_p71);
   tree->SetBranchAddress("HLT_Mu12_DoublePFJets100_CaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets100_CaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets100_CaloBTagDeepCSV_p71);
   tree->SetBranchAddress("HLT_Mu12_DoublePFJets200_CaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets200_CaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets200_CaloBTagDeepCSV_p71);
   tree->SetBranchAddress("HLT_Mu12_DoublePFJets350_CaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets350_CaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets350_CaloBTagDeepCSV_p71);
   tree->SetBranchAddress("HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagDeepCSV_p71);
   tree->SetBranchAddress("HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagDeepCSV_p71);
   tree->SetBranchAddress("HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, &b_HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagDeepCSV_p71);
   tree->SetBranchAddress("HLT_DoublePFJets40_CaloBTagDeepCSV_p71", &HLT_DoublePFJets40_CaloBTagDeepCSV_p71, &b_HLT_DoublePFJets40_CaloBTagDeepCSV_p71);
   tree->SetBranchAddress("HLT_DoublePFJets100_CaloBTagDeepCSV_p71", &HLT_DoublePFJets100_CaloBTagDeepCSV_p71, &b_HLT_DoublePFJets100_CaloBTagDeepCSV_p71);
   tree->SetBranchAddress("HLT_DoublePFJets200_CaloBTagDeepCSV_p71", &HLT_DoublePFJets200_CaloBTagDeepCSV_p71, &b_HLT_DoublePFJets200_CaloBTagDeepCSV_p71);
   tree->SetBranchAddress("HLT_DoublePFJets350_CaloBTagDeepCSV_p71", &HLT_DoublePFJets350_CaloBTagDeepCSV_p71, &b_HLT_DoublePFJets350_CaloBTagDeepCSV_p71);
   tree->SetBranchAddress("HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, &b_HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagDeepCSV_p71);
   tree->SetBranchAddress("HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71", &HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71, &b_HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagDeepCSV_p71);
   tree->SetBranchAddress("HLT_Photon300_NoHE", &HLT_Photon300_NoHE, &b_HLT_Photon300_NoHE);
   tree->SetBranchAddress("HLT_Mu8_TrkIsoVVL", &HLT_Mu8_TrkIsoVVL, &b_HLT_Mu8_TrkIsoVVL);
   tree->SetBranchAddress("HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ", &HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ, &b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ);
   tree->SetBranchAddress("HLT_Mu8_DiEle12_CaloIdL_TrackIdL", &HLT_Mu8_DiEle12_CaloIdL_TrackIdL, &b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL);
   tree->SetBranchAddress("HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ", &HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ, &b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ);
   tree->SetBranchAddress("HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350", &HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350, &b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350);
   tree->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ);
   tree->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30);
   tree->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30);
   tree->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_PFDiJet30_PFBtagDeepCSV_1p5);
   tree->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_CaloDiJet30_CaloBtagDeepCSV_1p5);
   tree->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL);
   tree->SetBranchAddress("HLT_Mu17_TrkIsoVVL", &HLT_Mu17_TrkIsoVVL, &b_HLT_Mu17_TrkIsoVVL);
   tree->SetBranchAddress("HLT_Mu19_TrkIsoVVL", &HLT_Mu19_TrkIsoVVL, &b_HLT_Mu19_TrkIsoVVL);
   tree->SetBranchAddress("HLT_BTagMu_AK4DiJet20_Mu5", &HLT_BTagMu_AK4DiJet20_Mu5, &b_HLT_BTagMu_AK4DiJet20_Mu5);
   tree->SetBranchAddress("HLT_BTagMu_AK4DiJet40_Mu5", &HLT_BTagMu_AK4DiJet40_Mu5, &b_HLT_BTagMu_AK4DiJet40_Mu5);
   tree->SetBranchAddress("HLT_BTagMu_AK4DiJet70_Mu5", &HLT_BTagMu_AK4DiJet70_Mu5, &b_HLT_BTagMu_AK4DiJet70_Mu5);
   tree->SetBranchAddress("HLT_BTagMu_AK4DiJet110_Mu5", &HLT_BTagMu_AK4DiJet110_Mu5, &b_HLT_BTagMu_AK4DiJet110_Mu5);
   tree->SetBranchAddress("HLT_BTagMu_AK4DiJet170_Mu5", &HLT_BTagMu_AK4DiJet170_Mu5, &b_HLT_BTagMu_AK4DiJet170_Mu5);
   tree->SetBranchAddress("HLT_BTagMu_AK4Jet300_Mu5", &HLT_BTagMu_AK4Jet300_Mu5, &b_HLT_BTagMu_AK4Jet300_Mu5);
   tree->SetBranchAddress("HLT_BTagMu_AK8DiJet170_Mu5", &HLT_BTagMu_AK8DiJet170_Mu5, &b_HLT_BTagMu_AK8DiJet170_Mu5);
   tree->SetBranchAddress("HLT_BTagMu_AK8Jet170_DoubleMu5", &HLT_BTagMu_AK8Jet170_DoubleMu5, &b_HLT_BTagMu_AK8Jet170_DoubleMu5);
   tree->SetBranchAddress("HLT_BTagMu_AK8Jet300_Mu5", &HLT_BTagMu_AK8Jet300_Mu5, &b_HLT_BTagMu_AK8Jet300_Mu5);
   tree->SetBranchAddress("HLT_BTagMu_AK4DiJet20_Mu5_noalgo", &HLT_BTagMu_AK4DiJet20_Mu5_noalgo, &b_HLT_BTagMu_AK4DiJet20_Mu5_noalgo);
   tree->SetBranchAddress("HLT_BTagMu_AK4DiJet40_Mu5_noalgo", &HLT_BTagMu_AK4DiJet40_Mu5_noalgo, &b_HLT_BTagMu_AK4DiJet40_Mu5_noalgo);
   tree->SetBranchAddress("HLT_BTagMu_AK4DiJet70_Mu5_noalgo", &HLT_BTagMu_AK4DiJet70_Mu5_noalgo, &b_HLT_BTagMu_AK4DiJet70_Mu5_noalgo);
   tree->SetBranchAddress("HLT_BTagMu_AK4DiJet110_Mu5_noalgo", &HLT_BTagMu_AK4DiJet110_Mu5_noalgo, &b_HLT_BTagMu_AK4DiJet110_Mu5_noalgo);
   tree->SetBranchAddress("HLT_BTagMu_AK4DiJet170_Mu5_noalgo", &HLT_BTagMu_AK4DiJet170_Mu5_noalgo, &b_HLT_BTagMu_AK4DiJet170_Mu5_noalgo);
   tree->SetBranchAddress("HLT_BTagMu_AK4Jet300_Mu5_noalgo", &HLT_BTagMu_AK4Jet300_Mu5_noalgo, &b_HLT_BTagMu_AK4Jet300_Mu5_noalgo);
   tree->SetBranchAddress("HLT_BTagMu_AK8DiJet170_Mu5_noalgo", &HLT_BTagMu_AK8DiJet170_Mu5_noalgo, &b_HLT_BTagMu_AK8DiJet170_Mu5_noalgo);
   tree->SetBranchAddress("HLT_BTagMu_AK8Jet170_DoubleMu5_noalgo", &HLT_BTagMu_AK8Jet170_DoubleMu5_noalgo, &b_HLT_BTagMu_AK8Jet170_DoubleMu5_noalgo);
   tree->SetBranchAddress("HLT_BTagMu_AK8Jet300_Mu5_noalgo", &HLT_BTagMu_AK8Jet300_Mu5_noalgo, &b_HLT_BTagMu_AK8Jet300_Mu5_noalgo);
   tree->SetBranchAddress("HLT_Ele15_Ele8_CaloIdL_TrackIdL_IsoVL", &HLT_Ele15_Ele8_CaloIdL_TrackIdL_IsoVL, &b_HLT_Ele15_Ele8_CaloIdL_TrackIdL_IsoVL);
   tree->SetBranchAddress("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ);
   tree->SetBranchAddress("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL", &HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL, &b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL);
   tree->SetBranchAddress("HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ);
   tree->SetBranchAddress("HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL", &HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL);
   tree->SetBranchAddress("HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL", &HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL);
   tree->SetBranchAddress("HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ);
   tree->SetBranchAddress("HLT_Mu12_DoublePhoton20", &HLT_Mu12_DoublePhoton20, &b_HLT_Mu12_DoublePhoton20);
   tree->SetBranchAddress("HLT_TriplePhoton_20_20_20_CaloIdLV2", &HLT_TriplePhoton_20_20_20_CaloIdLV2, &b_HLT_TriplePhoton_20_20_20_CaloIdLV2);
   tree->SetBranchAddress("HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL", &HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL, &b_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL);
   tree->SetBranchAddress("HLT_TriplePhoton_30_30_10_CaloIdLV2", &HLT_TriplePhoton_30_30_10_CaloIdLV2, &b_HLT_TriplePhoton_30_30_10_CaloIdLV2);
   tree->SetBranchAddress("HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL", &HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL, &b_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL);
   tree->SetBranchAddress("HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL", &HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL, &b_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL);
   tree->SetBranchAddress("HLT_Photon20", &HLT_Photon20, &b_HLT_Photon20);
   tree->SetBranchAddress("HLT_Photon33", &HLT_Photon33, &b_HLT_Photon33);
   tree->SetBranchAddress("HLT_Photon50", &HLT_Photon50, &b_HLT_Photon50);
   tree->SetBranchAddress("HLT_Photon75", &HLT_Photon75, &b_HLT_Photon75);
   tree->SetBranchAddress("HLT_Photon90", &HLT_Photon90, &b_HLT_Photon90);
   tree->SetBranchAddress("HLT_Photon120", &HLT_Photon120, &b_HLT_Photon120);
   tree->SetBranchAddress("HLT_Photon150", &HLT_Photon150, &b_HLT_Photon150);
   tree->SetBranchAddress("HLT_Photon175", &HLT_Photon175, &b_HLT_Photon175);
   tree->SetBranchAddress("HLT_Photon200", &HLT_Photon200, &b_HLT_Photon200);
   tree->SetBranchAddress("HLT_Photon100EB_TightID_TightIso", &HLT_Photon100EB_TightID_TightIso, &b_HLT_Photon100EB_TightID_TightIso);
   tree->SetBranchAddress("HLT_Photon110EB_TightID_TightIso", &HLT_Photon110EB_TightID_TightIso, &b_HLT_Photon110EB_TightID_TightIso);
   tree->SetBranchAddress("HLT_Photon120EB_TightID_TightIso", &HLT_Photon120EB_TightID_TightIso, &b_HLT_Photon120EB_TightID_TightIso);
   tree->SetBranchAddress("HLT_Photon100EBHE10", &HLT_Photon100EBHE10, &b_HLT_Photon100EBHE10);
   tree->SetBranchAddress("HLT_Photon100EEHE10", &HLT_Photon100EEHE10, &b_HLT_Photon100EEHE10);
   tree->SetBranchAddress("HLT_Photon100EE_TightID_TightIso", &HLT_Photon100EE_TightID_TightIso, &b_HLT_Photon100EE_TightID_TightIso);
   tree->SetBranchAddress("HLT_Photon50_R9Id90_HE10_IsoM", &HLT_Photon50_R9Id90_HE10_IsoM, &b_HLT_Photon50_R9Id90_HE10_IsoM);
   tree->SetBranchAddress("HLT_Photon75_R9Id90_HE10_IsoM", &HLT_Photon75_R9Id90_HE10_IsoM, &b_HLT_Photon75_R9Id90_HE10_IsoM);
   tree->SetBranchAddress("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3", &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3, &b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ300_PFJetsMJJ400DEta3);
   tree->SetBranchAddress("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3", &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3, &b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_CaloMJJ400_PFJetsMJJ600DEta3);
   tree->SetBranchAddress("HLT_Photon90_R9Id90_HE10_IsoM", &HLT_Photon90_R9Id90_HE10_IsoM, &b_HLT_Photon90_R9Id90_HE10_IsoM);
   tree->SetBranchAddress("HLT_Photon120_R9Id90_HE10_IsoM", &HLT_Photon120_R9Id90_HE10_IsoM, &b_HLT_Photon120_R9Id90_HE10_IsoM);
   tree->SetBranchAddress("HLT_Photon165_R9Id90_HE10_IsoM", &HLT_Photon165_R9Id90_HE10_IsoM, &b_HLT_Photon165_R9Id90_HE10_IsoM);
   tree->SetBranchAddress("HLT_Photon90_CaloIdL_PFHT700", &HLT_Photon90_CaloIdL_PFHT700, &b_HLT_Photon90_CaloIdL_PFHT700);
   tree->SetBranchAddress("HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90", &HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90, &b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90);
   tree->SetBranchAddress("HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95", &HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95, &b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95);
   tree->SetBranchAddress("HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55", &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55, &b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55);
   tree->SetBranchAddress("HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55", &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55, &b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55);
   tree->SetBranchAddress("HLT_Photon35_TwoProngs35", &HLT_Photon35_TwoProngs35, &b_HLT_Photon35_TwoProngs35);
   tree->SetBranchAddress("HLT_IsoMu24_TwoProngs35", &HLT_IsoMu24_TwoProngs35, &b_HLT_IsoMu24_TwoProngs35);
   tree->SetBranchAddress("HLT_Dimuon0_Jpsi_L1_NoOS", &HLT_Dimuon0_Jpsi_L1_NoOS, &b_HLT_Dimuon0_Jpsi_L1_NoOS);
   tree->SetBranchAddress("HLT_Dimuon0_Jpsi_NoVertexing_NoOS", &HLT_Dimuon0_Jpsi_NoVertexing_NoOS, &b_HLT_Dimuon0_Jpsi_NoVertexing_NoOS);
   tree->SetBranchAddress("HLT_Dimuon0_Jpsi", &HLT_Dimuon0_Jpsi, &b_HLT_Dimuon0_Jpsi);
   tree->SetBranchAddress("HLT_Dimuon0_Jpsi_NoVertexing", &HLT_Dimuon0_Jpsi_NoVertexing, &b_HLT_Dimuon0_Jpsi_NoVertexing);
   tree->SetBranchAddress("HLT_Dimuon0_Jpsi_L1_4R_0er1p5R", &HLT_Dimuon0_Jpsi_L1_4R_0er1p5R, &b_HLT_Dimuon0_Jpsi_L1_4R_0er1p5R);
   tree->SetBranchAddress("HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R", &HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R, &b_HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R);
   tree->SetBranchAddress("HLT_Dimuon0_Jpsi3p5_Muon2", &HLT_Dimuon0_Jpsi3p5_Muon2, &b_HLT_Dimuon0_Jpsi3p5_Muon2);
   tree->SetBranchAddress("HLT_Dimuon0_Upsilon_L1_4p5", &HLT_Dimuon0_Upsilon_L1_4p5, &b_HLT_Dimuon0_Upsilon_L1_4p5);
   tree->SetBranchAddress("HLT_Dimuon0_Upsilon_L1_5", &HLT_Dimuon0_Upsilon_L1_5, &b_HLT_Dimuon0_Upsilon_L1_5);
   tree->SetBranchAddress("HLT_Dimuon0_Upsilon_L1_4p5NoOS", &HLT_Dimuon0_Upsilon_L1_4p5NoOS, &b_HLT_Dimuon0_Upsilon_L1_4p5NoOS);
   tree->SetBranchAddress("HLT_Dimuon0_Upsilon_L1_4p5er2p0", &HLT_Dimuon0_Upsilon_L1_4p5er2p0, &b_HLT_Dimuon0_Upsilon_L1_4p5er2p0);
   tree->SetBranchAddress("HLT_Dimuon0_Upsilon_L1_4p5er2p0M", &HLT_Dimuon0_Upsilon_L1_4p5er2p0M, &b_HLT_Dimuon0_Upsilon_L1_4p5er2p0M);
   tree->SetBranchAddress("HLT_Dimuon0_Upsilon_NoVertexing", &HLT_Dimuon0_Upsilon_NoVertexing, &b_HLT_Dimuon0_Upsilon_NoVertexing);
   tree->SetBranchAddress("HLT_Dimuon0_Upsilon_L1_5M", &HLT_Dimuon0_Upsilon_L1_5M, &b_HLT_Dimuon0_Upsilon_L1_5M);
   tree->SetBranchAddress("HLT_Dimuon0_LowMass_L1_0er1p5R", &HLT_Dimuon0_LowMass_L1_0er1p5R, &b_HLT_Dimuon0_LowMass_L1_0er1p5R);
   tree->SetBranchAddress("HLT_Dimuon0_LowMass_L1_0er1p5", &HLT_Dimuon0_LowMass_L1_0er1p5, &b_HLT_Dimuon0_LowMass_L1_0er1p5);
   tree->SetBranchAddress("HLT_Dimuon0_LowMass", &HLT_Dimuon0_LowMass, &b_HLT_Dimuon0_LowMass);
   tree->SetBranchAddress("HLT_Dimuon0_LowMass_L1_4", &HLT_Dimuon0_LowMass_L1_4, &b_HLT_Dimuon0_LowMass_L1_4);
   tree->SetBranchAddress("HLT_Dimuon0_LowMass_L1_4R", &HLT_Dimuon0_LowMass_L1_4R, &b_HLT_Dimuon0_LowMass_L1_4R);
   tree->SetBranchAddress("HLT_Dimuon0_LowMass_L1_TM530", &HLT_Dimuon0_LowMass_L1_TM530, &b_HLT_Dimuon0_LowMass_L1_TM530);
   tree->SetBranchAddress("HLT_Dimuon0_Upsilon_Muon_L1_TM0", &HLT_Dimuon0_Upsilon_Muon_L1_TM0, &b_HLT_Dimuon0_Upsilon_Muon_L1_TM0);
   tree->SetBranchAddress("HLT_Dimuon0_Upsilon_Muon_NoL1Mass", &HLT_Dimuon0_Upsilon_Muon_NoL1Mass, &b_HLT_Dimuon0_Upsilon_Muon_NoL1Mass);
   tree->SetBranchAddress("HLT_TripleMu_5_3_3_Mass3p8_DZ", &HLT_TripleMu_5_3_3_Mass3p8_DZ, &b_HLT_TripleMu_5_3_3_Mass3p8_DZ);
   tree->SetBranchAddress("HLT_TripleMu_10_5_5_DZ", &HLT_TripleMu_10_5_5_DZ, &b_HLT_TripleMu_10_5_5_DZ);
   tree->SetBranchAddress("HLT_TripleMu_12_10_5", &HLT_TripleMu_12_10_5, &b_HLT_TripleMu_12_10_5);
   tree->SetBranchAddress("HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15", &HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15, &b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15);
   tree->SetBranchAddress("HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1", &HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1, &b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1);
   tree->SetBranchAddress("HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15", &HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15, &b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15);
   tree->SetBranchAddress("HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1", &HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1, &b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1);
   tree->SetBranchAddress("HLT_DoubleMu3_DZ_PFMET50_PFMHT60", &HLT_DoubleMu3_DZ_PFMET50_PFMHT60, &b_HLT_DoubleMu3_DZ_PFMET50_PFMHT60);
   tree->SetBranchAddress("HLT_DoubleMu3_DZ_PFMET70_PFMHT70", &HLT_DoubleMu3_DZ_PFMET70_PFMHT70, &b_HLT_DoubleMu3_DZ_PFMET70_PFMHT70);
   tree->SetBranchAddress("HLT_DoubleMu3_DZ_PFMET90_PFMHT90", &HLT_DoubleMu3_DZ_PFMET90_PFMHT90, &b_HLT_DoubleMu3_DZ_PFMET90_PFMHT90);
   tree->SetBranchAddress("HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass", &HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass, &b_HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass);
   tree->SetBranchAddress("HLT_DoubleMu4_Jpsi_Displaced", &HLT_DoubleMu4_Jpsi_Displaced, &b_HLT_DoubleMu4_Jpsi_Displaced);
   tree->SetBranchAddress("HLT_DoubleMu4_Jpsi_NoVertexing", &HLT_DoubleMu4_Jpsi_NoVertexing, &b_HLT_DoubleMu4_Jpsi_NoVertexing);
   tree->SetBranchAddress("HLT_DoubleMu4_JpsiTrkTrk_Displaced", &HLT_DoubleMu4_JpsiTrkTrk_Displaced, &b_HLT_DoubleMu4_JpsiTrkTrk_Displaced);
   tree->SetBranchAddress("HLT_DoubleMu43NoFiltersNoVtx", &HLT_DoubleMu43NoFiltersNoVtx, &b_HLT_DoubleMu43NoFiltersNoVtx);
   tree->SetBranchAddress("HLT_DoubleMu48NoFiltersNoVtx", &HLT_DoubleMu48NoFiltersNoVtx, &b_HLT_DoubleMu48NoFiltersNoVtx);
   tree->SetBranchAddress("HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL", &HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL, &b_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL);
   tree->SetBranchAddress("HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL", &HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL, &b_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL);
   tree->SetBranchAddress("HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL", &HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL, &b_HLT_Mu38NoFiltersNoVtxDisplaced_Photon38_CaloIdL);
   tree->SetBranchAddress("HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL", &HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL, &b_HLT_Mu43NoFiltersNoVtxDisplaced_Photon43_CaloIdL);
   tree->SetBranchAddress("HLT_DoubleMu33NoFiltersNoVtxDisplaced", &HLT_DoubleMu33NoFiltersNoVtxDisplaced, &b_HLT_DoubleMu33NoFiltersNoVtxDisplaced);
   tree->SetBranchAddress("HLT_DoubleMu40NoFiltersNoVtxDisplaced", &HLT_DoubleMu40NoFiltersNoVtxDisplaced, &b_HLT_DoubleMu40NoFiltersNoVtxDisplaced);
   tree->SetBranchAddress("HLT_DoubleMu20_7_Mass0to30_L1_DM4", &HLT_DoubleMu20_7_Mass0to30_L1_DM4, &b_HLT_DoubleMu20_7_Mass0to30_L1_DM4);
   tree->SetBranchAddress("HLT_DoubleMu20_7_Mass0to30_L1_DM4EG", &HLT_DoubleMu20_7_Mass0to30_L1_DM4EG, &b_HLT_DoubleMu20_7_Mass0to30_L1_DM4EG);
   tree->SetBranchAddress("HLT_HT425", &HLT_HT425, &b_HLT_HT425);
   tree->SetBranchAddress("HLT_HT430_DisplacedDijet40_DisplacedTrack", &HLT_HT430_DisplacedDijet40_DisplacedTrack, &b_HLT_HT430_DisplacedDijet40_DisplacedTrack);
   tree->SetBranchAddress("HLT_HT500_DisplacedDijet40_DisplacedTrack", &HLT_HT500_DisplacedDijet40_DisplacedTrack, &b_HLT_HT500_DisplacedDijet40_DisplacedTrack);
   tree->SetBranchAddress("HLT_HT430_DisplacedDijet60_DisplacedTrack", &HLT_HT430_DisplacedDijet60_DisplacedTrack, &b_HLT_HT430_DisplacedDijet60_DisplacedTrack);
   tree->SetBranchAddress("HLT_HT400_DisplacedDijet40_DisplacedTrack", &HLT_HT400_DisplacedDijet40_DisplacedTrack, &b_HLT_HT400_DisplacedDijet40_DisplacedTrack);
   tree->SetBranchAddress("HLT_HT650_DisplacedDijet60_Inclusive", &HLT_HT650_DisplacedDijet60_Inclusive, &b_HLT_HT650_DisplacedDijet60_Inclusive);
   tree->SetBranchAddress("HLT_HT550_DisplacedDijet60_Inclusive", &HLT_HT550_DisplacedDijet60_Inclusive, &b_HLT_HT550_DisplacedDijet60_Inclusive);
   tree->SetBranchAddress("HLT_DiJet110_35_Mjj650_PFMET110", &HLT_DiJet110_35_Mjj650_PFMET110, &b_HLT_DiJet110_35_Mjj650_PFMET110);
   tree->SetBranchAddress("HLT_DiJet110_35_Mjj650_PFMET120", &HLT_DiJet110_35_Mjj650_PFMET120, &b_HLT_DiJet110_35_Mjj650_PFMET120);
   tree->SetBranchAddress("HLT_DiJet110_35_Mjj650_PFMET130", &HLT_DiJet110_35_Mjj650_PFMET130, &b_HLT_DiJet110_35_Mjj650_PFMET130);
   tree->SetBranchAddress("HLT_TripleJet110_35_35_Mjj650_PFMET110", &HLT_TripleJet110_35_35_Mjj650_PFMET110, &b_HLT_TripleJet110_35_35_Mjj650_PFMET110);
   tree->SetBranchAddress("HLT_TripleJet110_35_35_Mjj650_PFMET120", &HLT_TripleJet110_35_35_Mjj650_PFMET120, &b_HLT_TripleJet110_35_35_Mjj650_PFMET120);
   tree->SetBranchAddress("HLT_TripleJet110_35_35_Mjj650_PFMET130", &HLT_TripleJet110_35_35_Mjj650_PFMET130, &b_HLT_TripleJet110_35_35_Mjj650_PFMET130);
   tree->SetBranchAddress("HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned", &HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned, &b_HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned);
   tree->SetBranchAddress("HLT_Ele28_eta2p1_WPTight_Gsf_HT150", &HLT_Ele28_eta2p1_WPTight_Gsf_HT150, &b_HLT_Ele28_eta2p1_WPTight_Gsf_HT150);
   tree->SetBranchAddress("HLT_Ele28_HighEta_SC20_Mass55", &HLT_Ele28_HighEta_SC20_Mass55, &b_HLT_Ele28_HighEta_SC20_Mass55);
   tree->SetBranchAddress("HLT_DoubleMu20_7_Mass0to30_Photon23", &HLT_DoubleMu20_7_Mass0to30_Photon23, &b_HLT_DoubleMu20_7_Mass0to30_Photon23);
   tree->SetBranchAddress("HLT_Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5", &HLT_Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5, &b_HLT_Ele15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5);
   tree->SetBranchAddress("HLT_Ele15_IsoVVVL_PFHT450_PFMET50", &HLT_Ele15_IsoVVVL_PFHT450_PFMET50, &b_HLT_Ele15_IsoVVVL_PFHT450_PFMET50);
   tree->SetBranchAddress("HLT_Ele15_IsoVVVL_PFHT450", &HLT_Ele15_IsoVVVL_PFHT450, &b_HLT_Ele15_IsoVVVL_PFHT450);
   tree->SetBranchAddress("HLT_Ele50_IsoVVVL_PFHT450", &HLT_Ele50_IsoVVVL_PFHT450, &b_HLT_Ele50_IsoVVVL_PFHT450);
   tree->SetBranchAddress("HLT_Ele15_IsoVVVL_PFHT600", &HLT_Ele15_IsoVVVL_PFHT600, &b_HLT_Ele15_IsoVVVL_PFHT600);
   tree->SetBranchAddress("HLT_Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60", &HLT_Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60, &b_HLT_Mu4_TrkIsoVVL_DiPFJet90_40_DEta3p5_MJJ750_HTT300_PFMETNoMu60);
   tree->SetBranchAddress("HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60", &HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60, &b_HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60);
   tree->SetBranchAddress("HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60", &HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60, &b_HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60);
   tree->SetBranchAddress("HLT_Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5", &HLT_Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5, &b_HLT_Mu15_IsoVVVL_PFHT450_CaloBTagDeepCSV_4p5);
   tree->SetBranchAddress("HLT_Mu15_IsoVVVL_PFHT450_PFMET50", &HLT_Mu15_IsoVVVL_PFHT450_PFMET50, &b_HLT_Mu15_IsoVVVL_PFHT450_PFMET50);
   tree->SetBranchAddress("HLT_Mu15_IsoVVVL_PFHT450", &HLT_Mu15_IsoVVVL_PFHT450, &b_HLT_Mu15_IsoVVVL_PFHT450);
   tree->SetBranchAddress("HLT_Mu50_IsoVVVL_PFHT450", &HLT_Mu50_IsoVVVL_PFHT450, &b_HLT_Mu50_IsoVVVL_PFHT450);
   tree->SetBranchAddress("HLT_Mu15_IsoVVVL_PFHT600", &HLT_Mu15_IsoVVVL_PFHT600, &b_HLT_Mu15_IsoVVVL_PFHT600);
   tree->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMET70_PFMHT70_IDTight);
   tree->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMET80_PFMHT80_IDTight);
   tree->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMET90_PFMHT90_IDTight);
   tree->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMET100_PFMHT100_IDTight);
   tree->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu70_PFMHTNoMu70_IDTight);
   tree->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu80_PFMHTNoMu80_IDTight);
   tree->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu90_PFMHTNoMu90_IDTight);
   tree->SetBranchAddress("HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight", &HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight, &b_HLT_Mu3er1p5_PFJet100er2p5_PFMETNoMu100_PFMHTNoMu100_IDTight);
   tree->SetBranchAddress("HLT_Dimuon10_PsiPrime_Barrel_Seagulls", &HLT_Dimuon10_PsiPrime_Barrel_Seagulls, &b_HLT_Dimuon10_PsiPrime_Barrel_Seagulls);
   tree->SetBranchAddress("HLT_Dimuon20_Jpsi_Barrel_Seagulls", &HLT_Dimuon20_Jpsi_Barrel_Seagulls, &b_HLT_Dimuon20_Jpsi_Barrel_Seagulls);
   tree->SetBranchAddress("HLT_Dimuon12_Upsilon_y1p4", &HLT_Dimuon12_Upsilon_y1p4, &b_HLT_Dimuon12_Upsilon_y1p4);
   tree->SetBranchAddress("HLT_Dimuon14_Phi_Barrel_Seagulls", &HLT_Dimuon14_Phi_Barrel_Seagulls, &b_HLT_Dimuon14_Phi_Barrel_Seagulls);
   tree->SetBranchAddress("HLT_Dimuon18_PsiPrime", &HLT_Dimuon18_PsiPrime, &b_HLT_Dimuon18_PsiPrime);
   tree->SetBranchAddress("HLT_Dimuon25_Jpsi", &HLT_Dimuon25_Jpsi, &b_HLT_Dimuon25_Jpsi);
   tree->SetBranchAddress("HLT_Dimuon18_PsiPrime_noCorrL1", &HLT_Dimuon18_PsiPrime_noCorrL1, &b_HLT_Dimuon18_PsiPrime_noCorrL1);
   tree->SetBranchAddress("HLT_Dimuon24_Upsilon_noCorrL1", &HLT_Dimuon24_Upsilon_noCorrL1, &b_HLT_Dimuon24_Upsilon_noCorrL1);
   tree->SetBranchAddress("HLT_Dimuon24_Phi_noCorrL1", &HLT_Dimuon24_Phi_noCorrL1, &b_HLT_Dimuon24_Phi_noCorrL1);
   tree->SetBranchAddress("HLT_Dimuon25_Jpsi_noCorrL1", &HLT_Dimuon25_Jpsi_noCorrL1, &b_HLT_Dimuon25_Jpsi_noCorrL1);
   tree->SetBranchAddress("HLT_DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8", &HLT_DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8, &b_HLT_DiMu4_Ele9_CaloIdL_TrackIdL_DZ_Mass3p8);
   tree->SetBranchAddress("HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ", &HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ, &b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ);
   tree->SetBranchAddress("HLT_DiMu9_Ele9_CaloIdL_TrackIdL", &HLT_DiMu9_Ele9_CaloIdL_TrackIdL, &b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL);
   tree->SetBranchAddress("HLT_DoubleIsoMu20_eta2p1", &HLT_DoubleIsoMu20_eta2p1, &b_HLT_DoubleIsoMu20_eta2p1);
   tree->SetBranchAddress("HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx", &HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx, &b_HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx);
   tree->SetBranchAddress("HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx", &HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx, &b_HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx);
   tree->SetBranchAddress("HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx", &HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx, &b_HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx);
   tree->SetBranchAddress("HLT_Mu8", &HLT_Mu8, &b_HLT_Mu8);
   tree->SetBranchAddress("HLT_Mu17", &HLT_Mu17, &b_HLT_Mu17);
   tree->SetBranchAddress("HLT_Mu19", &HLT_Mu19, &b_HLT_Mu19);
   tree->SetBranchAddress("HLT_Mu17_Photon30_IsoCaloId", &HLT_Mu17_Photon30_IsoCaloId, &b_HLT_Mu17_Photon30_IsoCaloId);
   tree->SetBranchAddress("HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30", &HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30, &b_HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30);
   tree->SetBranchAddress("HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30", &HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30, &b_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30);
   tree->SetBranchAddress("HLT_Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30", &HLT_Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30, &b_HLT_Ele15_CaloIdL_TrackIdL_IsoVL_PFJet30);
   tree->SetBranchAddress("HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30", &HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30, &b_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30);
   tree->SetBranchAddress("HLT_Ele8_CaloIdM_TrackIdM_PFJet30", &HLT_Ele8_CaloIdM_TrackIdM_PFJet30, &b_HLT_Ele8_CaloIdM_TrackIdM_PFJet30);
   tree->SetBranchAddress("HLT_Ele17_CaloIdM_TrackIdM_PFJet30", &HLT_Ele17_CaloIdM_TrackIdM_PFJet30, &b_HLT_Ele17_CaloIdM_TrackIdM_PFJet30);
   tree->SetBranchAddress("HLT_Ele23_CaloIdM_TrackIdM_PFJet30", &HLT_Ele23_CaloIdM_TrackIdM_PFJet30, &b_HLT_Ele23_CaloIdM_TrackIdM_PFJet30);
   tree->SetBranchAddress("HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165", &HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165, &b_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165);
   tree->SetBranchAddress("HLT_Ele115_CaloIdVT_GsfTrkIdT", &HLT_Ele115_CaloIdVT_GsfTrkIdT, &b_HLT_Ele115_CaloIdVT_GsfTrkIdT);
   tree->SetBranchAddress("HLT_Ele135_CaloIdVT_GsfTrkIdT", &HLT_Ele135_CaloIdVT_GsfTrkIdT, &b_HLT_Ele135_CaloIdVT_GsfTrkIdT);
   tree->SetBranchAddress("HLT_Ele145_CaloIdVT_GsfTrkIdT", &HLT_Ele145_CaloIdVT_GsfTrkIdT, &b_HLT_Ele145_CaloIdVT_GsfTrkIdT);
   tree->SetBranchAddress("HLT_Ele200_CaloIdVT_GsfTrkIdT", &HLT_Ele200_CaloIdVT_GsfTrkIdT, &b_HLT_Ele200_CaloIdVT_GsfTrkIdT);
   tree->SetBranchAddress("HLT_Ele250_CaloIdVT_GsfTrkIdT", &HLT_Ele250_CaloIdVT_GsfTrkIdT, &b_HLT_Ele250_CaloIdVT_GsfTrkIdT);
   tree->SetBranchAddress("HLT_Ele300_CaloIdVT_GsfTrkIdT", &HLT_Ele300_CaloIdVT_GsfTrkIdT, &b_HLT_Ele300_CaloIdVT_GsfTrkIdT);
   tree->SetBranchAddress("HLT_PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5", &HLT_PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5, &b_HLT_PFHT330PT30_QuadPFJet_75_60_45_40_TriplePFBTagDeepCSV_4p5);
   tree->SetBranchAddress("HLT_PFHT330PT30_QuadPFJet_75_60_45_40", &HLT_PFHT330PT30_QuadPFJet_75_60_45_40, &b_HLT_PFHT330PT30_QuadPFJet_75_60_45_40);
   tree->SetBranchAddress("HLT_PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94", &HLT_PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94, &b_HLT_PFHT400_SixPFJet32_DoublePFBTagDeepCSV_2p94);
   tree->SetBranchAddress("HLT_PFHT400_SixPFJet32", &HLT_PFHT400_SixPFJet32, &b_HLT_PFHT400_SixPFJet32);
   tree->SetBranchAddress("HLT_PFHT450_SixPFJet36_PFBTagDeepCSV_1p59", &HLT_PFHT450_SixPFJet36_PFBTagDeepCSV_1p59, &b_HLT_PFHT450_SixPFJet36_PFBTagDeepCSV_1p59);
   tree->SetBranchAddress("HLT_PFHT450_SixPFJet36", &HLT_PFHT450_SixPFJet36, &b_HLT_PFHT450_SixPFJet36);
   tree->SetBranchAddress("HLT_PFHT350", &HLT_PFHT350, &b_HLT_PFHT350);
   tree->SetBranchAddress("HLT_PFHT350MinPFJet15", &HLT_PFHT350MinPFJet15, &b_HLT_PFHT350MinPFJet15);
   tree->SetBranchAddress("HLT_Photon60_R9Id90_CaloIdL_IsoL", &HLT_Photon60_R9Id90_CaloIdL_IsoL, &b_HLT_Photon60_R9Id90_CaloIdL_IsoL);
   tree->SetBranchAddress("HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL", &HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL, &b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL);
   tree->SetBranchAddress("HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15", &HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15, &b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15);
   tree->SetBranchAddress("HLT_ECALHT800", &HLT_ECALHT800, &b_HLT_ECALHT800);
   tree->SetBranchAddress("HLT_DiSC30_18_EIso_AND_HE_Mass70", &HLT_DiSC30_18_EIso_AND_HE_Mass70, &b_HLT_DiSC30_18_EIso_AND_HE_Mass70);
   tree->SetBranchAddress("HLT_Physics", &HLT_Physics, &b_HLT_Physics);
   tree->SetBranchAddress("HLT_Physics_part0", &HLT_Physics_part0, &b_HLT_Physics_part0);
   tree->SetBranchAddress("HLT_Physics_part1", &HLT_Physics_part1, &b_HLT_Physics_part1);
   tree->SetBranchAddress("HLT_Physics_part2", &HLT_Physics_part2, &b_HLT_Physics_part2);
   tree->SetBranchAddress("HLT_Physics_part3", &HLT_Physics_part3, &b_HLT_Physics_part3);
   tree->SetBranchAddress("HLT_Physics_part4", &HLT_Physics_part4, &b_HLT_Physics_part4);
   tree->SetBranchAddress("HLT_Physics_part5", &HLT_Physics_part5, &b_HLT_Physics_part5);
   tree->SetBranchAddress("HLT_Physics_part6", &HLT_Physics_part6, &b_HLT_Physics_part6);
   tree->SetBranchAddress("HLT_Physics_part7", &HLT_Physics_part7, &b_HLT_Physics_part7);
   tree->SetBranchAddress("HLT_Random", &HLT_Random, &b_HLT_Random);
   tree->SetBranchAddress("HLT_ZeroBias", &HLT_ZeroBias, &b_HLT_ZeroBias);
   tree->SetBranchAddress("HLT_ZeroBias_Alignment", &HLT_ZeroBias_Alignment, &b_HLT_ZeroBias_Alignment);
   tree->SetBranchAddress("HLT_ZeroBias_part0", &HLT_ZeroBias_part0, &b_HLT_ZeroBias_part0);
   tree->SetBranchAddress("HLT_ZeroBias_part1", &HLT_ZeroBias_part1, &b_HLT_ZeroBias_part1);
   tree->SetBranchAddress("HLT_ZeroBias_part2", &HLT_ZeroBias_part2, &b_HLT_ZeroBias_part2);
   tree->SetBranchAddress("HLT_ZeroBias_part3", &HLT_ZeroBias_part3, &b_HLT_ZeroBias_part3);
   tree->SetBranchAddress("HLT_ZeroBias_part4", &HLT_ZeroBias_part4, &b_HLT_ZeroBias_part4);
   tree->SetBranchAddress("HLT_ZeroBias_part5", &HLT_ZeroBias_part5, &b_HLT_ZeroBias_part5);
   tree->SetBranchAddress("HLT_ZeroBias_part6", &HLT_ZeroBias_part6, &b_HLT_ZeroBias_part6);
   tree->SetBranchAddress("HLT_ZeroBias_part7", &HLT_ZeroBias_part7, &b_HLT_ZeroBias_part7);
   tree->SetBranchAddress("HLT_AK4CaloJet30", &HLT_AK4CaloJet30, &b_HLT_AK4CaloJet30);
   tree->SetBranchAddress("HLT_AK4CaloJet40", &HLT_AK4CaloJet40, &b_HLT_AK4CaloJet40);
   tree->SetBranchAddress("HLT_AK4CaloJet50", &HLT_AK4CaloJet50, &b_HLT_AK4CaloJet50);
   tree->SetBranchAddress("HLT_AK4CaloJet80", &HLT_AK4CaloJet80, &b_HLT_AK4CaloJet80);
   tree->SetBranchAddress("HLT_AK4CaloJet100", &HLT_AK4CaloJet100, &b_HLT_AK4CaloJet100);
   tree->SetBranchAddress("HLT_AK4CaloJet120", &HLT_AK4CaloJet120, &b_HLT_AK4CaloJet120);
   tree->SetBranchAddress("HLT_AK4PFJet30", &HLT_AK4PFJet30, &b_HLT_AK4PFJet30);
   tree->SetBranchAddress("HLT_AK4PFJet50", &HLT_AK4PFJet50, &b_HLT_AK4PFJet50);
   tree->SetBranchAddress("HLT_AK4PFJet80", &HLT_AK4PFJet80, &b_HLT_AK4PFJet80);
   tree->SetBranchAddress("HLT_AK4PFJet100", &HLT_AK4PFJet100, &b_HLT_AK4PFJet100);
   tree->SetBranchAddress("HLT_AK4PFJet120", &HLT_AK4PFJet120, &b_HLT_AK4PFJet120);
   tree->SetBranchAddress("HLT_SinglePhoton10_Eta3p1ForPPRef", &HLT_SinglePhoton10_Eta3p1ForPPRef, &b_HLT_SinglePhoton10_Eta3p1ForPPRef);
   tree->SetBranchAddress("HLT_SinglePhoton20_Eta3p1ForPPRef", &HLT_SinglePhoton20_Eta3p1ForPPRef, &b_HLT_SinglePhoton20_Eta3p1ForPPRef);
   tree->SetBranchAddress("HLT_SinglePhoton30_Eta3p1ForPPRef", &HLT_SinglePhoton30_Eta3p1ForPPRef, &b_HLT_SinglePhoton30_Eta3p1ForPPRef);
   tree->SetBranchAddress("HLT_Photon20_HoverELoose", &HLT_Photon20_HoverELoose, &b_HLT_Photon20_HoverELoose);
   tree->SetBranchAddress("HLT_Photon30_HoverELoose", &HLT_Photon30_HoverELoose, &b_HLT_Photon30_HoverELoose);
   tree->SetBranchAddress("HLT_EcalCalibration", &HLT_EcalCalibration, &b_HLT_EcalCalibration);
   tree->SetBranchAddress("HLT_HcalCalibration", &HLT_HcalCalibration, &b_HLT_HcalCalibration);
   tree->SetBranchAddress("HLT_L1UnpairedBunchBptxMinus", &HLT_L1UnpairedBunchBptxMinus, &b_HLT_L1UnpairedBunchBptxMinus);
   tree->SetBranchAddress("HLT_L1UnpairedBunchBptxPlus", &HLT_L1UnpairedBunchBptxPlus, &b_HLT_L1UnpairedBunchBptxPlus);
   tree->SetBranchAddress("HLT_L1NotBptxOR", &HLT_L1NotBptxOR, &b_HLT_L1NotBptxOR);
   tree->SetBranchAddress("HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142", &HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142, &b_HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142);
   tree->SetBranchAddress("HLT_CDC_L2cosmic_5_er1p0", &HLT_CDC_L2cosmic_5_er1p0, &b_HLT_CDC_L2cosmic_5_er1p0);
   tree->SetBranchAddress("HLT_CDC_L2cosmic_5p5_er1p0", &HLT_CDC_L2cosmic_5p5_er1p0, &b_HLT_CDC_L2cosmic_5p5_er1p0);
   tree->SetBranchAddress("HLT_HcalNZS", &HLT_HcalNZS, &b_HLT_HcalNZS);
   tree->SetBranchAddress("HLT_HcalPhiSym", &HLT_HcalPhiSym, &b_HLT_HcalPhiSym);
   tree->SetBranchAddress("HLT_HcalIsolatedbunch", &HLT_HcalIsolatedbunch, &b_HLT_HcalIsolatedbunch);
   tree->SetBranchAddress("HLT_IsoTrackHB", &HLT_IsoTrackHB, &b_HLT_IsoTrackHB);
   tree->SetBranchAddress("HLT_IsoTrackHE", &HLT_IsoTrackHE, &b_HLT_IsoTrackHE);
   tree->SetBranchAddress("HLT_ZeroBias_FirstCollisionAfterAbortGap", &HLT_ZeroBias_FirstCollisionAfterAbortGap, &b_HLT_ZeroBias_FirstCollisionAfterAbortGap);
   tree->SetBranchAddress("HLT_ZeroBias_IsolatedBunches", &HLT_ZeroBias_IsolatedBunches, &b_HLT_ZeroBias_IsolatedBunches);
   tree->SetBranchAddress("HLT_ZeroBias_FirstCollisionInTrain", &HLT_ZeroBias_FirstCollisionInTrain, &b_HLT_ZeroBias_FirstCollisionInTrain);
   tree->SetBranchAddress("HLT_ZeroBias_LastCollisionInTrain", &HLT_ZeroBias_LastCollisionInTrain, &b_HLT_ZeroBias_LastCollisionInTrain);
   tree->SetBranchAddress("HLT_ZeroBias_FirstBXAfterTrain", &HLT_ZeroBias_FirstBXAfterTrain, &b_HLT_ZeroBias_FirstBXAfterTrain);
   tree->SetBranchAddress("HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr", &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr, &b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr);
   tree->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90);
   tree->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100);
   tree->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110);
   tree->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120);
   tree->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130);
   tree->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET140);
   tree->SetBranchAddress("HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr", &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr, &b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr);
   tree->SetBranchAddress("HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr", &HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr, &b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr);
   tree->SetBranchAddress("HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1", &HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1, &b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1);
   tree->SetBranchAddress("HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1", &HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1, &b_HLT_MediumChargedIsoPFTau200HighPtRelaxedIso_Trk50_eta2p1);
   tree->SetBranchAddress("HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1", &HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1, &b_HLT_MediumChargedIsoPFTau220HighPtRelaxedIso_Trk50_eta2p1);
   tree->SetBranchAddress("HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL", &HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL, &b_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL);
   tree->SetBranchAddress("HLT_Rsq0p35", &HLT_Rsq0p35, &b_HLT_Rsq0p35);
   tree->SetBranchAddress("HLT_Rsq0p40", &HLT_Rsq0p40, &b_HLT_Rsq0p40);
   tree->SetBranchAddress("HLT_RsqMR300_Rsq0p09_MR200", &HLT_RsqMR300_Rsq0p09_MR200, &b_HLT_RsqMR300_Rsq0p09_MR200);
   tree->SetBranchAddress("HLT_RsqMR320_Rsq0p09_MR200", &HLT_RsqMR320_Rsq0p09_MR200, &b_HLT_RsqMR320_Rsq0p09_MR200);
   tree->SetBranchAddress("HLT_RsqMR300_Rsq0p09_MR200_4jet", &HLT_RsqMR300_Rsq0p09_MR200_4jet, &b_HLT_RsqMR300_Rsq0p09_MR200_4jet);
   tree->SetBranchAddress("HLT_RsqMR320_Rsq0p09_MR200_4jet", &HLT_RsqMR320_Rsq0p09_MR200_4jet, &b_HLT_RsqMR320_Rsq0p09_MR200_4jet);
   tree->SetBranchAddress("HLT_IsoMu27_MET90", &HLT_IsoMu27_MET90, &b_HLT_IsoMu27_MET90);
   tree->SetBranchAddress("HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg", &HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg, &b_HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_eta2p1_Reg);
   tree->SetBranchAddress("HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg", &HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg, &b_HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg);
   tree->SetBranchAddress("HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg", &HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg, &b_HLT_DoubleMediumChargedIsoPFTauHPS35_Trk1_eta2p1_Reg);
   tree->SetBranchAddress("HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg", &HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg, &b_HLT_DoubleTightChargedIsoPFTauHPS35_Trk1_TightID_eta2p1_Reg);
   tree->SetBranchAddress("HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg", &HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg, &b_HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_eta2p1_Reg);
   tree->SetBranchAddress("HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg", &HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg, &b_HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_eta2p1_Reg);
   tree->SetBranchAddress("HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg", &HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg, &b_HLT_DoubleMediumChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg);
   tree->SetBranchAddress("HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg", &HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg, &b_HLT_DoubleTightChargedIsoPFTauHPS40_Trk1_TightID_eta2p1_Reg);
   tree->SetBranchAddress("HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1", &HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1, &b_HLT_VBF_DoubleLooseChargedIsoPFTauHPS20_Trk1_eta2p1);
   tree->SetBranchAddress("HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1", &HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1, &b_HLT_VBF_DoubleMediumChargedIsoPFTauHPS20_Trk1_eta2p1);
   tree->SetBranchAddress("HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1", &HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1, &b_HLT_VBF_DoubleTightChargedIsoPFTauHPS20_Trk1_eta2p1);
   tree->SetBranchAddress("HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50", &HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50, &b_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50);
   tree->SetBranchAddress("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3", &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3, &b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3);
   tree->SetBranchAddress("HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3", &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3, &b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3);
   tree->SetBranchAddress("HLT_PFMET100_PFMHT100_IDTight_PFHT60", &HLT_PFMET100_PFMHT100_IDTight_PFHT60, &b_HLT_PFMET100_PFMHT100_IDTight_PFHT60);
   tree->SetBranchAddress("HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60", &HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60, &b_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60);
   tree->SetBranchAddress("HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60", &HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60, &b_HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60);
   tree->SetBranchAddress("HLT_Mu18_Mu9_SameSign", &HLT_Mu18_Mu9_SameSign, &b_HLT_Mu18_Mu9_SameSign);
   tree->SetBranchAddress("HLT_Mu18_Mu9_SameSign_DZ", &HLT_Mu18_Mu9_SameSign_DZ, &b_HLT_Mu18_Mu9_SameSign_DZ);
   tree->SetBranchAddress("HLT_Mu18_Mu9", &HLT_Mu18_Mu9, &b_HLT_Mu18_Mu9);
   tree->SetBranchAddress("HLT_Mu18_Mu9_DZ", &HLT_Mu18_Mu9_DZ, &b_HLT_Mu18_Mu9_DZ);
   tree->SetBranchAddress("HLT_Mu20_Mu10_SameSign", &HLT_Mu20_Mu10_SameSign, &b_HLT_Mu20_Mu10_SameSign);
   tree->SetBranchAddress("HLT_Mu20_Mu10_SameSign_DZ", &HLT_Mu20_Mu10_SameSign_DZ, &b_HLT_Mu20_Mu10_SameSign_DZ);
   tree->SetBranchAddress("HLT_Mu20_Mu10", &HLT_Mu20_Mu10, &b_HLT_Mu20_Mu10);
   tree->SetBranchAddress("HLT_Mu20_Mu10_DZ", &HLT_Mu20_Mu10_DZ, &b_HLT_Mu20_Mu10_DZ);
   tree->SetBranchAddress("HLT_Mu23_Mu12_SameSign", &HLT_Mu23_Mu12_SameSign, &b_HLT_Mu23_Mu12_SameSign);
   tree->SetBranchAddress("HLT_Mu23_Mu12_SameSign_DZ", &HLT_Mu23_Mu12_SameSign_DZ, &b_HLT_Mu23_Mu12_SameSign_DZ);
   tree->SetBranchAddress("HLT_Mu23_Mu12", &HLT_Mu23_Mu12, &b_HLT_Mu23_Mu12);
   tree->SetBranchAddress("HLT_Mu23_Mu12_DZ", &HLT_Mu23_Mu12_DZ, &b_HLT_Mu23_Mu12_DZ);
   tree->SetBranchAddress("HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi1p05", &HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi1p05, &b_HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi1p05);
   tree->SetBranchAddress("HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi", &HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi, &b_HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi);
   tree->SetBranchAddress("HLT_DoubleMu3_DCA_PFMET50_PFMHT60", &HLT_DoubleMu3_DCA_PFMET50_PFMHT60, &b_HLT_DoubleMu3_DCA_PFMET50_PFMHT60);
   tree->SetBranchAddress("HLT_TripleMu_5_3_3_Mass3p8_DCA", &HLT_TripleMu_5_3_3_Mass3p8_DCA, &b_HLT_TripleMu_5_3_3_Mass3p8_DCA);
   tree->SetBranchAddress("HLT_QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", &HLT_QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, &b_HLT_QuadPFJet98_83_71_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1);
   tree->SetBranchAddress("HLT_QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", &HLT_QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, &b_HLT_QuadPFJet103_88_75_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1);
   tree->SetBranchAddress("HLT_QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", &HLT_QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, &b_HLT_QuadPFJet111_90_80_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1);
   tree->SetBranchAddress("HLT_QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2", &HLT_QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2, &b_HLT_QuadPFJet98_83_71_15_PFBTagDeepCSV_1p3_VBF2);
   tree->SetBranchAddress("HLT_QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2", &HLT_QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2, &b_HLT_QuadPFJet103_88_75_15_PFBTagDeepCSV_1p3_VBF2);
   tree->SetBranchAddress("HLT_QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2", &HLT_QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2, &b_HLT_QuadPFJet105_88_76_15_PFBTagDeepCSV_1p3_VBF2);
   tree->SetBranchAddress("HLT_QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2", &HLT_QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2, &b_HLT_QuadPFJet111_90_80_15_PFBTagDeepCSV_1p3_VBF2);
   tree->SetBranchAddress("HLT_QuadPFJet98_83_71_15", &HLT_QuadPFJet98_83_71_15, &b_HLT_QuadPFJet98_83_71_15);
   tree->SetBranchAddress("HLT_QuadPFJet103_88_75_15", &HLT_QuadPFJet103_88_75_15, &b_HLT_QuadPFJet103_88_75_15);
   tree->SetBranchAddress("HLT_QuadPFJet105_88_76_15", &HLT_QuadPFJet105_88_76_15, &b_HLT_QuadPFJet105_88_76_15);
   tree->SetBranchAddress("HLT_QuadPFJet111_90_80_15", &HLT_QuadPFJet111_90_80_15, &b_HLT_QuadPFJet111_90_80_15);
   tree->SetBranchAddress("HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17", &HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17, &b_HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p17);
   tree->SetBranchAddress("HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1", &HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1, &b_HLT_AK8PFJet330_TrimMass30_PFAK8BTagDeepCSV_p1);
   tree->SetBranchAddress("HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02", &HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02, &b_HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_p02);
   tree->SetBranchAddress("HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2", &HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2, &b_HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np2);
   tree->SetBranchAddress("HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4", &HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4, &b_HLT_AK8PFJet330_TrimMass30_PFAK8BoostedDoubleB_np4);
   tree->SetBranchAddress("HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55", &HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55, &b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto_Mass55);
   tree->SetBranchAddress("HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto", &HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto, &b_HLT_Diphoton30_18_R9IdL_AND_HE_AND_IsoCaloId_NoPixelVeto);
   tree->SetBranchAddress("HLT_Mu12_IP6_part0", &HLT_Mu12_IP6_part0, &b_HLT_Mu12_IP6_part0);
   tree->SetBranchAddress("HLT_Mu12_IP6_part1", &HLT_Mu12_IP6_part1, &b_HLT_Mu12_IP6_part1);
   tree->SetBranchAddress("HLT_Mu12_IP6_part2", &HLT_Mu12_IP6_part2, &b_HLT_Mu12_IP6_part2);
   tree->SetBranchAddress("HLT_Mu12_IP6_part3", &HLT_Mu12_IP6_part3, &b_HLT_Mu12_IP6_part3);
   tree->SetBranchAddress("HLT_Mu12_IP6_part4", &HLT_Mu12_IP6_part4, &b_HLT_Mu12_IP6_part4);
   tree->SetBranchAddress("HLT_Mu9_IP5_part0", &HLT_Mu9_IP5_part0, &b_HLT_Mu9_IP5_part0);
   tree->SetBranchAddress("HLT_Mu9_IP5_part1", &HLT_Mu9_IP5_part1, &b_HLT_Mu9_IP5_part1);
   tree->SetBranchAddress("HLT_Mu9_IP5_part2", &HLT_Mu9_IP5_part2, &b_HLT_Mu9_IP5_part2);
   tree->SetBranchAddress("HLT_Mu9_IP5_part3", &HLT_Mu9_IP5_part3, &b_HLT_Mu9_IP5_part3);
   tree->SetBranchAddress("HLT_Mu9_IP5_part4", &HLT_Mu9_IP5_part4, &b_HLT_Mu9_IP5_part4);
   tree->SetBranchAddress("HLT_Mu7_IP4_part0", &HLT_Mu7_IP4_part0, &b_HLT_Mu7_IP4_part0);
   tree->SetBranchAddress("HLT_Mu7_IP4_part1", &HLT_Mu7_IP4_part1, &b_HLT_Mu7_IP4_part1);
   tree->SetBranchAddress("HLT_Mu7_IP4_part2", &HLT_Mu7_IP4_part2, &b_HLT_Mu7_IP4_part2);
   tree->SetBranchAddress("HLT_Mu7_IP4_part3", &HLT_Mu7_IP4_part3, &b_HLT_Mu7_IP4_part3);
   tree->SetBranchAddress("HLT_Mu7_IP4_part4", &HLT_Mu7_IP4_part4, &b_HLT_Mu7_IP4_part4);
   tree->SetBranchAddress("HLT_Mu9_IP4_part0", &HLT_Mu9_IP4_part0, &b_HLT_Mu9_IP4_part0);
   tree->SetBranchAddress("HLT_Mu9_IP4_part1", &HLT_Mu9_IP4_part1, &b_HLT_Mu9_IP4_part1);
   tree->SetBranchAddress("HLT_Mu9_IP4_part2", &HLT_Mu9_IP4_part2, &b_HLT_Mu9_IP4_part2);
   tree->SetBranchAddress("HLT_Mu9_IP4_part3", &HLT_Mu9_IP4_part3, &b_HLT_Mu9_IP4_part3);
   tree->SetBranchAddress("HLT_Mu9_IP4_part4", &HLT_Mu9_IP4_part4, &b_HLT_Mu9_IP4_part4);
   tree->SetBranchAddress("HLT_Mu8_IP5_part0", &HLT_Mu8_IP5_part0, &b_HLT_Mu8_IP5_part0);
   tree->SetBranchAddress("HLT_Mu8_IP5_part1", &HLT_Mu8_IP5_part1, &b_HLT_Mu8_IP5_part1);
   tree->SetBranchAddress("HLT_Mu8_IP5_part2", &HLT_Mu8_IP5_part2, &b_HLT_Mu8_IP5_part2);
   tree->SetBranchAddress("HLT_Mu8_IP5_part3", &HLT_Mu8_IP5_part3, &b_HLT_Mu8_IP5_part3);
   tree->SetBranchAddress("HLT_Mu8_IP5_part4", &HLT_Mu8_IP5_part4, &b_HLT_Mu8_IP5_part4);
   tree->SetBranchAddress("HLT_Mu8_IP6_part0", &HLT_Mu8_IP6_part0, &b_HLT_Mu8_IP6_part0);
   tree->SetBranchAddress("HLT_Mu8_IP6_part1", &HLT_Mu8_IP6_part1, &b_HLT_Mu8_IP6_part1);
   tree->SetBranchAddress("HLT_Mu8_IP6_part2", &HLT_Mu8_IP6_part2, &b_HLT_Mu8_IP6_part2);
   tree->SetBranchAddress("HLT_Mu8_IP6_part3", &HLT_Mu8_IP6_part3, &b_HLT_Mu8_IP6_part3);
   tree->SetBranchAddress("HLT_Mu8_IP6_part4", &HLT_Mu8_IP6_part4, &b_HLT_Mu8_IP6_part4);
   tree->SetBranchAddress("HLT_Mu9_IP6_part0", &HLT_Mu9_IP6_part0, &b_HLT_Mu9_IP6_part0);
   tree->SetBranchAddress("HLT_Mu9_IP6_part1", &HLT_Mu9_IP6_part1, &b_HLT_Mu9_IP6_part1);
   tree->SetBranchAddress("HLT_Mu9_IP6_part2", &HLT_Mu9_IP6_part2, &b_HLT_Mu9_IP6_part2);
   tree->SetBranchAddress("HLT_Mu9_IP6_part3", &HLT_Mu9_IP6_part3, &b_HLT_Mu9_IP6_part3);
   tree->SetBranchAddress("HLT_Mu9_IP6_part4", &HLT_Mu9_IP6_part4, &b_HLT_Mu9_IP6_part4);
   tree->SetBranchAddress("HLT_Mu8_IP3_part0", &HLT_Mu8_IP3_part0, &b_HLT_Mu8_IP3_part0);
   tree->SetBranchAddress("HLT_Mu8_IP3_part1", &HLT_Mu8_IP3_part1, &b_HLT_Mu8_IP3_part1);
   tree->SetBranchAddress("HLT_Mu8_IP3_part2", &HLT_Mu8_IP3_part2, &b_HLT_Mu8_IP3_part2);
   tree->SetBranchAddress("HLT_Mu8_IP3_part3", &HLT_Mu8_IP3_part3, &b_HLT_Mu8_IP3_part3);
   tree->SetBranchAddress("HLT_Mu8_IP3_part4", &HLT_Mu8_IP3_part4, &b_HLT_Mu8_IP3_part4);
   tree->SetBranchAddress("HLT_QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1", &HLT_QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1, &b_HLT_QuadPFJet105_88_76_15_DoublePFBTagDeepCSV_1p3_7p7_VBF1);
   tree->SetBranchAddress("HLT_TrkMu6NoFiltersNoVtx", &HLT_TrkMu6NoFiltersNoVtx, &b_HLT_TrkMu6NoFiltersNoVtx);
   tree->SetBranchAddress("HLT_TrkMu16NoFiltersNoVtx", &HLT_TrkMu16NoFiltersNoVtx, &b_HLT_TrkMu16NoFiltersNoVtx);
   tree->SetBranchAddress("HLT_DoubleTrkMu_16_6_NoFiltersNoVtx", &HLT_DoubleTrkMu_16_6_NoFiltersNoVtx, &b_HLT_DoubleTrkMu_16_6_NoFiltersNoVtx);
   tree->SetBranchAddress("HLTriggerFinalPath", &HLTriggerFinalPath, &b_HLTriggerFinalPath);
   tree->SetBranchAddress("L1simulation_step", &L1simulation_step, &b_L1simulation_step);
   // Notify();

return tree;
}
//
//Bool_t boostHTT2::Notify()
//{
//   // The Notify() function is called when a new file is opened. This
//   // can be either for a new TTree in a TChain or when when a new TTree
//   // is started when using PROOF. It is normally not necessary to make changes
//   // to the generated code, but the routine can be extended by the
//   // user if needed. The return value is currently not used.
//
//   return kTRUE;
//}
//
//void boostHTT2::Show(Long64_t entry)
//{
//// Print contents of entry.
//// If entry is not specified, print current entry
//   if (!tree) return;
//   tree->Show(entry);
//}
//Int_t boostHTT2::Cut(Long64_t entry)
//{
//// This function may be called from Loop.
//// returns  1 if entry is accepted.
//// returns -1 otherwise.
//   return 1;
//}
#endif // #ifdef boostHTT2_cxx
