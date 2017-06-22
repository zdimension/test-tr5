#ifndef SPEC_PSX_CD_H
#define SPEC_PSX_CD_H

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
