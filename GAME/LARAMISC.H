#ifndef GAME_LARAMISC_H
#define GAME_LARAMISC_H

/* This file was automatically generated.  Do not edit! */
extern short cheat_hit_points;
extern struct COLL_INFO mycoll;
extern short SubsuitAir;
extern char *htypes[4];
extern char *coll_typess[8];
extern char *guntypes[9];
extern char *waterstates[5];
extern char *gunstates[6];
extern char *quadrant_names[4];
extern char *states[131];
void GetLaraDeadlyBounds();
void DelAlignLaraToRope(struct ITEM_INFO *item);
void InitialiseLaraAnims(struct ITEM_INFO *item);
void InitialiseLaraLoad(short item_num);
void LaraControl(short item_number);
void LaraCheat(struct ITEM_INFO *item,struct COLL_INFO *coll);
void LaraInitialiseMeshes();

#endif
