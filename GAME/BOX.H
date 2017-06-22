#ifndef GAME_BOX_H
#define GAME_BOX_H

/* This file was automatically generated.  Do not edit! */
extern unsigned short loops;
extern unsigned short testclip;
extern short *ground_zone[5][2];
extern unsigned short *overlap;
extern struct box_info *boxes;
extern int number_boxes;
void DropBaddyPickups(struct ITEM_INFO *item);
int MoveCreature3DPos(struct PHD_3DPOS *srcpos,struct PHD_3DPOS *destpos,int velocity,short angdif,int angadd);
extern short angle;
void CreatureYRot(struct PHD_3DPOS *srcpos,short angle,short angadd);
short SameZone(struct creature_info *creature,struct ITEM_INFO *target_item);
void FindAITargetObject(struct creature_info *creature,short obj_num);
void GetAITarget(struct creature_info *creature);
short AIGuard(struct creature_info *creature);
void AlertNearbyGuards(struct ITEM_INFO *item);
void AlertAllGuards(short item_number);
void CreatureKill(struct ITEM_INFO *item,int kill_anim,int kill_state,short lara_anim);
int CreatureVault(short item_number,short angle,int vault,int shift);
short CreatureEffectT(struct ITEM_INFO *item,struct BITE_INFO *bite,short damage,short angle,short *generate);
short CreatureEffect(struct ITEM_INFO *item,struct BITE_INFO *bite,short *generate);
void CreatureUnderwater(struct ITEM_INFO *item,long depth);
void CreatureFloat(short item_number);
void CreatureJoint(struct ITEM_INFO *item,short joint,short required);
void CreatureTilt(struct ITEM_INFO *item,short angle);
short CreatureTurn(struct ITEM_INFO *item,short maximum_turn);
int CreatureAnimation(short item_number,short angle,short tilt);
void CreatureDie(short item_number,int explode);
int BadFloor(long x,long y,long z,long box_height,long next_height,int room_number,struct lot_info *LOT);
int CreatureCreature(short item_number);
enum target_type CalculateTarget(struct PHD_VECTOR *target,struct ITEM_INFO *item,struct lot_info *LOT);
void CreatureMood(struct ITEM_INFO *item,struct AI_info *info,int violent);
void GetCreatureMood(struct ITEM_INFO *item,struct AI_info *info,int violent);
int ValidBox(struct ITEM_INFO *item,short zone_number,short box_number);
int EscapeBox(struct ITEM_INFO *item,struct ITEM_INFO *enemy,short box_number);
void TargetBox(struct lot_info *LOT,short box_number);
int UpdateLOT(struct lot_info *LOT,int expansion);
int SearchLOT(struct lot_info *LOT,int expansion);
void CreatureAIInfo(struct ITEM_INFO *item,struct AI_info *info);
int CreatureActive(short item_number);
void InitialiseCreature(short item_number);
int StalkBox(struct ITEM_INFO *item,struct ITEM_INFO *enemy,short box_number);

#endif
