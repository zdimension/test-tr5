#include "LARAFLAR.H"
/*
 * Offset 0x49708
 * C:\Projects2\Tomb5\GAME\LARAFLAR.C (line 71)
 * Stack frame base $29, size 64
 */
int /*reg $31*/ DoFlareLight(struct PHD_VECTOR *pos /*reg $16*/, int flare_age /*reg $19*/)
{ // line 1, offset 0x49708
    int x; // register $20
    int y; // register $21
    int z; // register $22
    int random; // register $18
    long r; // register $10
    long g; // register $9
    long b; // register $8
    long falloff; // register $7
} // line 75, offset 0x49984
/*
 * Offset 0x49984
 * C:\Projects2\Tomb5\GAME\LARAFLAR.C (line 148)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ DoFlareInHand(int flare_age /*reg $16*/)
{ // line 1, offset 0x49984
    struct PHD_VECTOR pos; // stack offset -24
} // line 44, offset 0x49a8c
/*
 * Offset 0x49A8C
 * C:\Projects2\Tomb5\GAME\LARAFLAR.C (line 201)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ DrawFlareInAir(struct ITEM_INFO *item /*reg $16*/);
/*
 * Offset 0x49BBC
 * C:\Projects2\Tomb5\GAME\LARAFLAR.C (line 292)
 * Stack frame base $29, size 80
 */
void /*reg $31*/ CreateFlare(short object /*reg $20*/, int thrown /*reg $21*/)
{ // line 1, offset 0x49bbc
    short flare_item; // register $18
    { // line 8, offset 0x49bfc
        struct PHD_VECTOR pos; // stack offset -56
        struct FLOOR_INFO *floor; // register $16
        short room_number; // stack offset -40
        int collision; // register $19
        struct ITEM_INFO *flare; // register $17
        struct ITEM_INFO **itemlist; // register $16
        struct MESH_INFO **meshlist; // register $16
    } // line 96, offset 0x49eb0
} // line 97, offset 0x49ed4
/*
 * Offset 0x49ED4
 * C:\Projects2\Tomb5\GAME\LARAFLAR.C (line 392)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ set_flare_arm(int frame /*reg $4*/)
{ // line 1, offset 0x49ed4
    int anim_base; // register $6
} // line 17, offset 0x49f74
/*
 * Offset 0x49F74
 * C:\Projects2\Tomb5\GAME\LARAFLAR.C (line 414)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ draw_flare()
{ // line 2, offset 0x49f74
    short ani; // register $16
} // line 63, offset 0x4a0f0
/*
 * Offset 0x4A108
 * C:\Projects2\Tomb5\GAME\LARAFLAR.C (line 482)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ undraw_flare()
{ // line 2, offset 0x4a108
    short ani; // register $17
    short ani2; // register $6
} // line 131, offset 0x4a378
/*
 * Offset 0x4A394
 * C:\Projects2\Tomb5\GAME\LARAFLAR.C (line 619)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ draw_flare_meshes();
/*
 * Offset 0x4A3BC
 * C:\Projects2\Tomb5\GAME\LARAFLAR.C (line 626)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ undraw_flare_meshes();
/*
 * Offset 0x4A3E4
 * C:\Projects2\Tomb5\GAME\LARAFLAR.C (line 636)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ ready_flare();
/*
 * Offset 0x4A418
 * C:\Projects2\Tomb5\GAME\LARAFLAR.C (line 648)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ FlareControl(short item_number /*reg $18*/)
{ // line 1, offset 0x4a418
    struct ITEM_INFO *flare; // register $16
    long x; // register $11
    long y; // register $6
    long z; // register $7
    long flare_age; // register $17
    long xv; // register $12
    long yv; // register $3
    long zv; // register $10
} // line 75, offset 0x4a66c