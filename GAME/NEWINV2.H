#ifndef GAME_NEWINV2_H
#define GAME_NEWINV2_H

struct INVOBJ {
    short object_number; // size=0, offset=0
    short yoff; // size=0, offset=2
    short scale1; // size=0, offset=4
    short yrot; // size=0, offset=6
    short xrot; // size=0, offset=8
    short zrot; // size=0, offset=10
    short flags; // size=0, offset=12
    short objname; // size=0, offset=14
    unsigned long meshbits; // size=0, offset=16
};

struct OBJLIST {
    short invitem; // size=0, offset=0
    unsigned short yrot; // size=0, offset=2
    unsigned short bright; // size=0, offset=4
};

struct RINGME {
    struct OBJLIST current_object_list[100]; // size=600, offset=0
    int ringactive; // size=0, offset=600
    int objlistmovement; // size=0, offset=604
    int curobjinlist; // size=0, offset=608
    int numobjectsinlist; // size=0, offset=612
};

struct AMMOLIST {
    short invitem; // size=0, offset=0
    short amount; // size=0, offset=2
    unsigned short yrot; // size=0, offset=4
};

struct MENUTHANG {
    int type; // size=0, offset=0
    char *text; // size=0, offset=4
};

struct COMBINELIST {
    void *combine_routine; // size=0, offset=0
    short item1; // size=0, offset=4
    short item2; // size=0, offset=6
    short combined_item; // size=0, offset=8
};

/* This file was automatically generated.  Do not edit! */
extern struct MENUTHANG current_options[3];
extern char oldLaraBusy;
extern char friggrimmer2;
extern char friggrimmer;
extern int OBJLIST_SPACING;
extern char *current_ammo_type;
extern char num_ammo_slots;
extern char ammo_selector_flag;
extern struct AMMOLIST ammo_object_list[3];
extern char Stashedcurrent_selected_option;
extern char current_selected_option;
extern char _bullshitbollox;
extern char bullshitbollox;
extern unsigned char ammo_active;
extern unsigned char go_deselect;
extern unsigned char go_select;
extern unsigned char right_repeat;
extern unsigned char left_repeat;
extern unsigned char go_down;
extern unsigned char go_up;
extern unsigned char go_right;
extern unsigned char go_left;
extern unsigned char deselect_debounce;
extern unsigned char select_debounce;
extern unsigned char down_debounce;
extern unsigned char up_debounce;
extern unsigned char right_debounce;
extern unsigned char left_debounce;
extern char use_the_bitch;
extern char loading_or_saving;
extern struct RINGME *rings[2];
extern char menu_active;
extern short combine_obj2;
extern short combine_obj1;
extern char combine_type_flag;
extern char seperate_type_flag;
extern short normal_ring_fade_dir;
extern short normal_ring_fade_val;
extern short combine_ring_fade_dir;
extern short combine_ring_fade_val;
extern short ammo_selector_fade_dir;
extern short ammo_selector_fade_val;
extern unsigned char keypadinputs[4];
extern short inventry_ypos;
extern short inventry_xpos;
extern unsigned char keypadpause;
extern unsigned char keypadnuminputs;
extern unsigned char keypady;
extern unsigned char keypadx;
extern int GLOBAL_invkeypadcombination;
extern int GLOBAL_invkeypadmode;
extern short stats_mode;
extern short examine_mode;
extern int GLOBAL_lastinvitem;
extern int GLOBAL_inventoryitemchosen;
extern int GLOBAL_enterinventory;
extern struct COMBINELIST dels_handy_combine_table[24];
extern short optmessages[11];
extern short options_table[99];
extern unsigned char wanky_secrets_table[18];
extern struct INVOBJ inventry_objects_list[100];
void do_playstation_button_prompts_v1();
void S_DrawPickup(short object_number);
void dels_give_lara_guns_cheat();
void dels_give_lara_items_cheat();
void do_stats_mode();
void do_examine_mode();
void do_keypad_mode();
void init_keypad_mode();
int convert_invobj_to_obj(int obj);
int convert_obj_to_invobj(short obj);
void remove_inventory_item(short object_number);
int have_i_got_object(short object_number);
void NailInvItem(short objnum);
void DEL_picked_up_object(short objnum);
void use_current_item();
void setup_objectlist_startposition2(short newobj);
void setup_objectlist_startposition(short newobj);
void combine_clothbottle(int flag);
void combine_PickupItem4(int flag);
void combine_PickupItem3(int flag);
void combine_PickupItem2(int flag);
void combine_PickupItem1(int flag);
void combine_KeyItem8(int flag);
void combine_KeyItem7(int flag);
void combine_KeyItem6(int flag);
void combine_KeyItem5(int flag);
void combine_KeyItem4(int flag);
void combine_KeyItem3(int flag);
void combine_KeyItem2(int flag);
void combine_KeyItem1(int flag);
void combine_PuzzleItem8(int flag);
void combine_PuzzleItem7(int flag);
void combine_PuzzleItem6(int flag);
void combine_PuzzleItem5(int flag);
void combine_PuzzleItem4(int flag);
void combine_PuzzleItem3(int flag);
void combine_PuzzleItem2(int flag);
void combine_PuzzleItem1(int flag);
void combine_crossbow_lasersight(int flag);
void combine_revolver_lasersight(int flag);
void combine_HK_SILENCER(int flag);
void seperate_object(short obj);
void combine_these_two_objects(short obj1,short obj2);
int do_these_objects_combine(int obj1,int obj2);
int have_i_got_item(short obj);
int is_item_currently_combinable(short obj);
void update_laras_weapons_status();
void spinback(unsigned short *cock);
void draw_ammo_selector();
void fade_ammo_selector();
void setup_ammo_selector();
void handle_inventry_menu();
void handle_object_changeover(int ringnum);
void draw_current_object_list(int ringnum);
void insert_object_into_list(int num);
void construct_object_list();
void insert_object_into_list_v2(int num);
void construct_combine_object_list();
int go_and_save_game();
int go_and_load_game();
void DrawInventoryItemMe(struct ITEM_INFO *item,long shade,int overlay,int shagflag);
void DrawThreeDeeObject2D(int x,int y,int num,int shade,int xrot,int yrot,int zrot,int bright,int overlay);
void do_debounced_joystick_poo();
void init_new_inventry();
int S_CallInventory2();

#endif
