#ifndef GAME_COLLIDE_H
#define GAME_COLLIDE_H

struct COLL_INFO {
    long mid_floor; // size=0, offset=0
    long mid_ceiling; // size=0, offset=4
    long mid_type; // size=0, offset=8
    long front_floor; // size=0, offset=12
    long front_ceiling; // size=0, offset=16
    long front_type; // size=0, offset=20
    long left_floor; // size=0, offset=24
    long left_ceiling; // size=0, offset=28
    long left_type; // size=0, offset=32
    long right_floor; // size=0, offset=36
    long right_ceiling; // size=0, offset=40
    long right_type; // size=0, offset=44
    long left_floor2; // size=0, offset=48
    long left_ceiling2; // size=0, offset=52
    long left_type2; // size=0, offset=56
    long right_floor2; // size=0, offset=60
    long right_ceiling2; // size=0, offset=64
    long right_type2; // size=0, offset=68
    long radius; // size=0, offset=72
    long bad_pos; // size=0, offset=76
    long bad_neg; // size=0, offset=80
    long bad_ceiling; // size=0, offset=84
    struct PHD_VECTOR shift; // size=12, offset=88
    struct PHD_VECTOR old; // size=12, offset=100
    short old_anim_state; // size=0, offset=112
    short old_anim_number; // size=0, offset=114
    short old_frame_number; // size=0, offset=116
    short facing; // size=0, offset=118
    short quadrant; // size=0, offset=120
    short coll_type; // size=0, offset=122
    short *trigger; // size=0, offset=124
    char tilt_x; // size=0, offset=128
    char tilt_z; // size=0, offset=129
    char hit_by_baddie; // size=0, offset=130
    char hit_static; // size=0, offset=131
    unsigned short slopes_are_walls : 2; // offset=132.0
    unsigned short slopes_are_pits : 1; // offset=132.2
    unsigned short lava_is_pit : 1; // offset=132.3
    unsigned short enable_baddie_push : 1; // offset=132.4
    unsigned short enable_spaz : 1; // offset=132.5
    unsigned short hit_ceiling : 1; // offset=132.6
};

/* This file was automatically generated.  Do not edit! */
extern long zfront;
extern long xfront;
extern short GlobalCollisionBounds[6];
extern char LM[15];
void TestForObjectOnLedge(struct ITEM_INFO *item,struct COLL_INFO *coll);
void TriggerLaraBlood();
void GenericSphereBoxCollision(short item_num,struct ITEM_INFO *laraitem,struct COLL_INFO *coll);
int ItemPushLaraStatic(struct ITEM_INFO *laraitem,short *bounds,struct PHD_3DPOS *pos,struct COLL_INFO *coll);
int TestBoundsCollideStatic(short *bounds,struct PHD_3DPOS *pos,long radius);
void TrapCollision(short item_num,struct ITEM_INFO *laraitem,struct COLL_INFO *coll);
void AIPickupCollision(short item_num,struct ITEM_INFO *laraitem,struct COLL_INFO *coll);
void CreatureCollision(short item_num,struct ITEM_INFO *laraitem,struct COLL_INFO *coll);
void LaraBaddieCollision(struct ITEM_INFO *laraitem,struct COLL_INFO *coll);

#endif
