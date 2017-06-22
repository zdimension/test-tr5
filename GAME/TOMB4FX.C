#include "TOMB4FX.H"
/*
 * Offset 0x34A8C
 * C:\Projects2\Tomb5\GAME\TOMB4FX.C (line 2146)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ SetFadeClip(short height /*reg $4*/, short speed /*reg $5*/);
/*
 * Offset 0x34A9C
 * C:\Projects2\Tomb5\GAME\TOMB4FX.C (line 2152)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ UpdateFadeClip();
/*
 * Offset 0x34B14
 * C:\Projects2\Tomb5\GAME\TOMB4FX.C (line 2199)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ SetScreenFadeOut(long fadespeed /*reg $4*/, long fadeback /*reg $5*/);
/*
 * Offset 0x34B48
 * C:\Projects2\Tomb5\GAME\TOMB4FX.C (line 2212)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ SetScreenFadeIn(long fadespeed /*reg $4*/);
/*
 * Offset 0x34B78
 * C:\Projects2\Tomb5\GAME\TOMB4FX.C (line 2225)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ Fade()
{ // line 2, offset 0x34b78
    int oldfucker; // register $5
} // line 39, offset 0x34c84
/*
 * Offset 0x34C94
 * C:\Projects2\Tomb5\GAME\TOMB4FX.C (line 3003)
 * Stack frame base $29, size 64
 */
int /*reg $31*/ ExplodingDeath2(short item_number /*reg $22*/, long mesh_bits /*sp 4*/, short Flags /*reg $21*/)
{ // line 1, offset 0x34c94
    struct ITEM_INFO *item; // register $18
    struct object_info *object; // register $23
    struct FX_INFO *fx; // register $16
    long *bone; // register $20
    long bit; // register $30
    short *rotation; // stack offset -48
    short *frame; // register $16
    short *extra_rotation; // register $19
    short fx_number; // register $3
    int i; // register $17
    int poppush; // register $16
} // line 175, offset 0x3521c
/*
 * Offset 0x3521C
 * C:\Projects2\Tomb5\GAME\TOMB4FX.C (line 3893)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ TriggerLightningGlow(long x /*reg $18*/, long y /*reg $19*/, long z /*reg $20*/, long rgb /*reg $17*/)
{ // line 1, offset 0x3521c
    long size; // register $2
    struct SPARKS *sptr; // register $16
} // line 35, offset 0x3532c
/*
 * Offset 0x3532C
 * C:\Projects2\Tomb5\GAME\TOMB4FX.C (line 3957)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ DrawLensFlares(struct ITEM_INFO *item /*reg $4*/)
{ // line 1, offset 0x3532c
    struct GAME_VECTOR pos; // stack offset -24
} // line 9, offset 0x35378
/*
 * Offset 0x35378
 * C:\Projects2\Tomb5\GAME\TOMB4FX.C (line 3980)
 * Stack frame base $29, size 112
 */
void /*reg $31*/ SetUpLensFlare(long x /*reg $9*/, long y /*reg $23*/, long z /*reg $30*/, struct GAME_VECTOR *bulb /*reg $13*/)
{ // line 1, offset 0x35378
    long dx; // register $22
    long dy; // register $21
    long dz; // register $20
    long r; // register $19
    long rx; // register $16
    long ry; // register $17
    long rz; // register $18
    short room_number; // register $14
    short flaredraw; // stack offset -64
    { // line 65, offset 0x356cc
        struct GAME_VECTOR s; // stack offset -96
        struct GAME_VECTOR d; // stack offset -80
    } // line 78, offset 0x3575c
} // line 114, offset 0x35864
/*
 * Offset 0x35894
 * C:\Projects2\Tomb5\GAME\TOMB4FX.C (line 4235)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ DrawWeaponMissile(struct ITEM_INFO *item /*reg $16*/);
/*
 * Offset 0x35934
 * C:\Projects2\Tomb5\GAME\TOMB4FX.C (line 4257)
 * Stack frame base $29, size 104
 */
void /*reg $31*/ ControlTeleporter(short item_number /*reg $16*/)
{ // line 1, offset 0x35934
    struct ITEM_INFO *item; // register $19
    short room_number; // stack offset -40
    { // line 15, offset 0x359c8
        struct PHD_VECTOR s; // stack offset -72
        struct PHD_VECTOR d; // stack offset -56
        long r; // register $18
        long g; // register $20
        long b; // register $21
        { // line 77, offset 0x35d3c
            long size; // register $2
            struct SPARKS *sptr; // register $16
        } // line 77, offset 0x35d3c
    } // line 121, offset 0x35fb4
} // line 183, offset 0x361b4
/*
 * Offset 0x361D8
 * C:\Projects2\Tomb5\GAME\TOMB4FX.C (line 4446)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ ControlElectricFence(short item_number /*reg $4*/)
{ // line 1, offset 0x361d8
    struct ITEM_INFO *item; // register $17
    long x; // register $16
    long tx; // register $19
    long ty; // register $21
    long tz; // register $18
    long xand; // register $22
    long zand; // register $23
    { // line 73, offset 0x36354
        long lp; // register $20
        long cnt; // register $30
    } // line 97, offset 0x36468
} // line 140, offset 0x36468
/*
 * Offset 0x36498
 * C:\Projects2\Tomb5\GAME\TOMB4FX.C (line 4588)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ TriggerFenceSparks(long x /*reg $17*/, long y /*reg $18*/, long z /*reg $19*/, long kill /*reg $16*/, long crane /*sp 16*/)
{ // line 1, offset 0x36498
    struct SPARKS *sptr; // register $20
} // line 36, offset 0x3660c
/*
 * Offset 0x3660C
 * C:\Projects2\Tomb5\GAME\TOMB4FX.C (line 4639)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ trig_actor_gunflash(struct MATRIX3D *matrix /*reg $18*/, struct PHD_VECTOR *pos /*reg $17*/)
{ // line 1, offset 0x3660c
    struct GUNFLASH_STRUCT *fx; // register $16
    long lp; // register $3
} // line 33, offset 0x36698
extern char flare_table[121];
extern char LaserSightActive; // offset 0xA09FC
extern char LaserSightCol; // offset 0xA09FD
extern long next_fire_spark; // offset 0xA0A0C
extern long next_smoke_spark; // offset 0xA0A10
extern long next_gunshell; // offset 0xA0A18
extern long next_bubble; // offset 0xA0A1C
extern long next_drip; // offset 0xA0A20
extern long next_blood; // offset 0xA0A14
extern struct NODEOFFSET_INFO NodeOffsets[16];
extern short FlashFadeR; // offset 0xA0A04
extern short FlashFadeG; // offset 0xA0A06
extern short FlashFadeB; // offset 0xA0A08
extern short FlashFader; // offset 0xA0A0A
extern short ScreenFade; // offset 0xA09F0
extern short dScreenFade; // offset 0xA09F2
extern short ScreenFadeSpeed; // offset 0xA09F4
extern short ScreenFadeBack; // offset 0xA09F6
extern short ScreenFadedOut; // offset 0xA09F8
extern short ScreenFading; // offset 0xA09FA
extern short FadeScreenHeight; // offset 0xA09FE
extern short DestFadeScreenHeight; // offset 0xA0A00
extern short FadeClipSpeed; // offset 0xA0A02
extern long LaserSightX; // offset 0xA3268
extern long LaserSightY; // offset 0xA326C
extern long LaserSightZ; // offset 0xA3270
extern struct GUNFLASH_STRUCT Gunflashes[4];
extern struct PHD_VECTOR NodeVectors[16];
extern struct FIRE_SPARKS fire_spark[20];
extern struct SMOKE_SPARKS smoke_spark[32];
extern struct GUNSHELL_STRUCT Gunshells[24];
extern struct BLOOD_STRUCT blood[32];
extern struct BUBBLE_STRUCT Bubbles[40];
extern struct DRIP_STRUCT Drips[32];
extern struct SHOCKWAVE_STRUCT ShockWaves[16];
extern struct FIRE_LIST fires[32];