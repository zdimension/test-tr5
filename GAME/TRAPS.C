#include "TRAPS.H"
/*
 * Offset 0x58A1C
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 129)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ OpenTrapDoor(struct ITEM_INFO *item /*reg $6*/)
{ // line 1, offset 0x58a1c
    long x; // register $2
    long z; // register $4
    struct room_info *r; // register $5
    struct FLOOR_INFO *floor; // register $3
    unsigned short pitsky; // register $7
} // line 36, offset 0x58b68
/*
 * Offset 0x58B68
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 167)
 * Stack frame base $29, size 104
 */
void /*reg $31*/ CloseTrapDoor(struct ITEM_INFO *item /*reg $9*/)
{ // line 1, offset 0x58b68
    long x; // register $2
    long z; // register $2
    struct room_info *r; // register $7
    unsigned short pitsky; // register $8
    struct FLOOR_INFO *floor; // register $3
    { // line 14, offset 0x58bdc
    } // line 14, offset 0x58bdc
    { // line 30, offset 0x58c64
    } // line 30, offset 0x58c64
    { // line 46, offset 0x58cdc
        char buf[80]; // stack offset -88
    } // line 54, offset 0x58cf0
} // line 59, offset 0x58d08
/*
 * Offset 0x58D08
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 232)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ TrapDoorControl(short item_number /*reg $4*/)
{ // line 1, offset 0x58d08
    struct ITEM_INFO *item; // register $16
} // line 34, offset 0x58e80
/*
 * Offset 0x58E80
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 269)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ FloorTrapDoorCollision(short item_num /*reg $18*/, struct ITEM_INFO *l /*reg $19*/, struct COLL_INFO *coll /*reg $20*/)
{ // line 1, offset 0x58e80
    struct ITEM_INFO *item; // register $17
    { // line 15, offset 0x58f78
        long y; // register $3
    } // line 36, offset 0x59080
} // line 50, offset 0x5912c
/*
 * Offset 0x5912C
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 321)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ CeilingTrapDoorCollision(short item_num /*reg $21*/, struct ITEM_INFO *l /*reg $18*/, struct COLL_INFO *coll /*reg $23*/)
{ // line 1, offset 0x5912c
    struct ITEM_INFO *item; // register $16
    short pass2; // register $19
} // line 45, offset 0x593f8
/*
 * Offset 0x593F8
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 368)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ TrapDoorCollision(short item_num /*reg $4*/, struct ITEM_INFO *l /*reg $8*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x593f8
    struct ITEM_INFO *item; // register $5
} // line 6, offset 0x5947c
/*
 * Offset 0x5947C
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 381)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ FallingBlockCollision(short item_number /*reg $4*/, struct ITEM_INFO *l /*reg $5*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x5947c
    struct ITEM_INFO *item; // register $16
    long x; // register $3
    long z; // register $5
    long tx; // register $2
    long tz; // register $4
} // line 23, offset 0x59558
/*
 * Offset 0x59558
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 406)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ FallingBlock(short item_number /*reg $5*/)
{ // line 1, offset 0x59558
    struct ITEM_INFO *item; // register $16
} // line 32, offset 0x59664
/*
 * Offset 0x59674
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 440)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ FallingBlockFloor(struct ITEM_INFO *item /*reg $4*/, long x /*reg $5*/, long y /*reg $6*/, long z /*reg $7*/, long *height /*sp 16*/)
{ // line 1, offset 0x59674
    long tx; // register $2
    long tz; // register $3
} // line 15, offset 0x596d4
/*
 * Offset 0x596D4
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 457)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ FallingBlockCeiling(struct ITEM_INFO *item /*reg $4*/, long x /*reg $5*/, long y /*reg $6*/, long z /*reg $7*/, long *height /*sp 16*/)
{ // line 1, offset 0x596d4
    long tx; // register $2
    long tz; // register $3
} // line 11, offset 0x59720
/*
 * Offset 0x59720
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 474)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ FallingCeiling(short item_number /*reg $17*/)
{ // line 1, offset 0x59720
    struct ITEM_INFO *item; // register $16
    short room_number; // stack offset -24
} // line 42, offset 0x59874
/*
 * Offset 0x5988C
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 522)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ DartEmitterControl(short item_num /*reg $4*/)
{ // line 1, offset 0x5988c
    struct ITEM_INFO *item; // register $17
    struct ITEM_INFO *dart; // register $16
    short dart_num; // register $19
    long x; // register $18
    long z; // register $22
    long lp; // register $17
    long xand; // register $20
    long zand; // register $21
    { // line 64, offset 0x59a30
        long rnd; // register $2
    } // line 66, offset 0x59a5c
} // line 73, offset 0x59aa8
/*
 * Offset 0x59AD4
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 601)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ DartsControl(short item_num /*reg $21*/)
{ // line 1, offset 0x59ad4
    struct ITEM_INFO *item; // register $16
    struct FLOOR_INFO *floor; // register $17
    short room_number; // stack offset -40
    long lp; // register $17
    long ox; // register $18
    long oz; // register $19
    long speed; // register $4
} // line 42, offset 0x59cf4
/*
 * Offset 0x59D18
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 645)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ FlameEmitterControl(short item_number /*reg $4*/)
{ // line 1, offset 0x59d18
    struct ITEM_INFO *item; // register $17
    unsigned long distance; // register $16
    long x; // register $19
    long z; // register $18
} // line 111, offset 0x5a1bc
/*
 * Offset 0x5A1BC
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 760)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ FlameEmitter2Control(short item_number /*reg $4*/)
{ // line 1, offset 0x5a1bc
    struct ITEM_INFO *item; // register $16
    long r; // register $17
    long g; // register $4
} // line 83, offset 0x5a38c
/*
 * Offset 0x5A38C
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 865)
 * Stack frame base $29, size 112
 */
void /*reg $31*/ FlameEmitter3Control(short item_number /*reg $4*/)
{ // line 1, offset 0x5a38c
    struct ITEM_INFO *item; // register $18
    struct PHD_3DPOS pos; // stack offset -80
    long x; // register $16
    long z; // register $17
    long distance; // register $3
    long r; // register $2
    long g; // register $3
    { // line 12, offset 0x5a3e8
        struct PHD_VECTOR s; // stack offset -56
        struct PHD_VECTOR d; // stack offset -40
        short g; // register $20
        short b; // register $19
        { // line 43, offset 0x5a5b0
            struct ITEM_INFO *item2; // register $16
        } // line 63, offset 0x5a740
    } // line 67, offset 0x5a758
} // line 134, offset 0x5aa4c
/*
 * Offset 0x5AA6C
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 1003)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ FlameControl(short fx_number /*reg $18*/)
{ // line 1, offset 0x5aa6c
    struct FX_INFO *fx; // register $16
    long y; // register $17
    long r; // register $17
    long g; // register $4
} // line 53, offset 0x5ace4
/*
 * Offset 0x5ACE4
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 1058)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ LaraBurn()
{ // line 2, offset 0x5ace4
    struct FX_INFO *fx; // register $3
} // line 15, offset 0x5ad68
/*
 * Offset 0x5AD78
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 1076)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ LavaBurn(struct ITEM_INFO *item /*reg $16*/)
{ // line 1, offset 0x5ad78
    short room_number; // stack offset -16
} // line 20, offset 0x5adf8
/*
 * Offset 0x5AE08
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 1108)
 * Stack frame base $29, size 80
 */
void /*reg $31*/ ControlRollingBall(short item_number /*sp -60*/)
{ // line 1, offset 0x5ae08
    struct ITEM_INFO *item; // register $17
    short room_number; // stack offset -64
    short velnotadjusted; // register $4
    unsigned short destyrot; // register $3
    unsigned short tyrot; // register $16
    long h; // register $21
    long fx; // register $18
    long fz; // register $19
    long fh; // register $22
    long fhf; // register $19
    long bz; // register $20
    long bh; // stack offset -56
    long bhf; // register $18
    long rx; // register $23
    long rh; // stack offset -52
    long rhf; // register $20
    long lx; // register $30
    long lh; // stack offset -48
    long lhf; // register $5
} // line 247, offset 0x5b720
/*
 * Offset 0x5B750
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 1357)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ RollingBallCollision(short item_number /*reg $17*/, struct ITEM_INFO *laraitem /*reg $18*/, struct COLL_INFO *coll /*reg $19*/)
{ // line 1, offset 0x5b750
    struct ITEM_INFO *item; // register $16
} // line 23, offset 0x5b838
/*
 * Offset 0x5B854
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 1383)
 * Stack frame base $29, size 72
 */
void /*reg $31*/ DrawScaledSpike(struct ITEM_INFO *item /*reg $16*/)
{ // line 1, offset 0x5b854
    struct object_info *object; // register $4
    struct room_info *r; // register $3
    struct VECTOR v; // stack offset -56
    short **meshpp; // register $18
    int clip; // register $17
    short *frmptr[2]; // stack offset -40
    int rate; // stack offset -24
    { // line 76, offset 0x5b9e4
        struct CVECTOR c; // stack offset -32
        long scale; // register $4
    } // line 92, offset 0x5ba2c
} // line 103, offset 0x5ba68
/*
 * Offset 0x5BA80
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 1498)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ TwoBlockPlatformFloor(struct ITEM_INFO *item /*reg $16*/, long x /*reg $5*/, long y /*reg $18*/, long z /*reg $7*/, long *height /*sp 16*/);
/*
 * Offset 0x5BB08
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 1514)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ TwoBlockPlatformCeiling(struct ITEM_INFO *item /*reg $16*/, long x /*reg $5*/, long y /*reg $17*/, long z /*reg $7*/, long *height /*sp 16*/);
/*
 * Offset 0x5BB80
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 1526)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ OnTwoBlockPlatform(struct ITEM_INFO *item /*reg $4*/, long x /*reg $5*/, long z /*reg $6*/)
{ // line 1, offset 0x5bb80
    int tx; // register $8
    int tz; // register $7
} // line 22, offset 0x5bc7c
/*
 * Offset 0x5BC7C
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 1550)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ ControlTwoBlockPlatform(short item_number /*reg $17*/)
{ // line 1, offset 0x5bc7c
    struct ITEM_INFO *item; // register $16
    long height; // stack offset -20
    { // line 17, offset 0x5bcf4
        short room_number; // stack offset -24
    } // line 23, offset 0x5bd38
} // line 57, offset 0x5be50
/*
 * Offset 0x5BE64
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 1623)
 * Stack frame base $29, size 40
 */
int /*reg $31*/ TestBoundsCollideTeethSpikes(struct ITEM_INFO *item /*reg $7*/)
{ // line 1, offset 0x5be64
    long x; // register $16
    long y; // register $17
    long z; // register $18
    short *larabounds; // register $4
    long minx; // register $5
    long maxx; // register $8
    long minz; // register $6
    long maxz; // register $3
    long size; // register $19
} // line 44, offset 0x5c000
/*
 * Offset 0x5C000
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 1669)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ ControlScaledSpike(short item_number /*reg $4*/)
{ // line 1, offset 0x5c000
    struct ITEM_INFO *item; // register $18
    short room_number; // stack offset -40
    int num; // register $22
    int dx; // register $19
    int dy; // register $20
    int dz; // register $17
    short *larabounds; // register $17
    short *bounds; // register $16
    short yt; // register $7
    short yb; // register $21
    short iyb1; // register $5
    short iyb2; // register $3
    { // line 12, offset 0x5c064
        short hit; // register $2
    } // line 102, offset 0x5c464
} // line 136, offset 0x5c56c
/*
 * Offset 0x5C56C
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 1808)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ ControlRaisingBlock(short item_number /*reg $4*/)
{ // line 1, offset 0x5c56c
    struct ITEM_INFO *item; // register $16
} // line 71, offset 0x5c8bc
/*
 * Offset 0x5C8BC
 * C:\Projects2\Tomb5\GAME\TRAPS.C (line 1886)
 * Stack frame base $29, size 96
 */
void /*reg $31*/ ControlExplosion(short item_number /*reg $21*/)
{ // line 1, offset 0x5c8bc
    struct ITEM_INFO *item; // register $18
    struct PHD_VECTOR pos; // stack offset -64
    struct ITEM_INFO *target; // register $16
    struct ITEM_INFO **itemlist; // register $17
    struct MESH_INFO **staticlist; // register $19
    struct MESH_INFO *staticp; // register $16
    char *cptr; // register $16
    long dx; // register $17
    long dy; // register $16
    long dz; // register $3
    long lp; // register $19
    long uw; // register $20
    { // line 130, offset 0x5cf74
        struct ITEM_INFO *switem; // register $2
        short TriggerItems[8]; // stack offset -48
        short NumTrigs; // register $6
    } // line 139, offset 0x5cfe0
} // line 144, offset 0x5cff0
extern short SPxzoffs[8];
extern short SPyoffs[8];
static struct PHD_VECTOR FloorTrapDoorPos; // offset 0xA16B8
static short FloorTrapDoorBounds[12]; // offset 0xA16C4
static struct PHD_VECTOR CeilingTrapDoorPos; // offset 0xA16DC
static short CeilingTrapDoorBounds[12]; // offset 0xA16E8
extern unsigned char Flame3xzoffs[16][2];
extern short SPDETyoffs[8];