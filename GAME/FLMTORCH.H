#ifndef GAME_FLMTORCH_H
#define GAME_FLMTORCH_H

/* This file was automatically generated.  Do not edit! */
extern short torchroom;
void FlameTorchControl(short item_number);
void GetFlameTorch();
void DoFlameTorch();
void FireCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void TriggerTorchFlame(short item_number,long Node);

#endif
