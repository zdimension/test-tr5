#ifndef SPEC_PSX_GPU_H
#define SPEC_PSX_GPU_H

struct DR_ENV {
    unsigned long tag; // size=0, offset=0
    unsigned long code[15]; // size=60, offset=4
};

struct DRAWENV {
    struct RECT clip; // size=8, offset=0
    short ofs[2]; // size=4, offset=8
    struct RECT tw; // size=8, offset=12
    unsigned short tpage; // size=0, offset=20
    unsigned char dtd; // size=0, offset=22
    unsigned char dfe; // size=0, offset=23
    unsigned char isbg; // size=0, offset=24
    unsigned char r0; // size=0, offset=25
    unsigned char g0; // size=0, offset=26
    unsigned char b0; // size=0, offset=27
    struct DR_ENV dr_env; // size=64, offset=28
};

struct DISPENV {
    struct RECT disp; // size=8, offset=0
    struct RECT screen; // size=8, offset=8
    unsigned char isinter; // size=0, offset=16
    unsigned char isrgb24; // size=0, offset=17
    unsigned char pad0; // size=0, offset=18
    unsigned char pad1; // size=0, offset=19
};

struct TEXTURE {
    unsigned char u0; // size=0, offset=0
    unsigned char v0; // size=0, offset=1
    unsigned short clut; // size=0, offset=2
    unsigned char u1; // size=0, offset=4
    unsigned char v1; // size=0, offset=5
    unsigned short tpage; // size=0, offset=6
    unsigned char u2; // size=0, offset=8
    unsigned char v2; // size=0, offset=9
    unsigned char id[2]; // size=2, offset=10
    unsigned char u3; // size=0, offset=12
    unsigned char v3; // size=0, offset=13
    unsigned short wclut; // size=0, offset=14
};

struct LINE_F2 {
    unsigned long tag; // size=0, offset=0
    unsigned char r0; // size=0, offset=4
    unsigned char g0; // size=0, offset=5
    unsigned char b0; // size=0, offset=6
    unsigned char code; // size=0, offset=7
    short x0; // size=0, offset=8
    short y0; // size=0, offset=10
    short x1; // size=0, offset=12
    short y1; // size=0, offset=14
};

struct LINE_G2 {
    unsigned long tag; // size=0, offset=0
    unsigned char r0; // size=0, offset=4
    unsigned char g0; // size=0, offset=5
    unsigned char b0; // size=0, offset=6
    unsigned char code; // size=0, offset=7
    short x0; // size=0, offset=8
    short y0; // size=0, offset=10
    unsigned char r1; // size=0, offset=12
    unsigned char g1; // size=0, offset=13
    unsigned char b1; // size=0, offset=14
    unsigned char p1; // size=0, offset=15
    short x1; // size=0, offset=16
    short y1; // size=0, offset=18
};

struct DB_STRUCT {
    int current_buffer; // size=0, offset=0
    unsigned long *ot; // size=0, offset=4
    char *polyptr; // size=0, offset=8
    char *curpolybuf; // size=0, offset=12
    char *polybuf_limit; // size=0, offset=16
    int nOTSize; // size=0, offset=20
    int nPBSize; // size=0, offset=24
    unsigned long *order_table[2]; // size=8, offset=28
    unsigned long *poly_buffer[2]; // size=8, offset=36
    unsigned long *pickup_ot; // size=0, offset=44
    unsigned long *pickup_order_table[2]; // size=8, offset=48
    struct DRAWENV draw[2]; // size=184, offset=56
    struct DISPENV disp[2]; // size=40, offset=240
};

struct PSXTEXTSTRUCT {
    unsigned long u0v0clut; // size=0, offset=0
    unsigned long u1v1tpage; // size=0, offset=4
    unsigned long u2v2pad; // size=0, offset=8
    unsigned long u3v3pad; // size=0, offset=12
};

struct PSXSPRITESTRUCT {
    short x1; // size=0, offset=0
    short y1; // size=0, offset=2
    short x2; // size=0, offset=4
    short y2; // size=0, offset=6
    unsigned short clut; // size=0, offset=8
    unsigned short tpage; // size=0, offset=10
    unsigned char u1; // size=0, offset=12
    unsigned char v1; // size=0, offset=13
    unsigned char u2; // size=0, offset=14
    unsigned char v2; // size=0, offset=15
};

struct MMTEXTURE {
    struct TEXTURE t[3]; // size=48, offset=0
};

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
