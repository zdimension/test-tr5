#include "OBJECTS.H"
/*
 * Offset 0x4EAB4
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 96)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ EarthQuake(short item_number /*reg $17*/)
{ // line 1, offset 0x4eab4
    short earth_item; // register $4
    int pitch; // register $6
    struct ITEM_INFO *item; // register $16
} // line 88, offset 0x4ed9c
/*
 * Offset 0x4EDB0
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 186)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ SmashObject(short item_number /*reg $17*/)
{ // line 1, offset 0x4edb0
    struct room_info *r; // register $5
    struct FLOOR_INFO *floor; // register $4
    struct ITEM_INFO *item; // register $16
} // line 26, offset 0x4eef8
/*
 * Offset 0x4EEF8
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 215)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ SmashObjectControl(short item_number /*reg $4*/)
{ // line 1, offset 0x4eef8
} // line 6, offset 0x4ef1c
/*
 * Offset 0x4EF1C
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 223)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ BridgeFlatFloor(struct ITEM_INFO *item /*reg $4*/, long x /*reg $5*/, long y /*reg $6*/, long z /*reg $7*/, long *height /*sp 16*/);
/*
 * Offset 0x4EF58
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 233)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ BridgeFlatCeiling(struct ITEM_INFO *item /*reg $4*/, long x /*reg $5*/, long y /*reg $6*/, long z /*reg $7*/, long *height /*sp 16*/);
/*
 * Offset 0x4EF80
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 240)
 * Stack frame base $29, size 0
 */
long /*reg $31*/ GetOffset(struct ITEM_INFO *item /*reg $4*/, long x /*reg $5*/, long z /*reg $6*/);
/*
 * Offset 0x4EFCC
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 253)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ BridgeTilt1Floor(struct ITEM_INFO *item /*reg $17*/, long x /*reg $5*/, long y /*reg $16*/, long z /*reg $7*/, long *height /*sp 16*/)
{ // line 1, offset 0x4efcc
    long level; // register $3
} // line 11, offset 0x4f038
/*
 * Offset 0x4F038
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 266)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ BridgeTilt1Ceiling(struct ITEM_INFO *item /*reg $17*/, long x /*reg $5*/, long y /*reg $16*/, long z /*reg $7*/, long *height /*sp 16*/)
{ // line 1, offset 0x4f038
    long level; // register $3
} // line 7, offset 0x4f090
/*
 * Offset 0x4F090
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 275)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ BridgeTilt2Floor(struct ITEM_INFO *item /*reg $17*/, long x /*reg $5*/, long y /*reg $16*/, long z /*reg $7*/, long *height /*sp 16*/)
{ // line 1, offset 0x4f090
    long level; // register $3
} // line 11, offset 0x4f0fc
/*
 * Offset 0x4F0FC
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 288)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ BridgeTilt2Ceiling(struct ITEM_INFO *item /*reg $17*/, long x /*reg $5*/, long y /*reg $16*/, long z /*reg $7*/, long *height /*sp 16*/)
{ // line 1, offset 0x4f0fc
    long level; // register $3
} // line 7, offset 0x4f154
/*
 * Offset 0x4F154
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 365)
 * Stack frame base $29, size 80
 */
void /*reg $31*/ ControlAnimatingSlots(short item_number /*reg $16*/)
{ // line 1, offset 0x4f154
    struct ITEM_INFO *item; // register $19
    struct creature_info *c; // register $4
    long f; // register $5
    { // line 10, offset 0x4f1ac
        struct PHD_VECTOR pos; // stack offset -64
        short roomnum; // stack offset -48
    } // line 20, offset 0x4f1fc
    { // line 50, offset 0x4f31c
        short fe; // register $3
    } // line 66, offset 0x4f3ec
    { // line 72, offset 0x4f42c
        struct PHD_VECTOR pos; // stack offset -40
    } // line 76, offset 0x4f460
} // line 125, offset 0x4f680
/*
 * Offset 0x4F69C
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 504)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ PoleCollision(short item_num /*reg $18*/, struct ITEM_INFO *l /*reg $16*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x4f69c
    struct ITEM_INFO *item; // register $17
    { // line 12, offset 0x4f74c
        short roty; // register $19
    } // line 36, offset 0x4f800
    { // line 51, offset 0x4f88c
        short roty; // register $18
    } // line 72, offset 0x4f928
} // line 87, offset 0x4f9a4
/*
 * Offset 0x4F9A4
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 593)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ ControlTriggerTriggerer(short item_number /*reg $4*/)
{ // line 1, offset 0x4f9a4
    struct ITEM_INFO *item; // register $17
    short *data; // register $16
} // line 49, offset 0x4faa8
/*
 * Offset 0x4FABC
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 652)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ AnimateWaterfalls()
{ // line 2, offset 0x4fabc
    struct PSXTEXTI *Twaterfall; // register $4
    long i; // register $8
    long speed1; // register $6
    long speed2; // register $11
} // line 30, offset 0x4fbc4
/*
 * Offset 0x4FBC4
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 734)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ ControlWaterfall(short item_number /*reg $4*/)
{ // line 1, offset 0x4fbc4
    struct ITEM_INFO *item; // register $16
} // line 18, offset 0x4fc8c
/*
 * Offset 0x4FC8C
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 911)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ TightRopeCollision(short item_num /*reg $18*/, struct ITEM_INFO *l /*reg $17*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x4fc8c
    struct ITEM_INFO *item; // register $16
    { // line 43, offset 0x4fe64
        long dx; // register $2
        long dz; // register $3
    } // line 50, offset 0x4fea8
} // line 52, offset 0x4fec4
/*
 * Offset 0x4FEC4
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 974)
 * Stack frame base $29, size 72
 */
void /*reg $31*/ ParallelBarsCollision(short item_num /*reg $18*/, struct ITEM_INFO *l /*reg $16*/, struct COLL_INFO *coll /*reg $20*/)
{ // line 1, offset 0x4fec4
    struct ITEM_INFO *item; // register $17
    struct PHD_VECTOR pos; // stack offset -56
    struct PHD_VECTOR pos2; // stack offset -40
    short Pass1; // register $19
} // line 61, offset 0x50114
/*
 * Offset 0x50114
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 1037)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ ControlXRayMachine(short item_number /*reg $19*/)
{ // line 1, offset 0x50114
    struct ITEM_INFO *item; // register $17
    { // line 48, offset 0x50298
        long num; // register $16
    } // line 57, offset 0x502f4
    { // line 68, offset 0x50310
        struct room_info *r; // register $4
        struct MESH_INFO *mesh; // register $16
        long j; // register $18
    } // line 86, offset 0x503f4
} // line 95, offset 0x50438
/*
 * Offset 0x50454
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 1134)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ CutsceneRopeControl(short item_number /*reg $4*/)
{ // line 1, offset 0x50454
    struct ITEM_INFO *item; // register $16
    struct PHD_VECTOR pos1; // stack offset -40
    struct PHD_VECTOR pos2; // stack offset -24
    long dx; // register $2
    long dy; // register $5
    long dz; // register $4
} // line 30, offset 0x50594
/*
 * Offset 0x50594
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 1183)
 * Stack frame base $29, size 88
 */
void /*reg $31*/ DrawBaddieGunFlash(struct ITEM_INFO *item /*reg $19*/)
{ // line 1, offset 0x50594
    struct MATRIX3D m; // stack offset -72
    short node[2]; // stack offset -40
    short num; // register $16
    short bite[2]; // stack offset -32
    int RGB1; // register $18
    int RGB2; // register $17
    int RGB3; // register $16
    int shade; // register $2
} // line 34, offset 0x5073c
/*
 * Offset 0x50758
 * C:\Projects2\Tomb5\GAME\OBJECTS.C (line 1261)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ HybridCollision(short item_num /*reg $4*/, struct ITEM_INFO *laraitem /*reg $5*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x50758
    struct ITEM_INFO *item; // register $8
} // line 7, offset 0x507cc
static struct PHD_VECTOR PolePos; // offset 0xA1238
static struct PHD_VECTOR PolePosR; // offset 0xA1244
static short PoleBounds[12]; // offset 0xA1250
extern int AnimatingWaterfallsVOffset; // offset 0xA1268
static short TightRopeBounds[12]; // offset 0xA126C
static struct PHD_VECTOR TightRopePos; // offset 0xA1284
static short ParallelBarsBounds[12]; // offset 0xA1290
extern struct BITE_INFO EnemyBites[9];