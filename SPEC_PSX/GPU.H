#ifndef SPEC_PSX_GPU_H
#define SPEC_PSX_GPU_H

/* This file was automatically generated.  Do not edit! */
extern unsigned long GadwPolygonBuffers[52260];
extern unsigned long GadwOrderingTables[5128];
extern unsigned long GadwOrderingTables_V2[512];
extern struct MMTEXTURE *RoomTextInfo;
extern struct DB_STRUCT db;
extern int gfx_debugging_mode;
extern int rgbscaleme;
extern struct PSXSPRITESTRUCT *psxspriteinfo;
extern struct PSXTEXTSTRUCT *psxtextinfo;
extern unsigned long GnLastFrameCount;
extern unsigned long GnFrameCounter;
void GPU_FlipStory(unsigned long *gfx);
void do_gfx_debug_mode(unsigned long *otstart);
int GPU_FlipNoIdle();
void GPU_EndScene();
void GPU_UsePolygonBuffers(unsigned long *pBuffers,int nPBSize);
void GPU_UseOrderingTables(unsigned long *pBuffers,int nOTSize);

#endif
