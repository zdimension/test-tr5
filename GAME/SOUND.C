#include "SOUND.H"
/*
 * Offset 0x55BE0
 * C:\Projects2\Tomb5\GAME\SOUND.C (line 1060)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ SayNo()
{ // line 2, offset 0x55be0
    int fx; // register $4
} // line 11, offset 0x55c3c
extern int sound_active; // offset 0xA14B0
extern short *sample_lut; // offset 0xA392C
extern struct SAMPLE_INFO *sample_infos;
extern struct SoundSlot LaSlot[24];