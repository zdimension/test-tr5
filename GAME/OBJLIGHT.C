#include "OBJLIGHT.H"
/*
 * Offset 0x5D018
 * C:\Projects2\Tomb5\GAME\OBJLIGHT.C (line 28)
 * Stack frame base $29, size 104
 */
void /*reg $31*/ TriggerAlertLight(long x /*reg $18*/, long y /*reg $19*/, long z /*reg $17*/, long r /*reg $21*/, long g /*sp 16*/, long b /*sp 20*/, long angle /*sp 24*/, int room_no /*sp 28*/, int falloff /*sp 32*/)
{ // line 1, offset 0x5d018
    long sin; // register $3
    long cos; // register $2
    struct GAME_VECTOR src; // stack offset -72
    struct GAME_VECTOR target; // stack offset -56
} // line 21, offset 0x5d118
/*
 * Offset 0x5D118
 * C:\Projects2\Tomb5\GAME\OBJLIGHT.C (line 51)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ ControlStrobeLight(short item_number /*reg $4*/)
{ // line 1, offset 0x5d118
    struct ITEM_INFO *item; // register $20
    long angle; // register $16
    long sin; // register $4
    long cos; // register $6
    long r; // register $18
    long g; // register $19
    long b; // register $17
} // line 30, offset 0x5d254
/*
 * Offset 0x5D254
 * C:\Projects2\Tomb5\GAME\OBJLIGHT.C (line 83)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ ControlPulseLight(short item_number /*reg $4*/)
{ // line 1, offset 0x5d254
    struct ITEM_INFO *item; // register $16
    long sin; // register $6
    long r; // register $5
    long g; // register $4
    long b; // register $2
} // line 24, offset 0x5d368
/*
 * Offset 0x5D368
 * C:\Projects2\Tomb5\GAME\OBJLIGHT.C (line 109)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ ControlColouredLight(short item_number /*reg $4*/)
{ // line 1, offset 0x5d368
    struct ITEM_INFO *item; // register $16
    long r; // register $3
    long g; // register $3
    long b; // register $2
} // line 14, offset 0x5d3f8
/*
 * Offset 0x5D3F8
 * C:\Projects2\Tomb5\GAME\OBJLIGHT.C (line 125)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ ControlElectricalLight(short item_number /*reg $4*/)
{ // line 1, offset 0x5d3f8
    struct ITEM_INFO *item; // register $16
    long shade; // register $17
    long r; // register $5
    long g; // register $4
    long b; // register $2
} // line 74, offset 0x5d64c
/*
 * Offset 0x5D660
 * C:\Projects2\Tomb5\GAME\OBJLIGHT.C (line 201)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ ControlBlinker(short item_number /*reg $4*/)
{ // line 1, offset 0x5d660
    struct ITEM_INFO *item; // register $16
    struct PHD_VECTOR pos; // stack offset -24
    long r; // register $2
    long g; // register $2
    long b; // register $3
} // line 24, offset 0x5d74c
extern int FootPrintNum; // offset 0xA3A54
extern struct FOOTPRINT FootPrint[32];