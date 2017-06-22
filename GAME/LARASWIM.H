#ifndef GAME_LARASWIM_H
#define GAME_LARASWIM_H

struct SUBSUIT_INFO {
    short XRot; // size=0, offset=0
    short dXRot; // size=0, offset=2
    short XRotVel; // size=0, offset=4
    short Vel[2]; // size=4, offset=6
    short YVel; // size=0, offset=10
};

/* This file was automatically generated.  Do not edit! */
extern struct SUBSUIT_INFO subsuit;
extern char SubHitCount;
extern short angle;
void LaraWaterCurrent(struct COLL_INFO *coll);
long GetWaterDepth(long x,long y,long z,short room_number);
void lara_col_waterroll(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_uwdeath(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_dive(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_tread(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_glide(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_swim(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_waterroll(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_uwdeath(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_dive(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_tread(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_glide(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_swim(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_swimcheat(struct ITEM_INFO *item,struct COLL_INFO *coll);
void LaraUnderWater(struct ITEM_INFO *item,struct COLL_INFO *coll);
void UpdateSubsuitAngles();
void SwimTurnSubsuit(struct ITEM_INFO *item);
void SwimTurn(struct ITEM_INFO *item);
void LaraSwimCollision(struct ITEM_INFO *item,struct COLL_INFO *coll);
void LaraTestWaterDepth(struct ITEM_INFO *item,struct COLL_INFO *coll);

#endif
