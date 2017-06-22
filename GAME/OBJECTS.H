#ifndef GAME_OBJECTS_H
#define GAME_OBJECTS_H

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
