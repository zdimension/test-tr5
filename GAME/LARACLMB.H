#ifndef GAME_LARACLMB_H
#define GAME_LARACLMB_H

/* This file was automatically generated.  Do not edit! */
short GetClimbTrigger(long x,long y,long z,short room_number);
void lara_col_climbend(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_climbend(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_climbdown(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_climbdown(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_climbing(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_climbing(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_climbright(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_climbright(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_climbleft(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_climbleft(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_climbstnc(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_climbstnc(struct ITEM_INFO *item,struct COLL_INFO *coll);
int LaraTestClimbPos(struct ITEM_INFO *item,int front,int right,int origin,int height,int *shift);
void LaraDoClimbLeftRight(struct ITEM_INFO *item,struct COLL_INFO *coll,int result,int shift);
int LaraClimbRightCornerTest(struct ITEM_INFO *item,struct COLL_INFO *coll);
int LaraClimbLeftCornerTest(struct ITEM_INFO *item,struct COLL_INFO *coll);
extern long xfront;
extern long zfront;
int LaraTestClimb(int x,int y,int z,int xfront,int zfront,int item_height,int item_room,int *shift);
extern short angle;
int LaraTestClimbUpPos(struct ITEM_INFO *item,int front,int right,int *shift,int *ledge);
long LaraCheckForLetGo(struct ITEM_INFO *item,struct COLL_INFO *coll);

#endif
