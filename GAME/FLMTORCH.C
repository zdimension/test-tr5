#include "FLMTORCH.H"
/*
 * Offset 0x39E88
 * C:\Projects2\Tomb5\GAME\FLMTORCH.C (line 87)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ TriggerTorchFlame(short item_number /*reg $17*/, long Node /*reg $18*/)
{ // line 1, offset 0x39e88
    long size; // register $2
    struct SPARKS *sptr; // register $16
} // line 47, offset 0x3a068
/*
 * Offset 0x3A068
 * C:\Projects2\Tomb5\GAME\FLMTORCH.C (line 137)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ FireCollision(short item_num /*reg $18*/, struct ITEM_INFO *l /*reg $17*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x3a068
    struct ITEM_INFO *item; // register $16
    { // line 15, offset 0x3a160
        short rot; // register $19
    } // line 69, offset 0x3a2ac
} // line 92, offset 0x3a3cc
/*
 * Offset 0x3A3CC
 * C:\Projects2\Tomb5\GAME\FLMTORCH.C (line 233)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ DoFlameTorch()
{ // line 2, offset 0x3a3cc
    { // line 111, offset 0x3a724
        struct PHD_VECTOR pos; // stack offset -32
    } // line 127, offset 0x3a81c
} // line 128, offset 0x3a830
/*
 * Offset 0x3A830
 * C:\Projects2\Tomb5\GAME\FLMTORCH.C (line 364)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ GetFlameTorch();
/*
 * Offset 0x3A8F4
 * C:\Projects2\Tomb5\GAME\FLMTORCH.C (line 382)
 * Stack frame base $29, size 80
 */
void /*reg $31*/ FlameTorchControl(short item_number /*reg $19*/)
{ // line 1, offset 0x3a8f4
    struct ITEM_INFO **itemlist; // register $16
    struct MESH_INFO **meshlist; // register $2
    long x; // register $9
    long y; // register $6
    long z; // register $7
    long xv; // register $11
    long yv; // register $2
    long zv; // register $10
    struct ITEM_INFO *item; // register $18
    { // line 61, offset 0x3ab50
        struct PHD_3DPOS pos; // stack offset -48
        struct static_info *sinfo; // register $5
    } // line 70, offset 0x3aba8
} // line 86, offset 0x3ac70
static short FireBounds[12]; // offset 0xA0ACC
extern short torchroom; // offset 0xA0AE4