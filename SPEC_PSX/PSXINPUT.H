#ifndef SPEC_PSX_PSXINPUT_H
#define SPEC_PSX_PSXINPUT_H

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
