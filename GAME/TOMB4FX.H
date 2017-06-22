#ifndef GAME_TOMB4FX_H
#define GAME_TOMB4FX_H

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
