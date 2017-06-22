#ifndef GAME_LARAFIRE_H
#define GAME_LARAFIRE_H

/* This file was automatically generated.  Do not edit! */
extern struct GAME_VECTOR bum_vdest;
extern struct GAME_VECTOR bum_vsrc;
extern struct PHD_3DPOS bum_view;
extern struct ITEM_INFO *TargetList[8];
extern struct ITEM_INFO *LastTargets[8];
extern struct WEAPON_INFO weapons[9];
short *get_current_ammo_pointer(int num);
void DoProperDetection(short item_number,long x,long y,long z,long xv,long yv,long zv);
int WeaponObjectMesh(int weapon_type);
int WeaponObject(int weapon_type);
void HitTarget(struct ITEM_INFO *item,struct GAME_VECTOR *hitpos,int damage,int grenade);
int FireWeapon(int weapon_type,struct ITEM_INFO *target,struct ITEM_INFO *src,short *angles);
void AimWeapon(struct WEAPON_INFO *winfo,struct lara_arm *arm);
void find_target_point(struct ITEM_INFO *item,struct GAME_VECTOR *target);
void LaraGetNewTarget(struct WEAPON_INFO *winfo);
void LaraTargetInfo(struct WEAPON_INFO *winfo);
void InitialiseNewWeapon();
void LaraGun();
int CheckForHoldingState(int state);

#endif
