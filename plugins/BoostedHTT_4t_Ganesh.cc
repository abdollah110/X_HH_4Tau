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

    // -------------------------------
    // 📁 Output file
    // -------------------------------
    auto fout = new TFile(filename.c_str(), "RECREATE");

    myMap1 = new std::unordered_map<std::string, TH1F*>();
    myMap2 = new std::unordered_map<std::string, TH2F*>();

    TTree* outTr = new TTree("tree_4tau","tree_4tau");
    TH1F *gnwt_tot = new TH1F("gnwt_tot", "gnwt_tot", 5, 0, 5);
    //###############################################################################################
    // Parameters
    //###############################################################################################
    float MuMass= 0.10565837;
    //float eleMass= 0.000511;    
    float genWeight_;
    float LeadMuonPt=0;
    float LeadMuonEta=0;
    float LeadingBoostedTauPt=0;
    float SubLeadingBoostedTauPt=0;
    float ThirdBoostedTauPt=0;
    float FourthBoostedTauPt=0;
    float TMass=0;
    float met=0;
    float metphi=0;

    outTr->Branch("TotalGenWeight", &TotalGenWeight, "TotalGenWeight/F"); 
    outTr->Branch("TotalNumEvent", &TotalNumEvent, "TotalNumEvent/I"); 
    outTr->Branch("genWeight", &genWeight_, "genWeight/F"); 
    
    outTr->Branch("LeadMuonPt", &LeadMuonPt, "LeadMuonPt/F"); 
    outTr->Branch("LeadMuonEta", &LeadMuonEta, "LeadMuonEta/F"); 

    outTr->Branch("LeadingBoostedTauPt", &LeadingBoostedTauPt, "LeadingBoostedTauPt/F"); 
    outTr->Branch("SubLeadingBoostedTauPt", &SubLeadingBoostedTauPt, "SubLeadingBoostedTauPt/F"); 
    outTr->Branch("ThirdBoostedTauPt", &ThirdBoostedTauPt, "ThirdBoostedTauPt/F"); 
    outTr->Branch("FourthBoostedTauPt", &FourthBoostedTauPt, "FourthBoostedTauPt/F"); 

    outTr->Branch("TMass", &TMass, "TMass/F"); 
    outTr->Branch("met", &met, "met/F"); 
    outTr->Branch("metphi", &metphi, "metphi/F"); 

        
    
    Int_t nentries_wtn = (Int_t) Run_Tree->GetEntries();
    cout<<"nentries_wtn===="<<nentries_wtn<<"\n";
    for (Int_t i = 0; i < nentries_wtn; i++) {
        
        Run_Tree->GetEntry(i);
        if (i % 1000 == 0) fprintf(stdout, "\r  Processed events: %8d of %8d ", i, nentries_wtn);
        fflush(stdout);
        
        plotFill("cutFlowTable",1 ,15,0,15);




if (!HLT_PFMETNoMu120_PFMHTNoMu120_IDTight)
plotFill("cutFlowTable",2 ,15,0,15);            

// if (!HLT_Mu50) continue;
// plotFill("cutFlowTable",2 ,15,0,15);

// if (nMuon< 1) continue;
// plotFill("cutFlowTable",3 ,15,0,15);

                
std::vector<int> numSelectedMuon;
for (int imu = 0; imu < nMuon; ++imu){
    if (Muon_pt[imu] > 52 && fabs(Muon_eta[imu]) < 2.4 &&  Muon_tightId[imu] &&  Muon_pfRelIso04_all[imu]< 0.15 ){
        numSelectedMuon.push_back(imu);
    }
}
if (numSelectedMuon.size() < 1) continue;
plotFill("cutFlowTable",4 ,15,0,15);        


TLorentzVector LeadingMuon4Momentum;        
LeadingMuon4Momentum.SetPtEtaPhiM(Muon_pt[numSelectedMuon[0]], Muon_eta[numSelectedMuon[0]], Muon_phi[numSelectedMuon[0]], MuMass);
TMass= TMass_F(LeadingMuon4Momentum.Pt(), LeadingMuon4Momentum.Px(), LeadingMuon4Momentum.Py(),  MET_pt,  MET_phi);
        
met= MET_pt;
metphi= MET_phi;
        

// std::vector<int> numSelectedBoostedTau;
// for (int ibtau = 0; ibtau < nboostedTau; ++ibtau){
//     if (boostedTau_pt[ibtau] > 20 && fabs(boostedTau_eta[ibtau]) < 2.3 &&  boostedTau_idDecayModeOldDMs[ibtau] &&  boostedTau_rawDeepTau2018v2p7VSjet[ibtau] > 0.5){
//         numSelectedBoostedTau.push_back(ibtau);
//     }
// }
// if (numSelectedBoostedTau.size() < 4) continue;
// plotFill("cutFlowTable",5 ,15,0,15); 



if (MET_pt < 130)  continue;
plotFill("cutFlowTable",6 ,15,0,15);          

if (nFatJet< 1)         continue;
plotFill("cutFlowTable",7 ,15,0,15);     

        
        
LeadMuonPt=Muon_pt[numSelectedMuon[0]];
LeadMuonEta=Muon_eta[numSelectedMuon[0]];        
// LeadingBoostedTauPt= boostedTau_pt[numSelectedBoostedTau[0]];
// SubLeadingBoostedTauPt= boostedTau_pt[numSelectedBoostedTau[1]];
// ThirdBoostedTauPt= boostedTau_pt[numSelectedBoostedTau[2]];
// FourthBoostedTauPt= boostedTau_pt[numSelectedBoostedTau[3]];
genWeight_=genWeight;
        
        
numSelectedMuon.clear();
// numSelectedBoostedTau.clear();
    

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

    gnwt_tot->SetBinContent(1,TotalGenWeight);
    gnwt_tot->SetBinContent(2,TotalNumEvent);
    gnwt_tot->SetBinContent(3,Run_Tree->GetEntries());
    
    gnwt_tot->Write();
    fout->Close();
}
