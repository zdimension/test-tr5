#include "TEXT.H"
/*
 * Offset 0x115EC
 * C:\Projects2\Tomb5\GAME\TEXT.C (line 1022)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ InitFont()
{ // line 2, offset 0x115ec
    int i; // register $4
    int j; // register $14
    { // line 48, offset 0x11630
        unsigned char nr; // register $5
        unsigned char ng; // register $3
        unsigned char nb; // register $6
        unsigned char fr; // register $18
        unsigned char fg; // register $17
        unsigned char fb; // register $16
        { // line 61, offset 0x116a0
            unsigned short r; // register $9
            unsigned short g; // register $8
            unsigned short b; // register $7
        } // line 74, offset 0x116f8
    } // line 121, offset 0x11728
} // line 166, offset 0x11764
extern char AccentTable[46][2];
static struct CVECTOR ShadeFromTo[10][2]; // offset 0xA05E0
extern unsigned char PulseCnt; // offset 0xA0630
extern unsigned char ScaleFlag; // offset 0xA2040
extern struct CVECTOR FontShades[10][16];