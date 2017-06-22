#include "DRAWPHAS.H"
/*
 * Offset 0x63F04
 * C:\Projects2\Tomb5\SPEC_PSX\DRAWPHAS.C (line 100)
 * Stack frame base $29, size 40
 */
long /*reg $31*/ DrawPhaseGame()
{ // line 2, offset 0x63f04
    short scalarx; // register $7
    short scalary; // register $8
    short scalarz; // register $9
} // line 107, offset 0x643fc
/*
 * Offset 0x643FC
 * C:\Projects2\Tomb5\SPEC_PSX\DRAWPHAS.C (line 230)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ DrawRooms(short current_room /*reg $16*/)
{ // line 1, offset 0x643fc
    struct room_info *r; // register $4
    { // line 146, offset 0x649b8
        short old_anim; // register $12
        short old_frame; // register $13
        short old_left_arm[2]; // stack offset -40
        short old_right_arm[2]; // stack offset -32
        short *old_arm_anim[2]; // stack offset -24
    } // line 197, offset 0x64b40
    { // line 230, offset 0x64c24
        struct GAME_VECTOR sp; // stack offset -40
    } // line 264, offset 0x64d70
} // line 295, offset 0x64e78
/*
 * Offset 0x64E78
 * C:\Projects2\Tomb5\SPEC_PSX\DRAWPHAS.C (line 768)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ SortOutWreckingBallDraw()
{ // line 2, offset 0x64e78
    long lp; // register $3
} // line 12, offset 0x64ee8
/*
 * Offset 0x64EF8
 * C:\Projects2\Tomb5\SPEC_PSX\DRAWPHAS.C (line 782)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ MGDrawSprite(int x /*reg $4*/, int y /*reg $5*/, int def /*reg $6*/, int z /*reg $7*/, int xs /*sp 16*/, int ys /*sp 20*/, long rgb /*sp 24*/)
{ // line 1, offset 0x64ef8
    struct POLY_FT4 *polyft4; // register $8
    struct PSXSPRITESTRUCT *pSpriteInfo; // register $4
} // line 32, offset 0x65040
extern long StoreBoxes; // offset 0xA1F4C
extern struct GAME_VECTOR LaraPos;
extern struct PSXTEXTI *MonitorScreenTI;
extern unsigned char MonitorScreenU0; // offset 0xA5538
extern unsigned char MonitorHold; // offset 0xA5544
extern short MonitorOff; // offset 0xA553C
extern short MonitorOff2; // offset 0xA5540