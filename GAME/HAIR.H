#ifndef GAME_HAIR_H
#define GAME_HAIR_H

struct HAIR_STRUCT {
    struct PHD_3DPOS pos; // size=20, offset=0
    struct PHD_VECTOR vel; // size=12, offset=20
};

/* This file was automatically generated.  Do not edit! */
extern struct HAIR_STRUCT hairs[2][7];
extern int first_hair[2];
extern int hair_dwind_angle;
extern int hair_wind_angle;
extern int hair_wind;
void InitialiseHair();

#endif
