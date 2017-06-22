#ifndef GAME_LARA_H
#define GAME_LARA_H

struct lara_arm {
    short *frame_base; // size=0, offset=0
    short frame_number; // size=0, offset=4
    short anim_number; // size=0, offset=6
    short lock; // size=0, offset=8
    short y_rot; // size=0, offset=10
    short x_rot; // size=0, offset=12
    short z_rot; // size=0, offset=14
    short flash_gun; // size=0, offset=16
};

struct lara_info {
    short item_number; // size=0, offset=0
    short gun_status; // size=0, offset=2
    short gun_type; // size=0, offset=4
    short request_gun_type; // size=0, offset=6
    short last_gun_type; // size=0, offset=8
    short calc_fallspeed; // size=0, offset=10
    short water_status; // size=0, offset=12
    short climb_status; // size=0, offset=14
    short pose_count; // size=0, offset=16
    short hit_frame; // size=0, offset=18
    short hit_direction; // size=0, offset=20
    short air; // size=0, offset=22
    short dive_count; // size=0, offset=24
    short death_count; // size=0, offset=26
    short current_active; // size=0, offset=28
    short current_xvel; // size=0, offset=30
    short current_yvel; // size=0, offset=32
    short current_zvel; // size=0, offset=34
    short spaz_effect_count; // size=0, offset=36
    short flare_age; // size=0, offset=38
    short BurnCount; // size=0, offset=40
    short weapon_item; // size=0, offset=42
    short back_gun; // size=0, offset=44
    short flare_frame; // size=0, offset=46
    short poisoned; // size=0, offset=48
    short dpoisoned; // size=0, offset=50
    unsigned char Anxiety; // size=0, offset=52
    unsigned char wet[15]; // size=15, offset=53
    unsigned short flare_control_left : 1; // offset=68.0
    unsigned short Unused1 : 1; // offset=68.1
    unsigned short look : 1; // offset=68.2
    unsigned short burn : 1; // offset=68.3
    unsigned short keep_ducked : 1; // offset=68.4
    unsigned short IsMoving : 1; // offset=68.5
    unsigned short CanMonkeySwing : 1; // offset=68.6
    unsigned short BurnBlue : 2; // offset=68.7
    unsigned short Gassed : 1; // offset=69.1
    unsigned short BurnSmoke : 1; // offset=69.2
    unsigned short IsDucked : 1; // offset=69.3
    unsigned short has_fired : 1; // offset=69.4
    unsigned short Busy : 1; // offset=69.5
    unsigned short LitTorch : 1; // offset=69.6
    unsigned short IsClimbing : 1; // offset=69.7
    unsigned short Fired : 1; // offset=70.0
    long water_surface_dist; // size=0, offset=72
    struct PHD_VECTOR last_pos; // size=12, offset=76
    struct FX_INFO *spaz_effect; // size=44, offset=88
    int mesh_effects; // size=0, offset=92
    short *mesh_ptrs[15]; // size=60, offset=96
    struct ITEM_INFO *target; // size=144, offset=156
    short target_angles[2]; // size=4, offset=160
    short turn_rate; // size=0, offset=164
    short move_angle; // size=0, offset=166
    short head_y_rot; // size=0, offset=168
    short head_x_rot; // size=0, offset=170
    short head_z_rot; // size=0, offset=172
    short torso_y_rot; // size=0, offset=174
    short torso_x_rot; // size=0, offset=176
    short torso_z_rot; // size=0, offset=178
    struct lara_arm left_arm; // size=20, offset=180
    struct lara_arm right_arm; // size=20, offset=200
    unsigned short holster; // size=0, offset=220
    struct creature_info *creature; // size=228, offset=224
    long CornerX; // size=0, offset=228
    long CornerZ; // size=0, offset=232
    char RopeSegment; // size=0, offset=236
    char RopeDirection; // size=0, offset=237
    short RopeArcFront; // size=0, offset=238
    short RopeArcBack; // size=0, offset=240
    short RopeLastX; // size=0, offset=242
    short RopeMaxXForward; // size=0, offset=244
    short RopeMaxXBackward; // size=0, offset=246
    long RopeDFrame; // size=0, offset=248
    long RopeFrame; // size=0, offset=252
    unsigned short RopeFrameRate; // size=0, offset=256
    unsigned short RopeY; // size=0, offset=258
    long RopePtr; // size=0, offset=260
    void *GeneralPtr; // size=0, offset=264
    int RopeOffset; // size=0, offset=268
    unsigned long RopeDownVel; // size=0, offset=272
    char RopeFlag; // size=0, offset=276
    char MoveCount; // size=0, offset=277
    int RopeCount; // size=0, offset=280
    char skelebob; // size=0, offset=284
    char pistols_type_carried; // size=0, offset=285
    char uzis_type_carried; // size=0, offset=286
    char shotgun_type_carried; // size=0, offset=287
    char crossbow_type_carried; // size=0, offset=288
    char hk_type_carried; // size=0, offset=289
    char sixshooter_type_carried; // size=0, offset=290
    char lasersight; // size=0, offset=291
    char silencer; // size=0, offset=292
    char binoculars; // size=0, offset=293
    char crowbar; // size=0, offset=294
    char examine1; // size=0, offset=295
    char examine2; // size=0, offset=296
    char examine3; // size=0, offset=297
    char wetcloth; // size=0, offset=298
    char bottle; // size=0, offset=299
    char puzzleitems[12]; // size=12, offset=300
    unsigned short puzzleitemscombo; // size=0, offset=312
    unsigned short keyitems; // size=0, offset=314
    unsigned short keyitemscombo; // size=0, offset=316
    unsigned short pickupitems; // size=0, offset=318
    unsigned short pickupitemscombo; // size=0, offset=320
    short num_small_medipack; // size=0, offset=322
    short num_large_medipack; // size=0, offset=324
    short num_flares; // size=0, offset=326
    short num_pistols_ammo; // size=0, offset=328
    short num_uzi_ammo; // size=0, offset=330
    short num_revolver_ammo; // size=0, offset=332
    short num_shotgun_ammo1; // size=0, offset=334
    short num_shotgun_ammo2; // size=0, offset=336
    short num_hk_ammo1; // size=0, offset=338
    short num_crossbow_ammo1; // size=0, offset=340
    short num_crossbow_ammo2; // size=0, offset=342
    char location; // size=0, offset=344
    char highest_location; // size=0, offset=345
    char locationPad; // size=0, offset=346
    unsigned char TightRopeOnCount; // size=0, offset=347
    unsigned char TightRopeOff; // size=0, offset=348
    unsigned char TightRopeFall; // size=0, offset=349
    unsigned char ChaffTimer; // size=0, offset=350
};

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
