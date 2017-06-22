#ifndef GAME_OBJECTS_H
#define GAME_OBJECTS_H

struct object_info {
    short nmeshes; // size=0, offset=0
    short mesh_index; // size=0, offset=2
    long bone_index; // size=0, offset=4
    short *frame_base; // size=0, offset=8
    void *initialise; // size=0, offset=12
    void *control; // size=0, offset=16
    void *floor; // size=0, offset=20
    void *ceiling; // size=0, offset=24
    void *draw_routine; // size=0, offset=28
    void *collision; // size=0, offset=32
    short object_mip; // size=0, offset=36
    short anim_index; // size=0, offset=38
    short hit_points; // size=0, offset=40
    short pivot_length; // size=0, offset=42
    short radius; // size=0, offset=44
    short shadow_size; // size=0, offset=46
    unsigned short bite_offset; // size=0, offset=48
    unsigned short loaded : 1; // offset=50.0
    unsigned short intelligent : 1; // offset=50.1
    unsigned short non_lot : 1; // offset=50.2
    unsigned short save_position : 1; // offset=50.3
    unsigned short save_hitpoints : 1; // offset=50.4
    unsigned short save_flags : 1; // offset=50.5
    unsigned short save_anim : 1; // offset=50.6
    unsigned short semi_transparent : 1; // offset=50.7
    unsigned short water_creature : 1; // offset=51.0
    unsigned short using_drawanimating_item : 1; // offset=51.1
    unsigned short HitEffect : 2; // offset=51.2
    unsigned short undead : 1; // offset=51.4
    unsigned short save_mesh : 1; // offset=51.5
    void *draw_routine_extra; // size=0, offset=52
    unsigned long explodable_meshbits; // size=0, offset=56
    unsigned long padfuck; // size=0, offset=60
};

/* This file was automatically generated.  Do not edit! */
extern struct BITE_INFO EnemyBites[9];
extern int AnimatingWaterfallsVOffset;
void HybridCollision(short item_num,struct ITEM_INFO *laraitem,struct COLL_INFO *coll);
void DrawBaddieGunFlash(struct ITEM_INFO *item);
void CutsceneRopeControl(short item_number);
void ControlXRayMachine(short item_number);
void ParallelBarsCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void TightRopeCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void ControlWaterfall(short item_number);
void AnimateWaterfalls();
void ControlTriggerTriggerer(short item_number);
void PoleCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void ControlAnimatingSlots(short item_number);
void BridgeTilt2Ceiling(struct ITEM_INFO *item,long x,long y,long z,long *height);
void BridgeTilt2Floor(struct ITEM_INFO *item,long x,long y,long z,long *height);
void BridgeTilt1Ceiling(struct ITEM_INFO *item,long x,long y,long z,long *height);
long GetOffset(struct ITEM_INFO *item,long x,long z);
void BridgeTilt1Floor(struct ITEM_INFO *item,long x,long y,long z,long *height);
void BridgeFlatCeiling(struct ITEM_INFO *item,long x,long y,long z,long *height);
void BridgeFlatFloor(struct ITEM_INFO *item,long x,long y,long z,long *height);
void SmashObjectControl(short item_number);
void SmashObject(short item_number);
void EarthQuake(short item_number);

#endif
