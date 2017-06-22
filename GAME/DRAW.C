#include "DRAW.H"
/*
 * Offset 0x2BFA0
 * C:\Projects2\Tomb5\GAME\DRAW.C (line 252)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ CalculateObjectLightingLara()
{ // line 2, offset 0x2bfa0
    { // line 9, offset 0x2bfc4
        short room_no; // stack offset -16
        struct PHD_VECTOR pos; // stack offset -32
    } // line 45, offset 0x2c0c0
} // line 46, offset 0x2c0c0
/*
 * Offset 0x2C0D0
 * C:\Projects2\Tomb5\GAME\DRAW.C (line 304)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ UpdateSkyLightning()
{ // line 2, offset 0x2c0d0
    long lp; // register $5
} // line 37, offset 0x2c1dc
extern short LightningSFXDelay; // offset 0xA0894
extern struct room_info *room;
extern short number_rooms; // offset 0xA25E8
extern long *bones; // offset 0xA25E4
extern struct ANIM_STRUCT *anims;
extern struct RANGE_STRUCT *ranges;
extern struct CHANGE_STRUCT *changes;
extern short **meshes; // offset 0xA2600
extern short *commands; // offset 0xA262C
extern short *frames; // offset 0xA25F4
extern short *binoculars_mesh_ptr; // offset 0xA25FC
extern short *target_mesh_ptr; // offset 0xA25F8
extern short SkyPos; // offset 0xA25D4
extern short SkyPos2; // offset 0xA25B8
extern int number_draw_rooms; // offset 0xA24E0
extern short draw_rooms[100];
extern int number_dynamics; // offset 0xA25D0
extern long camera_underwater; // offset 0xA2628
extern long gfMirrorZPlane; // offset 0xA2608
extern unsigned short LightningRGBs[3];
extern unsigned short LightningRGB[3];
extern short LightningCount; // offset 0xA25D8
extern short LightningRand; // offset 0xA2614
extern short dLightningRand; // offset 0xA2618
extern short interpolated_bounds[6];
extern short *GLOBAL_gunflash_meshptr; // offset 0xA2624
extern int CurrentRoom; // offset 0xA24D8
extern unsigned char CreditsDone; // offset 0xA25AC
extern short GlobalRoomNumber; // offset 0xA25C4
extern long outside; // offset 0xA25F0
extern long outside_left; // offset 0xA2610
extern long outside_right; // offset 0xA25C8
extern long outside_top; // offset 0xA2604
extern long outside_bottom; // offset 0xA25CC
extern short HorizonClip; // offset 0xA25B0
extern struct door_vbuf vbufdoor[4];
extern short Sback_gun; // offset 0xA25DC
extern short *SRhandPtr; // offset 0xA2630
extern short *SLhandPtr; // offset 0xA25EC