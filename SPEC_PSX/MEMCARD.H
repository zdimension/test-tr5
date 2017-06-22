#ifndef SPEC_PSX_MEMCARD_H
#define SPEC_PSX_MEMCARD_H

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
