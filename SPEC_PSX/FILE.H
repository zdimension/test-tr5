#ifndef SPEC_PSX_FILE_H
#define SPEC_PSX_FILE_H

/* This file was automatically generated.  Do not edit! */
void RelocateModule(unsigned long Module,unsigned long *RelocData);
int FILE_Read(void *pDest,int nItemSize,int nItems,int nHandle);
unsigned long FILE_Length(char *szFileName);
int FILE_Load(char *szFileName,void *pDest);

#endif
