#include "DEBRIS.H"
/*
 * Offset 0x366B0
 * C:\Projects2\Tomb5\GAME\DEBRIS.C (line 86)
 * Stack frame base $29, size 0
 */
long /*reg $31*/ GetFreeDebris()
{ // line 2, offset 0x366b0
    struct DEBRIS_STRUCT *dptr; // register $5
    long lp; // register $6
    long eldestage; // register $7
    long eldestfree; // register $8
    long free; // register $4
} // line 38, offset 0x3675c
/*
 * Offset 0x3675C
 * C:\Projects2\Tomb5\GAME\DEBRIS.C (line 157)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ TriggerDebris(struct GAME_VECTOR *pos /*reg $20*/, void *TextInfo /*reg $21*/, short *Offsets /*reg $19*/, long *Vels /*reg $17*/, int rgb /*sp 16*/)
{ // line 1, offset 0x3675c
    struct DEBRIS_STRUCT *dptr; // register $16
} // line 87, offset 0x36a3c
/*
 * Offset 0x36A3C
 * C:\Projects2\Tomb5\GAME\DEBRIS.C (line 412)
 * Stack frame base $29, size 200
 */
void /*reg $31*/ ShatterObject(struct SHATTER_ITEM *ShatterItem /*sp 0*/, struct MESH_INFO *StaticMesh /*reg $5*/, short Num /*sp -100*/, short RoomNumber /*sp -96*/, int NoXZVel /*sp 16*/)
{ // line 1, offset 0x36a3c
    struct PSXTEXTI *textinfo; // register $8
    struct GAME_VECTOR Pos; // stack offset -176
    struct PHD_VECTOR TPos; // stack offset -160
    struct PHD_VECTOR VPos; // stack offset -144
    short *meshp; // register $6
    unsigned long *meshl; // register $30
    short *mesh; // register $3
    short *meshv; // register $16
    long nverts; // register $17
    long ntris; // stack offset -92
    long nquads; // stack offset -88
    long lp; // register $23
    short RotY; // register $23
    short *RotVerts; // register $25
    short *Offsets; // register $20
    long *Vels; // register $22
    long TotX; // register $18
    long TotY; // register $19
    long TotZ; // register $21
    short rgb; // stack offset -84
    short rnd; // stack offset -80
    short vsmall; // stack offset -76
    { // line 94, offset 0x36c24
        struct SVECTOR src; // stack offset -128
        struct PHD_VECTOR dest; // stack offset -120
        long flag; // stack offset -104
    } // line 99, offset 0x36c24
    { // line 160, offset 0x36d3c
        long face; // register $4
        unsigned short v1; // register $16
        unsigned short v2; // register $18
        unsigned short v3; // register $19
        unsigned short ti; // stack offset -72
        unsigned long textinfos; // stack offset -68
        unsigned short frgb; // register $21
    } // line 295, offset 0x370d0
    { // line 313, offset 0x37100
        long face; // register $2
        unsigned short v1; // register $16
        unsigned short v2; // register $18
        unsigned short v3; // register $19
        unsigned long textinfos; // stack offset -60
        unsigned short frgb; // register $21
    } // line 440, offset 0x37480
} // line 442, offset 0x374b8
extern long next_debris; // offset 0xA0AA8
extern short DebrisFlags; // offset 0xA0AA4
extern struct DEBRIS_STRUCT debris[128];