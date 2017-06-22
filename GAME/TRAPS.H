#ifndef GAME_TRAPS_H
#define GAME_TRAPS_H

/* This file was automatically generated.  Do not edit! */
extern short SPDETyoffs[8];
extern unsigned char Flame3xzoffs[16][2];
extern short SPyoffs[8];
extern short SPxzoffs[8];
void ControlExplosion(short item_number);
void ControlRaisingBlock(short item_number);
void ControlScaledSpike(short item_number);
int TestBoundsCollideTeethSpikes(struct ITEM_INFO *item);
void ControlTwoBlockPlatform(short item_number);
int OnTwoBlockPlatform(struct ITEM_INFO *item,long x,long z);
void TwoBlockPlatformCeiling(struct ITEM_INFO *item,long x,long y,long z,long *height);
void TwoBlockPlatformFloor(struct ITEM_INFO *item,long x,long y,long z,long *height);
void DrawScaledSpike(struct ITEM_INFO *item);
void RollingBallCollision(short item_number,struct ITEM_INFO *laraitem,struct COLL_INFO *coll);
void ControlRollingBall(short item_number);
void LavaBurn(struct ITEM_INFO *item);
void LaraBurn();
void FlameControl(short fx_number);
void FlameEmitter3Control(short item_number);
void FlameEmitter2Control(short item_number);
void FlameEmitterControl(short item_number);
void DartsControl(short item_num);
void DartEmitterControl(short item_num);
void FallingCeiling(short item_number);
void FallingBlockCeiling(struct ITEM_INFO *item,long x,long y,long z,long *height);
void FallingBlockFloor(struct ITEM_INFO *item,long x,long y,long z,long *height);
void FallingBlock(short item_number);
void FallingBlockCollision(short item_number,struct ITEM_INFO *l,struct COLL_INFO *coll);
void TrapDoorCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void CeilingTrapDoorCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void FloorTrapDoorCollision(short item_num,struct ITEM_INFO *l,struct COLL_INFO *coll);
void TrapDoorControl(short item_number);
void CloseTrapDoor(struct ITEM_INFO *item);
void OpenTrapDoor(struct ITEM_INFO *item);

#endif
