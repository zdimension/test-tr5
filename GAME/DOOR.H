#ifndef GAME_DOOR_H
#define GAME_DOOR_H

struct DOORPOS_DATA {
    struct FLOOR_INFO *floor; // size=8, offset=0
    struct FLOOR_INFO data; // size=8, offset=4
    short block; // size=0, offset=12
};

struct DOOR_DATA {
    struct DOORPOS_DATA d1; // size=16, offset=0
    struct DOORPOS_DATA d1flip; // size=16, offset=16
    struct DOORPOS_DATA d2; // size=16, offset=32
    struct DOORPOS_DATA d2flip; // size=16, offset=48
    short Opened; // size=0, offset=64
    short *dptr1; // size=0, offset=68
    short *dptr2; // size=0, offset=72
    short *dptr3; // size=0, offset=76
    short *dptr4; // size=0, offset=80
    char dn1; // size=0, offset=84
    char dn2; // size=0, offset=85
    char dn3; // size=0, offset=86
    char dn4; // size=0, offset=87
    struct ITEM_INFO *item; // size=144, offset=88
};

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
