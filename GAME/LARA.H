#ifndef GAME_LARA_H
#define GAME_LARA_H

/* This file was automatically generated.  Do not edit! */
extern struct lara_info lara;
extern unsigned short DashTimer;
extern struct ITEM_INFO *lara_item;
extern short elevation;
void lara_as_pbleapoff(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_parallelbars(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_trfall(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_trwalk(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_trpose(struct ITEM_INFO *item,struct COLL_INFO *coll);
void GetTighRopeFallOff(long Regularity);
void LookLeftRight();
void LookUpDown();
void ResetLook();
void lara_col_jumper(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_default_col(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_wade(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_fastdive(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_swandive(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_roll2(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_roll(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_slideback(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_fallback(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_leftjump(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_rightjump(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_backjump(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_slide(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_stepleft(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_stepright(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_back(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_compress(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_land(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_splat(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_fastfall(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_death(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_turn_l(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_turn_r(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_fastback(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_pose(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_run(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_walk(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_pulley(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_turnswitch(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_controlledl(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_controlled(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_deathslide(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_wade(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_waterout(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_gymnast(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_fastdive(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_swandive(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_special(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_usepuzzle(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_usekey(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_switchoff(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_switchon(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_pickupflare(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_pickup(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_ppready(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_pullblock(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_pushblock(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_slideback(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_fallback(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_leftjump(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_rightjump(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_backjump(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_slide(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_stepleft(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_stepright(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_fastturn(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_fastturn(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_null(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_back(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_compress(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_splat(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_intcornerr(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_intcornerl(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_extcornerr(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_extcornerl(struct ITEM_INFO *item,struct COLL_INFO *coll);
void SetCornerAnim(struct ITEM_INFO *item,struct COLL_INFO *coll,short rot,short flip);
void lara_col_hangright(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_hangright(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_hangleft(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_hangleft(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_hang(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_hang(struct ITEM_INFO *item,struct COLL_INFO *coll);
extern short angle;
int CanLaraHangSideways(struct ITEM_INFO *item,struct COLL_INFO *coll,short angle);
void lara_void_func(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_fastfall(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_death(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_turn_l(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_turn_r(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_fastback(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_run(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_walk(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_reach(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_reach(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_forwardjump(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_forwardjump(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_upjump(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_upjump(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_stop(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_stop(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_climbroped(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_climbrope(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_ropefwd(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_roper(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_ropel(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_rope(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_rope(struct ITEM_INFO *item,struct COLL_INFO *coll);
void ApplyVelocityToRope(int node,unsigned short angle,unsigned short n);
void UpdateRopeSwing(struct ITEM_INFO *item);
void JumpOffRope(struct ITEM_INFO *item);
void FallFromRope(struct ITEM_INFO *item);
void lara_col_poledown(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_poleup(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_poleright(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_poleleft(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_polestat(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_monkey180(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_monkey180(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_hangturnr(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_hangturnlr(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_hangturnl(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_monkeyr(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_monkeyr(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_monkeyl(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_monkeyl(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_monkeyswing(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_monkeyswing(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_hang2(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_hang2(struct ITEM_INFO *item,struct COLL_INFO *coll);
short TestMonkeyRight(struct ITEM_INFO *item,struct COLL_INFO *coll);
short TestMonkeyLeft(struct ITEM_INFO *item,struct COLL_INFO *coll);
short GetDirOctant(long rot);
void MonkeySwingSnap(struct ITEM_INFO *item,struct COLL_INFO *coll);
void MonkeySwingFall(struct ITEM_INFO *item);
void lara_col_dashdive(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_dashdive(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_dash(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_dash(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_crawl2hang(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_crawlb(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_crawlb(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_all4turnr(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_all4turnlr(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_all4turnl(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_crawl(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_crawl(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_all4s(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_all4s(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_duck(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_duck(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_col_ducklr(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_duckr(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_as_duckl(struct ITEM_INFO *item,struct COLL_INFO *coll);
void LaraAboveWater(struct ITEM_INFO *item,struct COLL_INFO *coll);
int TestHangSwingIn(struct ITEM_INFO *item,short angle);
int LaraHangLeftCornerTest(struct ITEM_INFO *item,struct COLL_INFO *coll);
int LaraHangRightCornerTest(struct ITEM_INFO *item,struct COLL_INFO *coll);
int IsValidHangPos(struct ITEM_INFO *item,struct COLL_INFO *coll);
int LaraHangTest(struct ITEM_INFO *item,struct COLL_INFO *coll);
void SnapLaraToEdgeOfBlock(struct ITEM_INFO *item,struct COLL_INFO *coll,short angle);
int LaraTestHangOnClimbWall(struct ITEM_INFO *item,struct COLL_INFO *coll);
void LaraSlideEdgeJump(struct ITEM_INFO *item,struct COLL_INFO *coll);
void LaraDeflectEdgeJump(struct ITEM_INFO *item,struct COLL_INFO *coll);
void lara_slide_slope(struct ITEM_INFO *item,struct COLL_INFO *coll);
void LaraCollideStop(struct ITEM_INFO *item,struct COLL_INFO *coll);
int TestWall(struct ITEM_INFO *item,long front,long right,long down);
int TestLaraVault(struct ITEM_INFO *item,struct COLL_INFO *coll);
int LaraTestClimbStance(struct ITEM_INFO *item,struct COLL_INFO *coll);
int LaraTestEdgeCatch(struct ITEM_INFO *item,struct COLL_INFO *coll,long *edge);
int LaraDeflectEdgeDuck(struct ITEM_INFO *item,struct COLL_INFO *coll);
int LaraDeflectEdge(struct ITEM_INFO *item,struct COLL_INFO *coll);
int LaraHitCeiling(struct ITEM_INFO *item,struct COLL_INFO *coll);
int LaraLandedBad(struct ITEM_INFO *l,struct COLL_INFO *coll);
int LaraFallen(struct ITEM_INFO *item,struct COLL_INFO *coll);
int TestLaraSlide(struct ITEM_INFO *item,struct COLL_INFO *coll);
short LaraCeilingFront(struct ITEM_INFO *item,short ang,long dist,long h);
extern struct room_info *room;
short LaraFloorFront(struct ITEM_INFO *item,short ang,long dist);
void GetLaraCollisionInfo(struct ITEM_INFO *item,struct COLL_INFO *coll);

#endif