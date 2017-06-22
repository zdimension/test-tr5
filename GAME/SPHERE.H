#ifndef GAME_SPHERE_H
#define GAME_SPHERE_H

struct SPHERE {
    long x; // size=0, offset=0
    long y; // size=0, offset=4
    long z; // size=0, offset=8
    long r; // size=0, offset=12
};

/* This file was automatically generated.  Do not edit! */
extern struct SPHERE Slist[34];
extern struct SPHERE LaraSpheres[15];
extern int NumLaraSpheres;
extern char GotLaraSpheres;
int TestCollision(struct ITEM_INFO *item,struct ITEM_INFO *laraitem);

#endif
