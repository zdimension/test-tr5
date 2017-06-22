#ifndef GAME_EFFECT2_H
#define GAME_EFFECT2_H

struct SPARKS {
    long x; // size=0, offset=0
    long y; // size=0, offset=4
    long z; // size=0, offset=8
    short Xvel; // size=0, offset=12
    short Yvel; // size=0, offset=14
    short Zvel; // size=0, offset=16
    short Gravity; // size=0, offset=18
    short RotAng; // size=0, offset=20
    short Flags; // size=0, offset=22
    unsigned char sSize; // size=0, offset=24
    unsigned char dSize; // size=0, offset=25
    unsigned char Size; // size=0, offset=26
    unsigned char Friction; // size=0, offset=27
    unsigned char Scalar; // size=0, offset=28
    unsigned char Def; // size=0, offset=29
    char RotAdd; // size=0, offset=30
    char MaxYvel; // size=0, offset=31
    unsigned char On; // size=0, offset=32
    unsigned char sR; // size=0, offset=33
    unsigned char sG; // size=0, offset=34
    unsigned char sB; // size=0, offset=35
    unsigned char dR; // size=0, offset=36
    unsigned char dG; // size=0, offset=37
    unsigned char dB; // size=0, offset=38
    unsigned char R; // size=0, offset=39
    unsigned char G; // size=0, offset=40
    unsigned char B; // size=0, offset=41
    unsigned char ColFadeSpeed; // size=0, offset=42
    unsigned char FadeToBlack; // size=0, offset=43
    unsigned char sLife; // size=0, offset=44
    unsigned char Life; // size=0, offset=45
    unsigned char TransType; // size=0, offset=46
    unsigned char extras; // size=0, offset=47
    char Dynamic; // size=0, offset=48
    unsigned char FxObj; // size=0, offset=49
    unsigned char RoomNumber; // size=0, offset=50
    unsigned char NodeNumber; // size=0, offset=51
};

struct SPLASH_STRUCT {
    long x; // size=0, offset=0
    long y; // size=0, offset=4
    long z; // size=0, offset=8
    short InnerRad; // size=0, offset=12
    short InnerSize; // size=0, offset=14
    short InnerRadVel; // size=0, offset=16
    short InnerYVel; // size=0, offset=18
    short InnerY; // size=0, offset=20
    short MiddleRad; // size=0, offset=22
    short MiddleSize; // size=0, offset=24
    short MiddleRadVel; // size=0, offset=26
    short MiddleYVel; // size=0, offset=28
    short MiddleY; // size=0, offset=30
    short OuterRad; // size=0, offset=32
    short OuterSize; // size=0, offset=34
    short OuterRadVel; // size=0, offset=36
    char flags; // size=0, offset=38
    unsigned char life; // size=0, offset=39
};

struct RIPPLE_STRUCT {
    long x; // size=0, offset=0
    long y; // size=0, offset=4
    long z; // size=0, offset=8
    char flags; // size=0, offset=12
    unsigned char life; // size=0, offset=13
    unsigned char size; // size=0, offset=14
    unsigned char init; // size=0, offset=15
};

struct SPLASH_SETUP {
    long x; // size=0, offset=0
    long y; // size=0, offset=4
    long z; // size=0, offset=8
    short InnerRad; // size=0, offset=12
    short InnerSize; // size=0, offset=14
    short InnerRadVel; // size=0, offset=16
    short InnerYVel; // size=0, offset=18
    short pad1; // size=0, offset=20
    short MiddleRad; // size=0, offset=22
    short MiddleSize; // size=0, offset=24
    short MiddleRadVel; // size=0, offset=26
    short MiddleYVel; // size=0, offset=28
    short pad2; // size=0, offset=30
    short OuterRad; // size=0, offset=32
    short OuterSize; // size=0, offset=34
    short OuterRadVel; // size=0, offset=36
    short pad3; // size=0, offset=38
};

/* This file was automatically generated.  Do not edit! */
extern struct SPARKS spark[128];
extern long SmokeCountR;
extern long SmokeCountL;
extern long SmokeWindZ;
extern long SmokeWindX;
extern long SmokeWeapon;
extern struct SP_DYNAMIC spark_dynamics[8];
extern struct SPLASH_SETUP splash_setup;
extern struct DYNAMIC dynamics[64];
extern struct RIPPLE_STRUCT ripples[32];
extern struct SPLASH_STRUCT splashes[4];
extern long DeadlyBounds[6];
extern unsigned char TES_extra_tab[6];
extern long next_spark;
extern long KillEverythingFlag;
extern long SplashCount;
extern long wibble;
void ControlEnemyMissile(short fx_number);
void ControlSmokeEmitter(short item_number);
void KillEverything();
void KillAllCurrentItems(short item_number);
void TriggerDartSmoke(long x,long y,long z,long xv,long zv,long hit);
extern short angle;
void TriggerWaterfallMist(long x,long y,long z,long angle);
void TriggerSuperJetFlame(struct ITEM_INFO *item,long yvel,long deadly);
void DetatchSpark(long num,long type);

#endif
