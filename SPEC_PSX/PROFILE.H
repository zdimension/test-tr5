#ifndef SPEC_PSX_PROFILE_H
#define SPEC_PSX_PROFILE_H

struct SCALE {
    short xgrid; // size=0, offset=0
    char scalefactor; // size=0, offset=2
    char nummarks; // size=0, offset=3
};

struct COCKSUCK {
    unsigned char r; // size=0, offset=0
    unsigned char g; // size=0, offset=1
    unsigned char b; // size=0, offset=2
    unsigned char pad; // size=0, offset=3
    short finalcnt; // size=0, offset=4
    short profile_xcnt; // size=0, offset=6
};

/* This file was automatically generated.  Do not edit! */
extern struct COCKSUCK ProfileInfo[32];
extern int numprof;
extern char ProfileDraw;
void ProfileAddDrawOT(unsigned long *ot);
void ProfileRGB(int r,int g,int b);
void ProfileAddOT(unsigned long *ot);
void ProfileReadCount();
void ProfileStartCount();
void ProfileInit(int scale);
void ProfileCallBack();

#endif
