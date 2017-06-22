#ifndef GAME_OBJLIGHT_H
#define GAME_OBJLIGHT_H

struct FOOTPRINT {
    long x; // size=0, offset=0
    long y; // size=0, offset=4
    long z; // size=0, offset=8
    short YRot; // size=0, offset=12
    short Active; // size=0, offset=14
};

/* This file was automatically generated.  Do not edit! */
extern struct FOOTPRINT FootPrint[32];
extern int FootPrintNum;
void ControlBlinker(short item_number);
void ControlElectricalLight(short item_number);
void ControlColouredLight(short item_number);
void ControlPulseLight(short item_number);
void ControlStrobeLight(short item_number);
extern short angle;
void TriggerAlertLight(long x,long y,long z,long r,long g,long b,long angle,int room_no,int falloff);

#endif
