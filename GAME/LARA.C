#include "LARA.H"
/*
 * Offset 0x11764
 * C:\Projects2\Tomb5\GAME\LARA.C (line 312)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ GetLaraCollisionInfo(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $8*/);
/*
 * Offset 0x117B0
 * C:\Projects2\Tomb5\GAME\LARA.C (line 335)
 * Stack frame base $29, size 48
 */
short /*reg $31*/ LaraFloorFront(struct ITEM_INFO *item /*reg $19*/, short ang /*reg $5*/, long dist /*reg $6*/)
{ // line 1, offset 0x117b0
    short room; // stack offset -32
    long x; // register $17
    long y; // register $18
    long z; // register $16
    long height; // register $3
} // line 18, offset 0x1189c
/*
 * Offset 0x1189C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 373)
 * Stack frame base $29, size 48
 */
short /*reg $31*/ LaraCeilingFront(struct ITEM_INFO *item /*reg $19*/, short ang /*reg $5*/, long dist /*reg $6*/, long h /*reg $20*/)
{ // line 1, offset 0x1189c
    short room; // stack offset -32
    long x; // register $17
    long y; // register $18
    long z; // register $16
    long height; // register $3
} // line 18, offset 0x11998
/*
 * Offset 0x11998
 * C:\Projects2\Tomb5\GAME\LARA.C (line 411)
 * Stack frame base $29, size 32
 */
int /*reg $31*/ TestLaraSlide(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $5*/)
{ // line 1, offset 0x11998
    short ang; // register $18
    static short old_ang; // offset 0x0
} // line 65, offset 0x11b6c
/*
 * Offset 0x11B6C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 478)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ LaraFallen(struct ITEM_INFO *item /*reg $7*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x11BD8
 * C:\Projects2\Tomb5\GAME\LARA.C (line 497)
 * Stack frame base $29, size 32
 */
int /*reg $31*/ LaraLandedBad(struct ITEM_INFO *l /*reg $16*/, struct COLL_INFO *coll /*reg $5*/)
{ // line 1, offset 0x11bd8
    int landspeed; // register $3
} // line 23, offset 0x11c94
/*
 * Offset 0x11C94
 * C:\Projects2\Tomb5\GAME\LARA.C (line 526)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ LaraHitCeiling(struct ITEM_INFO *item /*reg $7*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x11D18
 * C:\Projects2\Tomb5\GAME\LARA.C (line 563)
 * Stack frame base $29, size 24
 */
int /*reg $31*/ LaraDeflectEdge(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x11DC0
 * C:\Projects2\Tomb5\GAME\LARA.C (line 610)
 * Stack frame base $29, size 24
 */
int /*reg $31*/ LaraDeflectEdgeDuck(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x11E60
 * C:\Projects2\Tomb5\GAME\LARA.C (line 636)
 * Stack frame base $29, size 32
 */
int /*reg $31*/ LaraTestEdgeCatch(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/, long *edge /*reg $18*/)
{ // line 1, offset 0x11e60
    int hdif; // register $3
    short *bounds; // register $4
} // line 31, offset 0x11f78
/*
 * Offset 0x11F78
 * C:\Projects2\Tomb5\GAME\LARA.C (line 671)
 * Stack frame base $29, size 56
 */
int /*reg $31*/ LaraTestClimbStance(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $18*/)
{ // line 1, offset 0x11f78
    int result_r; // register $16
    int shift_r; // stack offset -32
    int shift_l; // stack offset -28
} // line 33, offset 0x120c0
/*
 * Offset 0x120C0
 * C:\Projects2\Tomb5\GAME\LARA.C (line 711)
 * Stack frame base $29, size 40
 */
int /*reg $31*/ TestLaraVault(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $18*/)
{ // line 1, offset 0x120c0
    { // line 8, offset 0x12118
        int hdif; // register $6
        int slope; // register $3
        short angle; // register $17
    } // line 140, offset 0x12530
} // line 157, offset 0x12550
/*
 * Offset 0x12550
 * C:\Projects2\Tomb5\GAME\LARA.C (line 874)
 * Stack frame base $29, size 48
 */
int /*reg $31*/ TestWall(struct ITEM_INFO *item /*reg $4*/, long front /*reg $20*/, long right /*reg $6*/, long down /*reg $7*/)
{ // line 1, offset 0x12550
    int x; // register $17
    int y; // register $19
    int z; // register $18
    int h; // register $16
    int c; // register $3
    struct FLOOR_INFO *floor; // register $16
    short room_num; // stack offset -32
    short angle; // register $16
} // line 67, offset 0x126f0
/*
 * Offset 0x126F0
 * C:\Projects2\Tomb5\GAME\LARA.C (line 949)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ LaraCollideStop(struct ITEM_INFO *item /*reg $6*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x127BC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 979)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_slide_slope(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x12904
 * C:\Projects2\Tomb5\GAME\LARA.C (line 1026)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ LaraDeflectEdgeJump(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x12B18
 * C:\Projects2\Tomb5\GAME\LARA.C (line 1087)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ LaraSlideEdgeJump(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x12C54
 * C:\Projects2\Tomb5\GAME\LARA.C (line 1123)
 * Stack frame base $29, size 56
 */
int /*reg $31*/ LaraTestHangOnClimbWall(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $19*/)
{ // line 1, offset 0x12c54
    short l; // register $16
    short r; // register $3
    short *bounds; // register $18
    int shift; // stack offset -32
    int result; // register $3
} // line 50, offset 0x12e54
/*
 * Offset 0x12E54
 * C:\Projects2\Tomb5\GAME\LARA.C (line 1176)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ SnapLaraToEdgeOfBlock(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/, short angle /*reg $6*/);
/*
 * Offset 0x12F34
 * C:\Projects2\Tomb5\GAME\LARA.C (line 1214)
 * Stack frame base $29, size 64
 */
int /*reg $31*/ LaraHangTest(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $18*/)
{ // line 1, offset 0x12f34
    int hdif; // register $19
    int flag; // stack offset -48
    long x; // register $4
    long z; // register $6
    short angle; // register $17
    short move; // register $21
    short wall; // register $20
    short ceiling; // stack offset -44
    short dir; // register $22
} // line 224, offset 0x135bc
/*
 * Offset 0x135BC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 1440)
 * Stack frame base $29, size 32
 */
int /*reg $31*/ IsValidHangPos(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $18*/)
{ // line 1, offset 0x135bc
    short angle; // register $4
} // line 43, offset 0x13738
/*
 * Offset 0x13738
 * C:\Projects2\Tomb5\GAME\LARA.C (line 1489)
 * Stack frame base $29, size 72
 */
int /*reg $31*/ LaraHangRightCornerTest(struct ITEM_INFO *item /*reg $18*/, struct COLL_INFO *coll /*sp 4*/)
{ // line 1, offset 0x13738
    int x; // register $19
    int z; // register $17
    int flag; // register $20
    long front; // register $30
    int oldx; // register $23
    int oldz; // stack offset -56
    short oldy; // stack offset -52
    short angle; // register $22
} // line 159, offset 0x13c24
/*
 * Offset 0x13C24
 * C:\Projects2\Tomb5\GAME\LARA.C (line 1665)
 * Stack frame base $29, size 72
 */
int /*reg $31*/ LaraHangLeftCornerTest(struct ITEM_INFO *item /*reg $18*/, struct COLL_INFO *coll /*sp 4*/)
{ // line 1, offset 0x13c24
    int x; // register $19
    int z; // register $17
    int flag; // register $20
    long front; // register $30
    int oldx; // register $23
    int oldz; // stack offset -56
    short oldy; // stack offset -52
    short angle; // register $22
} // line 159, offset 0x14104
/*
 * Offset 0x14104
 * C:\Projects2\Tomb5\GAME\LARA.C (line 1832)
 * Stack frame base $29, size 48
 */
int /*reg $31*/ TestHangSwingIn(struct ITEM_INFO *item /*reg $4*/, short angle /*reg $5*/)
{ // line 1, offset 0x14104
    int x; // register $17
    int y; // register $19
    int z; // register $18
    int h; // register $16
    int c; // register $3
    struct FLOOR_INFO *floor; // register $16
    short room_num; // stack offset -32
} // line 41, offset 0x14228
/*
 * Offset 0x14228
 * C:\Projects2\Tomb5\GAME\LARA.C (line 1896)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ LaraAboveWater(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $18*/);
/*
 * Offset 0x1448C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 1972)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_duckl(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x144E0
 * C:\Projects2\Tomb5\GAME\LARA.C (line 1982)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_duckr(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x14534
 * C:\Projects2\Tomb5\GAME\LARA.C (line 1992)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ lara_col_ducklr(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $16*/);
/*
 * Offset 0x14688
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2033)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_as_duck(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x147C4
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2066)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ lara_col_duck(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $18*/);
/*
 * Offset 0x14970
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2121)
 * Stack frame base $29, size 88
 */
void /*reg $31*/ lara_as_all4s(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $18*/)
{ // line 1, offset 0x14970
    { // line 10, offset 0x149bc
        struct GAME_VECTOR s; // stack offset -72
        struct GAME_VECTOR d; // stack offset -56
        struct MESH_INFO *StaticMesh; // stack offset -24
        struct PHD_VECTOR v; // stack offset -40
    } // line 41, offset 0x14ac0
} // line 56, offset 0x14b28
/*
 * Offset 0x14B40
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2179)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ lara_col_all4s(struct ITEM_INFO *item /*reg $19*/, struct COLL_INFO *coll /*reg $20*/)
{ // line 1, offset 0x14b40
    int slope; // register $21
    { // line 52, offset 0x14d38
    } // line 59, offset 0x14d6c
    { // line 64, offset 0x14d80
        short height; // register $4
        short heightl; // register $22
        short heightr; // register $16
        { // line 84, offset 0x14dc8
            long x; // register $18
            long z; // register $17
        } // line 97, offset 0x14e94
        { // line 114, offset 0x14f10
            struct ITEM_INFO **itemlist; // register $3
            struct MESH_INFO **meshlist; // register $3
            long x; // register $16
            long z; // register $17
            { // line 124, offset 0x14fb0
                short angle; // register $4
            } // line 152, offset 0x15054
        } // line 156, offset 0x15060
    } // line 156, offset 0x15060
} // line 178, offset 0x150cc
/*
 * Offset 0x150F4
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2359)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_as_crawl(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x1523C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2396)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ lara_col_crawl(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x15390
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2444)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_all4turnl(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x153FC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2463)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ lara_col_all4turnlr(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x15484
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2480)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_all4turnr(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x154F0
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2499)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_as_crawlb(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $18*/);
/*
 * Offset 0x15614
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2535)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ lara_col_crawlb(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x15770
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2587)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ lara_col_crawl2hang(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $18*/)
{ // line 1, offset 0x15770
    { // line 10, offset 0x157d0
        int edge_catch; // register $19
        short angle; // register $16
        short *bounds; // register $2
        long edge; // stack offset -32
    } // line 94, offset 0x15a08
} // line 95, offset 0x15a08
/*
 * Offset 0x15A28
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2690)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_as_dash(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x15C50
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2767)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ lara_col_dash(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x15E1C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2847)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_dashdive(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x15E5C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2858)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_dashdive(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x16004
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2920)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ MonkeySwingFall(struct ITEM_INFO *item /*reg $4*/);
/*
 * Offset 0x1605C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2933)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ MonkeySwingSnap(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/)
{ // line 1, offset 0x1605c
    short room_num; // stack offset -16
} // line 8, offset 0x160b4
/*
 * Offset 0x160B4
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2943)
 * Stack frame base $29, size 0
 */
short /*reg $31*/ GetDirOctant(long rot /*reg $4*/);
/*
 * Offset 0x160CC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2951)
 * Stack frame base $29, size 40
 */
short /*reg $31*/ TestMonkeyLeft(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $16*/)
{ // line 1, offset 0x160cc
    { // line 15, offset 0x16180
        short oct; // register $3
    } // line 24, offset 0x161d8
} // line 26, offset 0x161ec
/*
 * Offset 0x161EC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 2979)
 * Stack frame base $29, size 40
 */
short /*reg $31*/ TestMonkeyRight(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $16*/)
{ // line 1, offset 0x161ec
    { // line 15, offset 0x162a0
        short oct; // register $4
    } // line 24, offset 0x162f8
} // line 26, offset 0x1630c
/*
 * Offset 0x1630C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3007)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_as_hang2(struct ITEM_INFO *item /*reg $6*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x163DC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3034)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ lara_col_hang2(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $16*/);
/*
 * Offset 0x1670C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3151)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_as_monkeyswing(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x16828
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3188)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ lara_col_monkeyswing(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $16*/);
/*
 * Offset 0x16A0C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3231)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_monkeyl(struct ITEM_INFO *item /*reg $6*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x16A80
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3252)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_monkeyl(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x16B24
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3271)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_monkeyr(struct ITEM_INFO *item /*reg $6*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x16B9C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3291)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_monkeyr(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x16C40
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3309)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_hangturnl(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x16C94
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3326)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ lara_col_hangturnlr(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $16*/);
/*
 * Offset 0x16D64
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3343)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_hangturnr(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x16DB8
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3360)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_monkey180(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x16DDC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3368)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_col_monkey180(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x16DFC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3384)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ lara_col_polestat(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/)
{ // line 1, offset 0x16dfc
    { // line 47, offset 0x16f80
        short room_num; // stack offset -24
    } // line 56, offset 0x16fc4
} // line 72, offset 0x1700c
/*
 * Offset 0x17020
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3458)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_poleleft(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1707C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3471)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_poleright(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x170D8
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3484)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_poleup(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/)
{ // line 1, offset 0x170d8
    short room_num; // stack offset -16
} // line 22, offset 0x171a0
/*
 * Offset 0x171A0
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3508)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ lara_col_poledown(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/)
{ // line 1, offset 0x171a0
    { // line 22, offset 0x17274
        short room_number; // stack offset -24
    } // line 32, offset 0x172b8
} // line 57, offset 0x17394
/*
 * Offset 0x17394
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3578)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ FallFromRope(struct ITEM_INFO *item /*reg $4*/)
{ // line 1, offset 0x17394
    long l; // register $3
} // line 16, offset 0x17424
/*
 * Offset 0x17424
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3596)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ JumpOffRope(struct ITEM_INFO *item /*reg $6*/);
/*
 * Offset 0x17508
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3629)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ UpdateRopeSwing(struct ITEM_INFO *item /*reg $17*/)
{ // line 1, offset 0x17508
    long temp; // register $4
    static unsigned char LegsSwinging; // offset 0x14
} // line 98, offset 0x178e4
/*
 * Offset 0x178E4
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3729)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ ApplyVelocityToRope(int node /*reg $4*/, unsigned short angle /*reg $5*/, unsigned short n /*reg $6*/)
{ // line 1, offset 0x178e4
} // line 13, offset 0x17958
/*
 * Offset 0x17958
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3746)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_as_rope(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x179A8
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3755)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_col_rope(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x17AB4
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3790)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_as_ropel(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x17B14
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3803)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_as_roper(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x17B74
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3818)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_ropefwd(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/)
{ // line 1, offset 0x17b74
    long Vel; // register $6
} // line 56, offset 0x17d9c
/*
 * Offset 0x17D9C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3878)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_as_climbrope(struct ITEM_INFO *item /*reg $5*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x17E64
 * C:\Projects2\Tomb5\GAME\LARA.C (line 3906)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_as_climbroped(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x17E94
 * C:\Projects2\Tomb5\GAME\LARA.C (line 4023)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ lara_as_stop(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $18*/)
{ // line 1, offset 0x17e94
    static char wait; // offset 0x15
    short fheight; // register $21
    short rheight; // register $20
    { // line 86, offset 0x1809c
    } // line 95, offset 0x18108
    { // line 99, offset 0x1811c
    } // line 108, offset 0x18188
    { // line 126, offset 0x181f8
        int wade; // register $3
    } // line 148, offset 0x18274
    { // line 168, offset 0x182c4
        long height; // register $2
        long ceiling; // register $16
    } // line 208, offset 0x183b8
} // line 227, offset 0x18420
/*
 * Offset 0x18444
 * C:\Projects2\Tomb5\GAME\LARA.C (line 4252)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_stop(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $16*/);
/*
 * Offset 0x1851C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 4386)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_upjump(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1853C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 4392)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ lara_col_upjump(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $18*/)
{ // line 1, offset 0x1853c
    { // line 12, offset 0x185b8
        struct ITEM_INFO *item; // register $16
        struct COLL_INFO *coll; // register $18
        { // line 12, offset 0x185b8
            short angle; // register $17
            short *bounds; // register $2
            int edge_catch; // register $19
            long edge; // stack offset -32
        } // line 15, offset 0x188cc
    } // line 15, offset 0x188cc
} // line 62, offset 0x18a14
/*
 * Offset 0x18A34
 * C:\Projects2\Tomb5\GAME\LARA.C (line 4462)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_forwardjump(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x18B88
 * C:\Projects2\Tomb5\GAME\LARA.C (line 4504)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_forwardjump(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x18CE0
 * C:\Projects2\Tomb5\GAME\LARA.C (line 4690)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_reach(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x18D0C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 4698)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ lara_col_reach(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $18*/)
{ // line 1, offset 0x18d0c
    { // line 5, offset 0x18d5c
        struct ITEM_INFO *item; // register $16
        struct COLL_INFO *coll; // register $18
        { // line 5, offset 0x18d5c
            short angle; // register $17
            int edge_catch; // register $19
            short *bounds; // register $2
            long edge; // stack offset -32
        } // line 10, offset 0x190fc
    } // line 10, offset 0x190fc
} // line 35, offset 0x19198
/*
 * Offset 0x191B8
 * C:\Projects2\Tomb5\GAME\LARA.C (line 4744)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_as_walk(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x192EC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 4800)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_as_run(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/)
{ // line 1, offset 0x192ec
    static int jump_ok; // offset 0x18
} // line 112, offset 0x1958c
/*
 * Offset 0x1959C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 4916)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_fastback(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x19628
 * C:\Projects2\Tomb5\GAME\LARA.C (line 4935)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_turn_r(struct ITEM_INFO *item /*reg $6*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1972C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 4980)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_turn_l(struct ITEM_INFO *item /*reg $6*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x19830
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5025)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_as_death(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x198BC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5046)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_as_fastfall(struct ITEM_INFO *item /*reg $5*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x19928
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5053)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_void_func(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/)
{

}
/*
 * Offset 0x19930
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5063)
 * Stack frame base $29, size 40
 */
int /*reg $31*/ CanLaraHangSideways(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/, short angle /*reg $17*/)
{ // line 1, offset 0x19930
    long x; // register $7
    long z; // register $8
    long oldx; // register $19
    long oldz; // register $18
} // line 39, offset 0x19a28
/*
 * Offset 0x19A28
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5104)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_as_hang(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $16*/);
/*
 * Offset 0x19AC8
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5123)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_hang(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $18*/)
{ // line 1, offset 0x19ac8
    int flag; // register $2
} // line 151, offset 0x19f30
/*
 * Offset 0x19F48
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5276)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_hangleft(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x19F94
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5287)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_hangleft(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x19FEC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5295)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_hangright(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1A038
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5306)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_hangright(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1A090
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5319)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ SetCornerAnim(struct ITEM_INFO *item /*reg $5*/, struct COLL_INFO *coll /*reg $10*/, short rot /*reg $11*/, short flip /*reg $7*/);
/*
 * Offset 0x1A1F0
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5368)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_as_extcornerl(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/)
{ // line 1, offset 0x1a1f0
    short flip; // register $7
} // line 14, offset 0x1a244
/*
 * Offset 0x1A244
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5384)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_as_extcornerr(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/)
{ // line 1, offset 0x1a244
    short flip; // register $7
} // line 14, offset 0x1a298
/*
 * Offset 0x1A298
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5400)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_as_intcornerl(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/)
{ // line 1, offset 0x1a298
    short flip; // register $7
} // line 14, offset 0x1a2ec
/*
 * Offset 0x1A2EC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5416)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_as_intcornerr(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/)
{ // line 1, offset 0x1a2ec
    short flip; // register $7
} // line 14, offset 0x1a340
/*
 * Offset 0x1A340
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5434)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_splat(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1A35C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5442)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_as_compress(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1A4F0
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5481)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_back(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1A5DC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5512)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_null(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1A5F8
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5520)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_fastturn(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1A65C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5550)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_col_fastturn(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1A67C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5557)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_stepright(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1A750
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5590)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_stepleft(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1A824
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5620)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_slide(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1A854
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5630)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_backjump(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1A8C4
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5643)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_rightjump(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1A92C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5654)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_leftjump(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1A994
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5665)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_fallback(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1A9E0
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5677)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_slideback(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1AA04
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5684)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_pushblock(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1AA60
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5696)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_pullblock(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1AABC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5707)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_ppready(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1AB00
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5717)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_pickup(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1AB5C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5728)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_pickupflare(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1ABEC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5743)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_switchon(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1AC54
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5755)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_switchoff(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1ACBC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5767)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_usekey(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1AD18
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5778)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_usepuzzle(struct ITEM_INFO *item /*reg $5*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1ADDC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5799)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_special(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1AE08
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5807)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_swandive(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1AE4C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5816)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_fastdive(struct ITEM_INFO *item /*reg $6*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1AEC8
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5826)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_gymnast(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1AEE4
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5837)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_waterout(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1AF10
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5844)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_wade(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1B038
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5884)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ lara_as_deathslide(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $16*/)
{ // line 1, offset 0x1b038
    short room_number; // stack offset -24
} // line 22, offset 0x1b0fc
/*
 * Offset 0x1B0FC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5910)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_controlled(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1B180
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5925)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_controlledl(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1B1B4
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5932)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_col_turnswitch(struct ITEM_INFO *item /*reg $6*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1B288
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5953)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_pulley(struct ITEM_INFO *item /*reg $5*/, struct COLL_INFO *coll /*reg $5*/)
{ // line 1, offset 0x1b288
    struct ITEM_INFO *p; // register $7
} // line 40, offset 0x1b3e8
/*
 * Offset 0x1B3E8
 * C:\Projects2\Tomb5\GAME\LARA.C (line 5996)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_walk(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x1B64C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6084)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ lara_col_run(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x1B87C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6166)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_col_pose(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1B89C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6172)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_fastback(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x1B9C4
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6209)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_turn_r(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x1BABC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6237)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_col_turn_l(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1BADC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6243)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_death(struct ITEM_INFO *item /*reg $18*/, struct COLL_INFO *coll /*reg $16*/);
/*
 * Offset 0x1BB88
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6261)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_fastfall(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x1BC74
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6292)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_splat(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $16*/);
/*
 * Offset 0x1BD10
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6308)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_col_land(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1BD30
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6314)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_compress(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x1BE38
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6344)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_back(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x1BFB0
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6401)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_stepright(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $16*/);
/*
 * Offset 0x1C0E8
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6432)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_col_stepleft(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1C108
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6438)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_col_slide(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1C130
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6445)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_col_backjump(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1C15C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6452)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_col_rightjump(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1C188
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6459)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_col_leftjump(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1C1B4
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6466)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_fallback(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x1C284
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6492)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_col_slideback(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1C2B0
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6548)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_roll(struct ITEM_INFO *item /*reg $17*/, struct COLL_INFO *coll /*reg $16*/);
/*
 * Offset 0x1C384
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6570)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_roll2(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x1C4A0
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6601)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_swandive(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x1C558
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6621)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_fastdive(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x1C61C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6657)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ lara_col_wade(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x1C80C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6729)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ lara_default_col(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1C860
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6744)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_col_jumper(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $17*/);
/*
 * Offset 0x1C920
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6849)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ ResetLook();
/*
 * Offset 0x1C9D8
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6871)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ LookUpDown();
/*
 * Offset 0x1CB80
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6914)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ LookLeftRight();
/*
 * Offset 0x1CD28
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6964)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ GetTighRopeFallOff(long Regularity /*reg $17*/);
/*
 * Offset 0x1CDE8
 * C:\Projects2\Tomb5\GAME\LARA.C (line 6982)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ lara_as_trpose(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1CEDC
 * C:\Projects2\Tomb5\GAME\LARA.C (line 7011)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ lara_as_trwalk(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/)
{ // line 1, offset 0x1cedc
    short room_number; // stack offset -24
} // line 39, offset 0x1d024
/*
 * Offset 0x1D03C
 * C:\Projects2\Tomb5\GAME\LARA.C (line 7054)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ lara_as_trfall(struct ITEM_INFO *item /*reg $16*/, struct COLL_INFO *coll /*reg $5*/)
{ // line 1, offset 0x1d03c
    struct PHD_VECTOR pos; // stack offset -24
    int UndoInput; // register $6
    int WrongInput; // register $7
    int UndoAnim; // register $8
    int UndoFrame; // register $4
} // line 73, offset 0x1d210
/*
 * Offset 0x1D220
 * C:\Projects2\Tomb5\GAME\LARA.C (line 7129)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_parallelbars(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $5*/);
/*
 * Offset 0x1D244
 * C:\Projects2\Tomb5\GAME\LARA.C (line 7143)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ lara_as_pbleapoff(struct ITEM_INFO *item /*reg $7*/, struct COLL_INFO *coll /*reg $5*/)
{ // line 1, offset 0x1d244
    struct ITEM_INFO *pitem; // register $5
    long Dist; // register $2
} // line 29, offset 0x1d420
static short LeftClimbTab[4]; // offset 0xA0638
static short RightClimbTab[4]; // offset 0xA0640
extern short angle; // offset 0xA0650
extern short elevation; // offset 0xA0652
extern struct ITEM_INFO *lara_item;
extern unsigned short DashTimer; // offset 0xA2044
extern struct lara_info lara;