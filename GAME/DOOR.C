#include "DOOR.H"
/*
 * Offset 0x2AA88
 * C:\Projects2\Tomb5\GAME\DOOR.C (line 122)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ ShutThatDoor(struct DOORPOS_DATA *d /*reg $4*/, struct DOOR_DATA *dd /*reg $8*/)
{ // line 1, offset 0x2aa88
    short *dptr; // register $5
    { // line 15, offset 0x2aad0
        struct creature_info *cinfo; // register $6
        short slot; // register $2
    } // line 25, offset 0x2ab1c
} // line 60, offset 0x2ab8c
/*
 * Offset 0x2AB8C
 * C:\Projects2\Tomb5\GAME\DOOR.C (line 186)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ OpenThatDoor(struct DOORPOS_DATA *d /*reg $16*/, struct DOOR_DATA *dd /*reg $17*/)
{ // line 1, offset 0x2ab8c
    short *dptr; // register $3
    { // line 15, offset 0x2abfc
        struct creature_info *cinfo; // register $3
        short slot; // register $2
    } // line 22, offset 0x2ac2c
    { // line 28, offset 0x2ac3c
        short v; // register $4
    } // line 94, offset 0x2ad60
} // line 95, offset 0x2ad74
/*
 * Offset 0x2AD74
 * C:\Projects2\Tomb5\GAME\DOOR.C (line 283)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ DoorControl(short item_number /*reg $4*/)
{ // line 1, offset 0x2ad74
    struct ITEM_INFO *item; // register $17
    struct DOOR_DATA *door; // register $16
    { // line 11, offset 0x2adcc
    } // line 24, offset 0x2ae24
} // line 144, offset 0x2b138
/*
 * Offset 0x2B150
 * C:\Projects2\Tomb5\GAME\DOOR.C (line 430)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ DoorCollision(short item_num /*reg $18*/, struct ITEM_INFO *l /*reg $17*/, struct COLL_INFO *coll /*reg $20*/)
{ // line 1, offset 0x2b150
    struct ITEM_INFO *item; // register $16
} // line 108, offset 0x2b4e4
/*
 * Offset 0x2B508
 * C:\Projects2\Tomb5\GAME\DOOR.C (line 540)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ PushPullKickDoorControl(short item_number /*reg $4*/)
{ // line 1, offset 0x2b508
    struct ITEM_INFO *item; // register $17
    struct DOOR_DATA *door; // register $16
} // line 15, offset 0x2b5a0
/*
 * Offset 0x2B5A0
 * C:\Projects2\Tomb5\GAME\DOOR.C (line 557)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ PushPullKickDoorCollision(short item_num /*reg $18*/, struct ITEM_INFO *l /*reg $17*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x2b5a0
    struct ITEM_INFO *item; // register $16
    { // line 12, offset 0x2b680
        int pull; // register $20
        { // line 22, offset 0x2b6bc
            int flag; // register $19
        } // line 66, offset 0x2b780
    } // line 83, offset 0x2b804
} // line 88, offset 0x2b854
/*
 * Offset 0x2B854
 * C:\Projects2\Tomb5\GAME\DOOR.C (line 647)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ DoubleDoorCollision(short item_num /*reg $17*/, struct ITEM_INFO *l /*reg $18*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x2b854
    struct ITEM_INFO *item; // register $16
} // line 42, offset 0x2ba38
/*
 * Offset 0x2BA38
 * C:\Projects2\Tomb5\GAME\DOOR.C (line 691)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ UnderwaterDoorCollision(short item_num /*reg $16*/, struct ITEM_INFO *l /*reg $18*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x2ba38
    struct ITEM_INFO *item; // register $17
} // line 45, offset 0x2bc28
/*
 * Offset 0x2BC28
 * C:\Projects2\Tomb5\GAME\DOOR.C (line 741)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ SequenceDoorControl(short item_number /*reg $4*/)
{ // line 1, offset 0x2bc28
    struct ITEM_INFO *item; // register $17
    struct DOOR_DATA *door; // register $16
} // line 49, offset 0x2bde8
/*
 * Offset 0x2BDE8
 * C:\Projects2\Tomb5\GAME\DOOR.C (line 792)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ ProcessClosedDoors()
{ // line 2, offset 0x2bde8
    long lp; // register $18
    short room_number; // register $16
} // line 41, offset 0x2bfa0
static struct PHD_VECTOR DoubleDoorPos; // offset 0xA0780
static struct PHD_VECTOR PullDoorPos; // offset 0xA078C
static struct PHD_VECTOR PushDoorPos; // offset 0xA0798
static struct PHD_VECTOR KickDoorPos; // offset 0xA07A4
static struct PHD_VECTOR UnderwaterDoorPos; // offset 0xA07B0
static struct PHD_VECTOR CrowbarDoorPos; // offset 0xA07BC
static short PushPullKickDoorBounds[12]; // offset 0xA07C8
static short UnderwaterDoorBounds[12]; // offset 0xA07E0
static short CrowbarDoorBounds[12]; // offset 0xA07F8
extern long ClosedDoors[32];
extern char LiftDoor; // offset 0xA0890