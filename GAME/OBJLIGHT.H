#ifndef GAME_OBJLIGHT_H
#define GAME_OBJLIGHT_H

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
