#ifndef GAME_LARA1GUN_H
#define GAME_LARA1GUN_H

/* This file was automatically generated.  Do not edit! */
extern char HKTimer;
extern char HKShotsFired;
void TriggerGrapplingEffect(long x,long y,long z);
void DoGrenadeDamageOnBaddie(struct ITEM_INFO *baddie,struct ITEM_INFO *item);
void AnimateShotgun(int weapon_type);
void undraw_shotgun(int weapon_type);
void draw_shotgun(int weapon_type);
void ControlCrossbow(short item_number);
void CrossbowHitSwitchType78(struct ITEM_INFO *item,struct ITEM_INFO *target,int MustHitLastNode);
void FireCrossbow(struct PHD_3DPOS *Start);
void FireHK(int running);
void FireShotgun();
void RifleHandler(int weapon_type);
void ready_shotgun(int weapon_type);
void undraw_shotgun_meshes(int weapon_type);
void draw_shotgun_meshes(int weapon_type);

#endif
