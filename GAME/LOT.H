#ifndef GAME_LOT_H
#define GAME_LOT_H

/* This file was automatically generated.  Do not edit! */
extern struct creature_info *baddie_slots;
extern struct AIOBJECT *AIObjects;
extern short nAIObjects;
extern int slots_used;
void CreateZone(struct ITEM_INFO *item);
void InitialiseSlot(short item_number,int slot);
int EnableBaddieAI(short item_number,int Always);
void DisableBaddieAI(short item_num);
void InitialiseLOTarray(int allocmem);

#endif
