#include "PROFILE.H"
/*
 * Offset 0x6194C
 * C:\Projects2\Tomb5\SPEC_PSX\PROFILE.C (line 78)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ ProfileCallBack();
/*
 * Offset 0x61978
 * C:\Projects2\Tomb5\SPEC_PSX\PROFILE.C (line 85)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ ProfileInit(int scale /*reg $4*/);
/*
 * Offset 0x61A0C
 * C:\Projects2\Tomb5\SPEC_PSX\PROFILE.C (line 100)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ ProfileStartCount();
/*
 * Offset 0x61A48
 * C:\Projects2\Tomb5\SPEC_PSX\PROFILE.C (line 120)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ ProfileReadCount()
{ // line 2, offset 0x61a48
} // line 7, offset 0x61a90
/*
 * Offset 0x61A90
 * C:\Projects2\Tomb5\SPEC_PSX\PROFILE.C (line 132)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ ProfileAddOT(unsigned long *ot /*reg $11*/)
{ // line 1, offset 0x61a90
    int count; // register $8
    { // line 24, offset 0x61ba8
    } // line 30, offset 0x61bc0
} // line 38, offset 0x61c8c
/*
 * Offset 0x61C94
 * C:\Projects2\Tomb5\SPEC_PSX\PROFILE.C (line 173)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ ProfileRGB(int r /*reg $16*/, int g /*reg $17*/, int b /*reg $18*/);
/*
 * Offset 0x61D1C
 * C:\Projects2\Tomb5\SPEC_PSX\PROFILE.C (line 191)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ ProfileAddDrawOT(unsigned long *ot /*reg $9*/)
{ // line 1, offset 0x61d1c
    char count; // register $6
} // line 38, offset 0x61ee0
static struct SCALE scales[3]; // offset 0x93FD8
extern char ProfileDraw; // offset 0xA1A9C
extern int numprof; // offset 0xA4688
static unsigned long EHbl; // offset 0xA4674
static int grid; // offset 0xA4678
static short divisor; // offset 0xA467C
static short nummarks; // offset 0xA467E
static short finalCount; // offset 0xA4680
static short currentCount; // offset 0xA4682
static short drawCount; // offset 0xA4684
static short profile_xcnt; // offset 0xA4686
extern struct COCKSUCK ProfileInfo[32];