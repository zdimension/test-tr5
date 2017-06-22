#ifndef GAME_DEBRIS_H
#define GAME_DEBRIS_H

/* This file was automatically generated.  Do not edit! */
extern struct DEBRIS_STRUCT debris[128];
extern short DebrisFlags;
extern long next_debris;
extern struct SHATTER_ITEM ShatterItem;
void ShatterObject(struct SHATTER_ITEM *ShatterItem,struct MESH_INFO *StaticMesh,short Num,short RoomNumber,int NoXZVel);
void TriggerDebris(struct GAME_VECTOR *pos,void *TextInfo,short *Offsets,long *Vels,int rgb);
long GetFreeDebris();

#endif
