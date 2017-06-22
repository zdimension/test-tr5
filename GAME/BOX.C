#include "BOX.H"
/*
 * Offset 0x216AC
 * C:\Projects2\Tomb5\GAME\BOX.C (line 106)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ StalkBox(struct ITEM_INFO *item /*reg $12*/, struct ITEM_INFO *enemy /*reg $11*/, short box_number /*reg $2*/)
{ // line 1, offset 0x216ac
    struct box_info *box; // register $4
    int baddie_quad; // register $4
    int box_quad; // register $5
    int enemy_quad; // register $3
    long x; // register $4
    long z; // register $10
    long xrange; // register $5
    long zrange; // register $6
} // line 46, offset 0x21800
/*
 * Offset 0x21800
 * C:\Projects2\Tomb5\GAME\BOX.C (line 155)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ InitialiseCreature(short item_number /*reg $4*/)
{ // line 1, offset 0x21800
    struct ITEM_INFO *item; // register $5
} // line 17, offset 0x218b0
/*
 * Offset 0x218B0
 * C:\Projects2\Tomb5\GAME\BOX.C (line 175)
 * Stack frame base $29, size 24
 */
int /*reg $31*/ CreatureActive(short item_number /*reg $5*/)
{ // line 1, offset 0x218b0
    struct ITEM_INFO *item; // register $16
} // line 18, offset 0x2194c
/*
 * Offset 0x2194C
 * C:\Projects2\Tomb5\GAME\BOX.C (line 196)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ CreatureAIInfo(struct ITEM_INFO *item /*reg $20*/, struct AI_info *info /*reg $22*/)
{ // line 1, offset 0x2194c
    struct room_info *r; // register $9
    long x; // register $16
    long y; // register $19
    long z; // register $17
    short angle; // register $4
    short *zone; // register $6
    struct object_info *object; // register $7
    struct ITEM_INFO *enemy; // register $18
} // line 118, offset 0x21db4
/*
 * Offset 0x21DDC
 * C:\Projects2\Tomb5\GAME\BOX.C (line 317)
 * Stack frame base $29, size 24
 */
int /*reg $31*/ SearchLOT(struct lot_info *LOT /*reg $10*/, int expansion /*reg $19*/)
{ // line 1, offset 0x21ddc
    int i; // register $6
    int index; // register $2
    int done; // register $24
    int change; // register $4
    int box_number; // register $9
    int overlap_flags; // register $6
    struct box_node *node; // register $13
    struct box_node *expand; // register $7
    struct box_info *box; // register $14
    short *zone; // register $16
    short search_zone; // register $18
} // line 140, offset 0x22034
/*
 * Offset 0x22034
 * C:\Projects2\Tomb5\GAME\BOX.C (line 460)
 * Stack frame base $29, size 24
 */
int /*reg $31*/ UpdateLOT(struct lot_info *LOT /*reg $4*/, int expansion /*reg $5*/)
{ // line 1, offset 0x22034
    struct box_node *expand; // register $7
} // line 34, offset 0x220f4
/*
 * Offset 0x220F4
 * C:\Projects2\Tomb5\GAME\BOX.C (line 503)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ TargetBox(struct lot_info *LOT /*reg $18*/, short box_number /*reg $5*/)
{ // line 1, offset 0x220f4
    struct box_info *box; // register $17
} // line 16, offset 0x221c4
/*
 * Offset 0x221C4
 * C:\Projects2\Tomb5\GAME\BOX.C (line 524)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ EscapeBox(struct ITEM_INFO *item /*reg $9*/, struct ITEM_INFO *enemy /*reg $8*/, short box_number /*reg $6*/)
{ // line 1, offset 0x221c4
    struct box_info *box; // register $4
    long x; // register $7
    long z; // register $6
} // line 20, offset 0x222a4
/*
 * Offset 0x222A4
 * C:\Projects2\Tomb5\GAME\BOX.C (line 547)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ ValidBox(struct ITEM_INFO *item /*reg $8*/, short zone_number /*reg $5*/, short box_number /*reg $6*/)
{ // line 1, offset 0x222a4
    struct box_info *box; // register $4
    struct creature_info *creature; // register $7
    short *zone; // register $4
} // line 26, offset 0x22398
/*
 * Offset 0x22398
 * C:\Projects2\Tomb5\GAME\BOX.C (line 580)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ GetCreatureMood(struct ITEM_INFO *item /*reg $21*/, struct AI_info *info /*reg $17*/, int violent /*reg $22*/)
{ // line 1, offset 0x22398
    enum mood_type mood; // register $20
    struct lot_info *LOT; // register $19
    struct ITEM_INFO *enemy; // register $18
} // line 127, offset 0x226bc
/*
 * Offset 0x226E4
 * C:\Projects2\Tomb5\GAME\BOX.C (line 709)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ CreatureMood(struct ITEM_INFO *item /*reg $21*/, struct AI_info *info /*reg $20*/, int violent /*reg $22*/)
{ // line 1, offset 0x226e4
    short box_number; // register $16
    struct lot_info *LOT; // register $17
    struct ITEM_INFO *enemy; // register $19
    { // line 132, offset 0x22a40
        short index; // register $3
        short box_no; // register $6
    } // line 149, offset 0x22ae4
} // line 151, offset 0x22ae4
/*
 * Offset 0x22B0C
 * C:\Projects2\Tomb5\GAME\BOX.C (line 862)
 * Stack frame base $29, size 40
 */
enum target_type /*reg $31*/ CalculateTarget(struct PHD_VECTOR *target /*reg $16*/, struct ITEM_INFO *item /*reg $17*/, struct lot_info *LOT /*reg $18*/)
{ // line 1, offset 0x22b0c
    int box_number; // register $24
    int prime_free; // register $7
    struct box_info *box; // register $12
    long left; // register $15
    long right; // register $14
    long top; // register $6
    long bottom; // register $13
    long box_left; // register $8
    long box_right; // register $9
    long box_top; // register $10
    long box_bottom; // register $11
} // line 282, offset 0x2304c
/*
 * Offset 0x2304C
 * C:\Projects2\Tomb5\GAME\BOX.C (line 1147)
 * Stack frame base $29, size 24
 */
int /*reg $31*/ CreatureCreature(short item_number /*reg $11*/)
{ // line 1, offset 0x2304c
    short link; // register $3
    long x; // register $10
    long z; // register $9
    long y_rot; // register $16
    long xdistance; // register $7
    long zdistance; // register $6
    long distance; // register $6
    long radius; // register $13
    struct room_info *r; // register $3
    struct ITEM_INFO *item; // register $8
} // line 53, offset 0x231cc
/*
 * Offset 0x231CC
 * C:\Projects2\Tomb5\GAME\BOX.C (line 1203)
 * Stack frame base $29, size 40
 */
int /*reg $31*/ BadFloor(long x /*reg $4*/, long y /*reg $18*/, long z /*reg $6*/, long box_height /*reg $17*/, long next_height /*sp 16*/, int room_number /*sp 20*/, struct lot_info *LOT /*sp 24*/)
{ // line 1, offset 0x231cc
    long height; // register $4
} // line 49, offset 0x232d4
/*
 * Offset 0x232D4
 * C:\Projects2\Tomb5\GAME\BOX.C (line 1255)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ CreatureDie(short item_number /*reg $17*/, int explode /*reg $5*/)
{ // line 1, offset 0x232d4
    struct ITEM_INFO *item; // register $16
} // line 40, offset 0x23448
/*
 * Offset 0x23448
 * C:\Projects2\Tomb5\GAME\BOX.C (line 1298)
 * Stack frame base $29, size 136
 */
int /*reg $31*/ CreatureAnimation(short item_number /*sp -84*/, short angle /*sp -80*/, short tilt /*sp -76*/)
{ // line 1, offset 0x23448
    long radius; // register $16
    long shift_x; // register $30
    long shift_z; // stack offset -72
    long top; // register $4
    long height; // register $19
    long box_height; // register $20
    long next_height; // register $22
    long ceiling; // register $5
    long x; // register $18
    long y; // stack offset -68
    long z; // register $20
    long pos_x; // register $21
    long pos_z; // stack offset -64
    long dy; // register $16
    struct PHD_VECTOR old; // stack offset -104
    struct ITEM_INFO *item; // register $17
    struct lot_info *LOT; // stack offset -60
    struct FLOOR_INFO *floor; // stack offset -56
    short *zone; // register $18
    short *bounds; // stack offset -52
    short room_number; // stack offset -88
    short next_box; // register $2
    short biff_angle; // register $3
} // line 396, offset 0x24130
/*
 * Offset 0x24130
 * C:\Projects2\Tomb5\GAME\BOX.C (line 1697)
 * Stack frame base $29, size 40
 */
short /*reg $31*/ CreatureTurn(struct ITEM_INFO *item /*reg $19*/, short maximum_turn /*reg $18*/)
{ // line 1, offset 0x24130
    long x; // register $16
    long z; // register $17
    short angle; // register $5
    long feelxplus; // register $25
    long feelzplus; // register $24
    long feelxminus; // register $17
    long feelzminus; // register $9
    long feelxmid; // register $14
    long feelzmid; // register $15
    long feelplus; // register $6
    long feelminus; // register $2
    long feelmid; // register $3
    struct room_info *r; // register $9
} // line 225, offset 0x24418
/*
 * Offset 0x24418
 * C:\Projects2\Tomb5\GAME\BOX.C (line 1924)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ CreatureTilt(struct ITEM_INFO *item /*reg $4*/, short angle /*reg $5*/);
/*
 * Offset 0x24484
 * C:\Projects2\Tomb5\GAME\BOX.C (line 1995)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ CreatureJoint(struct ITEM_INFO *item /*reg $4*/, short joint /*reg $5*/, short required /*reg $6*/)
{ // line 1, offset 0x24484
    short change; // register $6
} // line 26, offset 0x2451c
/*
 * Offset 0x24524
 * C:\Projects2\Tomb5\GAME\BOX.C (line 2023)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ CreatureFloat(short item_number /*reg $18*/)
{ // line 1, offset 0x24524
    long water_level; // register $17
    struct ITEM_INFO *item; // register $16
    short room_number; // stack offset -24
} // line 44, offset 0x2468c
/*
 * Offset 0x2468C
 * C:\Projects2\Tomb5\GAME\BOX.C (line 2070)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ CreatureUnderwater(struct ITEM_INFO *item /*reg $16*/, long depth /*reg $17*/)
{ // line 1, offset 0x2468c
    long water_level; // register $2
    long floorheight; // register $3
    short room_number; // stack offset -24
} // line 31, offset 0x24760
/*
 * Offset 0x24760
 * C:\Projects2\Tomb5\GAME\BOX.C (line 2105)
 * Stack frame base $29, size 56
 */
short /*reg $31*/ CreatureEffect(struct ITEM_INFO *item /*reg $16*/, struct BITE_INFO *bite /*reg $5*/, short *generate /*reg $17*/)
{ // line 1, offset 0x24760
    struct PHD_VECTOR pos; // stack offset -32
} // line 9, offset 0x247d4
/*
 * Offset 0x247D4
 * C:\Projects2\Tomb5\GAME\BOX.C (line 2117)
 * Stack frame base $29, size 64
 */
short /*reg $31*/ CreatureEffectT(struct ITEM_INFO *item /*reg $19*/, struct BITE_INFO *bite /*reg $5*/, short damage /*reg $6*/, short angle /*reg $7*/, short *generate /*sp 16*/)
{ // line 1, offset 0x247d4
    struct PHD_VECTOR pos; // stack offset -40
} // line 9, offset 0x24864
/*
 * Offset 0x24864
 * C:\Projects2\Tomb5\GAME\BOX.C (line 2129)
 * Stack frame base $29, size 56
 */
int /*reg $31*/ CreatureVault(short item_number /*reg $22*/, short angle /*reg $5*/, int vault /*reg $18*/, int shift /*reg $21*/)
{ // line 1, offset 0x24864
    struct ITEM_INFO *item; // register $16
    long y; // register $17
    long xx; // register $20
    long yy; // register $19
    long x_floor; // register $4
    long y_floor; // register $3
    short room_number; // register $23
} // line 90, offset 0x24a94
/*
 * Offset 0x24A94
 * C:\Projects2\Tomb5\GAME\BOX.C (line 2222)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ CreatureKill(struct ITEM_INFO *item /*reg $16*/, int kill_anim /*reg $5*/, int kill_state /*reg $6*/, short lara_anim /*reg $7*/);
/*
 * Offset 0x24C7C
 * C:\Projects2\Tomb5\GAME\BOX.C (line 2276)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ AlertAllGuards(short item_number /*reg $4*/)
{ // line 1, offset 0x24c7c
    int slot; // register $6
    struct creature_info *cinfo; // register $5
    struct ITEM_INFO *target; // register $2
    struct ITEM_INFO *item; // register $3
    short obj_number; // register $4
} // line 21, offset 0x24d20
/*
 * Offset 0x24D20
 * C:\Projects2\Tomb5\GAME\BOX.C (line 2300)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ AlertNearbyGuards(struct ITEM_INFO *item /*reg $8*/)
{ // line 1, offset 0x24d20
    int slot; // register $9
    struct creature_info *cinfo; // register $7
    struct ITEM_INFO *target; // register $6
    long x; // register $5
    long y; // register $4
    long z; // register $2
    long distance; // register $5
} // line 34, offset 0x24df0
/*
 * Offset 0x24DF0
 * C:\Projects2\Tomb5\GAME\BOX.C (line 2336)
 * Stack frame base $29, size 24
 */
short /*reg $31*/ AIGuard(struct creature_info *creature /*reg $16*/)
{ // line 1, offset 0x24df0
    int random; // register $3
} // line 31, offset 0x24ed8
/*
 * Offset 0x24ED8
 * C:\Projects2\Tomb5\GAME\BOX.C (line 2370)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ GetAITarget(struct creature_info *creature /*reg $18*/)
{ // line 1, offset 0x24ed8
    struct ITEM_INFO *item; // register $17
    struct ITEM_INFO *enemy; // register $16
    char ai_bits; // register $5
    short enemy_object; // register $7
} // line 158, offset 0x25380
/*
 * Offset 0x25380
 * C:\Projects2\Tomb5\GAME\BOX.C (line 2529)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ FindAITargetObject(struct creature_info *creature /*reg $13*/, short obj_num /*reg $25*/)
{ // line 1, offset 0x25380
    short i; // register $11
    struct room_info *r; // register $8
    short *zone; // register $7
    struct ITEM_INFO *item; // register $10
    struct AIOBJECT *target_item; // register $9
} // line 55, offset 0x255f8
/*
 * Offset 0x255F8
 * C:\Projects2\Tomb5\GAME\BOX.C (line 2587)
 * Stack frame base $29, size 0
 */
short /*reg $31*/ SameZone(struct creature_info *creature /*reg $4*/, struct ITEM_INFO *target_item /*reg $5*/)
{ // line 1, offset 0x255f8
    struct room_info *r; // register $11
    short *zone; // register $9
    struct ITEM_INFO *item; // register $8
} // line 39, offset 0x25738
/*
 * Offset 0x25738
 * C:\Projects2\Tomb5\GAME\BOX.C (line 2628)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ CreatureYRot(struct PHD_3DPOS *srcpos /*reg $4*/, short angle /*reg $5*/, short angadd /*reg $6*/);
/*
 * Offset 0x2579C
 * C:\Projects2\Tomb5\GAME\BOX.C (line 2639)
 * Stack frame base $29, size 56
 */
int /*reg $31*/ MoveCreature3DPos(struct PHD_3DPOS *srcpos /*reg $16*/, struct PHD_3DPOS *destpos /*reg $22*/, int velocity /*reg $21*/, short angdif /*reg $23*/, int angadd /*sp 16*/)
{ // line 1, offset 0x2579c
    int dist; // register $7
    int x; // register $18
    int y; // register $17
    int z; // register $19
} // line 38, offset 0x259bc
/*
 * Offset 0x259BC
 * C:\Projects2\Tomb5\GAME\BOX.C (line 2679)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ DropBaddyPickups(struct ITEM_INFO *item /*reg $18*/)
{ // line 1, offset 0x259bc
    short pickup_number; // register $17
    short room_number; // stack offset -32
    struct ITEM_INFO *pickup; // register $16
    { // line 10, offset 0x259e8
    } // line 10, offset 0x259e8
} // line 34, offset 0x25aac
extern int number_boxes; // offset 0xA2308
extern struct box_info *boxes;
extern unsigned short *overlap; // offset 0xA233C
extern short *ground_zone[5][2];
extern unsigned short testclip; // offset 0xA2340
extern unsigned short loops; // offset 0xA230C