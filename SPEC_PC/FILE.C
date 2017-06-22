#include "FILE.H"
#include <stdio.h>
#include "WINMAIN.H"

int FileClose(FILE* nHandle)
{
    SendMsg(2, "FileClose");
    return fclose(nHandle);
}

FILE* FileOpen(const char* filename)
{
    char correct[80];

    memset(correct, 0, 80);
    strcat(correct, filename);
    SendMsg(5, "FileOpen - %s", correct);

    FILE* fp = fopen(correct, "rb");
    if (!fp)
        SendMsg(1, "Unable To Open %s", correct);
    return fp;
}