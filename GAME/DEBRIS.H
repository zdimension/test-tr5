#ifndef GAME_DEBRIS_H
#define GAME_DEBRIS_H

struct DEBRIS_STRUCT {
    void *TextInfo; // size=0, offset=0
    long x; // size=0, offset=4
    long y; // size=0, offset=8
    long z; // size=0, offset=12
    short XYZOffsets1[3]; // size=6, offset=16
    short Dir; // size=0, offset=22
    short XYZOffsets2[3]; // size=6, offset=24
    short Speed; // size=0, offset=30
    short XYZOffsets3[3]; // size=6, offset=32
    short Yvel; // size=0, offset=38
    short Gravity; // size=0, offset=40
    short RoomNumber; // size=0, offset=42
    unsigned char On; // size=0, offset=44
    unsigned char XRot; // size=0, offset=45
    unsigned char YRot; // size=0, offset=46
    unsigned char r; // size=0, offset=47
    unsigned char g; // size=0, offset=48
    unsigned char b; // size=0, offset=49
    unsigned char Pad[2]; // size=2, offset=50
};

/* This file was automatically generated.  Do not edit! */
extern struct DEBRIS_STRUCT debris[128];
extern short DebrisFlags;
extern long next_debris;
extern struct SHATTER_ITEM ShatterItem;
void ShatterObject(struct SHATTER_ITEM *ShatterItem,struct MESH_INFO *StaticMesh,short Num,short RoomNumber,int NoXZVel);
void TriggerDebris(struct GAME_VECTOR *pos,void *TextInfo,short *Offsets,long *Vels,int rgb);
long GetFreeDebris();

#endif
