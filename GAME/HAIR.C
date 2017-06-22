#include "HAIR.H"
/*
 * Offset 0x3AC70
 * C:\Projects2\Tomb5\GAME\HAIR.C (line 67)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ InitialiseHair()
{ // line 2, offset 0x3ac70
    int i; // register $7
    int j; // register $6
    long *bone; // register $5
    struct HAIR_STRUCT *hptr; // register $4
} // line 28, offset 0x3ad2c
extern int hair_wind; // offset 0xA0AE8
extern int hair_wind_angle; // offset 0xA0AEC
extern int hair_dwind_angle; // offset 0xA0AF0
extern int first_hair[2];
extern struct HAIR_STRUCT hairs[2][7];