#ifndef GAME_DOOR_H
#define GAME_DOOR_H

/* This file was automatically generated.  Do not edit! */
extern char LiftDoor;
extern long ClosedDoors[32];
void ProcessClosedDoors();
void SequenceDoorControl(short item_number);
void UnderwaterDoorCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void DoubleDoorCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void PushPullKickDoorCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void PushPullKickDoorControl(short item_number);
void DoorCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void DoorControl(short item_number);
void OpenThatDoor(struct DOORPOS_DATA *d,struct DOOR_DATA *dd);
void ShutThatDoor(struct DOORPOS_DATA *d,struct DOOR_DATA *dd);

#endif
