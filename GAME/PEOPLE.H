#ifndef GAME_PEOPLE_H
#define GAME_PEOPLE_H

struct creature_info {
    short joint_rotation[4]; // size=8, offset=0
    short maximum_turn; // size=0, offset=8
    short flags; // size=0, offset=10
    unsigned short alerted : 1; // offset=12.0
    unsigned short head_left : 1; // offset=12.1
    unsigned short head_right : 1; // offset=12.2
    unsigned short reached_goal : 1; // offset=12.3
    unsigned short hurt_by_lara : 1; // offset=12.4
    unsigned short patrol2 : 1; // offset=12.5
    unsigned short jump_ahead : 1; // offset=12.6
    unsigned short monkey_ahead : 1; // offset=12.7
    enum mood_type mood; // size=4, offset=16
    struct ITEM_INFO *enemy; // size=144, offset=20
    struct ITEM_INFO ai_target; // size=144, offset=24
    short pad; // size=0, offset=168
    short item_num; // size=0, offset=170
    struct PHD_VECTOR target; // size=12, offset=172
    struct lot_info LOT; // size=44, offset=184
};

/* This file was automatically generated.  Do not edit! */
int ShotLara(struct ITEM_INFO *item,struct AI_info *info,struct BITE_INFO *gun,short extra_rotation,int damage);
short GunMiss(long x,long y,long z,short speed,int yrot,int room_number);
short GunHit(long x,long y,long z,short speed,int yrot,int room_number);
short GunShot(long x,long y,long z,short speed,int yrot,int room_number);
int Targetable(struct ITEM_INFO *item,struct AI_info *info);
int TargetVisible(struct ITEM_INFO *item,struct AI_info *info);

#endif
