#ifndef GAME_SOUND_H
#define GAME_SOUND_H

struct SAMPLE_INFO {
    short number; // size=0, offset=0
    unsigned char volume; // size=0, offset=2
    char radius; // size=0, offset=3
    char randomness; // size=0, offset=4
    char pitch; // size=0, offset=5
    short flags; // size=0, offset=6
};

struct SoundSlot {
    int OrigVolume; // size=0, offset=0
    int nVolume; // size=0, offset=4
    int nPan; // size=0, offset=8
    int nPitch; // size=0, offset=12
    int nSampleInfo; // size=0, offset=16
    unsigned long distance; // size=0, offset=20
    struct PHD_VECTOR pos; // size=12, offset=24
};

/* This file was automatically generated.  Do not edit! */
extern struct SoundSlot LaSlot[24];
extern struct SAMPLE_INFO *sample_infos;
extern short *sample_lut;
extern int sound_active;
void SayNo();

#endif
