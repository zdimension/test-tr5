#include "LARA1GUN.H"
/*
 * Offset 0x42444
 * C:\Projects2\Tomb5\GAME\LARA1GUN.C (line 101)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ draw_shotgun_meshes(int weapon_type /*reg $4*/)
{ // line 2, offset 0x42444
} // line 7, offset 0x42498
/*
 * Offset 0x42498
 * C:\Projects2\Tomb5\GAME\LARA1GUN.C (line 113)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ undraw_shotgun_meshes(int weapon_type /*reg $4*/)
{ // line 2, offset 0x42498
} // line 7, offset 0x424e0
/*
 * Offset 0x424E0
 * C:\Projects2\Tomb5\GAME\LARA1GUN.C (line 125)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ ready_shotgun(int weapon_type /*reg $4*/);
/*
 * Offset 0x42558
 * C:\Projects2\Tomb5\GAME\LARA1GUN.C (line 141)
 * Stack frame base $29, size 72
 */
void /*reg $31*/ RifleHandler(int weapon_type /*reg $17*/)
{ // line 1, offset 0x42558
    struct WEAPON_INFO *winfo; // register $16
    { // line 79, offset 0x428ac
        struct PHD_VECTOR pos; // stack offset -40
    } // line 113, offset 0x429d0
} // line 115, offset 0x429f0
/*
 * Offset 0x429F0
 * C:\Projects2\Tomb5\GAME\LARA1GUN.C (line 262)
 * Stack frame base $29, size 112
 */
void /*reg $31*/ FireShotgun()
{ // line 2, offset 0x429f0
    struct PHD_VECTOR pos; // stack offset -72
    short angles[2]; // stack offset -56
    short dangles[2]; // stack offset -48
    int i; // register $16
    int r; // register $3
    int fired; // register $19
    int x; // register $19
    int y; // register $18
    int z; // register $17
    int lp; // register $16
    int scatter; // register $17
} // line 68, offset 0x42ca8
/*
 * Offset 0x42CA8
 * C:\Projects2\Tomb5\GAME\LARA1GUN.C (line 332)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ FireHK(int running /*reg $8*/)
{ // line 1, offset 0x42ca8
    short angles[2]; // stack offset -24
} // line 46, offset 0x42e18
/*
 * Offset 0x42E18
 * C:\Projects2\Tomb5\GAME\LARA1GUN.C (line 380)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ FireCrossbow(struct PHD_3DPOS *Start /*reg $18*/)
{ // line 1, offset 0x42e18
    short *ammo; // register $19
    { // line 15, offset 0x42e7c
        struct ITEM_INFO *item; // register $16
    } // line 44, offset 0x42f60
} // line 45, offset 0x42f60
/*
 * Offset 0x42F7C
 * C:\Projects2\Tomb5\GAME\LARA1GUN.C (line 427)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ CrossbowHitSwitchType78(struct ITEM_INFO *item /*reg $17*/, struct ITEM_INFO *target /*reg $18*/, int MustHitLastNode /*reg $6*/)
{ // line 1, offset 0x42f7c
    short TriggerItems[8]; // stack offset -40
    short NumTrigs; // register $17
    long dx; // register $5
    long dy; // register $4
    long dz; // register $2
    long num1; // register $8
    long i; // register $6
    long cs; // register $9
    long cd; // register $7
    struct SPHERE *ptr1; // register $16
    { // line 76, offset 0x430ac
        short room_number; // stack offset -24
    } // line 79, offset 0x430ac
} // line 108, offset 0x43224
/*
 * Offset 0x4323C
 * C:\Projects2\Tomb5\GAME\LARA1GUN.C (line 539)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ ControlCrossbow(short item_number /*reg $19*/)
{ // line 1, offset 0x4323c
    struct ITEM_INFO *item; // register $17
    struct ITEM_INFO *target; // register $16
    struct ITEM_INFO **itemlist; // register $18
    struct MESH_INFO **staticlist; // register $2
    char *cptr; // register $16
    short room_number; // stack offset -32
    long speed; // register $8
} // line 65, offset 0x43464
/*
 * Offset 0x43480
 * C:\Projects2\Tomb5\GAME\LARA1GUN.C (line 606)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ draw_shotgun(int weapon_type /*reg $18*/)
{ // line 1, offset 0x43480
    struct ITEM_INFO *item; // register $16
} // line 35, offset 0x436b0
/*
 * Offset 0x436B0
 * C:\Projects2\Tomb5\GAME\LARA1GUN.C (line 644)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ undraw_shotgun(int weapon_type /*reg $16*/)
{ // line 1, offset 0x436b0
    struct ITEM_INFO *item; // register $17
} // line 30, offset 0x43810
/*
 * Offset 0x43810
 * C:\Projects2\Tomb5\GAME\LARA1GUN.C (line 682)
 * Stack frame base $29, size 80
 */
void /*reg $31*/ AnimateShotgun(int weapon_type /*reg $19*/)
{ // line 1, offset 0x43810
    int running; // register $8
    struct ITEM_INFO *item; // register $17
    static int m16_firing; // offset 0x4
    { // line 16, offset 0x43858
        struct PHD_VECTOR pos; // stack offset -40
    } // line 35, offset 0x43900
} // line 214, offset 0x43fb0
/*
 * Offset 0x43FB0
 * C:\Projects2\Tomb5\GAME\LARA1GUN.C (line 939)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ DoGrenadeDamageOnBaddie(struct ITEM_INFO *baddie /*reg $16*/, struct ITEM_INFO *item /*reg $5*/);
/*
 * Offset 0x44138
 * C:\Projects2\Tomb5\GAME\LARA1GUN.C (line 976)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ TriggerGrapplingEffect(long x /*reg $21*/, long y /*reg $20*/, long z /*reg $19*/)
{ // line 1, offset 0x44138
    long size; // register $2
    long lp; // register $17
    struct SMOKE_SPARKS *sptr; // register $16
} // line 48, offset 0x44308
extern char HKShotsFired; // offset 0xA0B54
extern char HKTimer; // offset 0xA0B55