#ifndef GAME_GAMEFLOW_H
#define GAME_GAMEFLOW_H

struct GAMEFLOW {
    unsigned long CheatEnabled : 1; // offset=0.0
    unsigned long LoadSaveEnabled : 1; // offset=0.1
    unsigned long TitleEnabled : 1; // offset=0.2
    unsigned long PlayAnyLevel : 1; // offset=0.3
    unsigned long Language : 3; // offset=0.4
    unsigned long DemoDisc : 1; // offset=0.7
    unsigned long Unused : 24; // offset=1.0
    unsigned long InputTimeout; // size=0, offset=4
    unsigned char SecurityTag; // size=0, offset=8
    unsigned char nLevels; // size=0, offset=9
    unsigned char nFileNames; // size=0, offset=10
    unsigned char Pad; // size=0, offset=11
    unsigned short FileNameLen; // size=0, offset=12
    unsigned short ScriptLen; // size=0, offset=14
};

struct STRINGHEADER {
    unsigned short nStrings; // size=0, offset=0
    unsigned short nPSXStrings; // size=0, offset=2
    unsigned short nPCStrings; // size=0, offset=4
    unsigned short StringWadLen; // size=0, offset=6
    unsigned short PSXStringWadLen; // size=0, offset=8
    unsigned short PCStringWadLen; // size=0, offset=10
};

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
