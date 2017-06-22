#include "MEMCARD.H"
/*
 * Offset 0x61EE8
 * C:\Projects2\Tomb5\SPEC_PSX\MEMCARD.C (line 83)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ mcDir()
{ // line 2, offset 0x61ee8
    int i; // register $19
    int j; // register $20
    int k; // register $17
    struct DIRENTRY *dir; // register $18
} // line 24, offset 0x6204c
/*
 * Offset 0x6204C
 * C:\Projects2\Tomb5\SPEC_PSX\MEMCARD.C (line 128)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ mcOpen(int sync /*reg $16*/)
{ // line 1, offset 0x6204c
    { // line 12, offset 0x62084
        int i; // register $16
    } // line 19, offset 0x6209c
} // line 20, offset 0x620ac
/*
 * Offset 0x620AC
 * C:\Projects2\Tomb5\SPEC_PSX\MEMCARD.C (line 165)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ mcClose();
/*
 * Offset 0x620CC
 * C:\Projects2\Tomb5\SPEC_PSX\MEMCARD.C (line 186)
 * Stack frame base $29, size 32
 */
unsigned char /*reg $31*/ mcGetStatus()
{ // line 2, offset 0x620cc
    long stat; // register $4
    unsigned long cmd; // stack offset -16
    unsigned long res; // stack offset -12
} // line 125, offset 0x622d8
/*
 * Offset 0x622D8
 * C:\Projects2\Tomb5\SPEC_PSX\MEMCARD.C (line 328)
 * Stack frame base $29, size 32
 */
long /*reg $31*/ mcFormat()
{ // line 2, offset 0x622d8
    unsigned long cmd; // stack offset -16
    unsigned long res; // stack offset -12
} // line 13, offset 0x62320
extern unsigned char mcInit; // offset 0xA4844
extern unsigned char mcStatus; // offset 0xA4824
extern unsigned long mcNumFiles; // offset 0xA4794
extern unsigned char mcBlocksFree; // offset 0xA4790
extern char mcFileNames[7][20];
extern int mcFileLengths[7];
static unsigned char mcActualStatus; // offset 0xA478C