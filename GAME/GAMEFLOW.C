#include "GAMEFLOW.H"
/*
 * Offset 0x10274
 * C:\Projects2\Tomb5\GAME\GAMEFLOW.C (line 389)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ QuickControlPhase();
/*
 * Offset 0x102E0
 * C:\Projects2\Tomb5\GAME\GAMEFLOW.C (line 427)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ LoadGameflow()
{ // line 3, offset 0x102e0
    int i; // register $16
    int len; // register $18
    unsigned char *s; // register $17
    struct STRINGHEADER sh; // stack offset -32
    { // line 124, offset 0x1048c
        int j; // register $3
    } // line 134, offset 0x104dc
    { // line 140, offset 0x10510
        int flag; // register $5
    } // line 222, offset 0x105d0
} // line 223, offset 0x10604
/*
 * Offset 0x10604
 * C:\Projects2\Tomb5\GAME\GAMEFLOW.C (line 1103)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ DoTitle(unsigned char Name /*reg $17*/, unsigned char Audio /*reg $5*/)
{ // line 1, offset 0x10604
    { // line 250, offset 0x109d4
        int i; // register $3
    } // line 258, offset 0x10a14
} // line 304, offset 0x10abc
/*
 * Offset 0x10ABC
 * C:\Projects2\Tomb5\GAME\GAMEFLOW.C (line 1425)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ DoLevel(unsigned char Name /*reg $18*/, unsigned char Audio /*reg $19*/)
{ // line 1, offset 0x10abc
    { // line 6, offset 0x10afc
        char *d; // register $16
    } // line 10, offset 0x10b20
} // line 325, offset 0x10f5c
/*
 * Offset 0x10F5C
 * C:\Projects2\Tomb5\GAME\GAMEFLOW.C (line 1771)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ DoGameflow()
{ // line 2, offset 0x10f5c
    unsigned char *gf; // register $7
    unsigned char n; // register $5
} // line 333, offset 0x115dc
extern unsigned char gfGameMode; // offset 0xA05C7
extern unsigned char gfNumMips; // offset 0xA05D0
extern int scroll_pos; // offset 0xA05B8
extern char DEL_playingamefmv; // offset 0xA05BC
extern char num_fmvs; // offset 0xA05BD
extern char fmv_to_play[2];
extern unsigned short dels_cutseq_selector_flag; // offset 0xA05C2
extern unsigned short dels_cutseq_player; // offset 0xA05C4
extern char Chris_Menu; // offset 0xA05C6
extern unsigned char gfLegendTime; // offset 0xA05C8
extern unsigned char bDoCredits; // offset 0xA05C9
static unsigned char gfCutNumber; // offset 0xA05CA
extern unsigned char gfInitialiseGame; // offset 0xA05CB
extern long nframes; // offset 0xA05CC
extern unsigned char gfNumPickups; // offset 0xA05D1
extern unsigned char gfNumTakeaways; // offset 0xA05D2
extern char CanLoad; // offset 0xA05DF
extern struct GAMEFLOW *Gameflow;
extern unsigned short *gfStringOffset; // offset 0xA202C
extern char *gfStringWad; // offset 0xA203C
extern unsigned short *gfFilenameOffset; // offset 0xA2000
extern char *gfFilenameWad; // offset 0xA1FFC
extern unsigned char gfCurrentLevel; // offset 0xA1FA8
extern unsigned char gfLevelComplete; // offset 0xA2034
extern unsigned char gfRequiredStartPos; // offset 0xA2014
extern unsigned short gfLevelFlags; // offset 0xA1FE4
extern unsigned char gfLevelNames[40];
extern unsigned char gfResidentCut[4];
extern unsigned char gfResetHubDest; // offset 0xA1FA4
extern char gfUVRotate; // offset 0xA1F8C
extern char gfLayer1Vel; // offset 0xA1FEC
extern char gfLayer2Vel; // offset 0xA1FE8
extern struct CVECTOR gfLayer1Col;
extern struct CVECTOR gfLayer2Col;
extern unsigned long GameTimer; // offset 0xA1FF8
extern struct PHD_VECTOR gfLensFlare;
extern struct CVECTOR gfLensFlareColour;
extern unsigned char gfMirrorRoom; // offset 0xA2018
extern unsigned char gfMips[8];
extern char title_controls_locked_out; // offset 0xA2024
extern long gfScriptLen; // offset 0xA1FAC
extern unsigned char gfLegend; // offset 0xA2038
extern unsigned char gfWadNames[40];
static unsigned short *gfScriptOffset; // offset 0xA1F50
static unsigned char *gfScriptWad; // offset 0xA1F54
static char *gfExtensions; // offset 0xA1F58
static int gfStatus; // offset 0xA1F5C
static unsigned long OldSP; // offset 0xA1F60
extern unsigned char gfPickups[16];
extern unsigned char gfTakeaways[16];