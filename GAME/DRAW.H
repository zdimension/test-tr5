#ifndef GAME_DRAW_H
#define GAME_DRAW_H

/* This file was automatically generated.  Do not edit! */
extern short *SLhandPtr;
extern short *SRhandPtr;
extern short Sback_gun;
extern struct door_vbuf vbufdoor[4];
extern short HorizonClip;
extern long outside_bottom;
extern long outside_top;
extern long outside_right;
extern long outside_left;
extern long outside;
extern short GlobalRoomNumber;
extern unsigned char CreditsDone;
extern int CurrentRoom;
extern short *GLOBAL_gunflash_meshptr;
extern short interpolated_bounds[6];
extern short dLightningRand;
extern short LightningRand;
extern short LightningCount;
extern unsigned short LightningRGB[3];
extern unsigned short LightningRGBs[3];
extern long gfMirrorZPlane;
extern long camera_underwater;
extern int number_dynamics;
extern short draw_rooms[100];
extern int number_draw_rooms;
extern short SkyPos2;
extern short SkyPos;
extern short *target_mesh_ptr;
extern short *binoculars_mesh_ptr;
extern short *frames;
extern short *commands;
extern short **meshes;
extern struct CHANGE_STRUCT *changes;
extern struct RANGE_STRUCT *ranges;
extern struct ANIM_STRUCT *anims;
extern long *bones;
extern short number_rooms;
extern struct room_info *room;
extern short LightningSFXDelay;
void UpdateSkyLightning();
void CalculateObjectLightingLara();

#endif
