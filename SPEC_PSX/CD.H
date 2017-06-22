#ifndef SPEC_PSX_CD_H
#define SPEC_PSX_CD_H

struct CdlLOC {
    unsigned char minute; // size=0, offset=0
    unsigned char second; // size=0, offset=1
    unsigned char sector; // size=0, offset=2
    unsigned char track; // size=0, offset=3
};

struct CdlFILE {
    struct CdlLOC pos; // size=4, offset=0
    unsigned long size; // size=0, offset=4
    char name[16]; // size=16, offset=8
};

struct SpuCommonAttr {
    unsigned long mask; // size=0, offset=0
    struct SpuVolume mvol; // size=4, offset=4
    struct SpuVolume mvolmode; // size=4, offset=8
    struct SpuVolume mvolx; // size=4, offset=12
    struct SpuExtAttr cd; // size=12, offset=16
    struct SpuExtAttr ext; // size=12, offset=28
};

/* This file was automatically generated.  Do not edit! */
extern int XAStartPos;
extern char XAWait;
extern char XAFlag;
extern short XAReqTrack;
extern short XATrack;
extern short XAMasterVolume;
extern short XAReqVolume;
extern short XAVolume;
extern int XAEndPos;
extern int XACurPos;
extern int current_cd_mode;
extern short XAFadeRate;
extern unsigned short XATrackClip[136];
void DEL_ChangeCDMode(int mode);
void InitNewCDSystem();
void CDDA_SetMasterVolume(int nVolume);
void S_StartSyncedAudio(int nTrack);
void S_CDRestart();
void S_CDPause();
void S_CDStop();
void S_CDPlay(short track,int mode);
void cbvsync();
void XAReplay();
void CDDA_SetVolume(int nVolume);

#endif
