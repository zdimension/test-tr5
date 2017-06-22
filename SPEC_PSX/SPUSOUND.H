#ifndef SPEC_PSX_SPUSOUND_H
#define SPEC_PSX_SPUSOUND_H

struct SpuVolume {
    short left; // size=0, offset=0
    short right; // size=0, offset=2
};
struct SpuVoiceAttr {
    unsigned long voice; // size=0, offset=0
    unsigned long mask; // size=0, offset=4
    struct SpuVolume volume; // size=4, offset=8
    struct SpuVolume volmode; // size=4, offset=12
    struct SpuVolume volumex; // size=4, offset=16
    unsigned short pitch; // size=0, offset=20
    unsigned short note; // size=0, offset=22
    unsigned short sample_note; // size=0, offset=24
    short envx; // size=0, offset=26
    unsigned long addr; // size=0, offset=28
    unsigned long loop_addr; // size=0, offset=32
    long a_mode; // size=0, offset=36
    long s_mode; // size=0, offset=40
    long r_mode; // size=0, offset=44
    unsigned short ar; // size=0, offset=48
    unsigned short dr; // size=0, offset=50
    unsigned short sr; // size=0, offset=52
    unsigned short rr; // size=0, offset=54
    unsigned short sl; // size=0, offset=56
    unsigned short adsr1; // size=0, offset=58
    unsigned short adsr2; // size=0, offset=60
};
struct SpuExtAttr {
    struct SpuVolume volume; // size=4, offset=0
    long reverb; // size=0, offset=4
    long mix; // size=0, offset=8
};
struct SpuStVoiceAttr {
    char status; // size=0, offset=0
    char pad1; // size=0, offset=1
    char pad2; // size=0, offset=2
    char pad3; // size=0, offset=3
    long last_size; // size=0, offset=4
    unsigned long buf_addr; // size=0, offset=8
    unsigned long data_addr; // size=0, offset=12
};

/* This file was automatically generated.  Do not edit! */
extern unsigned long LadwSampleAddr[256];
extern int LnFreeChannels;
extern unsigned char LabFreeChannel[24];
extern unsigned char LabSampleType[24];
extern struct SpuVoiceAttr sva;
extern long LlVABAddr;
extern int LnSamplesLoaded;
extern short CurrentReverb;
extern short DepthTable[5];
void SPU_Init();
void SPU_FreeSamples();

#endif
