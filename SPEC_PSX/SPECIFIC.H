#ifndef SPEC_PSX_SPECIFIC_H
#define SPEC_PSX_SPECIFIC_H

/* This file was automatically generated.  Do not edit! */
extern short AnimatingTexturesV[16][8][3];
extern int GtSFXEnabled;
extern unsigned short nAnimUVRanges;
extern unsigned short *AnimTextureRanges;
extern unsigned short nAnimTextureRanges;
extern unsigned char SoundFXVolume;
extern struct REQUESTER ConfigReq;
extern struct REQUESTER SettingsReq;
extern short AnimatingTexturesVOffset;
extern unsigned short AnimComp;
void DisplayStatsUCunt();
short S_Death();
void gInit();
int DoPauseMenu();
void DisplayConfig(int x,int y);
void S_ExitSystem(char *exit_message);
long S_DumpScreen();
void S_control_screen_position();

#endif
