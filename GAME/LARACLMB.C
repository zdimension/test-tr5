#include "LARACLMB.H"
/*
 * Offset 0x45434
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 77)
 * Stack frame base $29, size 40
 */
long /*reg $31*/ LaraCheckForLetGo(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $16*/)
{ // line 1, offset 0x45434
    short room_number; // stack offset -24
} // line 29, offset 0x45530
/*
 * Offset 0x45530
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 108)
 * Stack frame base $29, size 64
 */
int /*reg $31*/ LaraTestClimbUpPos(struct ITEM_INFO *item /*reg $23*/, int front /*reg $5*/, int right /*reg $6*/, int *shift /*sp 12*/, int *ledge /*sp 16*/)
{ // line 1, offset 0x45530
    struct FLOOR_INFO *floor; // register $30
    short room_number; // stack offset -48
    int angle; // register $3
    int x; // register $19
    int y; // register $21
    int z; // register $20
    int height; // register $18
    int ceiling; // register $3
    int xfront; // register $16
    int zfront; // register $18
} // line 111, offset 0x457f0
/*
 * Offset 0x457F0
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 240)
 * Stack frame base $29, size 72
 */
int /*reg $31*/ LaraTestClimb(int x /*reg $23*/, int y /*reg $20*/, int z /*reg $30*/, int xfront /*reg $17*/, int zfront /*sp 16*/, int item_height /*sp 20*/, int item_room /*sp 24*/, int *shift /*sp 28*/)
{ // line 1, offset 0x457f0
    int hang; // stack offset -48
    struct FLOOR_INFO *floor; // register $19
    short room_number; // stack offset -56
    int height; // register $18
    int ceiling; // register $3
} // line 143, offset 0x45abc
/*
 * Offset 0x45ABC
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 401)
 * Stack frame base $29, size 72
 */
int /*reg $31*/ LaraClimbLeftCornerTest(struct ITEM_INFO *item /*reg $18*/, struct COLL_INFO *coll /*sp 4*/)
{ // line 1, offset 0x45abc
    int x; // register $17
    int z; // register $16
    int shift; // stack offset -48
    int flag; // register $22
    int oldx; // register $23
    int oldz; // register $20
    short oldy; // register $30
    short angle; // register $19
} // line 105, offset 0x45de4
/*
 * Offset 0x45DE4
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 523)
 * Stack frame base $29, size 72
 */
int /*reg $31*/ LaraClimbRightCornerTest(struct ITEM_INFO *item /*reg $18*/, struct COLL_INFO *coll /*sp 4*/)
{ // line 1, offset 0x45de4
    int x; // register $17
    int z; // register $16
    int shift; // stack offset -48
    int flag; // register $22
    int oldx; // register $23
    int oldz; // register $20
    short oldy; // register $30
    short angle; // register $19
} // line 102, offset 0x46100
/*
 * Offset 0x46100
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 644)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ LaraDoClimbLeftRight(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/, int result /*reg $6*/, int shift /*reg $7*/)
{ // line 1, offset 0x46100
    { // line 30, offset 0x461b8
        int flag; // register $2
    } // line 78, offset 0x46284
} // line 95, offset 0x462e0
/*
 * Offset 0x462F8
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 746)
 * Stack frame base $29, size 40
 */
int /*reg $31*/ LaraTestClimbPos(struct ITEM_INFO *item /*reg $9*/, int front /*reg $5*/, int right /*reg $4*/, int origin /*reg $7*/, int height /*sp 16*/, int *shift /*sp 20*/)
{ // line 1, offset 0x462f8
    int angle; // register $8
    int x; // register $6
    int z; // register $8
    int xfront; // register $11
    int zfront; // register $10
} // line 37, offset 0x463f0
/*
 * Offset 0x463F0
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 791)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_as_climbstnc(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x464E8
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 823)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ lara_col_climbstnc(struct ITEM_INFO *item /*reg $18*/, struct COLL_INFO *coll /*reg $19*/)
{ // line 1, offset 0x464e8
    int result_r; // register $17
    int result_l; // register $5
    int shift_r; // stack offset -40
    int shift_l; // stack offset -32
    int ledge_r; // stack offset -36
    int ledge_l; // stack offset -28
} // line 109, offset 0x467c8
/*
 * Offset 0x467E4
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 935)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_climbleft(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x46834
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 946)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ lara_col_climbleft(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/)
{ // line 1, offset 0x46834
    int shift; // stack offset -24
} // line 12, offset 0x468a4
/*
 * Offset 0x468B8
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 961)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_climbright(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x46908
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 972)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ lara_col_climbright(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/)
{ // line 1, offset 0x46908
    int shift; // stack offset -24
} // line 12, offset 0x46970
/*
 * Offset 0x46984
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 987)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_climbing(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x469B0
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 994)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ lara_col_climbing(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/)
{ // line 1, offset 0x469b0
    int result_r; // register $17
    int result_l; // register $18
    int shift_r; // stack offset -40
    int shift_l; // stack offset -32
    int ledge_r; // stack offset -36
    int ledge_l; // stack offset -28
    int yshift; // register $19
    int frame; // register $4
} // line 69, offset 0x46b88
/*
 * Offset 0x46BA4
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 1066)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_climbdown(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x46BD0
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 1073)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ lara_col_climbdown(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $18*/)
{ // line 1, offset 0x46bd0
    int result_r; // register $16
    int result_l; // register $5
    int shift_r; // stack offset -32
    int shift_l; // stack offset -28
    int yshift; // register $19
    int frame; // register $4
} // line 69, offset 0x46ddc
/*
 * Offset 0x46DF8
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 1145)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_climbend(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x46E30
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 1153)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_col_climbend(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/)
{

}
/*
 * Offset 0x46E38
 * C:\Projects2\Tomb5\GAME\LARACLMB.C (line 1176)
 * Stack frame base $29, size 40
 */
short /*reg $31*/ GetClimbTrigger(long x /*reg $18*/, long y /*reg $17*/, long z /*reg $16*/, short room_number /*sp -24*/)
{ // line 1, offset 0x46e38
    short *data; // register $4
} // line 28, offset 0x46ee4
static short LeftIntRightExtTab[4]; // offset 0xA0B7C
static short LeftExtRightIntTab[4]; // offset 0xA0B84