#include "EFFECT2.H"
/*
 * Offset 0x32D8C
 * C:\Projects2\Tomb5\GAME\EFFECT2.C (line 95)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ DetatchSpark(long num /*reg $10*/, long type /*reg $5*/)
{ // line 1, offset 0x32d8c
    long lp; // register $11
    struct SPARKS *sptr; // register $6
    struct FX_INFO *fx; // register $9
    struct ITEM_INFO *item; // register $8
} // line 31, offset 0x32eac
/*
 * Offset 0x32EAC
 * C:\Projects2\Tomb5\GAME\EFFECT2.C (line 1151)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ TriggerSuperJetFlame(struct ITEM_INFO *item /*reg $18*/, long yvel /*reg $16*/, long deadly /*reg $21*/)
{ // line 1, offset 0x32eac
    long size; // register $3
    struct SPARKS *sptr; // register $16
    long dx; // register $3
    long dz; // register $4
    long dy; // register $17
} // line 70, offset 0x33190
/*
 * Offset 0x331B4
 * C:\Projects2\Tomb5\GAME\EFFECT2.C (line 1508)
 * Stack frame base $29, size 72
 */
void /*reg $31*/ TriggerWaterfallMist(long x /*sp 0*/, long y /*reg $23*/, long z /*sp 8*/, long angle /*reg $7*/)
{ // line 1, offset 0x331b4
    long xsize; // register $16
    long zsize; // register $18
    long dist; // register $16
    long lp; // register $20
    struct SPARKS *sptr; // register $17
} // line 86, offset 0x335b8
/*
 * Offset 0x335B8
 * C:\Projects2\Tomb5\GAME\EFFECT2.C (line 1706)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ TriggerDartSmoke(long x /*reg $19*/, long y /*reg $21*/, long z /*reg $20*/, long xv /*reg $17*/, long zv /*sp 16*/, long hit /*sp 20*/)
{ // line 1, offset 0x335b8
    long size; // register $17
    struct SPARKS *sptr; // register $16
    long dx; // register $2
    long dz; // register $4
} // line 82, offset 0x33874
/*
 * Offset 0x3389C
 * C:\Projects2\Tomb5\GAME\EFFECT2.C (line 1790)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ KillAllCurrentItems(short item_number /*reg $4*/);
/*
 * Offset 0x338AC
 * C:\Projects2\Tomb5\GAME\EFFECT2.C (line 1795)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ KillEverything();
/*
 * Offset 0x338B8
 * C:\Projects2\Tomb5\GAME\EFFECT2.C (line 2052)
 * Stack frame base $29, size 88
 */
void /*reg $31*/ ControlSmokeEmitter(short item_number /*reg $4*/)
{ // line 1, offset 0x338b8
    struct ITEM_INFO *item; // register $19
    struct SPARKS *sptr; // register $18
    long size; // register $16
    long dx; // register $20
    long dz; // register $5
    long normal; // register $21
    { // line 18, offset 0x339a4
        struct PHD_3DPOS pos; // stack offset -56
    } // line 31, offset 0x33a68
} // line 254, offset 0x342ac
/*
 * Offset 0x342D0
 * C:\Projects2\Tomb5\GAME\EFFECT2.C (line 2308)
 * Stack frame base $29, size 96
 */
void /*reg $31*/ ControlEnemyMissile(short fx_number /*reg $21*/)
{ // line 1, offset 0x342d0
    struct FX_INFO *fx; // register $20
    struct FLOOR_INFO *floor; // register $16
    short angles[2]; // stack offset -64
    struct PHD_VECTOR pos; // stack offset -56
    long speed; // register $8
    long ox; // register $18
    long oy; // register $19
    long oz; // register $17
    long h; // register $16
    long c; // register $2
    short room_number; // stack offset -40
    short max_turn; // register $6
} // line 187, offset 0x34a68
extern long wibble; // offset 0xA09D8
extern long SplashCount; // offset 0xA09E0
extern long KillEverythingFlag; // offset 0xA09DC
extern long next_spark; // offset 0xA09E4
extern unsigned char TES_extra_tab[6];
extern long DeadlyBounds[6];
extern struct SPLASH_STRUCT splashes[4];
extern struct RIPPLE_STRUCT ripples[32];
extern struct DYNAMIC dynamics[64];
extern struct SPLASH_SETUP splash_setup;
extern struct SP_DYNAMIC spark_dynamics[8];
extern long SmokeWeapon; // offset 0xA31B4
extern long SmokeWindX; // offset 0xA31AC
extern long SmokeWindZ; // offset 0xA31B0
extern long SmokeCountL; // offset 0xA31BC
extern long SmokeCountR; // offset 0xA31B8
extern struct SPARKS spark[128];