#ifndef GAME_TOMB4FX_H
#define GAME_TOMB4FX_H

struct FIRE_LIST {
    long x; // size=0, offset=0
    long y; // size=0, offset=4
    long z; // size=0, offset=8
    char on; // size=0, offset=12
    char size; // size=0, offset=13
    short room_number; // size=0, offset=14
};

struct FIRE_SPARKS {
    short x; // size=0, offset=0
    short y; // size=0, offset=2
    short z; // size=0, offset=4
    short Xvel; // size=0, offset=6
    short Yvel; // size=0, offset=8
    short Zvel; // size=0, offset=10
    short Gravity; // size=0, offset=12
    short RotAng; // size=0, offset=14
    short Flags; // size=0, offset=16
    unsigned char sSize; // size=0, offset=18
    unsigned char dSize; // size=0, offset=19
    unsigned char Size; // size=0, offset=20
    unsigned char Friction; // size=0, offset=21
    unsigned char Scalar; // size=0, offset=22
    unsigned char Def; // size=0, offset=23
    char RotAdd; // size=0, offset=24
    char MaxYvel; // size=0, offset=25
    unsigned char On; // size=0, offset=26
    unsigned char sR; // size=0, offset=27
    unsigned char sG; // size=0, offset=28
    unsigned char sB; // size=0, offset=29
    unsigned char dR; // size=0, offset=30
    unsigned char dG; // size=0, offset=31
    unsigned char dB; // size=0, offset=32
    unsigned char R; // size=0, offset=33
    unsigned char G; // size=0, offset=34
    unsigned char B; // size=0, offset=35
    unsigned char ColFadeSpeed; // size=0, offset=36
    unsigned char FadeToBlack; // size=0, offset=37
    unsigned char sLife; // size=0, offset=38
    unsigned char Life; // size=0, offset=39
};

struct SMOKE_SPARKS {
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
    unsigned char sShade; // size=0, offset=33
    unsigned char dShade; // size=0, offset=34
    unsigned char Shade; // size=0, offset=35
    unsigned char ColFadeSpeed; // size=0, offset=36
    unsigned char FadeToBlack; // size=0, offset=37
    char sLife; // size=0, offset=38
    char Life; // size=0, offset=39
    unsigned char TransType; // size=0, offset=40
    unsigned char FxObj; // size=0, offset=41
    unsigned char NodeNumber; // size=0, offset=42
    unsigned char mirror; // size=0, offset=43
};

struct BLOOD_STRUCT {
    long x; // size=0, offset=0
    long y; // size=0, offset=4
    long z; // size=0, offset=8
    short Xvel; // size=0, offset=12
    short Yvel; // size=0, offset=14
    short Zvel; // size=0, offset=16
    short Gravity; // size=0, offset=18
    short RotAng; // size=0, offset=20
    unsigned char sSize; // size=0, offset=22
    unsigned char dSize; // size=0, offset=23
    unsigned char Size; // size=0, offset=24
    unsigned char Friction; // size=0, offset=25
    char RotAdd; // size=0, offset=26
    unsigned char On; // size=0, offset=27
    unsigned char sShade; // size=0, offset=28
    unsigned char dShade; // size=0, offset=29
    unsigned char Shade; // size=0, offset=30
    unsigned char ColFadeSpeed; // size=0, offset=31
    unsigned char FadeToBlack; // size=0, offset=32
    char sLife; // size=0, offset=33
    char Life; // size=0, offset=34
    char Pad; // size=0, offset=35
};

struct GUNSHELL_STRUCT {
    struct PHD_3DPOS pos; // size=20, offset=0
    short fallspeed; // size=0, offset=20
    short room_number; // size=0, offset=22
    short speed; // size=0, offset=24
    short counter; // size=0, offset=26
    short DirXrot; // size=0, offset=28
    short object_number; // size=0, offset=30
};

struct BUBBLE_STRUCT {
    struct PHD_VECTOR pos; // size=12, offset=0
    short room_number; // size=0, offset=12
    short speed; // size=0, offset=14
    short size; // size=0, offset=16
    short dsize; // size=0, offset=18
    unsigned char shade; // size=0, offset=20
    unsigned char vel; // size=0, offset=21
    unsigned char y_rot; // size=0, offset=22
    char Flags; // size=0, offset=23
    short Xvel; // size=0, offset=24
    short Yvel; // size=0, offset=26
    short Zvel; // size=0, offset=28
    short Pad; // size=0, offset=30
};

struct GUNFLASH_STRUCT {
    struct MATRIX3D matrix; // size=32, offset=0
    short on; // size=0, offset=32
};

struct DRIP_STRUCT {
    long x; // size=0, offset=0
    long y; // size=0, offset=4
    long z; // size=0, offset=8
    unsigned char On; // size=0, offset=12
    unsigned char R; // size=0, offset=13
    unsigned char G; // size=0, offset=14
    unsigned char B; // size=0, offset=15
    short Yvel; // size=0, offset=16
    unsigned char Gravity; // size=0, offset=18
    unsigned char Life; // size=0, offset=19
    short RoomNumber; // size=0, offset=20
    unsigned char Outside; // size=0, offset=22
    unsigned char Pad; // size=0, offset=23
};

struct NODEOFFSET_INFO {
    short x; // size=0, offset=0
    short y; // size=0, offset=2
    short z; // size=0, offset=4
    char mesh_num; // size=0, offset=6
    unsigned char GotIt; // size=0, offset=7
};

struct SHOCKWAVE_STRUCT {
    long x; // size=0, offset=0
    long y; // size=0, offset=4
    long z; // size=0, offset=8
    short InnerRad; // size=0, offset=12
    short OuterRad; // size=0, offset=14
    short XRot; // size=0, offset=16
    short Flags; // size=0, offset=18
    unsigned char r; // size=0, offset=20
    unsigned char g; // size=0, offset=21
    unsigned char b; // size=0, offset=22
    unsigned char life; // size=0, offset=23
    short Speed; // size=0, offset=24
    short Temp; // size=0, offset=26
};

/* This file was automatically generated.  Do not edit! */
extern struct FIRE_LIST fires[32];
extern struct SHOCKWAVE_STRUCT ShockWaves[16];
extern struct DRIP_STRUCT Drips[32];
extern struct BUBBLE_STRUCT Bubbles[40];
extern struct BLOOD_STRUCT blood[32];
extern struct GUNSHELL_STRUCT Gunshells[24];
extern struct SMOKE_SPARKS smoke_spark[32];
extern struct FIRE_SPARKS fire_spark[20];
extern struct PHD_VECTOR NodeVectors[16];
extern struct GUNFLASH_STRUCT Gunflashes[4];
extern long LaserSightZ;
extern long LaserSightY;
extern long LaserSightX;
extern short FadeClipSpeed;
extern short DestFadeScreenHeight;
extern short FadeScreenHeight;
extern short ScreenFading;
extern short ScreenFadedOut;
extern short ScreenFadeBack;
extern short ScreenFadeSpeed;
extern short dScreenFade;
extern short ScreenFade;
extern short FlashFader;
extern short FlashFadeB;
extern short FlashFadeG;
extern short FlashFadeR;
extern struct NODEOFFSET_INFO NodeOffsets[16];
extern long next_blood;
extern long next_drip;
extern long next_bubble;
extern long next_gunshell;
extern long next_smoke_spark;
extern long next_fire_spark;
extern char LaserSightCol;
extern char LaserSightActive;
extern char flare_table[121];
void trig_actor_gunflash(struct MATRIX3D *matrix,struct PHD_VECTOR *pos);
void TriggerFenceSparks(long x,long y,long z,long kill,long crane);
void ControlElectricFence(short item_number);
void ControlTeleporter(short item_number);
void DrawWeaponMissile(struct ITEM_INFO *item);
void SetUpLensFlare(long x,long y,long z,struct GAME_VECTOR *bulb);
void DrawLensFlares(struct ITEM_INFO *item);
void TriggerLightningGlow(long x,long y,long z,long rgb);
int ExplodingDeath2(short item_number,long mesh_bits,short Flags);
void Fade();
void SetScreenFadeIn(long fadespeed);
void SetScreenFadeOut(long fadespeed,long fadeback);
void UpdateFadeClip();
void SetFadeClip(short height,short speed);

#endif
