#include "LARASWIM.H"
/*
 * Offset 0x4B4F8
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 71)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ LaraTestWaterDepth(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/)
{ // line 1, offset 0x4b4f8
    int wd; // register $3
    struct FLOOR_INFO *floor; // register $18
    short room_number; // stack offset -24
} // line 34, offset 0x4b608
/*
 * Offset 0x4B608
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 109)
 * Stack frame base $29, size 344
 */
void /*reg $31*/ LaraSwimCollision(struct ITEM_INFO *item /*reg $19*/, struct COLL_INFO *coll /*reg $20*/)
{ // line 1, offset 0x4b608
    int height; // register $18
    short oxr; // register $22
    short oyr; // stack offset -48
    short hit; // register $21
    long ox; // register $23
    long oy; // register $30
    long oz; // stack offset -44
    struct COLL_INFO coll2; // stack offset -320
    struct COLL_INFO coll3; // stack offset -184
    { // line 126, offset 0x4ba48
        long pitch; // register $2
    } // line 129, offset 0x4ba78
} // line 140, offset 0x4bac4
/*
 * Offset 0x4BAF4
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 251)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ SwimTurn(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x4BBDC
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 274)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ SwimTurnSubsuit(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x4BD20
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 303)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ UpdateSubsuitAngles()
{ // line 2, offset 0x4bd20
    short vel; // register $4
    { // line 57, offset 0x4bf70
        short vol; // register $2
    } // line 65, offset 0x4bfa4
} // line 66, offset 0x4bfb4
/*
 * Offset 0x4BFB4
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 376)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ LaraUnderWater(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $18*/);
/*
 * Offset 0x4C3A8
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 475)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ lara_as_swimcheat(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x4C548
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 517)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_as_swim(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x4C634
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 548)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_as_glide(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x4C730
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 582)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_as_tread(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x4C854
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 619)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_dive(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x4C884
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 626)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_uwdeath(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x4C8F8
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 644)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_waterroll(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x4C900
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 658)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_col_swim(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x4C920
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 664)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_col_glide(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x4C940
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 669)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_col_tread(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x4C960
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 675)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_col_dive(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x4C980
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 681)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_uwdeath(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/)
{ // line 1, offset 0x4c980
    int wh; // register $4
} // line 11, offset 0x4ca18
/*
 * Offset 0x4CA18
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 694)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_col_waterroll(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x4CA38
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 700)
 * Stack frame base $29, size 48
 */
long /*reg $31*/ GetWaterDepth(long x /*reg $18*/, long y /*reg $20*/, long z /*reg $19*/, short room_number /*sp -32*/)
{ // line 1, offset 0x4ca38
    int wh; // register $16
    struct room_info *r; // register $16
    struct FLOOR_INFO *floor; // register $17
    short data; // register $4
    int x_floor; // register $5
    int y_floor; // register $4
} // line 87, offset 0x4cd34
/*
 * Offset 0x4CD34
 * C:\Projects2\Tomb5\GAME\LARASWIM.C (line 794)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ LaraWaterCurrent(struct COLL_INFO *coll /*reg $19*/)
{ // line 1, offset 0x4cd34
    struct PHD_VECTOR target; // stack offset -40
    struct ITEM_INFO *item; // register $17
    { // line 12, offset 0x4cd70
        long shifter; // register $4
        long absvel; // register $2
    } // line 42, offset 0x4ce68
    { // line 45, offset 0x4ce70
        long angle; // register $2
        long dx; // register $4
        long dz; // register $3
        long speed; // register $6
        long sinkval; // register $16
    } // line 63, offset 0x4cf6c
} // line 105, offset 0x4d0e0
extern char SubHitCount; // offset 0xA1230
extern struct SUBSUIT_INFO subsuit;