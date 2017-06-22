#ifndef GAME_SAVEGAME_H
#define GAME_SAVEGAME_H

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
