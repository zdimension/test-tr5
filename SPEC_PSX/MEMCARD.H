#ifndef SPEC_PSX_MEMCARD_H
#define SPEC_PSX_MEMCARD_H

struct DIRENTRY {
    char name[20]; // size=20, offset=0
    long attr; // size=0, offset=20
    long size; // size=0, offset=24
    struct DIRENTRY *next; // size=40, offset=28
    long head; // size=0, offset=32
    char system[4]; // size=4, offset=36
};

/* This file was automatically generated.  Do not edit! */
extern int mcFileLengths[7];
extern char mcFileNames[7][20];
extern unsigned char mcBlocksFree;
extern unsigned long mcNumFiles;
extern unsigned char mcStatus;
extern unsigned char mcInit;
long mcFormat();
unsigned char mcGetStatus();
void mcClose();
void mcOpen(int sync);
void mcDir();

#endif
