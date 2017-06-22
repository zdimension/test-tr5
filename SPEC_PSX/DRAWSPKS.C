#include "DRAWSPKS.H"
/*
 * Offset 0x62320
 * C:\Projects2\Tomb5\SPEC_PSX\DRAWSPKS.C (line 551)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ S_DrawDarts(struct ITEM_INFO *item /*reg $16*/)
{ // line 1, offset 0x62320
    struct LINE_G2 *lineg2; // register $5
    long x; // register $7
    long y; // register $2
    long z; // register $4
    long speed; // register $4
    short *scrxy; // register $10
    long *scrz; // register $9
    short *TempMesh; // register $6
} // line 63, offset 0x625fc
extern long TorchWibble[8];
extern struct MATRIX3D CamGTE;
extern struct MATRIX3D LightPos;