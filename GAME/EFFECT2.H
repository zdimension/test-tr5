#ifndef GAME_EFFECT2_H
#define GAME_EFFECT2_H

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
