#include "LARAMISC.H"
/*
 * Offset 0x4A684
 * C:\Projects2\Tomb5\GAME\LARAMISC.C (line 294)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ LaraInitialiseMeshes()
{ // line 2, offset 0x4a684
    int i; // register $5
} // line 28, offset 0x4a790
/*
 * Offset 0x4A790
 * C:\Projects2\Tomb5\GAME\LARAMISC.C (line 356)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ LaraCheat(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x4A838
 * C:\Projects2\Tomb5\GAME\LARAMISC.C (line 419)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ LaraControl(short item_number /*reg $4*/)
{ // line 2, offset 0x4a838
    long oldx; // register $23
    long oldy; // register $30
    long oldz; // stack offset -44
    struct ITEM_INFO *item; // register $16
    int wh; // register $19
    int wd; // register $20
    int hfw; // register $18
    int room_water_state; // register $21
    short room_number; // stack offset -48
} // line 417, offset 0x4b2d8
/*
 * Offset 0x4B308
 * C:\Projects2\Tomb5\GAME\LARAMISC.C (line 1010)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ InitialiseLaraLoad(short item_num /*reg $4*/);
/*
 * Offset 0x4B340
 * C:\Projects2\Tomb5\GAME\LARAMISC.C (line 1019)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ InitialiseLaraAnims(struct ITEM_INFO *item /*reg $5*/);
/*
 * Offset 0x4B3D8
 * C:\Projects2\Tomb5\GAME\LARAMISC.C (line 1041)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ DelAlignLaraToRope(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x4B408
 * C:\Projects2\Tomb5\GAME\LARAMISC.C (line 1047)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ GetLaraDeadlyBounds()
{ // line 2, offset 0x4b408
    short *bounds; // register $16
    short tbounds[6]; // stack offset -24
} // line 29, offset 0x4b4f8
extern char *states[131];
extern char *quadrant_names[4];
extern char *gunstates[6];
extern char *waterstates[5];
extern char *guntypes[9];
extern char *coll_typess[8];
extern char *htypes[4];
static struct COLL_INFO *coll; // offset 0xA0B8C
extern short SubsuitAir; // offset 0xA122E
extern struct COLL_INFO mycoll;
extern short cheat_hit_points; // offset 0xA3828