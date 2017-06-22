#ifndef GAME_LARASURF_H
#define GAME_LARASURF_H

/* This file was automatically generated.  Do not edit! */
void lara_col_surfright(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_surfleft(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_surfback(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_surfswim(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_surftread(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_surfright(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_surfleft(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_surfback(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_surfswim(struct ITEM_INFO *item,struct COLL_INFO *coll);
void LaraSurface(struct ITEM_INFO *item,struct COLL_INFO *coll);
void LaraSurfaceCollision(struct ITEM_INFO *item,struct COLL_INFO *coll);
extern short angle;
int LaraTestWaterClimbOut(struct ITEM_INFO *item,struct COLL_INFO *coll);
int LaraTestWaterStepOut(struct ITEM_INFO *item,struct COLL_INFO *coll);

#endif
