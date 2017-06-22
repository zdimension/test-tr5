#ifndef SPEC_PSX_PSOUTPUT_H
#define SPEC_PSX_PSOUTPUT_H

struct VIBRATION {
    short Rate; // size=0, offset=0
    short Len; // size=0, offset=2
    short Lev; // size=0, offset=4
    short Acc; // size=0, offset=6
    short Dec; // size=0, offset=8
    short Sus; // size=0, offset=10
    short Flag; // size=0, offset=12
    short Vib; // size=0, offset=14
};

/* This file was automatically generated.  Do not edit! */
void VibratePad();
void SetupPadVibration(short num,short acc,short lev,short sus,int dec,int len);

#endif
