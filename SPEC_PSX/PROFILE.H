#ifndef SPEC_PSX_PROFILE_H
#define SPEC_PSX_PROFILE_H

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
