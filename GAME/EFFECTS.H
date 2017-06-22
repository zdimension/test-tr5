#ifndef GAME_EFFECTS_H
#define GAME_EFFECTS_H

/* This file was automatically generated.  Do not edit! */
extern struct FX_INFO *effects;
extern struct OBJECT_VECTOR *sound_effects;
extern int number_sound_effects;
extern short next_fx_active;
extern short next_fx_free;
extern long wf;
void TL_12(struct ITEM_INFO *item);
void TL_11(struct ITEM_INFO *item);
void TL_10(struct ITEM_INFO *item);
void TL_9(struct ITEM_INFO *item);
void TL_8(struct ITEM_INFO *item);
void TL_7(struct ITEM_INFO *item);
void TL_6(struct ITEM_INFO *item);
void TL_5(struct ITEM_INFO *item);
void TL_4(struct ITEM_INFO *item);
void TL_3(struct ITEM_INFO *item);
void TL_2(struct ITEM_INFO *item);
void TL_1(struct ITEM_INFO *item);
void ClearSpidersPatch(struct ITEM_INFO *item);
void reset_hair(struct ITEM_INFO *item);
void invisibility_off(struct ITEM_INFO *item);
void invisibility_on(struct ITEM_INFO *item);
void SetFog(struct ITEM_INFO *item);
void shoot_left_gun(struct ITEM_INFO *item);
void shoot_right_gun(struct ITEM_INFO *item);
void lara_hands_free(struct ITEM_INFO *item);
void KillActiveBaddies(struct ITEM_INFO *item);
void ResetTest(struct ITEM_INFO *item);
void LaraLocationPad(struct ITEM_INFO *item);
void LaraLocation(struct ITEM_INFO *item);
void ExplosionFX(struct ITEM_INFO *item);
void SwapCrowbar(struct ITEM_INFO *item);
void ActivateKey(struct ITEM_INFO *item);
void ActivateCamera(struct ITEM_INFO *item);
void PoseidonSFX(struct ITEM_INFO *item);
void RubbleFX(struct ITEM_INFO *item);
void SoundFlipEffect(struct ITEM_INFO *item);
void floor_shake_effect(struct ITEM_INFO *item);
void turn180_effect(struct ITEM_INFO *item);
void finish_level_effect(struct ITEM_INFO *item);
void void_effect(struct ITEM_INFO *item);
void WaterFall(short item_number);
void SoundEffects();

#endif
