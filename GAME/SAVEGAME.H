#ifndef GAME_SAVEGAME_H
#define GAME_SAVEGAME_H

struct STATS {
    unsigned long Timer; // size=0, offset=0
    unsigned long Distance; // size=0, offset=4
    unsigned long AmmoUsed; // size=0, offset=8
    unsigned long AmmoHits; // size=0, offset=12
    unsigned short Kills; // size=0, offset=16
    unsigned char Secrets; // size=0, offset=18
    unsigned char HealthUsed; // size=0, offset=19
};

struct savegame_info {
    short Checksum; // size=0, offset=0
    unsigned short VolumeCD; // size=0, offset=2
    unsigned short VolumeFX; // size=0, offset=4
    short ScreenX; // size=0, offset=6
    short ScreenY; // size=0, offset=8
    unsigned char ControlOption; // size=0, offset=10
    unsigned char VibrateOn; // size=0, offset=11
    unsigned char AutoTarget; // size=0, offset=12
    struct lara_info Lara; // size=352, offset=16
    struct STATS Level; // size=20, offset=368
    struct STATS Game; // size=20, offset=388
    short WeaponObject; // size=0, offset=408
    short WeaponAnim; // size=0, offset=410
    short WeaponFrame; // size=0, offset=412
    short WeaponCurrent; // size=0, offset=414
    short WeaponGoal; // size=0, offset=416
    unsigned long CutSceneTriggered1; // size=0, offset=420
    unsigned long CutSceneTriggered2; // size=0, offset=424
    char GameComplete; // size=0, offset=428
    unsigned char CurrentLevel; // size=0, offset=429
    unsigned char CampaignSecrets[4]; // size=4, offset=430
    unsigned char TLCount; // size=0, offset=434
};

/* This file was automatically generated.  Do not edit! */
extern struct savegame_info savegame;
extern char *MGSaveGamePtr;
extern char JustLoaded;
extern char FromTitle;
void sgRestoreGame();
void sgSaveGame();
void RestoreLevelData(int FullSave);
void SaveLevelData(int FullSave);
void RestoreLaraData(int FullSave);
void SaveLaraData();
int CheckSumValid(char *buffer);
void ReadSG(void *pointer,int size);
void WriteSG(void *pointer,int size);

#endif
