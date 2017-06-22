#ifndef GAME_PEOPLE_H
#define GAME_PEOPLE_H

/* This file was automatically generated.  Do not edit! */
int ShotLara(struct ITEM_INFO *item,struct AI_info *info,struct BITE_INFO *gun,short extra_rotation,int damage);
short GunMiss(long x,long y,long z,short speed,int yrot,int room_number);
short GunHit(long x,long y,long z,short speed,int yrot,int room_number);
short GunShot(long x,long y,long z,short speed,int yrot,int room_number);
int Targetable(struct ITEM_INFO *item,struct AI_info *info);
int TargetVisible(struct ITEM_INFO *item,struct AI_info *info);

#endif
