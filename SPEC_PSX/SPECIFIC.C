#include "SPECIFIC.H"
/*
 * Offset 0x6068C
 * C:\Projects2\Tomb5\SPEC_PSX\SPECIFIC.C (line 368)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ S_control_screen_position();
/*
 * Offset 0x607A8
 * C:\Projects2\Tomb5\SPEC_PSX\SPECIFIC.C (line 494)
 * Stack frame base $29, size 24
 */
long /*reg $31*/ S_DumpScreen()
{ // line 2, offset 0x607a8
} // line 16, offset 0x607c8
/*
 * Offset 0x607C8
 * C:\Projects2\Tomb5\SPEC_PSX\SPECIFIC.C (line 514)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ S_ExitSystem(char *exit_message /*reg $16*/)
{ // line 1, offset 0x607c8
} // line 16, offset 0x6080c
/*
 * Offset 0x6080C
 * C:\Projects2\Tomb5\SPEC_PSX\SPECIFIC.C (line 585)
 * Stack frame base $29, size 160
 */
void /*reg $31*/ DisplayConfig(int x /*sp 0*/, int y /*reg $30*/)
{ // line 1, offset 0x6080c
    { // line 4, offset 0x6084c
        unsigned short *wp; // register $17
    } // line 4, offset 0x6084c
    { // line 39, offset 0x60b2c
        char buf[80]; // stack offset -128
        int seconds; // register $16
    } // line 98, offset 0x60f04
} // line 99, offset 0x60f34
/*
 * Offset 0x60F34
 * C:\Projects2\Tomb5\SPEC_PSX\SPECIFIC.C (line 686)
 * Stack frame base $29, size 40
 */
int /*reg $31*/ DoPauseMenu()
{ // line 2, offset 0x60f34
    char *s; // register $16
    long result; // register $6
    int prompt; // register $18
    { // line 82, offset 0x6117c
        unsigned short *vol; // register $6
        short level; // register $4
    } // line 106, offset 0x61224
} // line 223, offset 0x615cc
/*
 * Offset 0x615CC
 * C:\Projects2\Tomb5\SPEC_PSX\SPECIFIC.C (line 911)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ gInit();
/*
 * Offset 0x61658
 * C:\Projects2\Tomb5\SPEC_PSX\SPECIFIC.C (line 1038)
 * Stack frame base $29, size 56
 */
short /*reg $31*/ S_Death()
{ // line 2, offset 0x61658
    short ret; // register $17
    unsigned char flag; // register $18
    unsigned char Cursor; // register $19
} // line 99, offset 0x61928
/*
 * Offset 0x61928
 * C:\Projects2\Tomb5\SPEC_PSX\SPECIFIC.C (line 1149)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ DisplayStatsUCunt();
extern unsigned short AnimComp; // offset 0xA1950
extern short AnimatingTexturesVOffset; // offset 0xA1952
static struct REQUESTER PauseReq; // offset 0xA1954
static struct REQUESTER AdjustReq; // offset 0xA1968
static struct REQUESTER QuitReq; // offset 0xA197C
extern struct REQUESTER SettingsReq;
extern struct REQUESTER ConfigReq;
static struct REQUESTER StatisticsReq; // offset 0xA19B8
static unsigned short PadStrings[5][8]; // offset 0xA19CC
extern unsigned char SoundFXVolume; // offset 0xA4664
extern unsigned short nAnimTextureRanges; // offset 0xA466C
extern unsigned short *AnimTextureRanges; // offset 0xA4670
extern unsigned short nAnimUVRanges; // offset 0xA4660
extern int GtSFXEnabled; // offset 0xA4668
static unsigned char PauseMenuNum; // offset 0xA465C
extern short AnimatingTexturesV[16][8][3];