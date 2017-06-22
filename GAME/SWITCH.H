#ifndef GAME_SWITCH_H
#define GAME_SWITCH_H

/* This file was automatically generated.  Do not edit! */
extern unsigned char SequenceUsed[6];
extern unsigned char SequenceResults[3][3][3];
extern unsigned char Sequences[3];
extern unsigned char CurrentSequence;
void ProcessExplodingSwitchType8(struct ITEM_INFO *item);
void CrowDoveSwitchCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void CrowDoveSwitchControl(short item_number);
void CogSwitchCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void CogSwitchControl(short item_num);
void FullBlockSwitchCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void FullBlockSwitchControl(short item_number);
void CrowbarSwitchCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void JumpSwitchCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void RailSwitchCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void TurnSwitchCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void TurnSwitchControl(short item_num);
void PulleyCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void UnderwaterSwitchCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void SwitchCollision2(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void SwitchCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void SwitchControl(short item_number);
void TestTriggersAtXYZ(long x,long y,long z,short room_number,int heavy,int flags);
int GetKeyTrigger(struct ITEM_INFO *item);
int GetSwitchTrigger(struct ITEM_INFO *item,short *ItemNos,long AttatchedToSwitch);
int SwitchTrigger(short item_num,short timer);

#endif
