#include "HEALTH.H"
/*
 * Offset 0x3AD2C
 * C:\Projects2\Tomb5\GAME\HEALTH.C (line 98)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ FlashIt()
{ // line 2, offset 0x3ad2c
    static int flash_state; // offset 0x4
    static int flash_count; // offset 0x8
} // line 13, offset 0x3ad68
/*
 * Offset 0x3AD68
 * C:\Projects2\Tomb5\GAME\HEALTH.C (line 116)
 * Stack frame base $29, size 216
 */
void /*reg $31*/ DrawGameInfo(int timed /*reg $4*/)
{ // line 2, offset 0x3ad68
    int flash_state; // register $16
    { // line 17, offset 0x3adac
        char sbuf[80]; // stack offset -192
    } // line 19, offset 0x3adac
    { // line 53, offset 0x3af50
        char buf[80]; // stack offset -112
        int seconds; // register $19
    } // line 77, offset 0x3b0a0
} // line 79, offset 0x3b0a0
/*
 * Offset 0x3B0C8
 * C:\Projects2\Tomb5\GAME\HEALTH.C (line 200)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ DrawHealthBar(int flash_state /*reg $4*/)
{ // line 1, offset 0x3b0c8
    int hitpoints; // register $6
    static int old_hitpoints; // offset 0x30
} // line 55, offset 0x3b3cc
/*
 * Offset 0x3B3CC
 * C:\Projects2\Tomb5\GAME\HEALTH.C (line 260)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ DrawAirBar(int flash_state /*reg $6*/)
{ // line 1, offset 0x3b3cc
    int air; // register $3
} // line 32, offset 0x3b570
/*
 * Offset 0x3B580
 * C:\Projects2\Tomb5\GAME\HEALTH.C (line 323)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ InitialisePickUpDisplay()
{ // line 2, offset 0x3b580
    int i; // register $3
} // line 9, offset 0x3b5b8
/*
 * Offset 0x3B5B8
 * C:\Projects2\Tomb5\GAME\HEALTH.C (line 340)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ DrawPickups(int timed /*reg $4*/)
{ // line 2, offset 0x3b5b8
    struct DISPLAYPU *pu; // register $4
    long lp; // register $6
    long dx; // register $2
} // line 50, offset 0x3b6e4
/*
 * Offset 0x3B6F4
 * C:\Projects2\Tomb5\GAME\HEALTH.C (line 396)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ AddDisplayPickup(short object_number /*reg $4*/)
{ // line 1, offset 0x3b6f4
    struct DISPLAYPU *pu; // register $3
    long lp; // register $5
} // line 22, offset 0x3b7a8
extern int health_bar_timer; // offset 0xA0AF4
extern char PoisonFlag; // offset 0xA36B0
extern struct DISPLAYPU pickups[8];
extern short PickupX; // offset 0xA3684
extern short PickupY; // offset 0xA3688
extern short PickupVel; // offset 0xA36AC
extern short CurrentPickup; // offset 0xA36B4