#ifndef SPEC_PSX_SPUSOUND_H
#define SPEC_PSX_SPUSOUND_H

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
