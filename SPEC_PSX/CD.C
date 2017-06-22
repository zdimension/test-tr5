#include "CD.H"
/*
 * Offset 0x5D7FC
 * C:\Projects2\Tomb5\SPEC_PSX\CD.C (line 138)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ CDDA_SetVolume(int nVolume /*reg $4*/)
{ // line 3, offset 0x5d7fc
    struct SpuCommonAttr attr; // stack offset -48
} // line 12, offset 0x5d838
/*
 * Offset 0x5D838
 * C:\Projects2\Tomb5\SPEC_PSX\CD.C (line 162)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ XAReplay()
{ // line 2, offset 0x5d838
    struct CdlLOC loc; // stack offset -16
} // line 8, offset 0x5d884
/*
 * Offset 0x5D884
 * C:\Projects2\Tomb5\SPEC_PSX\CD.C (line 182)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ cbvsync()
{ // line 2, offset 0x5d884
    int ret; // register $5
    unsigned char io[8]; // stack offset -16
    { // line 86, offset 0x5daec
        int cnt; // register $2
    } // line 93, offset 0x5db20
} // line 120, offset 0x5dc10
/*
 * Offset 0x5DC10
 * C:\Projects2\Tomb5\SPEC_PSX\CD.C (line 320)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ S_CDPlay(short track /*reg $16*/, int mode /*reg $17*/)
{ // line 1, offset 0x5dc10
    unsigned char param[4]; // stack offset -24
} // line 39, offset 0x5dcbc
/*
 * Offset 0x5DCD0
 * C:\Projects2\Tomb5\SPEC_PSX\CD.C (line 370)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ S_CDStop();
/*
 * Offset 0x5DD14
 * C:\Projects2\Tomb5\SPEC_PSX\CD.C (line 402)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ S_CDPause();
/*
 * Offset 0x5DD40
 * C:\Projects2\Tomb5\SPEC_PSX\CD.C (line 424)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ S_CDRestart();
/*
 * Offset 0x5DD78
 * C:\Projects2\Tomb5\SPEC_PSX\CD.C (line 446)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ S_StartSyncedAudio(int nTrack /*reg $4*/);
/*
 * Offset 0x5DDC4
 * C:\Projects2\Tomb5\SPEC_PSX\CD.C (line 490)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ CDDA_SetMasterVolume(int nVolume /*reg $4*/);
/*
 * Offset 0x5DDE8
 * C:\Projects2\Tomb5\SPEC_PSX\CD.C (line 524)
 * Stack frame base $29, size 2200
 */
void /*reg $31*/ InitNewCDSystem()
{ // line 2, offset 0x5dde8
    int i; // register $16
    long local_wadfile_header[512]; // stack offset -2184
    { // line 38, offset 0x5de28
        struct CdlFILE fp; // stack offset -136
        char buf[80]; // stack offset -112
    } // line 41, offset 0x5de28
} // line 58, offset 0x5deb0
/*
 * Offset 0x5DEB0
 * C:\Projects2\Tomb5\SPEC_PSX\CD.C (line 733)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ DEL_ChangeCDMode(int mode /*reg $3*/)
{ // line 1, offset 0x5deb0
    unsigned char param[4]; // stack offset -16
} // line 40, offset 0x5df58
extern unsigned short XATrackClip[136];
extern short XAFadeRate; // offset 0xA176C
extern int current_cd_mode; // offset 0xA177C
extern int XACurPos; // offset 0xA3BE0
extern int XAEndPos; // offset 0xA3BE4
extern short XAVolume; // offset 0xA3BC8
extern short XAReqVolume; // offset 0xA3BE8
extern short XAMasterVolume; // offset 0xA3BCC
extern short XATrack; // offset 0xA3BC4
extern short XAReqTrack; // offset 0xA3BD8
extern char XAFlag; // offset 0xA3BD4
extern char XAWait; // offset 0xA3BD0
static char XARepeat; // offset 0xA3B2C
extern int XAStartPos; // offset 0xA3BDC
static int XATrackList[17][2]; // offset 0xA3B3C