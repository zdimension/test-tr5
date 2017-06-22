#ifndef SPEC_PSX_ROOMLOAD_H
#define SPEC_PSX_ROOMLOAD_H

/* This file was automatically generated.  Do not edit! */
extern unsigned long *RelocPtr[128];
extern unsigned long envmap_data[6];
extern int AnimatingWaterfallsV[6];
extern struct PSXTEXTI *AnimatingWaterfalls[6];
extern struct PSXSPRITESTRUCT *GLOBAL_default_sprites_ptr;
extern short *mesh_base;
extern struct SVECTOR *RoomBBoxes;
extern unsigned short ClutStartY;
extern unsigned long *SetupPtr;
extern short *floor_data;
extern long AnimFileLen;
extern long AnimFilePos;
void S_LoadLevelFile(int Name);
void ReloadAnims(int name,long len);

#endif
