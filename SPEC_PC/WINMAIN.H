#ifndef SPEC_PC_WINMAIN_H
#define SPEC_PC_WINMAIN_H

#include <windef.h>

/* This file was automatically generated.  Do not edit! */
HWND SendMsg(char a1,char *a2,...);

int WinProcMsg();

char* WinProcessCommandLine(char *a1);

char WinRunCheck(const CHAR *lpName, const CHAR *lpClassName, HANDLE *mutex);

HWND WinClose();

#endif
