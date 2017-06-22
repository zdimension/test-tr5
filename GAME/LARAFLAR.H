#ifndef GAME_LARAFLAR_H
#define GAME_LARAFLAR_H

/* This file was automatically generated.  Do not edit! */
void FlareControl(short item_number);
void ready_flare();
void undraw_flare_meshes();
void draw_flare_meshes();
void undraw_flare();
void draw_flare();
void set_flare_arm(int frame);
void CreateFlare(short object,int thrown);
void DrawFlareInAir(struct ITEM_INFO *item);
void DoFlareInHand(int flare_age);
int DoFlareLight(struct PHD_VECTOR *pos,int flare_age);

#endif
