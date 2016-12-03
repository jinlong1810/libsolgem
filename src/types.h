#ifndef __TYPES_
#define __TYPES_

enum GEMDir_t { kGEMX, kGEMY, kGEMR, kGEMPhi };

enum StripSignalType{
  kPrimaryStrip = 0,
  kSecondaryStrip,
  kInducedStrip
};


struct SignalInfo{
    Int_t pid;
    Int_t tid;
    Int_t fillBitsGEM;
    Int_t fillBitsEC;
    Int_t signalSector; //used if map sector
    Double_t ECEDep;
    Double_t momentum;
    Double_t R;
    SignalInfo() {}
    SignalInfo(Int_t apid, Int_t atid):pid(apid), tid(atid),
    fillBitsGEM(0), fillBitsEC(0), signalSector(-1), ECEDep(0.) {}
    ~SignalInfo() {}
  };

struct GeoInfo{
    double r0;
    double r1;
    double phi0;
    double dphi;
    double z;
    double depth;
    double stripangle_u;
    double stripangle_v;
    double pitch_u;
    double pitch_v;

};
#endif//__TYPES_
