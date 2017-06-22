#include "SPUSOUND.H"
/*
 * Offset 0x62610
 * C:\Projects2\Tomb5\SPEC_PSX\SPUSOUND.C (line 197)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ SPU_FreeSamples();
/*
 * Offset 0x62650
 * C:\Projects2\Tomb5\SPEC_PSX\SPUSOUND.C (line 208)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ SPU_Init()
{ // line 2, offset 0x62650
    int nChannel; // register $16
} // line 30, offset 0x626e4
extern short DepthTable[5];
extern short CurrentReverb; // offset 0xA1DF8
extern int LnSamplesLoaded; // offset 0xA54CC
extern long LlVABAddr; // offset 0xA54D0
extern struct SpuVoiceAttr sva;
extern unsigned char LabSampleType[24];
extern unsigned char LabFreeChannel[24];
extern int LnFreeChannels; // offset 0xA5504
static unsigned char LabSPUMallocArea[16]; // offset 0xA547C
extern unsigned long LadwSampleAddr[256];