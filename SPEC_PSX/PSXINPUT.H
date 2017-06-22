#ifndef SPEC_PSX_PSXINPUT_H
#define SPEC_PSX_PSXINPUT_H

struct pad_configs {
    unsigned long pad_L2; // size=0, offset=0
    unsigned long pad_R2; // size=0, offset=4
    unsigned long pad_L1; // size=0, offset=8
    unsigned long pad_R1; // size=0, offset=12
    unsigned long pad_triangle; // size=0, offset=16
    unsigned long pad_square; // size=0, offset=20
    unsigned long pad_circle; // size=0, offset=24
    unsigned long pad_cross; // size=0, offset=28
};

struct GouraudBarColourSet {
    unsigned char abLeftRed[5]; // size=5, offset=0
    unsigned char abLeftGreen[5]; // size=5, offset=5
    unsigned char abLeftBlue[5]; // size=5, offset=10
    unsigned char abRightRed[5]; // size=5, offset=15
    unsigned char abRightGreen[5]; // size=5, offset=20
    unsigned char abRightBlue[5]; // size=5, offset=25
};

/* This file was automatically generated.  Do not edit! */
extern struct GouraudBarColourSet dashBarColourSet;
extern struct GouraudBarColourSet airBarColourSet;
extern struct GouraudBarColourSet poisonBarColourSet;
extern struct GouraudBarColourSet healthBarColourSet;
extern unsigned long Edge2;
extern struct ControllerPacket GPad2;
extern struct ControllerPacket GPad1;
extern long LaraLookX;
extern long LaraLookY;
extern unsigned char Motors[2];
extern long RawEdge;
extern long RawPad;
extern long inputBusy;
extern long dbinput2;
extern long dbinput;
extern long input;
extern char SayNoCount;
extern short reset_count;
extern unsigned char PadConnected;
extern unsigned char DualShock;
void S_UpdateInput();

#endif
