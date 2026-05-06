//#include "../interface/Functions.h"
// #include "../interface/functions.h"
#include <string>
#include <ostream>
#include <vector>

#include <list>
#include <algorithm>

#include "RooWorkspace.h"
#include "RooRealVar.h"
#include "RooFunctor.h"
#include "RooMsgService.h"
#include "TLorentzVector.h"
#include "../interface/CLParser.h"
#include "../interface/boostHTT_4t.h"
#include "../interface/makeHisto.h"
#include "../interface/WeightCalculator.h"


int main(int argc, char* argv[]) {

    CLParser parser(argc, argv);

    std::string filename = parser.Option("-n");

    // -------------------------------
    // 🔧 Collect ALL input files after -s
    // -------------------------------
    std::vector<std::string> inputFiles;

    for (int i = 1; i < argc; i++) {
        std::string arg = argv[i];
        if (arg == "-s") {
            i++;
            while (i < argc && argv[i][0] != '-') {
                inputFiles.push_back(argv[i]);
                i++;
            }
            i--;
        }
    }

    // -------------------------------
    // 🔗 Build TChain
    // -------------------------------
    TChain chain("Events");

    for (const auto& f : inputFiles) {
        std::cout << "Adding file... " << f << std::endl;
        chain.Add(f.c_str());
    }

    std::cout << "Loading Ntuple..." << std::endl;

    // Use chain as TTree
    TTree* Run_Tree = &chain;
//  IMPORTANT: call AFTER building chain
Run_Tree = Xttree(Run_Tree);
    
    // -------------------------------
    // 📊 Get histogram (from first file)
    // -------------------------------
    TH1F* HistoTot = nullptr;

    if (!inputFiles.empty()) {
        TFile* f0 = TFile::Open(inputFiles[0].c_str());
        if (f0 && !f0->IsZombie()) {
            HistoTot = (TH1F*) f0->Get("cutflow");
        }
    }
    std::cout << "HistoTot integral "<<HistoTot->Integral() << std::endl;


float TotalGenWeight=0;
int   TotalNumEvent=0;
TH1F* Histotest = nullptr;
    for (const auto& f : inputFiles){
        TFile* f0 = TFile::Open(f.c_str());
        if (f0 && !f0->IsZombie()) {
            Histotest = (TH1F*) f0->Get("cutflow");
            std::cout << "GenBinContent[0] "<<Histotest->GetBinContent(1) << std::endl;
            TotalGenWeight += Histotest->GetBinContent(1);
            TotalNumEvent += Histotest->GetBinContent(2);
    }
    }
plotFill("TotalGenWeight", TotalGenWeight,15,0,15);

    
std::cout << "TotalGenWeight=  "<<TotalGenWeight << "  TotalNumEvent=  " << TotalNumEvent << std::endl;    
    // -------------------------------
    // 📁 Output file
    // -------------------------------
    auto fout = new TFile(filename.c_str(), "RECREATE");

    myMap1 = new std::unordered_map<std::string, TH1F*>();
    myMap2 = new std::unordered_map<std::string, TH2F*>();

    TTree* outTr = new TTree("tree_4tau","tree_4tau");

    TH1F *gnwt_tot = new TH1F("gnwt_tot", "gnwt_tot", 5, 0, 5);
    gnwt_tot->SetBinContent(1,TotalGenWeight);
    gnwt_tot->SetBinContent(2,TotalNumEvent);

    

// int main(int argc, char* argv[]) {



//     CLParser parser(argc, argv);
//     std::string sample = parser.Option("-s");
//     std::string name = parser.Option("-n");
        
//     // create output file
//     auto suffix = "_output.root";
//     auto prefix =  "";
//     std::string filename;
//     if (name == sample) {
//         filename = prefix + name +  suffix;
//     } else {
//         filename = name;
//     }
//     std::cout<<"output name is "<<filename.c_str()<<"\n";
    
    
//     // open input file
//     std::cout << "Opening file... " << sample << std::endl;
//     auto InputFile = TFile::Open(sample.c_str());
//     std::cout << "Loading Ntuple..." << std::endl;
//     TTree *  Run_Tree;
//     Run_Tree= Xttree(InputFile,"Events");
    
//     TH1F * HistoTot = (TH1F*) InputFile->Get("cutflow");
//     auto fout = new TFile(filename.c_str(), "RECREATE");
    
//     myMap1 = new std::unordered_map<std::string, TH1F*>();
//     myMap2 = new unordered_map<string, TH2F*>();
    
//     TTree * outTr=  new TTree("tree_4tau","tree_4tau");



// // This is to run on multiple samples
//     std::vector<std::string> inputFiles;    
//     CLParser parser(argc, argv);
//     std::string sample = parser.Option("-s");
//     std::string name = parser.Option("-n");

//         for (int i = 1; i < argc; i++) {
//     std::string arg = argv[i];
//     if (arg == "-s") {
//         i++;
//         while (i < argc && argv[i][0] != '-') {
//             inputFiles.push_back(argv[i]);
//             i++;
//         }
//         i--; // step back
//     }
//     }

// TChain chain("Events");
// for (const auto& f : inputFiles) {
//     std::cout << "Adding file: " << f << std::endl;
//     chain.Add(f.c_str());
// }
// TTree* Run_Tree = &chain;


//     TFile* f = TFile::Open(inputFiles[0].c_str());
//     TH1F * HistoTot = (TH1F*) f->Get("cutflow");    
//     auto fout = new TFile(name.c_str(), "RECREATE");
    
//     myMap1 = new std::unordered_map<std::string, TH1F*>();
//     myMap2 = new unordered_map<string, TH2F*>();
    
//     TTree * outTr=  new TTree("tree_4tau","tree_4tau");    

    


    
    
//     std::vector<std::string> inputFiles;
    
//     CLParser parser(argc, argv);
//     std::string sample = parser.Option("-s");
//     std::string name = parser.Option("-n");


//     // create output file
//     auto suffix = "_output.root";
//     auto prefix =  "";
//     std::string filename;
//     if (name == sample) {
//         filename = prefix + name +  suffix;
//     } else {
//         filename = name;
//     }
//     std::cout<<"output name is "<<filename.c_str()<<"\n";
    

//    // open input file
//     std::cout << "Opening file... " << sample << std::endl;
//     auto InputFile = TFile::Open(sample.c_str());
//     std::cout << "Loading Ntuple..." << std::endl;
//     TTree *  Run_Tree;
//     Run_Tree= Xttree(InputFile,"Events");    
    

// //     std::string inputSample = parser.Option("-s");
// // std::string fname = inputSample;
    
// manually parse argv instead of relying only on CLParser



    
    
// //    std::string fname = path + sample + ".root";
//     // std::string fname = sample ;
    
    

    
    
 


// // TChain chain("Events");
// // for (const auto& file : inputFiles) {
// //     std::cout << "Adding file... " << file << std::endl;
// //     chain.Add(file.c_str());
// // }

// std::cout << "Loading Ntuple..." << std::endl;

// // If Xttree expects TTree*, this works:
// // TTree* Run_Tree = &chain;
// // TTree* Run_Tree = &chain;
//     // Run_Tree= Xttree(inputFiles,"Events");



    
    
    
//     //    auto HistoTot = reinterpret_cast<TH1D*>(InputFile->Get("ggNtuplizer/hEvents"));
//     // TH1F * HistoTot = (TH1F*) inputFiles->Get("hcount");
// TFile* f = TFile::Open(inputFiles[0].c_str());
// TH1F* HistoTot = (TH1F*) f->Get("hcount");

//     auto fout = new TFile(filename.c_str(), "RECREATE");
    
//     myMap1 = new std::unordered_map<std::string, TH1F*>();
//     myMap2 = new unordered_map<string, TH2F*>();
    
//     TTree * outTr=  new TTree("4tau_tree","4tau_tree");
    

    //###############################################################################################
    // Parameters
    //###############################################################################################
    float MuMass= 0.10565837;
    //float eleMass= 0.000511;
    float JetPtCut=30;
    float BJetPtCut=30;

    float DeepCSVCut = 0.7527;

    // 0.7527
    // 0.4184;
    // 0.8001; // use 0.4184, less TTbar in signal region


    //float DeepCSVCut=   1000   ;                  //  loose  https://twiki.cern.ch/twiki/bin/viewauth/CMS/BtagRecommendation94X
    //if (year== 2016) DeepCSVCut =     0.8953  ;
    //if (year== 2017) DeepCSVCut =     0.8001  ;
    //if (year== 2018) DeepCSVCut =    0.7527   ; 

    float LumiWeight = 1;
    float vis_mass=-10;
    float vis_mass2=-10;
    float radion_inv_mass=-10;
    float min_dr = 100;
    float lead_tau_iso;
    float tmass,ht,st,Met,FullWeight, dR_lep_lep, Metphi,BoostedTauRawIso, higgs_pT, higgs_pT2, radion_pt, higgs_m, m_sv_, wtnom_zpt_weight, gen_higgs_pT,gen_leadjet_pT;
    float LeadingBoostedTauPt;
    float SubLeadingBoostedTauPt;
    float ThirdBoostedTauPt;
    float FourthBoostedTauPt;
    float dphi_HH;
    float dr_HH;
    float dphi_H2;
    float dphi_H1;
    float higgs2_dr;
    float higgs1_dr;
    float TMass_H1, TMass_H2, TMass_Radion;
    float dphi_H1_MET, dphi_H2_MET, dphi_rad_MET, dphi_H1_Rad, dphi_H2_Rad;
    float dr_H1_Rad, dr_H2_Rad;
    float tau1_h1_pt, tau2_h1_pt, tau1_h2_pt, tau2_h2_pt;
    float radion_eta;
    float HT;
    float ratio, ratio2;
    bool PassTrigger_40;
    bool PassTrigger_39;
    float pass_both_triggers;
    float pfMHT;
    float PFMET_MHT;
    float total_efficiency_39;
    float Numerator39;
    float Denominator39;
    float Numerator40;
    float Denominator40;
    float AK8Pt=0;
    float AK8Mass=0;
    float _cut_PFMET_MHT_;
    int H1OS;
    int H2OS;
    int tau4_charge;
    int tau2_charge;
    int Z_multiplicity = 0;
    bool good_or_bad_match = true;
    int tau1_index = 15; 
    int lead_charge;
    int tau3_index = 15; 
    int tau3_charge;  
    float TMass;
    float eleMass = 0.000511;
    float ele_pt;
    float match_tau_pt;
    float muMass = 0.10565837;
    float muon_pt;
    float matched_tau_pt;
    float efficiency39;
    float efficiency40;
    int numBJet, MynboostedTau;
    bool Mu_trigger;
    bool pfmet_pfmht_trigger;
    bool PassTrigger_50;
    bool PassTrigger_27;
    float genWeight_;
    float LeadMuonPt=0;
    float LeadMuonEta=0;


    TLorentzVector Muon4Momentum, MatchedTau4Momentum;
    TLorentzVector even_events, odd_events;


   outTr->Branch("vis_mass",&vis_mass,"vis_mass/F");
   outTr->Branch("vis_mass2",&vis_mass2,"vis_mass2/F");
   outTr->Branch("LumiWeight",&LumiWeight,"LumiWeight/F");
   // outTr->Branch("pfMET",&pfMET,"pfMET/F");
    outTr->Branch("higgs_pT",&higgs_pT,"higgs_pT/F");
    outTr->Branch("higgs_pT2",&higgs_pT2,"higgs_pT/F");
    outTr->Branch("radion_eta", &radion_eta, "radion_eta/F");
    outTr->Branch("radion_pt", &radion_pt, "radion_pt/F");
    outTr->Branch("radion_inv_mass", &radion_inv_mass, "radion_inv_mass/F");
    outTr->Branch("HT",&HT,"HT/F");
    outTr->Branch("higgs1_dr",&higgs1_dr,"higgs1_dr/F");
    outTr->Branch("higgs2_dr",&higgs2_dr,"higgs2_dr/F");
    outTr->Branch("dphi_H1",&dphi_H1,"dphi_H1/F");
    outTr->Branch("dphi_H2",&dphi_H2,"dphi_H2/F");
    outTr->Branch("dr_HH",&dr_HH,"dr_HH/F");
    outTr->Branch("dphi_HH",&dphi_HH,"dphi_HH/F");
    outTr->Branch("TMass_H1",&TMass_H1,"TMass_H1/F");
    outTr->Branch("TMass_H2",&TMass_H2,"TMass_H2/F");
    outTr->Branch("TMass_Radion",&TMass_Radion,"TMass_Radion/F");
    outTr->Branch("dphi_H1_MET",&dphi_H1_MET,"dphi_H1_MET/F");
    outTr->Branch("dphi_H2_MET",&dphi_H2_MET,"dphi_H2_MET/F");
    outTr->Branch("dphi_rad_MET",&dphi_rad_MET,"dphi_rad_MET/F");
    outTr->Branch("dphi_H2_Rad",&dphi_H2_Rad,"dphi_H2_Rad/F");
    outTr->Branch("dph_H1_Rad",&dphi_H1_Rad,"dphi_H1_Rad/F");
    outTr->Branch("dr_H2_Rad",&dr_H2_Rad,"dr_H2_Rad/F");
    outTr->Branch("dr_H1_Rad",&dr_H1_Rad,"dr_H1_Rad/F");
    outTr->Branch("tau1_h1_pt",&tau1_h1_pt,"tau1_h1_pt/F");
    outTr->Branch("tau2_h1_pt",&tau2_h1_pt,"tau2_h1_pt/F");
    outTr->Branch("tau1_h2_pt",&tau1_h2_pt,"tau1_h2_pt/F");
    outTr->Branch("tau2_h2_pt",&tau2_h2_pt,"tau2_h2_pt/F");
    outTr->Branch("ratio",&ratio,"ratio/F");
    outTr->Branch("ratio2",&ratio2,"ratio2/F");
    outTr->Branch("total_efficiency_39",&total_efficiency_39,"total_efficiency_39/F");
    outTr->Branch("Denominator39",&Denominator39,"Denominator39/F");
    outTr->Branch("Numerator39",&Numerator39,"Numerator39/F");
    outTr->Branch("Denominator40",&Denominator40,"Denominator40/F");
    outTr->Branch("Numerator40",&Numerator40,"Numerator40/F");
    outTr->Branch("AK8Mass", &AK8Mass, "AK8Mass/F");
    outTr->Branch("AK8Pt", &AK8Pt, "AK8Pt/F");
    outTr->Branch("H1OS", &H1OS, "H1OS/O");
    outTr->Branch("H2OS", &H2OS, "H2OS/O");
    outTr->Branch("numBJet", &numBJet, "numBJet/I"); 
    outTr->Branch("TotalGenWeight", &TotalGenWeight, "TotalGenWeight/F"); 
    outTr->Branch("TotalNumEvent", &TotalNumEvent, "TotalNumEvent/I"); 
    outTr->Branch("genWeight", &genWeight_, "genWeight/F"); 
    outTr->Branch("LeadMuonPt", &LeadMuonPt, "LeadMuonPt/F"); 
    outTr->Branch("LeadMuonEta", &LeadMuonEta, "LeadMuonEta/F"); 

    
    gnwt_tot->SetBinContent(3,Run_Tree->GetEntries());
    Int_t nentries_wtn = (Int_t) Run_Tree->GetEntries();
    cout<<"nentries_wtn===="<<nentries_wtn<<"\n";
    for (Int_t i = 0; i < nentries_wtn; i++) {
        
        Run_Tree->GetEntry(i);
        if (i % 1000 == 0) fprintf(stdout, "\r  Processed events: %8d of %8d ", i, nentries_wtn);
        fflush(stdout);
        
        plotFill("cutFlowTable",1 ,15,0,15);
        //=========================================================================================================
        // Lowest unprescaled trigger           2016                         2017                                     2018
        
        //           HLT_AK8PFJet360_TrimMass30_v                      HLT_AK8PFJet400_TrimMass30(36.75/ 41.54)   HLT_AK8PFJet400_TrimMass30_v
        //           HLT_AK8PFJet500 (not in yet 33.64/36.47 )         HLT_AK8PFJet500 (not in yet)               HLT_AK8PFJet500 (not in yet)
        //           HLT_PFHT300_PFMET110_v                            HLT_PFHT500_PFMET100_PFMHT100_IDT          HLT_PFHT500_PFMET100_PFMHT100_IDT
        //           HLT_PFHT900_v                                     HLT_PFHT1050_v                             HLT_PFHT1050_v
        
        
//
//        //2016
//        PassTrigger_21 = ((HLTJet >> 21 & 1)==1); //HLT_AK8PFJet360_TrimMass30_v // only 2016?
//        PassTrigger_22 = ((HLTJet >> 22 & 1)==1); //HLT_PFHT300_PFMET110_v // only 2016?
//
//
// 2017 and 2018
// Trigger results


if (!HLT_Mu50) continue;
plotFill("cutFlowTable",2 ,15,0,15);
if (nMuon< 1) continue;
plotFill("cutFlowTable",3 ,15,0,15);
if (Muon_pt[0] < 52)  continue;
plotFill("cutFlowTable",4 ,15,0,15);
if (fabs(Muon_eta[0] ) >  2.4)  continue;        
plotFill("cutFlowTable",5 ,15,0,15);
if (!Muon_tightId[0]) continue;
plotFill("cutFlowTable",6 ,15,0,15);    
        
LeadMuonPt=Muon_pt[0];
LeadMuonEta=Muon_eta[0];        
genWeight_=genWeight;
        TLorentzVector LeadTau4Momentum,SubTau4Momentum, Sub_and_Lead_Momentum, Met4Momentum, LeadTau4MomentumNominal, SubTau4MomentumNominal;
//         //=========================================================================================================
if (nboostedTau < 3) continue;

plotFill("cutFlowTable",7 ,15,0,15);    
        
    float LeadingBoostedTauPt= boostedTau_pt[0];
    float SubLeadingBoostedTauPt= boostedTau_pt[1];
    float ThirdBoostedTauPt= boostedTau_pt[2];
    float FourthBoostedTauPt= boostedTau_pt[3];
    plotFill("LeadingBoostedTauPt_",LeadingBoostedTauPt ,50,0,2000);
    plotFill("SubLeadingBoostedTauPt_",SubLeadingBoostedTauPt ,50,0,1000);
    plotFill("ThirdBoostedTauPt_",ThirdBoostedTauPt ,50,0,700);
    plotFill("FourthBoostedTauPt_",FourthBoostedTauPt ,50,0,500);

//         //=========================================================================================================
//         // Event Selection
//         //=========================================================================================================

//     // if (event%2 == 1) continue; // cut odd events or even events (want only odds for training script)
//     // ^^ comment out this line otherwise
    
    
    //get the four momentum for each of the first four Tau
    TLorentzVector ThirdTau4Momentum, FourthTau4Momentum, Third_and_Fourth_Momentum;    
    LeadTau4Momentum.SetPtEtaPhiM(boostedTau_pt[0], boostedTau_eta[0], boostedTau_phi[0], boostedTau_mass[0]);
    SubTau4Momentum.SetPtEtaPhiM(boostedTau_pt[1], boostedTau_eta[1], boostedTau_phi[1], boostedTau_mass[1]);
    ThirdTau4Momentum.SetPtEtaPhiM(boostedTau_pt[2], boostedTau_eta[2], boostedTau_phi[2], boostedTau_mass[2]);
    FourthTau4Momentum.SetPtEtaPhiM(boostedTau_pt[3], boostedTau_eta[3], boostedTau_phi[3], boostedTau_mass[3]);


    //deltaR between the leading tau and each of the other tau
    float dR_sub_lead= SubTau4Momentum.DeltaR(LeadTau4Momentum);
    float dR_lead_third= LeadTau4Momentum.DeltaR(ThirdTau4Momentum);
    float dR_lead_fourth= LeadTau4Momentum.DeltaR(FourthTau4Momentum);
    plotFill("dR_sub_lead_", dR_sub_lead, 50,0,5);
    plotFill("dR_lead_third_", dR_lead_third, 50,0,5);
    plotFill("dR_lead_fourth_", dR_lead_fourth, 50,0,5);
//     //==================================================================

    // LumiWeight = getLuminsoity(2018, "tt") * XSection(sample)*1.0 / HistoTot->GetBinContent(2);
    //std::cout<< HistoTot->GetBinContent(2)<<endl;
    // print lumiweight, run on TTbar
    //std::cout<<LumiWeight<<endl;
    // sets LumiWeight to 1 for signal
    if (LumiWeight == 0){
        LumiWeight = 1;
    }


        
//     Z_multiplicity = Zto_mumu_multiplicity() + Zto_ee_multiplicity();
//     plotFill("Z_multiplicity", Z_multiplicity, 50, 0, 4.5);
//     plotFill("Z_muon_mult", Zto_mumu_multiplicity(), 50, 0, 4.5);
//     plotFill("Z_ee_mult", Zto_ee_multiplicity(), 50, 0, 4.5);
//     //plotFill("Z_ee_mumu_mult", Zto_mumu_multiplicity(), Zto_ee_multiplicity(), 50, 0, 10);
//     if (Z_multiplicity > 0) continue;
    
//     //matching the pairs
    TLorentzVector NewBoostedTau4Momentum, LeadMatch4Momentum, higgs1_momentum, SecondPair4Momentum, higgs2_momentum; 
//     // get lead tau
    // tau1_index = 15;
    TLorentzVector leadtau4mom;
    // for (int ibtau = 0; ibtau < nBoostedTau; ++ibtau){
    //     if (isTauGood(ibtau) == false) continue;
    //     if (good_or_bad_match == false) continue;
    //     if (ibtau<tau1_index){ 
    //         //std::cout<<tau1_index<<endl;
    //         tau1_index = ibtau; 
    //         leadtau4mom.SetPtEtaPhiM(boostedTauPt->at(ibtau), boostedTauEta->at(ibtau), boostedTauPhi->at(ibtau), boostedTauMass->at(ibtau));
    //         lead_charge = boostedTauCharge->at(ibtau);
    //         plotFill("Lead_Tau_Index", ibtau, 50, 0, 5, LumiWeight);
    //     }
    // }
    
    

//     // once I have the lead tau, find the match (the cuts are in the functions, so it should pick good taus)
//     int tau2_index = MatchBoostedTau(leadtau4mom, tau1_index);
//     //std::cout<<tau2_index<<endl;
//     if (tau2_index < 0) continue; 


//     tau2_charge = boostedTauCharge->at(tau2_index); 
//     //H1 Charge
//     if (tau2_charge * lead_charge < 0){ 
//         H1OS = 1;
//     }
    
//     if (tau2_charge * lead_charge > 0){ 
//        H1OS = 0;
//     }

//     plotFill("H1OS", H1OS, 50, -.5, .5);

//     LeadMatch4Momentum.SetPtEtaPhiM(boostedTauPt->at(tau2_index), boostedTauEta->at(tau2_index), boostedTauPhi->at(tau2_index), boostedTauMass->at(tau2_index));
//     plotFill("Tau_2_Index", tau2_index, 40, 0, 8, LumiWeight); 
    

//     tau3_index = 15;
//     for (int i = 0; i< nBoostedTau; i++){
//         if (i == tau1_index) continue; 
//         if (i == tau2_index) continue; 
//         if (isTauGood(i) == false) continue;
//         if (i<tau3_index){
//             tau3_index = i; 
//             NewBoostedTau4Momentum.SetPtEtaPhiM(boostedTauPt->at(i), boostedTauEta->at(i), boostedTauPhi->at(i), boostedTauMass->at(i));
//             tau3_charge = boostedTauCharge->at(i); 
//             plotFill("tau3_index", i , 40, 0, 7, LumiWeight);
//         }
//     } 
//     int tau4_index = MatchBoostedTauAgain(NewBoostedTau4Momentum, tau3_charge, tau1_index, tau2_index, tau3_index); 
//     if (tau4_index < 0) continue; 


//     tau4_charge = boostedTauCharge->at(tau4_index); 
//     //H2 charge
//     // if the charge of tau4 *tau3 is negative, then Higgs2 is OS
//     if (tau4_charge * tau3_charge < 0){
//         H2OS = 1; 
//     }
//     if (tau4_charge * tau3_charge > 0){
//        H2OS = 0;
//     }
//     plotFill("H2OS", H2OS, 50, -.5, .5);

//     SecondPair4Momentum.SetPtEtaPhiM(boostedTauPt->at(tau4_index), boostedTauEta->at(tau4_index), boostedTauPhi->at(tau4_index), boostedTauMass->at(tau4_index));
//     plotFill("tau4_index", tau4_index, 40, .5, 8, LumiWeight);
    
//     //constructing the higgs, get their dr and vis mass
    higgs1_momentum = leadtau4mom + LeadMatch4Momentum;
    higgs2_momentum = SecondPair4Momentum + NewBoostedTau4Momentum;
    higgs1_dr = leadtau4mom.DeltaR(LeadMatch4Momentum);
    higgs2_dr = NewBoostedTau4Momentum.DeltaR(SecondPair4Momentum);
    vis_mass= higgs1_momentum.M();
    vis_mass2 = higgs2_momentum.M();
    plotFill("higgs1_vis_mass", vis_mass, 50, 0, 250, LumiWeight);
    plotFill("higgs1_dr", higgs1_dr, 50, 0, 1.5, LumiWeight);
    plotFill("higgs2_vis_mass", vis_mass2, 50, 0, 250, LumiWeight); 
    plotFill("higgs2_dr", higgs2_dr, 50, 0, 1.5, LumiWeight); 

    
//     if (vis_mass < 10) continue;
//     if (vis_mass2 < 10) continue;
    
    
    // pt of each tau
    tau1_h1_pt = leadtau4mom.Pt();
    tau2_h1_pt = NewBoostedTau4Momentum.Pt();
    tau1_h2_pt = SecondPair4Momentum.Pt();
    tau2_h2_pt = LeadMatch4Momentum.Pt();

//     plotFill("tau1_h1_pt", tau1_h1_pt, 50, 0, 1500, LumiWeight);
//     plotFill("tau2_h1_pt", tau2_h1_pt, 50, 0, 1500, LumiWeight);
//     plotFill("tau1_h2_pt", tau1_h2_pt, 50, 0, 1500, LumiWeight);
//     plotFill("tau2_h2_pt", tau2_h2_pt, 50, 0, 1500, LumiWeight);

//     // delta phi between the two tau in higgs 2
//     dphi_H2 = SecondPair4Momentum.DeltaPhi(NewBoostedTau4Momentum);
//     plotFill("dphi_H2", dphi_H2, 50, -4, 4, LumiWeight);

//     // delta phi between the two tau in higgs 1
//     dphi_H1 = LeadMatch4Momentum.DeltaPhi(leadtau4mom);
//     plotFill("dphi_H1", dphi_H1, 50, -4, 4, LumiWeight);

//     //delta phi between the two higgs
//     dphi_HH = higgs1_momentum.DeltaPhi(higgs2_momentum);
//     plotFill("dphi_HH", dphi_HH, 50, -4, 4, LumiWeight);

//     //get the pt of each higgs
//     higgs_pT = higgs1_momentum.Pt();
//     higgs_pT2 = higgs2_momentum.Pt();
//     radion_pt = higgs_pT + higgs_pT2;
//     plotFill("higgs_pt1", higgs_pT, 50, 0, 1500, LumiWeight);
//     plotFill("higgs_pt2", higgs_pT2, 50, 0, 1400, LumiWeight);
//     plotFill("radion_pt", radion_pt, 50, 0, 2000, LumiWeight);


//     //find invariant mass of the two higgs (radion) and plot
//     TLorentzVector radion4momentum;
//     radion4momentum = higgs1_momentum + higgs2_momentum;
//     radion_inv_mass = radion4momentum.M();
//     radion_eta = radion4momentum.Eta();
//     plotFill("radion_inv_mass", radion_inv_mass, 50, 0, 2600, LumiWeight); 
//     plotFill("radion_eta", radion_eta, 50, -5, 5, LumiWeight);

//     // delta R between the two Higgs
//     dr_HH = higgs1_momentum.DeltaR(higgs2_momentum);
//     if (dr_HH < 2) continue;
//     plotFill("dr_HH", dr_HH, 50, 0, 5, LumiWeight); 

//     // HT
//     TLorentzVector rad4Momentum;
//     rad4Momentum = leadtau4mom + LeadMatch4Momentum + NewBoostedTau4Momentum + SecondPair4Momentum;
//     HT = rad4Momentum.Pt();
//     plotFill("HT", HT, 50, 0, 1600, LumiWeight);

//     //MET
//     plotFill("MET", pfMET, 50, 0, 1000, LumiWeight);

//     //MHT
//     plotFill("pfMHT", pfMHT, 50, 0, 1000, LumiWeight);

//     // BJet veto
//     numBJet=numBJets(BJetPtCut,DeepCSVCut,JetSys);
//     plotFill("numBJet", numBJet, 15,0,15);
    


//     // muons
//     for (int i = 0; i < nMu; ++i){
//         Muon4Momentum.SetPtEtaPhiM(muPt->at(i), muEta->at(i), muPhi->at(i), muMass);
//         if (Muon4Momentum.Pt() < 20) continue;
//         tau_dR result = MatchTauToMuon(Muon4Momentum);
//         int min_dR_index_muon = result.min_dR_index;
//         float min_dR = result.min_dR;
//         plotFill("min_dR_index_tau_muon", min_dR_index_muon, 50, 0 , 9, LumiWeight);
//         plotFill("min_dR_muon", min_dR, 50, 0, 1, LumiWeight);

//         muon_pt = Muon4Momentum.Pt();
//         MatchedTau4Momentum.SetPtEtaPhiM(boostedTauPt->at(min_dR_index_muon), boostedTauEta->at(min_dR_index_muon), boostedTauPhi->at(min_dR_index_muon), boostedTauMass->at(min_dR_index_muon));
        
//         //plotFill("muon_pt", muon_pt, 50, 0, 1000);
//         plotFill("muon_Eta", muEta->at(i), 50, 0, 10, LumiWeight);
//         plotFill("muon_Phi", muPhi->at(i), 50, 0, 10, LumiWeight);
        
//         matched_tau_pt = MatchedTau4Momentum.Pt();
//         ratio = (muon_pt - matched_tau_pt) / matched_tau_pt;
//         plotFill("ratio", ratio, 50, -1.1, 1.1, LumiWeight);
//     }

//     // electrons
//     TLorentzVector Electron4Momentum, MatchTau4Momentum;
//     for (int i = 0; i < nEle; ++i){
//         Electron4Momentum.SetPtEtaPhiM(elePt->at(i), eleEta->at(i), elePhi->at(i), eleMass);
//         if (Electron4Momentum.Pt() < 20) continue;
//         tau_ele_dR result = MatchTauToElectron(Electron4Momentum);
//         int min_dR_index2 = result.min_dR_index2;
//         float min_dR2 = result.min_dR2;
//         plotFill("min_dR_index_tau_ele", min_dR_index2, 50, 0 , 9, LumiWeight);
//         plotFill("min_dR_electron", min_dR2, 50, 0, 1, LumiWeight);

//         ele_pt = Electron4Momentum.Pt();
//         MatchTau4Momentum.SetPtEtaPhiM(boostedTauPt->at(min_dR_index2), boostedTauEta->at(min_dR_index2), boostedTauPhi->at(min_dR_index2), boostedTauMass->at(min_dR_index2));
        

//         match_tau_pt = MatchTau4Momentum.Pt();
//         ratio2 = (ele_pt - match_tau_pt) / match_tau_pt;
//         plotFill("ratio2", ratio2, 50, -1.1, 1.1, LumiWeight);
//     }


//     // TMass
//     TMass_H1 = TMass_F(higgs1_momentum.Pt(), higgs1_momentum.Px(), higgs1_momentum.Py(), pfMET, pfMETPhi);
//     TMass_H2 = TMass_F(higgs2_momentum.Pt(), higgs2_momentum.Px(), higgs2_momentum.Py(), pfMET, pfMETPhi);
//     TMass_Radion = TMass_F(rad4Momentum.Pt(), rad4Momentum.Px(), rad4Momentum.Py(), pfMET, pfMETPhi);
//     plotFill("TMass_H1", TMass_H1, 50, 0, 5000, LumiWeight);
//     plotFill("TMass_H2", TMass_H2, 50, 0, 2500, LumiWeight);
//     plotFill("TMass_Radion", TMass_Radion, 50, 0, 4500, LumiWeight);
//     plotFill("METPhi", pfMETPhi, 50, 0, 5, LumiWeight);


//     //dPhi plots
//     Met4Momentum.SetPtEtaPhiM(pfMET, 0, pfMETPhi, 0);
//     dphi_H1_MET = higgs1_momentum.DeltaPhi(Met4Momentum);
//     dphi_H2_MET = higgs2_momentum.DeltaPhi(Met4Momentum);
//     dphi_rad_MET = rad4Momentum.DeltaPhi(Met4Momentum);
//     dphi_H1_Rad = higgs1_momentum.DeltaPhi(rad4Momentum);
//     dphi_H2_Rad = higgs2_momentum.DeltaPhi(rad4Momentum);
//     plotFill("dphi_H2_Rad", dphi_H2_Rad, 50, -4, 4, LumiWeight);
//     plotFill("dphi_H1_Rad", dphi_H1_Rad, 50, -4, 4), LumiWeight;
//     plotFill("dphi_H1_MET", dphi_H1_MET, 50, -4, 4, LumiWeight);
//     plotFill("dphi_H2_MET", dphi_H2_MET, 50, -4, 4, LumiWeight);
//     plotFill("dphi_rad_MET", dphi_rad_MET, 50, -4, 4, LumiWeight);

//     //dr between higgs and radion
//     dr_H1_Rad = higgs1_momentum.DeltaPhi(rad4Momentum);
//     dr_H2_Rad = higgs2_momentum.DeltaPhi(rad4Momentum);
//     plotFill("dr_H1_Rad", dr_H1_Rad, 50, -4, 4, LumiWeight);
//     plotFill("dr_H2_Rad", dr_H2_Rad, 50, -4, 4, LumiWeight);


//     plotFill("LumiWeight", LumiWeight, 50, 0, 2);
    


//     //Trigger
//     PassTrigger_40 = ((HLTJet >> 40 & 1)==1); //HLT_AK8PFJet400_TrimMass30_v //HLT_AK8PFJet400_TrimMass30_v
//     PassTrigger_39 = ((HLTJet >> 39 & 1)==1); //HLT_PFHT500_PFMET100_PFMHT100_IDTight_v

//     plotFill("PassTrigger_40", PassTrigger_40, 100,0,1.25);
//     plotFill("PassTrigger_39", PassTrigger_39, 100, 0, 1.25);

//     /*
//     if (PassTrigger_40 == 1){
//         plotFill("aftercuts_trigger40", PassTrigger_40, 100, 0, 1.25);
//     }

//     if (PassTrigger_39==1){
//         plotFill("aftercuts_trigger39", PassTrigger_39, 100, 0, 1.25);
//     }
    
//     if (PassTrigger_40 ==1 && PassTrigger_39==1){
//         pass_both_triggers = (PassTrigger_39 + PassTrigger_40)/2;
//         plotFill("passed both triggers", pass_both_triggers, 100, .99 , 1.01);
//     }
    

//     if (PassTrigger_50 == 1){
//         plotFill("passtrigger_50_aftercuts", PassTrigger_50, 100, 0, 1.25);
//     }
//     if (pfmet_pfmht_trigger==1){
//         plotFill("Pass_pfmet_pfmht_trigger_aftercuts", pfmet_pfmht_trigger, 100, 0, 1.25);
//     }
//     if (PassTrigger_50 ==1 && pfmet_pfmht_trigger ==1){
//         pass_both_triggers = (PassTrigger_50 + pfmet_pfmht_trigger)/2;
//         plotFill("passed both triggers", pass_both_triggers, 100, .99, 1.01);
//     }
//     */


//     //std::cout<<pfMET<<endl;
//     //std::cout<<MHT<<endl;
//     //std::cout<<TrimMass<<endl;
//     //std::cout<<AK8Jet<<endl;
//     //std::cout<<PFHT<<endl;
//     //PFMET_MHT = pfMET + MHT;
//     plotFill("PFMET_MHT", PFMET_MHT, 50, 0, 1000);
//     plotFill("PFHT", PFHT, 50, 0, 1500);
//     plotFill("MHT", MHT, 50, 0, 1500);
//     plotFill("pfMET", pfMET, 50, 0, 1500);


//     // trigger 39 outcome (offline cuts)
//     efficiency39 = calculate_efficiency_39(PFHT, PFMET_MHT);
//     if (efficiency39 == 1.0){
//         // denominator (passes offline cuts)
//         plotFill("Denominator39", PFHT, PFMET_MHT, 50, 100, 1500, 50, 0, 1100);
//     }
//     //numerator (passes online cuts and offline cuts)
//     if (PassTrigger_39 && efficiency39==1.0){
//         plotFill("Numerator39", PFHT, PFMET_MHT, 50, 100, 1500, 50, 0, 1100);
//     }

    
//     // trigger 40 outcome (offline cuts)
//     plotFill("AK8Mass", AK8Mass, 50, 0, 350);
//     plotFill("AK8Pt", AK8Pt, 50, 0, 900);

    
//     efficiency40 = calculate_efficiency_40(AK8Mass, AK8Pt);
//     if (efficiency40 == 1.0){
//         // denominator (passes offline cuts)
//         plotFill("Denominator40", AK8Mass, AK8Pt, 50, 0, 350, 50, 0, 900);
//     }
//     // numerator (passes online cuts and offline cuts)
//     if (PassTrigger_40 && efficiency40==1.0){
//         plotFill("Numerator40", AK8Mass, AK8Pt, 50, 0, 350, 50, 0, 900);
//     }

    

    // Fill the tree
    outTr->Fill();


        
    } //End of Tree
    

    
    fout->cd();
    unordered_map<string, TH1F*>::const_iterator iMap1 = myMap1->begin();
    unordered_map<string, TH1F*>::const_iterator jMap1 = myMap1->end();
    
    for (; iMap1 != jMap1; ++iMap1)
        nplot1(iMap1->first)->Write();
    outTr->Write();
    
    unordered_map<string, TH2F*>::const_iterator iMap2 = myMap2->begin();
    unordered_map<string, TH2F*>::const_iterator jMap2 = myMap2->end();
    
    for (; iMap2 != jMap2; ++iMap2)
        nplot2(iMap2->first)->Write();
    
    gnwt_tot->Write();
    fout->Close();
}
