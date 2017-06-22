#ifndef SPEC_PSX_LOADSAVE_H
#define SPEC_PSX_LOADSAVE_H

struct PACKEDNAME {
    char Name[12]; // size=12, offset=0
    unsigned char Days; // size=0, offset=12
    unsigned char Hours; // size=0, offset=13
    unsigned char Min; // size=0, offset=14
    unsigned char Sec; // size=0, offset=15
    unsigned short Slot; // size=0, offset=16
    unsigned char Level; // size=0, offset=18
    unsigned char Pad; // size=0, offset=19
};

/* This file was automatically generated.  Do not edit! */
int SaveGame();
int LoadGame();
int DisplayFiles(int cursor,int maxfiles);

#endif
