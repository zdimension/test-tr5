#ifndef GAME_ITEMS_H
#define GAME_ITEMS_H

struct ILIGHT {
    short x; // size=0, offset=0
    short y; // size=0, offset=2
    short z; // size=0, offset=4
    short pad1; // size=0, offset=6
    unsigned char r; // size=0, offset=8
    unsigned char g; // size=0, offset=9
    unsigned char b; // size=0, offset=10
    unsigned char pad; // size=0, offset=11
};
struct ITEM_LIGHT {
    struct ILIGHT Light[4]; // size=48, offset=0
};
struct ITEM_INFO {
    long floor; // size=0, offset=0
    unsigned long touch_bits; // size=0, offset=4
    unsigned long mesh_bits; // size=0, offset=8
    short object_number; // size=0, offset=12
    short current_anim_state; // size=0, offset=14
    short goal_anim_state; // size=0, offset=16
    short required_anim_state; // size=0, offset=18
    short anim_number; // size=0, offset=20
    short frame_number; // size=0, offset=22
    short room_number; // size=0, offset=24
    short next_item; // size=0, offset=26
    short next_active; // size=0, offset=28
    short speed; // size=0, offset=30
    short fallspeed; // size=0, offset=32
    short hit_points; // size=0, offset=34
    unsigned short box_number; // size=0, offset=36
    short timer; // size=0, offset=38
    short flags; // size=0, offset=40
    short shade; // size=0, offset=42
    short trigger_flags; // size=0, offset=44
    short carried_item; // size=0, offset=46
    short after_death; // size=0, offset=48
    unsigned short fired_weapon; // size=0, offset=50
    short item_flags[4]; // size=8, offset=52
    void *data; // size=0, offset=60
    struct PHD_3DPOS pos; // size=20, offset=64
    struct ITEM_LIGHT il; // size=48, offset=84
    unsigned long active : 1; // offset=132.0
    unsigned long status : 2; // offset=132.1
    unsigned long gravity_status : 1; // offset=132.3
    unsigned long hit_status : 1; // offset=132.4
    unsigned long collidable : 1; // offset=132.5
    unsigned long looked_at : 1; // offset=132.6
    unsigned long dynamic_light : 1; // offset=132.7
    unsigned long poisoned : 1; // offset=133.0
    unsigned long ai_bits : 5; // offset=133.1
    unsigned long really_active : 1; // offset=133.6
    unsigned long InDrawRoom : 1; // offset=133.7
    unsigned long meshswap_meshbits; // size=0, offset=136
    short draw_room; // size=0, offset=140
    short TOSSPAD; // size=0, offset=142
};

/* This file was automatically generated.  Do not edit! */
extern short GlobalPulleyFrigItem;
extern short next_item_active;
extern short next_item_free;
extern int level_items;
void EffectNewRoom(short fx_num,short room_number);
void KillEffect(short fx_num);
short CreateEffect(short room_num);
void InitialiseFXArray(int allocmem);
void AddActiveItem(short item_num);
void RemoveDrawnItem(short item_num);
void RemoveActiveItem(short item_num);
void InitialiseItem(short item_num);
short CreateItem();
void KillItem(short item_num);
void InitialiseItemArray(int numitems);

#endif
