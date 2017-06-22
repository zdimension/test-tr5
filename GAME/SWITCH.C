#include "SWITCH.H"
/*
 * Offset 0x55DE4
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 277)
 * Stack frame base $29, size 24
 */
int /*reg $31*/ SwitchTrigger(short item_num /*reg $6*/, short timer /*reg $5*/)
{ // line 1, offset 0x55de4
    struct ITEM_INFO *item; // register $16
} // line 43, offset 0x55f4c
/*
 * Offset 0x55F4C
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 322)
 * Stack frame base $29, size 32
 */
int /*reg $31*/ GetSwitchTrigger(struct ITEM_INFO *item /*reg $16*/, short *ItemNos /*reg $17*/, long AttatchedToSwitch /*reg $6*/)
{ // line 1, offset 0x55f4c
    short *data; // register $5
    short num; // register $7
} // line 43, offset 0x56080
/*
 * Offset 0x56080
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 371)
 * Stack frame base $29, size 24
 */
int /*reg $31*/ GetKeyTrigger(struct ITEM_INFO *item /*reg $16*/)
{ // line 1, offset 0x56080
    short *data; // register $4
} // line 40, offset 0x561a8
/*
 * Offset 0x561A8
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 414)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ TestTriggersAtXYZ(long x /*reg $20*/, long y /*reg $19*/, long z /*reg $18*/, short room_number /*sp -32*/, int heavy /*sp 16*/, int flags /*sp 20*/)
{ // line 1, offset 0x561a8
} // line 7, offset 0x5623c
/*
 * Offset 0x5623C
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 423)
 * Stack frame base $29, size 88
 */
void /*reg $31*/ SwitchControl(short item_number /*reg $19*/)
{ // line 1, offset 0x5623c
    struct ITEM_INFO *item; // register $17
    { // line 6, offset 0x562a0
        struct PHD_VECTOR pos; // stack offset -72
        struct ITEM_INFO *switem; // register $16
        short TriggerItems[8]; // stack offset -56
        short NumTrigs; // register $2
        short room_number; // stack offset -40
    } // line 33, offset 0x563e4
} // line 51, offset 0x56470
/*
 * Offset 0x56470
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 492)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ SwitchCollision(short item_num /*reg $18*/, struct ITEM_INFO *l /*reg $17*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x56470
    struct ITEM_INFO *item; // register $16
    { // line 15, offset 0x56558
        short *bounds; // register $4
    } // line 131, offset 0x56874
} // line 141, offset 0x568a4
/*
 * Offset 0x568C0
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 646)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ SwitchCollision2(short item_num /*reg $19*/, struct ITEM_INFO *l /*reg $17*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x568c0
    struct ITEM_INFO *item; // register $16
} // line 41, offset 0x56a0c
/*
 * Offset 0x56A2C
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 695)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ UnderwaterSwitchCollision(short item_num /*reg $18*/, struct ITEM_INFO *l /*reg $17*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x56a2c
    struct ITEM_INFO *item; // register $16
    { // line 12, offset 0x56afc
        int flag; // register $19
    } // line 56, offset 0x56c78
} // line 57, offset 0x56c98
/*
 * Offset 0x56C98
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 760)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ PulleyCollision(short item_num /*reg $16*/, struct ITEM_INFO *l /*reg $18*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x56c98
    struct ITEM_INFO *item; // register $17
    { // line 12, offset 0x56d74
        short roty; // register $20
    } // line 43, offset 0x56e5c
} // line 48, offset 0x56e9c
/*
 * Offset 0x56E9C
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 816)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ TurnSwitchControl(short item_num /*reg $19*/)
{ // line 1, offset 0x56e9c
    struct ITEM_INFO *item; // register $17
    struct ITEM_INFO *l; // register $18
} // line 78, offset 0x57210
/*
 * Offset 0x57210
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 896)
 * Stack frame base $29, size 72
 */
void /*reg $31*/ TurnSwitchCollision(short item_num /*reg $16*/, struct ITEM_INFO *l /*reg $20*/, struct COLL_INFO *coll /*reg $21*/)
{ // line 1, offset 0x57210
    int flag; // register $17
    struct ITEM_INFO *item; // register $19
    { // line 61, offset 0x57504
        short Triggers[8]; // stack offset -48
    } // line 96, offset 0x57608
} // line 120, offset 0x576f4
/*
 * Offset 0x576F4
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 1024)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ RailSwitchCollision(short item_num /*reg $16*/, struct ITEM_INFO *l /*reg $17*/, struct COLL_INFO *coll /*reg $21*/)
{ // line 1, offset 0x576f4
    int flag; // register $19
    struct ITEM_INFO *item; // register $18
} // line 71, offset 0x57980
/*
 * Offset 0x57980
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 1103)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ JumpSwitchCollision(short item_num /*reg $18*/, struct ITEM_INFO *l /*reg $16*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x57980
    struct ITEM_INFO *item; // register $17
} // line 28, offset 0x57acc
/*
 * Offset 0x57ACC
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 1139)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ CrowbarSwitchCollision(short item_num /*reg $18*/, struct ITEM_INFO *l /*reg $16*/, struct COLL_INFO *coll /*reg $21*/)
{ // line 1, offset 0x57acc
    int flag; // register $19
    struct ITEM_INFO *item; // register $17
} // line 112, offset 0x57eb8
/*
 * Offset 0x57EB8
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 1259)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ FullBlockSwitchControl(short item_number /*reg $4*/)
{ // line 1, offset 0x57eb8
    struct ITEM_INFO *item; // register $6
} // line 25, offset 0x57fb8
/*
 * Offset 0x57FB8
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 1286)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ FullBlockSwitchCollision(short item_num /*reg $17*/, struct ITEM_INFO *l /*reg $18*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x57fb8
    struct ITEM_INFO *item; // register $16
} // line 50, offset 0x581d8
/*
 * Offset 0x581D8
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 1344)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ CogSwitchControl(short item_num /*reg $17*/)
{ // line 1, offset 0x581d8
    struct ITEM_INFO *item; // register $16
} // line 38, offset 0x58354
/*
 * Offset 0x58354
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 1384)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ CogSwitchCollision(short item_num /*reg $16*/, struct ITEM_INFO *l /*reg $20*/, struct COLL_INFO *coll /*reg $22*/)
{ // line 1, offset 0x58354
    short *data; // register $4
    struct DOOR_DATA *door; // register $21
    struct ITEM_INFO *door_item; // register $18
    struct ITEM_INFO *item; // register $17
} // line 71, offset 0x5864c
/*
 * Offset 0x58674
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 1463)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ CrowDoveSwitchControl(short item_number /*reg $4*/)
{ // line 1, offset 0x58674
    struct ITEM_INFO *item; // register $16
} // line 21, offset 0x5872c
/*
 * Offset 0x58740
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 1486)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ CrowDoveSwitchCollision(short item_num /*reg $17*/, struct ITEM_INFO *l /*reg $18*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x58740
    struct ITEM_INFO *item; // register $16
    { // line 13, offset 0x58830
        short roty; // register $20
    } // line 44, offset 0x58918
} // line 49, offset 0x58958
/*
 * Offset 0x58958
 * C:\Projects2\Tomb5\GAME\SWITCH.C (line 1537)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ ProcessExplodingSwitchType8(struct ITEM_INFO *item /*reg $17*/)
{ // line 1, offset 0x58958
    struct PHD_VECTOR pos; // stack offset -32
} // line 11, offset 0x58a1c
static short Switch2Bounds[12]; // offset 0xA14B4
static struct PHD_VECTOR Switch2Position; // offset 0xA14CC
static short TurnSwitchBoundsA[12]; // offset 0xA14D8
static struct PHD_VECTOR TurnSwitchPos; // offset 0xA14F0
static short TurnSwitchBoundsC[12]; // offset 0xA14FC
static struct PHD_VECTOR TurnSwitchPosA; // offset 0xA1514
static struct PHD_VECTOR CogSwitchPos; // offset 0xA1520
static short CogSwitchBounds[12]; // offset 0xA152C
static struct PHD_VECTOR RailSwitchPos; // offset 0xA1544
static short RailSwitchBounds[12]; // offset 0xA1550
static struct PHD_VECTOR RailSwitchPos2; // offset 0xA1568
static short RailSwitchBounds2[12]; // offset 0xA1574
static short JumpSwitchBounds[12]; // offset 0xA158C
static struct PHD_VECTOR JumpSwitchPos; // offset 0xA15A4
static struct PHD_VECTOR CrowbarPos; // offset 0xA15B0
static short CrowbarBounds[12]; // offset 0xA15BC
static struct PHD_VECTOR CrowbarPos2; // offset 0xA15D4
static short CrowbarBounds2[12]; // offset 0xA15E0
static short FullBlockSwitchBounds[12]; // offset 0xA15F8
static struct PHD_VECTOR FullBlockSwitchPos; // offset 0xA1610
static short PulleyBounds[12]; // offset 0xA161C
static struct PHD_VECTOR PulleyPos; // offset 0xA1634
static struct PHD_VECTOR CrowDovePos; // offset 0xA1640
static short UnderwaterSwitchBounds[12]; // offset 0xA164C
static short UnderwaterSwitchBounds2[12]; // offset 0xA1664
static struct PHD_VECTOR UnderwaterSwitchPos; // offset 0xA167C
static struct PHD_VECTOR UnderwaterSwitchPos2; // offset 0xA1688
static short SwitchBounds[12]; // offset 0xA1694
static struct PHD_VECTOR SwitchPos; // offset 0xA16AC
extern unsigned char CurrentSequence; // offset 0xA3A28
extern unsigned char Sequences[3];
extern unsigned char SequenceResults[3][3][3];
extern unsigned char SequenceUsed[6];