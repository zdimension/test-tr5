#include "LARAFIRE.H"
/*
 * Offset 0x46EE4
 * C:\Projects2\Tomb5\GAME\LARAFIRE.C (line 309)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ CheckForHoldingState(int state /*reg $4*/)
{ // line 1, offset 0x46ee4
    short *holds; // register $5
} // line 11, offset 0x46f28
/*
 * Offset 0x46F28
 * C:\Projects2\Tomb5\GAME\LARAFIRE.C (line 332)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ LaraGun()
{ // line 2, offset 0x46f28
    { // line 220, offset 0x47524
    } // line 235, offset 0x47568
} // line 294, offset 0x47714
/*
 * Offset 0x4772C
 * C:\Projects2\Tomb5\GAME\LARAFIRE.C (line 630)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ InitialiseNewWeapon();
/*
 * Offset 0x4789C
 * C:\Projects2\Tomb5\GAME\LARAFIRE.C (line 675)
 * Stack frame base $29, size 80
 */
void /*reg $31*/ LaraTargetInfo(struct WEAPON_INFO *winfo /*reg $19*/)
{ // line 1, offset 0x4789c
    struct ITEM_INFO *item; // register $16
    short ang[2]; // stack offset -64
    struct GAME_VECTOR src; // stack offset -56
    struct GAME_VECTOR target; // stack offset -40
} // line 62, offset 0x47b08
/*
 * Offset 0x47B28
 * C:\Projects2\Tomb5\GAME\LARAFIRE.C (line 744)
 * Stack frame base $29, size 112
 */
void /*reg $31*/ LaraGetNewTarget(struct WEAPON_INFO *winfo /*sp 0*/)
{ // line 1, offset 0x47b28
    struct ITEM_INFO *item; // register $16
    struct ITEM_INFO *bestitem; // stack offset -56
    short ang[2]; // stack offset -96
    short bestyrot; // stack offset -52
    struct GAME_VECTOR src; // stack offset -88
    struct GAME_VECTOR target; // stack offset -72
    struct creature_info *creature; // register $19
    int x; // register $6
    int y; // register $5
    int z; // register $4
    int slot; // register $23
    int dist; // register $17
    int maxdist; // register $18
    int maxdist2; // stack offset -48
    int bestdist; // register $20
    short targets; // stack offset -44
    { // line 101, offset 0x47e4c
        short match; // register $4
    } // line 204, offset 0x480d4
} // line 214, offset 0x48120
/*
 * Offset 0x48150
 * C:\Projects2\Tomb5\GAME\LARAFIRE.C (line 964)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ find_target_point(struct ITEM_INFO *item /*reg $16*/, struct GAME_VECTOR *target /*reg $17*/)
{ // line 1, offset 0x48150
    short *bounds; // register $2
    long x; // register $6
    long y; // register $13
    long z; // register $3
    long c; // register $7
    long s; // register $9
} // line 19, offset 0x4826c
/*
 * Offset 0x4826C
 * C:\Projects2\Tomb5\GAME\LARAFIRE.C (line 988)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ AimWeapon(struct WEAPON_INFO *winfo /*reg $4*/, struct lara_arm *arm /*reg $5*/)
{ // line 1, offset 0x4826c
    short curr; // register $3
    short speed; // register $6
    short destx; // register $7
    short desty; // register $4
} // line 48, offset 0x48328
/*
 * Offset 0x48328
 * C:\Projects2\Tomb5\GAME\LARAFIRE.C (line 1048)
 * Stack frame base $29, size 64
 */
int /*reg $31*/ FireWeapon(int weapon_type /*reg $16*/, struct ITEM_INFO *target /*reg $23*/, struct ITEM_INFO *src /*reg $21*/, short *angles /*reg $20*/)
{ // line 1, offset 0x48328
    int r; // register $7
    int i; // register $6
    int nums; // register $8
    int bestdist; // register $17
    int best; // register $19
    short *ammo; // register $3
    struct WEAPON_INFO *winfo; // register $18
    struct SPHERE *sptr; // register $16
    short room_number; // stack offset -48
} // line 133, offset 0x486e0
/*
 * Offset 0x486E0
 * C:\Projects2\Tomb5\GAME\LARAFIRE.C (line 1187)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ HitTarget(struct ITEM_INFO *item /*reg $16*/, struct GAME_VECTOR *hitpos /*reg $17*/, int damage /*reg $19*/, int grenade /*reg $20*/)
{ // line 1, offset 0x486e0
    struct object_info *obj; // register $18
} // line 30, offset 0x48898
/*
 * Offset 0x48898
 * C:\Projects2\Tomb5\GAME\LARAFIRE.C (line 1248)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ WeaponObject(int weapon_type /*reg $4*/);
/*
 * Offset 0x488F4
 * C:\Projects2\Tomb5\GAME\LARAFIRE.C (line 1273)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ WeaponObjectMesh(int weapon_type /*reg $4*/);
/*
 * Offset 0x48984
 * C:\Projects2\Tomb5\GAME\LARAFIRE.C (line 1304)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ DoProperDetection(short item_number /*reg $22*/, long x /*reg $19*/, long y /*reg $20*/, long z /*reg $21*/, long xv /*sp 16*/, long yv /*sp 20*/, long zv /*sp 24*/)
{ // line 1, offset 0x48984
    struct ITEM_INFO *item; // register $16
    short room_number; // stack offset -48
    long ceiling; // register $4
    long height; // register $5
    long oldonobj; // register $17
    long oldheight; // register $18
    long bs; // register $4
    long yang; // register $3
    { // line 61, offset 0x48b34
        long xs; // register $4
    } // line 84, offset 0x48bd0
} // line 476, offset 0x4965c
/*
 * Offset 0x4965C
 * C:\Projects2\Tomb5\GAME\LARAFIRE.C (line 1786)
 * Stack frame base $29, size 0
 */
short * /*reg $31*/ get_current_ammo_pointer(int num /*reg $4*/)
{ // line 2, offset 0x4965c
    short *ammo; // register $2
} // line 48, offset 0x49700
extern struct WEAPON_INFO weapons[9];
static short HoldStates[18]; // offset 0x93710
extern struct ITEM_INFO *LastTargets[8];
extern struct ITEM_INFO *TargetList[8];
extern struct PHD_3DPOS bum_view;
extern struct GAME_VECTOR bum_vsrc;
extern struct GAME_VECTOR bum_vdest;