#ifndef GAME_PICKUP_H
#define GAME_PICKUP_H

/* This file was automatically generated.  Do not edit! */
extern struct PHD_VECTOR OldPickupPos;
extern unsigned char RPickups[16];
extern unsigned char NumRPickups;
extern short SearchOffsets[4];
extern short SearchAnims[4];
extern short SearchCollectFrames[4];
void MonitorScreenCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void CollectCarriedItems(struct ITEM_INFO *item);
void SearchObjectCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void SearchObjectControl(short item_number);
int PickupTrigger(short item_num);
int KeyTrigger(short item_num);
extern short angle;
void PuzzleHoleCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void PuzzleDoneCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void KeyHoleCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void PickUpCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void RegeneratePickups();
void AnimatingPickUp(short item_number);
short *FindPlinth(struct ITEM_INFO *item);
void PuzzleDone(struct ITEM_INFO *item,short item_num);

#endif
