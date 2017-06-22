#include "NEWINV2.H"
/*
 * Offset 0x3B7A8
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 659)
 * Stack frame base $29, size 56
 */
int /*reg $31*/ S_CallInventory2()
{ // line 2, offset 0x3b7a8
    short flag; // register $18
    int return_value; // register $19
    { // line 291, offset 0x3bd3c
        int val; // register $16
    } // line 335, offset 0x3be20
    { // line 387, offset 0x3bf3c
        short room_number; // stack offset -32
        struct ITEM_INFO *item; // register $16
        int val; // register $5
    } // line 415, offset 0x3c000
} // line 421, offset 0x3c024
/*
 * Offset 0x3C024
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 1118)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ init_new_inventry();
/*
 * Offset 0x3C224
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 1201)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ do_debounced_joystick_poo();
/*
 * Offset 0x3C43C
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 1315)
 * Stack frame base $29, size 208
 */
void /*reg $31*/ DrawThreeDeeObject2D(int x /*reg $21*/, int y /*reg $18*/, int num /*reg $6*/, int shade /*reg $20*/, int xrot /*sp 16*/, int yrot /*sp 20*/, int zrot /*sp 24*/, int bright /*sp 28*/, int overlay /*sp 32*/)
{ // line 1, offset 0x3c43c
    struct ITEM_INFO item; // stack offset -176
    struct INVOBJ *objme; // register $17
} // line 84, offset 0x3c6a0
/*
 * Offset 0x3C6A0
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 1409)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ DrawInventoryItemMe(struct ITEM_INFO *item /*reg $20*/, long shade /*reg $30*/, int overlay /*reg $23*/, int shagflag /*reg $16*/)
{ // line 1, offset 0x3c6a0
    struct ANIM_STRUCT *anim; // register $4
    struct object_info *object; // register $21
    long *bone; // register $17
    short *rotation1; // stack offset -48
    short **meshpp; // register $18
    short *frmptr; // register $19
    long i; // register $19
    long poppush; // register $16
    unsigned long bit; // register $22
} // line 179, offset 0x3c900
/*
 * Offset 0x3C900
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 1593)
 * Stack frame base $29, size 24
 */
int /*reg $31*/ go_and_load_game();
/*
 * Offset 0x3C920
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 1601)
 * Stack frame base $29, size 24
 */
int /*reg $31*/ go_and_save_game();
/*
 * Offset 0x3C940
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 1614)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ construct_combine_object_list()
{ // line 2, offset 0x3c940
    int n; // register $16
} // line 76, offset 0x3cb90
/*
 * Offset 0x3CB90
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 1693)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ insert_object_into_list_v2(int num /*reg $5*/);
/*
 * Offset 0x3CC80
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 1714)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ construct_object_list()
{ // line 2, offset 0x3cc80
    int n; // register $16
} // line 215, offset 0x3d2c4
/*
 * Offset 0x3D2C4
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 1931)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ insert_object_into_list(int num /*reg $4*/);
/*
 * Offset 0x3D350
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 1958)
 * Stack frame base $29, size 216
 */
void /*reg $31*/ draw_current_object_list(int ringnum /*reg $22*/)
{ // line 1, offset 0x3d350
    int n; // register $21
    int maxobj; // register $23
    int xoff; // stack offset -48
    int i; // register $19
    int shade; // register $17
    int minobj; // stack offset -44
    { // line 251, offset 0x3d7b4
        char textbufme[128]; // stack offset -176
        int objmeup; // register $4
        int nummeup; // register $8
    } // line 354, offset 0x3dadc
    { // line 357, offset 0x3dadc
        short ymeup; // register $10
        short yrot; // register $9
        struct INVOBJ *objme; // register $3
        { // line 394, offset 0x3db74
            int activenum; // register $3
        } // line 419, offset 0x3dc4c
    } // line 424, offset 0x3dc4c
} // line 510, offset 0x3dee8
/*
 * Offset 0x3DF18
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 2515)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ handle_object_changeover(int ringnum /*reg $4*/);
/*
 * Offset 0x3DF44
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 2526)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ handle_inventry_menu()
{ // line 3, offset 0x3df44
    int n; // register $19
    int opts; // register $16
    int i; // register $17
    int ypos; // register $18
    int num; // register $9
    { // line 22, offset 0x3dff8
    } // line 50, offset 0x3e078
} // line 338, offset 0x3e9d0
/*
 * Offset 0x3E9F8
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 2885)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ setup_ammo_selector()
{ // line 2, offset 0x3e9f8
    int num; // register $4
    int opts; // register $11
} // line 102, offset 0x3ed00
/*
 * Offset 0x3ED08
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 2990)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ fade_ammo_selector();
/*
 * Offset 0x3EDDC
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3022)
 * Stack frame base $29, size 336
 */
void /*reg $31*/ draw_ammo_selector()
{ // line 2, offset 0x3eddc
    int n; // register $17
    int xpos; // register $18
    { // line 20, offset 0x3ee74
        short yrot; // register $16
        struct INVOBJ *objme; // register $2
        { // line 48, offset 0x3eee4
            char cunter[256]; // stack offset -296
        } // line 65, offset 0x3efb8
    } // line 73, offset 0x3f044
} // line 80, offset 0x3f068
/*
 * Offset 0x3F094
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3113)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ spinback(unsigned short *cock /*reg $4*/)
{ // line 1, offset 0x3f094
    unsigned short val; // register $5
    unsigned short val2; // register $6
} // line 33, offset 0x3f134
/*
 * Offset 0x3F13C
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3156)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ update_laras_weapons_status();
/*
 * Offset 0x3F200
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3277)
 * Stack frame base $29, size 32
 */
int /*reg $31*/ is_item_currently_combinable(short obj /*reg $17*/)
{ // line 1, offset 0x3f200
    int n; // register $18
} // line 21, offset 0x3f29c
/*
 * Offset 0x3F29C
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3300)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ have_i_got_item(short obj /*reg $4*/)
{ // line 1, offset 0x3f29c
    int n; // register $5
} // line 11, offset 0x3f2dc
/*
 * Offset 0x3F2DC
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3315)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ do_these_objects_combine(int obj1 /*reg $4*/, int obj2 /*reg $5*/)
{ // line 1, offset 0x3f2dc
    int n; // register $6
} // line 12, offset 0x3f348
/*
 * Offset 0x3F348
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3333)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ combine_these_two_objects(short obj1 /*reg $8*/, short obj2 /*reg $5*/)
{ // line 1, offset 0x3f348
    int n; // register $6
} // line 19, offset 0x3f424
/*
 * Offset 0x3F424
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3357)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ seperate_object(short obj /*reg $4*/)
{ // line 1, offset 0x3f424
    int n; // register $6
} // line 18, offset 0x3f4c0
/*
 * Offset 0x3F4C0
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3389)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_HK_SILENCER(int flag /*reg $4*/);
/*
 * Offset 0x3F500
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3415)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ combine_revolver_lasersight(int flag /*reg $4*/);
/*
 * Offset 0x3F590
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3435)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ combine_crossbow_lasersight(int flag /*reg $4*/);
/*
 * Offset 0x3F620
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3457)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_PuzzleItem1(int flag /*reg $4*/);
/*
 * Offset 0x3F640
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3463)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_PuzzleItem2(int flag /*reg $4*/);
/*
 * Offset 0x3F660
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3469)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_PuzzleItem3(int flag /*reg $4*/);
/*
 * Offset 0x3F680
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3475)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_PuzzleItem4(int flag /*reg $4*/);
/*
 * Offset 0x3F6A0
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3481)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_PuzzleItem5(int flag /*reg $4*/);
/*
 * Offset 0x3F6C0
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3487)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_PuzzleItem6(int flag /*reg $4*/);
/*
 * Offset 0x3F6E0
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3493)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_PuzzleItem7(int flag /*reg $4*/);
/*
 * Offset 0x3F700
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3499)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_PuzzleItem8(int flag /*reg $4*/);
/*
 * Offset 0x3F720
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3511)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_KeyItem1(int flag /*reg $4*/);
/*
 * Offset 0x3F744
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3517)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_KeyItem2(int flag /*reg $4*/);
/*
 * Offset 0x3F768
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3523)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_KeyItem3(int flag /*reg $4*/);
/*
 * Offset 0x3F78C
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3529)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_KeyItem4(int flag /*reg $4*/);
/*
 * Offset 0x3F7B0
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3535)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_KeyItem5(int flag /*reg $4*/);
/*
 * Offset 0x3F7D4
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3541)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_KeyItem6(int flag /*reg $4*/);
/*
 * Offset 0x3F7F8
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3547)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_KeyItem7(int flag /*reg $4*/);
/*
 * Offset 0x3F81C
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3553)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_KeyItem8(int flag /*reg $4*/);
/*
 * Offset 0x3F840
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3562)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_PickupItem1(int flag /*reg $4*/);
/*
 * Offset 0x3F864
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3568)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_PickupItem2(int flag /*reg $4*/);
/*
 * Offset 0x3F888
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3574)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_PickupItem3(int flag /*reg $4*/);
/*
 * Offset 0x3F8AC
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3580)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_PickupItem4(int flag /*reg $4*/);
/*
 * Offset 0x3F8D0
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3590)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ combine_clothbottle(int flag /*reg $4*/);
/*
 * Offset 0x3F8F0
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3608)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ setup_objectlist_startposition(short newobj /*reg $4*/)
{ // line 1, offset 0x3f8f0
    int n; // register $6
} // line 9, offset 0x3f938
/*
 * Offset 0x3F938
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3620)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ setup_objectlist_startposition2(short newobj /*reg $8*/)
{ // line 1, offset 0x3f938
    int n; // register $6
} // line 9, offset 0x3f9a0
/*
 * Offset 0x3F9A0
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3645)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ use_current_item()
{ // line 2, offset 0x3f9a0
    short invobject; // register $7
    short gmeobject; // register $5
    long OldBinocular; // register $9
} // line 179, offset 0x3fea0
/*
 * Offset 0x3FEB0
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 3856)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ DEL_picked_up_object(short objnum /*reg $4*/)
{ // line 1, offset 0x3feb0
    { // line 130, offset 0x401b4
        int tf; // register $2
    } // line 133, offset 0x401f4
    { // line 137, offset 0x40204
        int lf; // register $2
    } // line 140, offset 0x40244
} // line 211, offset 0x40584
/*
 * Offset 0x40584
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 4074)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ NailInvItem(short objnum /*reg $4*/);
/*
 * Offset 0x4086C
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 4194)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ have_i_got_object(short object_number /*reg $4*/);
/*
 * Offset 0x4097C
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 4217)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ remove_inventory_item(short object_number /*reg $4*/);
/*
 * Offset 0x40AC4
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 4244)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ convert_obj_to_invobj(short obj /*reg $4*/)
{ // line 1, offset 0x40ac4
    int n; // register $3
} // line 9, offset 0x40b00
/*
 * Offset 0x40B08
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 4256)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ convert_invobj_to_obj(int obj /*reg $4*/);
/*
 * Offset 0x40B2C
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 4298)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ init_keypad_mode();
/*
 * Offset 0x40B54
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 4310)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ do_keypad_mode()
{ // line 2, offset 0x40b54
    struct INVOBJ *objme; // register $7
    char buf[5]; // stack offset -24
    int n; // register $5
    { // line 12, offset 0x40b8c
        unsigned char val; // register $2
    } // line 18, offset 0x40ba4
    { // line 63, offset 0x40e00
        int val; // register $4
    } // line 109, offset 0x41010
    { // line 113, offset 0x41020
        unsigned char val; // register $16
    } // line 150, offset 0x41118
} // line 163, offset 0x411b0
/*
 * Offset 0x411C4
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 4481)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ do_examine_mode()
{ // line 2, offset 0x411c4
    struct INVOBJ *objme; // register $16
    int saved_scale; // register $17
} // line 31, offset 0x412a8
/*
 * Offset 0x412BC
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 4521)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ do_stats_mode();
/*
 * Offset 0x41324
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 4573)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ dels_give_lara_items_cheat()
{ // line 2, offset 0x41324
    int piss; // register $4
} // line 44, offset 0x41470
/*
 * Offset 0x41470
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 4622)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ dels_give_lara_guns_cheat();
/*
 * Offset 0x41608
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 4826)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ S_DrawPickup(short object_number /*reg $4*/)
{ // line 1, offset 0x41608
} // line 7, offset 0x416e0
/*
 * Offset 0x416E0
 * C:\Projects2\Tomb5\GAME\NEWINV2.C (line 4839)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ do_playstation_button_prompts_v1()
{ // line 2, offset 0x416e0
} // line 37, offset 0x418e8
extern struct INVOBJ inventry_objects_list[100];
extern unsigned char wanky_secrets_table[18];
extern short options_table[99];
extern short optmessages[11];
extern struct COMBINELIST dels_handy_combine_table[24];
extern int GLOBAL_enterinventory; // offset 0xA0B30
extern int GLOBAL_inventoryitemchosen; // offset 0xA0B34
extern int GLOBAL_lastinvitem; // offset 0xA0B2C
extern short examine_mode; // offset 0xA0B28
extern short stats_mode; // offset 0xA0B2A
extern int GLOBAL_invkeypadmode; // offset 0xA0B38
extern int GLOBAL_invkeypadcombination; // offset 0xA0B3C
extern unsigned char keypadx; // offset 0xA0B40
extern unsigned char keypady; // offset 0xA0B41
extern unsigned char keypadnuminputs; // offset 0xA0B42
extern unsigned char keypadpause; // offset 0xA0B43
extern short inventry_xpos; // offset 0xA0B44
extern short inventry_ypos; // offset 0xA0B46
extern unsigned char keypadinputs[4];
extern short ammo_selector_fade_val; // offset 0xA3710
extern short ammo_selector_fade_dir; // offset 0xA371C
extern short combine_ring_fade_val; // offset 0xA370C
extern short combine_ring_fade_dir; // offset 0xA3718
extern short normal_ring_fade_val; // offset 0xA3708
extern short normal_ring_fade_dir; // offset 0xA3714
extern char seperate_type_flag; // offset 0xA3738
extern char combine_type_flag; // offset 0xA373C
extern short combine_obj1; // offset 0xA3720
extern short combine_obj2; // offset 0xA3724
extern char menu_active; // offset 0xA36F0
extern struct RINGME *rings[2];
extern char loading_or_saving; // offset 0xA3778
extern char use_the_bitch; // offset 0xA36FC
extern unsigned char left_debounce; // offset 0xA3760
extern unsigned char right_debounce; // offset 0xA376C
extern unsigned char up_debounce; // offset 0xA3768
extern unsigned char down_debounce; // offset 0xA3764
extern unsigned char select_debounce; // offset 0xA375C
extern unsigned char deselect_debounce; // offset 0xA3770
extern unsigned char go_left; // offset 0xA36F8
extern unsigned char go_right; // offset 0xA36D8
extern unsigned char go_up; // offset 0xA3704
extern unsigned char go_down; // offset 0xA36F4
extern unsigned char left_repeat; // offset 0xA36E8
extern unsigned char right_repeat; // offset 0xA36EC
extern unsigned char go_select; // offset 0xA3734
extern unsigned char go_deselect; // offset 0xA379C
extern unsigned char ammo_active; // offset 0xA377C
extern char bullshitbollox; // offset 0xA37A4
extern char _bullshitbollox; // offset 0xA37A0
static unsigned short AmountShotGunAmmo1; // offset 0xA36B8
static unsigned short AmountShotGunAmmo2; // offset 0xA36BA
static unsigned short AmountHKAmmo1; // offset 0xA36BC
static unsigned short AmountCrossBowAmmo1; // offset 0xA36BE
static unsigned short AmountCrossBowAmmo2; // offset 0xA36C0
static unsigned short AmountUziAmmo; // offset 0xA36C2
static unsigned short AmountRevolverAmmo; // offset 0xA36C4
static unsigned short AmountPistolsAmmo; // offset 0xA36C6
static char CurrentPistolsAmmoType; // offset 0xA36C8
static char CurrentUziAmmoType; // offset 0xA36C9
static char CurrentRevolverAmmoType; // offset 0xA36CA
static char CurrentShotGunAmmoType; // offset 0xA36CB
static char CurrentGrenadeGunAmmoType; // offset 0xA36CC
static char CurrentCrossBowAmmoType; // offset 0xA36CD
static char StashedCurrentPistolsAmmoType; // offset 0xA36CE
static char StashedCurrentUziAmmoType; // offset 0xA36CF
static char StashedCurrentRevolverAmmoType; // offset 0xA36D0
static char StashedCurrentShotGunAmmoType; // offset 0xA36D1
static char StashedCurrentGrenadeGunAmmoType; // offset 0xA36D2
static char StashedCurrentCrossBowAmmoType; // offset 0xA36D3
extern char current_selected_option; // offset 0xA36E0
extern char Stashedcurrent_selected_option; // offset 0xA36DC
extern struct AMMOLIST ammo_object_list[3];
extern char ammo_selector_flag; // offset 0xA3728
extern char num_ammo_slots; // offset 0xA3758
extern char *current_ammo_type; // offset 0xA3700
extern int OBJLIST_SPACING; // offset 0xA3798
extern char friggrimmer; // offset 0xA36D4
extern char friggrimmer2; // offset 0xA36E4
extern char oldLaraBusy; // offset 0xA3774
extern struct MENUTHANG current_options[3];