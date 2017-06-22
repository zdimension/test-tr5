#ifndef SPEC_PSX_DRAWPHAS_H
#define SPEC_PSX_DRAWPHAS_H

struct POLY_FT4 {
    unsigned long tag; // size=0, offset=0
    unsigned char r0; // size=0, offset=4
    unsigned char g0; // size=0, offset=5
    unsigned char b0; // size=0, offset=6
    unsigned char code; // size=0, offset=7
    short x0; // size=0, offset=8
    short y0; // size=0, offset=10
    unsigned char u0; // size=0, offset=12
    unsigned char v0; // size=0, offset=13
    unsigned short clut; // size=0, offset=14
    short x1; // size=0, offset=16
    short y1; // size=0, offset=18
    unsigned char u1; // size=0, offset=20
    unsigned char v1; // size=0, offset=21
    unsigned short tpage; // size=0, offset=22
    short x2; // size=0, offset=24
    short y2; // size=0, offset=26
    unsigned char u2; // size=0, offset=28
    unsigned char v2; // size=0, offset=29
    unsigned short pad1; // size=0, offset=30
    short x3; // size=0, offset=32
    short y3; // size=0, offset=34
    unsigned char u3; // size=0, offset=36
    unsigned char v3; // size=0, offset=37
    unsigned short pad2; // size=0, offset=38
};

/* This file was automatically generated.  Do not edit! */
extern short MonitorOff2;
extern short MonitorOff;
extern unsigned char MonitorHold;
extern unsigned char MonitorScreenU0;
extern struct PSXTEXTI *MonitorScreenTI;
extern struct GAME_VECTOR LaraPos;
extern long StoreBoxes;
void MGDrawSprite(int x,int y,int def,int z,int xs,int ys,long rgb);
void SortOutWreckingBallDraw();
void DrawRooms(short current_room);
long DrawPhaseGame();

#endif
