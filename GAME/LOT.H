#ifndef GAME_LOT_H
#define GAME_LOT_H

struct lot_info {
    struct box_node *node; // size=8, offset=0
    short head; // size=0, offset=4
    short tail; // size=0, offset=6
    unsigned short search_number; // size=0, offset=8
    unsigned short block_mask; // size=0, offset=10
    short step; // size=0, offset=12
    short drop; // size=0, offset=14
    short zone_count; // size=0, offset=16
    short target_box; // size=0, offset=18
    short required_box; // size=0, offset=20
    short fly; // size=0, offset=22
    unsigned short can_jump : 1; // offset=24.0
    unsigned short can_monkey : 1; // offset=24.1
    unsigned short is_amphibious : 1; // offset=24.2
    unsigned short is_jumping : 1; // offset=24.3
    unsigned short is_monkeying : 1; // offset=24.4
    struct PHD_VECTOR target; // size=12, offset=28
    enum zone_type zone; // size=4, offset=40
};

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
