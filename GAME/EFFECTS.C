#include "EFFECTS.H"
/*
 * Offset 0x39190
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 112)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ SoundEffects()
{ // line 2, offset 0x39190
    struct OBJECT_VECTOR *sound; // register $16
    int i; // register $17
} // line 43, offset 0x39294
/*
 * Offset 0x39294
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 335)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ WaterFall(short item_number /*reg $4*/)
{ // line 1, offset 0x39294
    struct ITEM_INFO *item; // register $16
    long x; // register $8
    long z; // register $6
    long ang; // register $7
} // line 27, offset 0x393cc
/*
 * Offset 0x393CC
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 369)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ void_effect(struct ITEM_INFO *item /*reg $4*/)
{

}
/*
 * Offset 0x393D4
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 375)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ finish_level_effect(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x393F4
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 383)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ turn180_effect(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39410
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 392)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ floor_shake_effect(struct ITEM_INFO *item /*reg $4*/)
{ // line 1, offset 0x39410
    int x; // register $7
    int y; // register $6
    int z; // register $4
    int dist; // register $4
} // line 12, offset 0x39500
/*
 * Offset 0x39500
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 424)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ SoundFlipEffect(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39534
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 430)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ RubbleFX(struct ITEM_INFO *item /*reg $4*/)
{ // line 2, offset 0x39534
    struct ITEM_INFO *eq; // register $16
} // line 17, offset 0x395e0
/*
 * Offset 0x395E0
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 449)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ PoseidonSFX(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39610
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 456)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ ActivateCamera(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39624
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 461)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ ActivateKey(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39638
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 466)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ SwapCrowbar(struct ITEM_INFO *item /*reg $4*/)
{ // line 2, offset 0x39638
    short *tmp; // register $3
} // line 10, offset 0x39694
/*
 * Offset 0x39694
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 478)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ ExplosionFX(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x396D0
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 486)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ LaraLocation(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39710
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 494)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ LaraLocationPad(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39738
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 500)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ ResetTest(struct ITEM_INFO *item /*reg $4*/)
{ // line 2, offset 0x39738
    short item_num; // register $17
    short room_num; // register $9
    struct ITEM_INFO *target_item; // register $16
} // line 39, offset 0x39938
/*
 * Offset 0x39938
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 541)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ KillActiveBaddies(struct ITEM_INFO *item /*reg $19*/)
{ // line 1, offset 0x39938
    short item_num; // register $17
    struct ITEM_INFO *target_item; // register $16
} // line 20, offset 0x39a18
/*
 * Offset 0x39A18
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 567)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_hands_free(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39A24
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 612)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ shoot_right_gun(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39A34
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 617)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ shoot_left_gun(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39A44
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 664)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ SetFog(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39A58
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 763)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ invisibility_on(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39A6C
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 768)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ invisibility_off(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39A84
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 773)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ reset_hair(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39AA4
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 792)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ ClearSpidersPatch(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39AD8
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 810)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ TL_1(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39B24
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 820)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ TL_2(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39B74
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 830)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ TL_3(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39BC4
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 840)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ TL_4(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39C14
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 850)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ TL_5(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39C64
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 860)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ TL_6(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39CB4
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 870)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ TL_7(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39D04
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 880)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ TL_8(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39D54
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 890)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ TL_9(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39DA4
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 900)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ TL_10(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39DF0
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 910)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ TL_11(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x39E3C
 * C:\Projects2\Tomb5\GAME\EFFECTS.C (line 920)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ TL_12(struct ITEM_INFO *item /*reg $4*/);
extern long wf; // offset 0xA0AC8
extern short next_fx_free; // offset 0xA3668
extern short next_fx_active; // offset 0xA366C
extern int number_sound_effects; // offset 0xA3670
extern struct OBJECT_VECTOR *sound_effects;
extern struct FX_INFO *effects;