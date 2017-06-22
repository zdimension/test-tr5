#include "GPU.H"
/*
 * Offset 0x5DF68
 * C:\Projects2\Tomb5\SPEC_PSX\GPU.C (line 101)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ GPU_UseOrderingTables(unsigned long *pBuffers /*reg $6*/, int nOTSize /*reg $5*/);
/*
 * Offset 0x5DFB0
 * C:\Projects2\Tomb5\SPEC_PSX\GPU.C (line 113)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ GPU_UsePolygonBuffers(unsigned long *pBuffers /*reg $4*/, int nPBSize /*reg $5*/);
/*
 * Offset 0x5DFDC
 * C:\Projects2\Tomb5\SPEC_PSX\GPU.C (line 135)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ GPU_EndScene()
{ // line 3, offset 0x5dfdc
    int nPolys; // register $2
    static int nWorstPolys; // offset 0x10
} // line 55, offset 0x5e078
/*
 * Offset 0x5E078
 * C:\Projects2\Tomb5\SPEC_PSX\GPU.C (line 211)
 * Stack frame base $29, size 32
 */
int /*reg $31*/ GPU_FlipNoIdle();
/*
 * Offset 0x5E1B4
 * C:\Projects2\Tomb5\SPEC_PSX\GPU.C (line 640)
 * Stack frame base $29, size 96
 */
void /*reg $31*/ do_gfx_debug_mode(unsigned long *otstart /*reg $4*/)
{ // line 1, offset 0x5e1b4
    unsigned long *data; // register $4
    unsigned char code; // register $5
    int ntri; // register $6
    int nquad; // register $16
    { // line 35, offset 0x5e268
    } // line 37, offset 0x5e268
    { // line 48, offset 0x5e2a0
    } // line 50, offset 0x5e2a0
    { // line 60, offset 0x5e2d4
        unsigned short x0; // register $8
        unsigned short y0; // register $9
        unsigned short x1; // register $10
        unsigned short y1; // register $11
        unsigned short x2; // register $5
        unsigned short y2; // register $7
        struct LINE_F2 *line2; // register $2
        { // line 66, offset 0x5e2dc
        } // line 68, offset 0x5e2dc
        { // line 108, offset 0x5e370
        } // line 133, offset 0x5e3c4
    } // line 134, offset 0x5e3c4
    { // line 141, offset 0x5e3e8
        char txbuf[64]; // stack offset -72
    } // line 146, offset 0x5e438
} // line 148, offset 0x5e438
/*
 * Offset 0x5E448
 * C:\Projects2\Tomb5\SPEC_PSX\GPU.C (line 940)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ GPU_FlipStory(unsigned long *gfx /*reg $17*/)
{ // line 1, offset 0x5e448
    struct RECT r; // stack offset -24
    struct RECT *fuckmyanalpassage; // register $2
} // line 32, offset 0x5e528
extern unsigned long GnFrameCounter; // offset 0xA1780
extern unsigned long GnLastFrameCount; // offset 0xA1784
extern struct PSXTEXTSTRUCT *psxtextinfo;
extern struct PSXSPRITESTRUCT *psxspriteinfo;
extern int rgbscaleme; // offset 0xA1794
extern int gfx_debugging_mode; // offset 0xA1798
extern struct DB_STRUCT db;
extern struct MMTEXTURE *RoomTextInfo;
extern unsigned long GadwOrderingTables_V2[512];
static int LnFlipFrame; // offset 0xA3BEC
extern unsigned long GadwOrderingTables[5128];
extern unsigned long GadwPolygonBuffers[52260];