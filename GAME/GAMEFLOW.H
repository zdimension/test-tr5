#ifndef GAME_GAMEFLOW_H
#define GAME_GAMEFLOW_H

/* This file was automatically generated.  Do not edit! */
extern unsigned char gfTakeaways[16];
extern unsigned char gfPickups[16];
extern unsigned char gfWadNames[40];
extern unsigned char gfLegend;
extern long gfScriptLen;
extern char title_controls_locked_out;
extern unsigned char gfMips[8];
extern unsigned char gfMirrorRoom;
extern struct CVECTOR gfLensFlareColour;
extern struct PHD_VECTOR gfLensFlare;
extern unsigned long GameTimer;
extern struct CVECTOR gfLayer2Col;
extern struct CVECTOR gfLayer1Col;
extern char gfLayer2Vel;
extern char gfLayer1Vel;
extern char gfUVRotate;
extern unsigned char gfResetHubDest;
extern unsigned char gfResidentCut[4];
extern unsigned char gfLevelNames[40];
extern unsigned short gfLevelFlags;
extern unsigned char gfRequiredStartPos;
extern unsigned char gfLevelComplete;
extern unsigned char gfCurrentLevel;
extern char *gfFilenameWad;
extern unsigned short *gfFilenameOffset;
extern char *gfStringWad;
extern unsigned short *gfStringOffset;
extern struct GAMEFLOW *Gameflow;
extern char CanLoad;
extern unsigned char gfNumTakeaways;
extern unsigned char gfNumPickups;
extern long nframes;
extern unsigned char gfInitialiseGame;
extern unsigned char bDoCredits;
extern unsigned char gfLegendTime;
extern char Chris_Menu;
extern unsigned short dels_cutseq_player;
extern unsigned short dels_cutseq_selector_flag;
extern char fmv_to_play[2];
extern char num_fmvs;
extern char DEL_playingamefmv;
extern int scroll_pos;
extern unsigned char gfNumMips;
extern unsigned char gfGameMode;
void DoGameflow();
void DoLevel(unsigned char Name,unsigned char Audio);
void DoTitle(unsigned char Name,unsigned char Audio);
void LoadGameflow();
void QuickControlPhase();

#endif
