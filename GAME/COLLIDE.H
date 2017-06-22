#ifndef GAME_COLLIDE_H
#define GAME_COLLIDE_H

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
