#include "PICKUP.H"
/*
 * Offset 0x51004
 * C:\Projects2\Tomb5\GAME\PICKUP.C (line 199)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ PuzzleDone(struct ITEM_INFO *item /*reg $17*/, short item_num /*reg $16*/)
{ // line 1, offset 0x51004
    struct ITEM_INFO *litem; // register $16
    int lp; // register $18
} // line 47, offset 0x51200
/*
 * Offset 0x51200
 * C:\Projects2\Tomb5\GAME\PICKUP.C (line 248)
 * Stack frame base $29, size 40
 */
short * /*reg $31*/ FindPlinth(struct ITEM_INFO *item /*reg $18*/)
{ // line 1, offset 0x51200
    int i; // register $17
    short *p; // register $7
    short item_num; // register $5
    struct room_info *r; // register $19
    struct MESH_INFO *mesh; // register $16
    { // line 16, offset 0x51290
        short *o; // register $4
    } // line 27, offset 0x51324
    { // line 39, offset 0x5136c
        struct ITEM_INFO *plinth; // register $4
    } // line 54, offset 0x513fc
} // line 61, offset 0x51450
/*
 * Offset 0x51450
 * C:\Projects2\Tomb5\GAME\PICKUP.C (line 315)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ AnimatingPickUp(short item_number /*reg $17*/)
{ // line 1, offset 0x51450
    struct ITEM_INFO *item; // register $16
    short room_number; // stack offset -24
} // line 34, offset 0x515ac
/*
 * Offset 0x515AC
 * C:\Projects2\Tomb5\GAME\PICKUP.C (line 351)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ RegeneratePickups()
{ // line 2, offset 0x515ac
    struct ITEM_INFO *item; // register $4
    short objnum; // register $3
    short lp; // register $3
    short *ammo; // register $2
} // line 37, offset 0x516c8
/*
 * Offset 0x516C8
 * C:\Projects2\Tomb5\GAME\PICKUP.C (line 390)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ PickUpCollision(short item_num /*reg $19*/, struct ITEM_INFO *l /*reg $18*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x516c8
    short rotx; // register $23
    short roty; // register $22
    short rotz; // register $30
    struct ITEM_INFO *item; // register $17
    { // line 42, offset 0x5187c
        int flag; // register $21
        short *bounds; // register $5
    } // line 263, offset 0x51c3c
    { // line 301, offset 0x51ddc
        int ime; // register $16
        struct ITEM_INFO *itemme; // register $2
    } // line 310, offset 0x51e38
} // line 423, offset 0x52158
/*
 * Offset 0x52188
 * C:\Projects2\Tomb5\GAME\PICKUP.C (line 816)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ KeyHoleCollision(short item_num /*reg $18*/, struct ITEM_INFO *l /*reg $19*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x52188
    struct ITEM_INFO *item; // register $16
    { // line 20, offset 0x522ac
        int key; // register $20
        int hole; // register $21
    } // line 77, offset 0x52474
} // line 85, offset 0x524a0
/*
 * Offset 0x524C8
 * C:\Projects2\Tomb5\GAME\PICKUP.C (line 903)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ PuzzleDoneCollision(short item_num /*reg $4*/, struct ITEM_INFO *l /*reg $5*/, struct COLL_INFO *coll /*reg $6*/);
/*
 * Offset 0x52520
 * C:\Projects2\Tomb5\GAME\PICKUP.C (line 911)
 * Stack frame base $29, size 88
 */
void /*reg $31*/ PuzzleHoleCollision(short item_num /*reg $20*/, struct ITEM_INFO *l /*reg $16*/, struct COLL_INFO *coll /*reg $18*/)
{ // line 1, offset 0x52520
    int PuzzleType; // register $22
    struct ITEM_INFO *item; // register $17
    int hole; // register $21
    { // line 29, offset 0x52670
        short *bounds; // register $18
        short yrot; // register $23
        { // line 70, offset 0x52774
            struct PHD_VECTOR pos; // stack offset -72
            int puzzle; // register $5
            { // line 78, offset 0x527c4
                long angle; // register $2
                struct PHD_VECTOR pos; // stack offset -56
            } // line 99, offset 0x52840
        } // line 190, offset 0x52a8c
    } // line 200, offset 0x52ad8
} // line 230, offset 0x52be4
/*
 * Offset 0x52C14
 * C:\Projects2\Tomb5\GAME\PICKUP.C (line 1150)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ KeyTrigger(short item_num /*reg $4*/)
{ // line 1, offset 0x52c14
    struct ITEM_INFO *item; // register $4
    { // line 7, offset 0x52c80
        int oldkey; // register $5
    } // line 15, offset 0x52cb8
} // line 18, offset 0x52cc0
/*
 * Offset 0x52CC0
 * C:\Projects2\Tomb5\GAME\PICKUP.C (line 1174)
 * Stack frame base $29, size 24
 */
int /*reg $31*/ PickupTrigger(short item_num /*reg $5*/)
{ // line 1, offset 0x52cc0
    struct ITEM_INFO *item; // register $4
} // line 19, offset 0x52d54
/*
 * Offset 0x52D54
 * C:\Projects2\Tomb5\GAME\PICKUP.C (line 1219)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ SearchObjectControl(short item_number /*reg $18*/)
{ // line 1, offset 0x52d54
    struct ITEM_INFO *item; // register $16
    short ObjNum; // register $17
    short frame; // register $7
    short flip; // register $6
} // line 89, offset 0x53080
/*
 * Offset 0x53080
 * C:\Projects2\Tomb5\GAME\PICKUP.C (line 1313)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ SearchObjectCollision(short item_num /*reg $17*/, struct ITEM_INFO *l /*reg $19*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x53080
    struct ITEM_INFO *item; // register $16
    short ObjNum; // register $20
    { // line 16, offset 0x53184
        short *bounds; // register $6
    } // line 67, offset 0x53350
} // line 76, offset 0x5339c
/*
 * Offset 0x5339C
 * C:\Projects2\Tomb5\GAME\PICKUP.C (line 1391)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ CollectCarriedItems(struct ITEM_INFO *item /*reg $19*/)
{ // line 1, offset 0x5339c
    struct ITEM_INFO *pickup; // register $16
    short pickup_number; // register $17
} // line 19, offset 0x53428
/*
 * Offset 0x53428
 * C:\Projects2\Tomb5\GAME\PICKUP.C (line 1423)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ MonitorScreenCollision(short item_num /*reg $18*/, struct ITEM_INFO *l /*reg $17*/, struct COLL_INFO *coll /*reg $20*/)
{ // line 1, offset 0x53428
    struct ITEM_INFO *item; // register $16
    { // line 14, offset 0x53544
        short *bounds; // register $2
    } // line 45, offset 0x53660
} // line 51, offset 0x536a0
static short PickUpBounds[12]; // offset 0xA1338
static struct PHD_VECTOR PickUpPosition; // offset 0xA1350
static short HiddenPickUpBounds[12]; // offset 0xA135C
static struct PHD_VECTOR HiddenPickUpPosition; // offset 0xA1374
static short CrowbarPickUpBounds[12]; // offset 0xA1380
static struct PHD_VECTOR CrowbarPickUpPosition; // offset 0xA1398
static short JobyCrowPickUpBounds[12]; // offset 0xA13A4
static struct PHD_VECTOR JobyCrowPickUpPosition; // offset 0xA13BC
static short PlinthPickUpBounds[12]; // offset 0xA13C8
static struct PHD_VECTOR PlinthPickUpPosition; // offset 0xA13E0
static short PickUpBoundsUW[12]; // offset 0xA13EC
static struct PHD_VECTOR PickUpPositionUW; // offset 0xA1404
static short KeyHoleBounds[12]; // offset 0xA1410
static struct PHD_VECTOR KeyHolePosition; // offset 0xA1428
static short PuzzleBounds[12]; // offset 0xA1434
static short SOBounds[12]; // offset 0xA144C
static struct PHD_VECTOR SOPos; // offset 0xA1464
extern short SearchCollectFrames[4];
extern short SearchAnims[4];
extern short SearchOffsets[4];
static short MSBounds[12]; // offset 0xA1488
static struct PHD_VECTOR MSPos; // offset 0xA14A0
extern unsigned char NumRPickups; // offset 0xA390C
extern unsigned char RPickups[16];
extern struct PHD_VECTOR OldPickupPos;