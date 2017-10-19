#include "DELTAPAK.H"
/*
 * Offset 0x2C3C4
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 504)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ handle_cutseq_triggering(int name /*reg $17*/)
{ // line 1, offset 0x2c3c4
    int n; // register $2
    { // line 92, offset 0x2c4e8
        int goin; // register $5
        int fuck; // register $4
    } // line 191, offset 0x2c78c
} // line 326, offset 0x2ca50
/*
 * Offset 0x2CA68
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 839)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ do_new_cutscene_camera()
{ // line 6, offset 0x2ca68
    { // line 39, offset 0x2caac
        struct PACKNODE *nodes; // register $4
    } // line 89, offset 0x2cc60
    { // line 89, offset 0x2cc60
    } // line 131, offset 0x2cd40
    { // line 133, offset 0x2cd40
        int n; // register $16
    } // line 179, offset 0x2ced4
} // line 182, offset 0x2ced4
/*
 * Offset 0x2CED4
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 1029)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ InitPackNodes(struct NODELOADHEADER *lnode /*reg $4*/, struct PACKNODE *pnode /*reg $5*/, char *packed /*reg $11*/, int numnodes /*reg $7*/)
{ // line 1, offset 0x2ced4
    int offset; // register $10
    int xoff; // register $4
    int yoffset; // register $3
    int yoff; // register $6
    int zoffset; // register $3
    int zoff; // register $5
    int i; // register $7
} // line 44, offset 0x2d000
/*
 * Offset 0x2D000
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 1239)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ frigup_lara()
{ // line 2, offset 0x2d000
    struct object_info *object; // register $7
    long *bone; // register $16
    short *frame; // register $17
} // line 58, offset 0x2d0fc
/*
 * Offset 0x2D110
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 1387)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ init_cutseq_malloc();
/*
 * Offset 0x2D134
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 1400)
 * Stack frame base $29, size 0
 */
void * /*reg $31*/ cutseq_malloc(int size /*reg $5*/)
{ // line 2, offset 0x2d134
    char *ptr; // register $4
} // line 19, offset 0x2d180
/*
 * Offset 0x2D180
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 1421)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ finish_cutseq(int name /*reg $16*/);
/*
 * Offset 0x2D204
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 1734)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ CalculateObjectLightingLaraCutSeq()
{ // line 2, offset 0x2d204
    short room_no; // register $16
    struct PHD_VECTOR pos; // stack offset -24
} // line 31, offset 0x2d2a0
/*
 * Offset 0x2D2A0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 1855)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ cutseq_givelara_pistols();
/*
 * Offset 0x2D2D8
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 1863)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ cutseq_removelara_pistols();
/*
 * Offset 0x2D308
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 1873)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ cutseq_givelara_hk();
/*
 * Offset 0x2D328
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 1879)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ cutseq_removelara_hk();
/*
 * Offset 0x2D360
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 1888)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ cutseq_shoot_pistols(int left_or_right /*reg $16*/);
/*
 * Offset 0x2D3E4
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 1907)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ trigger_weapon_dynamics(int left_or_right /*reg $16*/)
{ // line 1, offset 0x2d3e4
    struct PHD_VECTOR pos; // stack offset -32
} // line 12, offset 0x2d48c
/*
 * Offset 0x2D48C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 1928)
 * Stack frame base $29, size 88
 */
void /*reg $31*/ deal_with_pistols(unsigned short *shootdata /*reg $17*/)
{ // line 1, offset 0x2d48c
    struct PHD_VECTOR pos; // stack offset -48
    int f; // register $18
    { // line 11, offset 0x2d4d0
        unsigned short dat; // register $16
    } // line 20, offset 0x2d500
} // line 57, offset 0x2d678
/*
 * Offset 0x2D69C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2000)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ cutseq_kill_item(int num /*reg $12*/)
{ // line 1, offset 0x2d69c
    int i; // register $8
} // line 19, offset 0x2d730
/*
 * Offset 0x2D738
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2022)
 * Stack frame base $29, size 0
 */
struct ITEM_INFO * /*reg $31*/ cutseq_restore_item(int num /*reg $4*/)
{ // line 1, offset 0x2d738
    int i; // register $3
} // line 19, offset 0x2d7d0
/*
 * Offset 0x2D7D0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2054)
 * Stack frame base $29, size 32
 */
int /*reg $31*/ Load_and_Init_Cutseq(int num /*reg $18*/)
{ // line 1, offset 0x2d7d0
    int file; // register $17
    long *headerbuf; // register $16
    int len; // register $18
    char *packed; // register $16
} // line 99, offset 0x2d944
/*
 * Offset 0x2D944
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2238)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ init_cutseq_actors(char *data /*reg $23*/, int resident /*reg $22*/)
{ // line 1, offset 0x2d944
    int pda_nodes; // register $3
    char *packed; // register $17
    int offset; // register $3
    int n; // register $18
    char *resident_addr; // register $19
} // line 123, offset 0x2db8c
/*
 * Offset 0x2DB8C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2368)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ init_resident_cutseq(int num /*reg $4*/)
{ // line 2, offset 0x2db8c
    char *packed; // register $6
} // line 18, offset 0x2dc14
/*
 * Offset 0x2DC14
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2403)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ DelsHandyTeleportLara(int x /*reg $4*/, int y /*reg $5*/, int z /*reg $6*/, int yrot /*reg $7*/)
{ // line 2, offset 0x2dc14
} // line 34, offset 0x2dd00
/*
 * Offset 0x2DD00
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2493)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ handle_lara_chatting(short *ranges /*reg $4*/)
{ // line 1, offset 0x2dd00
    int r1; // register $5
    int r2; // register $6
    int f; // register $7
    { // line 21, offset 0x2dd68
        short *poo; // register $2
        int rndme; // register $2
    } // line 23, offset 0x2dd68
} // line 35, offset 0x2dddc
/*
 * Offset 0x2DDF0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2546)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ handle_actor_chatting(int speechslot /*reg $19*/, int node /*reg $17*/, int slot /*reg $20*/, int objslot /*reg $18*/, short *ranges /*sp 16*/)
{ // line 1, offset 0x2ddf0
    int r1; // register $5
    int r2; // register $6
    int f; // register $8
    int rnd; // register $4
} // line 34, offset 0x2df30
/*
 * Offset 0x2DF50
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2642)
 * Stack frame base $29, size 0
 */
struct ITEM_INFO * /*reg $31*/ find_a_fucking_item(int object_number /*reg $4*/)
{ // line 1, offset 0x2df50
    int i; // register $5
} // line 17, offset 0x2dfa0
/*
 * Offset 0x2DFA0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2669)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ cranecut_init();
/*
 * Offset 0x2E020
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2688)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ cranecut_end()
{ // line 2, offset 0x2e020
    struct ITEM_INFO *item; // register $16
} // line 17, offset 0x2e0b8
/*
 * Offset 0x2E0B8
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2733)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ cranecut_control()
{ // line 2, offset 0x2e0b8
    int f; // register $17
    struct PHD_VECTOR pos; // stack offset -32
    { // line 63, offset 0x2e200
        int n; // register $16
    } // line 75, offset 0x2e254
} // line 84, offset 0x2e26c
/*
 * Offset 0x2E26C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2821)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ richcut1_init()
{ // line 2, offset 0x2e26c
    short item_num; // register $4
    short nex; // register $17
    struct ITEM_INFO *item; // register $16
} // line 29, offset 0x2e3a0
/*
 * Offset 0x2E3A0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2852)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ richcut1_end();
/*
 * Offset 0x2E3D8
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2862)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ richcut1_control()
{ // line 2, offset 0x2e3d8
    int f; // register $4
    { // line 17, offset 0x2e44c
        struct ITEM_INFO *item; // register $16
    } // line 24, offset 0x2e4b0
} // line 31, offset 0x2e4c0
/*
 * Offset 0x2E4C0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2905)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ richcut2_init();
/*
 * Offset 0x2E4D8
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2911)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ richcut2_end();
/*
 * Offset 0x2E4EC
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2916)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ richcut2_control()
{ // line 2, offset 0x2e4ec
    int f; // register $3
} // line 9, offset 0x2e514
/*
 * Offset 0x2E514
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2930)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ richcut3_init();
/*
 * Offset 0x2E54C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2937)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ richcut3_end()
{ // line 2, offset 0x2e54c
    struct ITEM_INFO *item; // register $5
} // line 12, offset 0x2e594
/*
 * Offset 0x2E594
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2951)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ richcut3_control()
{ // line 2, offset 0x2e594
    int f; // register $3
} // line 15, offset 0x2e5e4
/*
 * Offset 0x2E5E4
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2994)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ special1_init();
/*
 * Offset 0x2E614
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 2999)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ special1_control();
/*
 * Offset 0x2E644
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3003)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ special1_end();
/*
 * Offset 0x2E674
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3011)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ special2_init();
/*
 * Offset 0x2E6A4
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3016)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ special2_control();
/*
 * Offset 0x2E6D4
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3020)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ special2_end();
/*
 * Offset 0x2E704
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3028)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ special3_init();
/*
 * Offset 0x2E734
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3033)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ special3_control();
/*
 * Offset 0x2E764
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3037)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ special3_end();
/*
 * Offset 0x2E794
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3046)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ special4_init();
/*
 * Offset 0x2E7C4
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3051)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ special4_control();
/*
 * Offset 0x2E7F4
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3055)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ special4_end();
/*
 * Offset 0x2E824
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3071)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ stealth3_start()
{ // line 2, offset 0x2e824
    int i; // register $18
    struct ITEM_INFO *item; // register $17
} // line 24, offset 0x2e980
/*
 * Offset 0x2E99C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3098)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ stealth3_end()
{ // line 2, offset 0x2e99c
    int i; // register $17
    struct ITEM_INFO *item; // register $16
} // line 33, offset 0x2eb78
/*
 * Offset 0x2EB9C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3143)
 * Stack frame base $29, size 80
 */
void /*reg $31*/ deal_with_actor_shooting(unsigned short *shootdata /*reg $4*/, int actornum /*reg $16*/, int nodenum /*reg $17*/, struct PHD_VECTOR *pos /*reg $18*/)
{ // line 1, offset 0x2eb9c
    int f; // register $5
    { // line 11, offset 0x2ebd0
        unsigned short dat; // register $3
        { // line 14, offset 0x2ebe0
            struct MATRIX3D arse; // stack offset -48
        } // line 20, offset 0x2ec58
    } // line 21, offset 0x2ec58
} // line 23, offset 0x2ec68
/*
 * Offset 0x2EC80
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3295)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ GetActorJointAbsPosition(int actornum /*reg $17*/, unsigned long nodenum /*reg $22*/, struct PHD_VECTOR *vec /*reg $20*/)
{ // line 1, offset 0x2ec80
    int i; // register $19
    int poppush; // register $16
    struct object_info *object; // register $7
    long *bone; // register $18
    short *rotation1; // stack offset -48
    short *frame; // register $16
    struct ITEM_INFO *item; // register $21
    struct MATRIX3D *old; // register $23
} // line 55, offset 0x2ee84
/*
 * Offset 0x2EE84
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3418)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ TriggerActorBlood(int actornum /*reg $4*/, unsigned long nodenum /*reg $5*/, struct PHD_VECTOR *pos /*reg $16*/, int direction /*reg $18*/, int speed /*sp 16*/);
/*
 * Offset 0x2EED8
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3434)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ TriggerDelSmoke(long x /*reg $18*/, long y /*reg $20*/, long z /*reg $19*/, int sizeme /*reg $21*/)
{ // line 1, offset 0x2eed8
    long size; // register $2
    struct SPARKS *sptr; // register $16
    long dx; // register $3
    long dz; // register $4
} // line 47, offset 0x2f09c
/*
 * Offset 0x2F0C0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3487)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ joby2_init();
/*
 * Offset 0x2F114
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3519)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ joby2_control()
{ // line 2, offset 0x2f114
    int f; // register $5
} // line 70, offset 0x2f2b8
/*
 * Offset 0x2F2B8
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3591)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ joby2_end();
/*
 * Offset 0x2F2FC
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3606)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ joby3_init()
{

}
/*
 * Offset 0x2F304
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3616)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ joby3_control()
{ // line 2, offset 0x2f304
    int f; // register $4
} // line 18, offset 0x2f374
/*
 * Offset 0x2F374
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3635)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ joby3_end()
{

}
/*
 * Offset 0x2F37C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3646)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy1_init();
/*
 * Offset 0x2F39C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3651)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy1_control()
{ // line 2, offset 0x2f39c
    int f; // register $3
} // line 16, offset 0x2f408
/*
 * Offset 0x2F408
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3668)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy1_end();
/*
 * Offset 0x2F434
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3680)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ hamgate_init()
{ // line 3, offset 0x2f434
    struct ITEM_INFO *item; // register $16
} // line 15, offset 0x2f4d0
/*
 * Offset 0x2F4D0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3696)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ hamgate_control()
{ // line 3, offset 0x2f4d0
    int f; // register $16
} // line 18, offset 0x2f534
/*
 * Offset 0x2F534
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3716)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ hamgate_end()
{ // line 2, offset 0x2f534
    struct ITEM_INFO *item; // register $2
} // line 10, offset 0x2f57c
/*
 * Offset 0x2F57C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3730)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ do_hammer_meshswap()
{ // line 2, offset 0x2f57c
    short *temp; // register $5
} // line 6, offset 0x2f5b0
/*
 * Offset 0x2F5B0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3746)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy2_init();
/*
 * Offset 0x2F5D0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3752)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ andy2_control()
{ // line 2, offset 0x2f5d0
    struct PHD_VECTOR pos; // stack offset -32
} // line 11, offset 0x2f668
/*
 * Offset 0x2F668
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3765)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy2_end();
/*
 * Offset 0x2F694
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3771)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ setup_preist_meshswap()
{ // line 2, offset 0x2f694
} // line 6, offset 0x2f6e4
/*
 * Offset 0x2F6E4
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3788)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ DelTorchFlames(struct PHD_VECTOR *pos /*reg $4*/)
{ // line 1, offset 0x2f6e4
    long x; // register $17
    long y; // register $18
    long z; // register $20
    long size; // register $3
    struct SPARKS *sptr; // register $30
} // line 91, offset 0x2f9e4
/*
 * Offset 0x2F9E4
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3900)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ joby4_init();
/*
 * Offset 0x2FA0C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3929)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ joby4_control()
{ // line 2, offset 0x2fa0c
    int f; // register $16
} // line 32, offset 0x2fb04
/*
 * Offset 0x2FB04
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 3962)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ joby4_end();
/*
 * Offset 0x2FB50
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4018)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ andrea1_init()
{

}
/*
 * Offset 0x2FB58
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4023)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ andrea1_control()
{ // line 2, offset 0x2fb58
    int f; // register $16
    struct PHD_VECTOR pos; // stack offset -24
    { // line 10, offset 0x2fb70
        struct ITEM_INFO *item; // register $2
    } // line 15, offset 0x2fb98
} // line 48, offset 0x2fc94
/*
 * Offset 0x2FC94
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4073)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ andrea1_end();
/*
 * Offset 0x2FCC0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4136)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ andrea2_init();
/*
 * Offset 0x2FCDC
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4140)
 * Stack frame base $29, size 88
 */
void /*reg $31*/ andrea2_control()
{ // line 2, offset 0x2fcdc
    int f; // register $16
    { // line 29, offset 0x2fd9c
        struct ITEM_INFO *item; // register $2
    } // line 34, offset 0x2fdc4
    { // line 41, offset 0x2fdd0
        struct PHD_VECTOR pos; // stack offset -56
    } // line 81, offset 0x2feb0
    { // line 86, offset 0x2fec0
        struct PHD_VECTOR s; // stack offset -40
        int r; // register $18
        int g; // register $17
        int b; // register $16
        int scale; // register $2
    } // line 112, offset 0x2ff5c
} // line 129, offset 0x2ffd4
/*
 * Offset 0x2FFD4
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4270)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ andrea2_end();
/*
 * Offset 0x2FFF0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4283)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ joby5_init();
/*
 * Offset 0x30034
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4319)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ joby5_control()
{ // line 2, offset 0x30034
    int f; // register $4
} // line 37, offset 0x30144
/*
 * Offset 0x30144
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4357)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ joby5_end();
/*
 * Offset 0x3018C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4378)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy3_init();
/*
 * Offset 0x301DC
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4389)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy3_control()
{ // line 2, offset 0x301dc
    int f; // register $3
} // line 11, offset 0x30208
/*
 * Offset 0x30208
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4401)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy3_end();
/*
 * Offset 0x3024C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4410)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ do_catapult_meshswap()
{ // line 2, offset 0x3024c
    short *temp; // register $5
} // line 6, offset 0x30280
/*
 * Offset 0x30280
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4459)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ joby9_init();
/*
 * Offset 0x302A0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4465)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ joby9_control()
{ // line 2, offset 0x302a0
} // line 14, offset 0x302f0
/*
 * Offset 0x302F0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4481)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ joby9_end();
/*
 * Offset 0x30318
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4523)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ joby10_init();
/*
 * Offset 0x30338
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4528)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ joby10_control()
{ // line 2, offset 0x30338
    int f; // register $3
    { // line 11, offset 0x3034c
        struct ITEM_INFO *item; // register $2
    } // line 14, offset 0x30364
} // line 23, offset 0x303ac
/*
 * Offset 0x303AC
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4553)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ joby10_end();
/*
 * Offset 0x303E0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4564)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ richcut4_init()
{ // line 2, offset 0x303e0
} // line 18, offset 0x30478
/*
 * Offset 0x30478
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4584)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ richcut4_control()
{ // line 2, offset 0x30478
    struct ITEM_INFO *item; // register $5
    int f; // register $16
} // line 32, offset 0x30560
/*
 * Offset 0x30560
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4618)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ richcut4_end()
{ // line 2, offset 0x30560
} // line 6, offset 0x3059c
/*
 * Offset 0x3059C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4635)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy4_init();
/*
 * Offset 0x305BC
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4640)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ andy4_control()
{ // line 2, offset 0x305bc
    struct PHD_VECTOR pos; // stack offset -24
    int n; // register $16
    int f; // register $3
} // line 42, offset 0x306b4
/*
 * Offset 0x306B4
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4683)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy4_end();
/*
 * Offset 0x306F0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4697)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy4b_init();
/*
 * Offset 0x30710
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4701)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ andy4b_control()
{ // line 2, offset 0x30710
    struct PHD_VECTOR pos; // stack offset -32
    int f; // register $16
    int n; // register $16
    { // line 13, offset 0x30764
        int actor; // register $17
    } // line 28, offset 0x307d8
} // line 43, offset 0x307ec
/*
 * Offset 0x307EC
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4745)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy4b_end();
/*
 * Offset 0x3081C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4752)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ do_clanger_meshswap()
{ // line 2, offset 0x3081c
    short *temp; // register $5
} // line 6, offset 0x30850
/*
 * Offset 0x30850
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4767)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andrea3_init();
/*
 * Offset 0x30870
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4802)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ andrea3_control()
{ // line 2, offset 0x30870
    int f; // register $3
} // line 25, offset 0x30904
/*
 * Offset 0x30904
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4828)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andrea3_end()
{ // line 2, offset 0x30904
    { // line 2, offset 0x30904
        struct ITEM_INFO *item; // register $16
    } // line 2, offset 0x30904
} // line 22, offset 0x30a1c
/*
 * Offset 0x30A1C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4856)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andrea3b_init()
{ // line 2, offset 0x30a1c
    { // line 2, offset 0x30a1c
        struct ITEM_INFO *item; // register $16
    } // line 2, offset 0x30a1c
} // line 22, offset 0x30b08
/*
 * Offset 0x30B08
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4896)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ andrea3b_control()
{ // line 2, offset 0x30b08
    int f; // register $5
} // line 47, offset 0x30c54
/*
 * Offset 0x30C54
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4945)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ andrea3b_end()
{ // line 2, offset 0x30c54
    { // line 2, offset 0x30c54
        int i; // register $17
        struct ITEM_INFO *item; // register $16
    } // line 21, offset 0x30d58
} // line 24, offset 0x30d84
/*
 * Offset 0x30D84
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4974)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy5_init();
/*
 * Offset 0x30DA4
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 4978)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ andy5_control()
{ // line 3, offset 0x30da4
    int f; // register $4
    struct PHD_VECTOR pos; // stack offset -32
} // line 43, offset 0x30f28
/*
 * Offset 0x30F28
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5022)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy5_end();
/*
 * Offset 0x30F48
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5032)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ joby6_init();
/*
 * Offset 0x30FA0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5046)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ joby6_control()
{ // line 2, offset 0x30fa0
    int f; // register $3
} // line 13, offset 0x30fec
/*
 * Offset 0x30FEC
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5061)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ joby6_end();
/*
 * Offset 0x31024
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5075)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ joby8_init()
{ // line 2, offset 0x31024
    short room_number; // stack offset -16
} // line 32, offset 0x310e0
/*
 * Offset 0x310E0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5108)
 * Stack frame base $29, size 128
 */
void /*reg $31*/ joby8_control()
{ // line 3, offset 0x310e0
    int f; // register $17
    { // line 39, offset 0x311ec
        short room_number; // stack offset -96
        struct ITEM_INFO *item; // register $16
    } // line 50, offset 0x31240
    { // line 54, offset 0x31250
        struct PHD_VECTOR s; // stack offset -88
        struct PHD_VECTOR d; // stack offset -72
        int r; // register $17
        int b; // register $20
        int rndme; // register $2
        struct SPARKS *sptr; // register $16
        int n; // register $18
    } // line 129, offset 0x314cc
    { // line 135, offset 0x314d8
        struct PHD_VECTOR s; // stack offset -56
        int r; // register $18
        int g; // register $17
        int b; // register $16
        int scale; // register $2
    } // line 162, offset 0x31570
} // line 168, offset 0x315a0
/*
 * Offset 0x315A0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5278)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ joby8_end();
/*
 * Offset 0x315D0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5289)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy6_init();
/*
 * Offset 0x315F8
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5295)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ andy6_control()
{ // line 2, offset 0x315f8
    struct PHD_VECTOR pos; // stack offset -32
} // line 12, offset 0x31690
/*
 * Offset 0x31690
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5308)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ andy6_end()
{

}
/*
 * Offset 0x31698
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5315)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andypew_init();
/*
 * Offset 0x316B8
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5319)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ andypew_control()
{

}
/*
 * Offset 0x316C0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5322)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andypew_end();
/*
 * Offset 0x316F4
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5335)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ andy7_init();
/*
 * Offset 0x31704
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5370)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ andy7_control();
/*
 * Offset 0x31754
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5382)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy7_end();
/*
 * Offset 0x31784
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5392)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ cossack_init()
{

}
/*
 * Offset 0x3178C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5396)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ cossack_control()
{ // line 2, offset 0x3178c
    struct PHD_VECTOR pos; // stack offset -40
    int n; // register $16
    int f; // register $17
} // line 73, offset 0x31998
/*
 * Offset 0x31998
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5470)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ cossack_end();
/*
 * Offset 0x319D0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5479)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ TriggerDelBrownSmoke(long x /*reg $17*/, long y /*reg $18*/, long z /*reg $19*/)
{ // line 1, offset 0x319d0
    long size; // register $2
    struct SPARKS *sptr; // register $16
} // line 44, offset 0x31b7c
/*
 * Offset 0x31B7C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5532)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy9_init();
/*
 * Offset 0x31BA4
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5539)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ andy9_control()
{ // line 2, offset 0x31ba4
    int f; // register $4
} // line 12, offset 0x31c08
/*
 * Offset 0x31C08
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5552)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy9_end();
/*
 * Offset 0x31C34
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5564)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ andy8_init()
{

}
/*
 * Offset 0x31C3C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5567)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy8_control()
{ // line 2, offset 0x31c3c
    struct ITEM_INFO *item; // register $3
    int f; // register $4
} // line 30, offset 0x31cf8
/*
 * Offset 0x31CF8
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5598)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy8_end();
/*
 * Offset 0x31D24
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5607)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ do_chalk_meshswap()
{ // line 2, offset 0x31d24
    short *temp; // register $5
} // line 6, offset 0x31d58
/*
 * Offset 0x31D58
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5618)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy10_init()
{ // line 2, offset 0x31d58
    struct ITEM_INFO *item; // register $16
} // line 30, offset 0x31e9c
/*
 * Offset 0x31E9C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5650)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ andy10_control()
{ // line 2, offset 0x31e9c
    int f; // register $6
} // line 46, offset 0x3202c
/*
 * Offset 0x3202C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5698)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy10_end();
/*
 * Offset 0x320D0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5733)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ joby7_init();
/*
 * Offset 0x3210C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5750)
 * Stack frame base $29, size 80
 */
void /*reg $31*/ joby7_control()
{ // line 2, offset 0x3210c
    struct PHD_VECTOR s; // stack offset -48
    struct PHD_VECTOR d; // stack offset -32
    int f; // register $17
    { // line 17, offset 0x3214c
        int brightme; // register $3
        int b; // register $2
    } // line 38, offset 0x321a0
    { // line 42, offset 0x321ac
        short room_no; // register $17
    } // line 60, offset 0x32268
} // line 85, offset 0x32328
/*
 * Offset 0x32328
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5837)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ joby7_end();
/*
 * Offset 0x323C0
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5866)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ andrea4_init()
{

}
/*
 * Offset 0x323C8
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5912)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ andrea4_control()
{ // line 2, offset 0x323c8
    int f; // register $16
} // line 24, offset 0x32464
/*
 * Offset 0x32464
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5937)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andrea4_end();
/*
 * Offset 0x32484
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5942)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ do_pierre_gun_meshswap()
{ // line 2, offset 0x32484
} // line 6, offset 0x324d4
/*
 * Offset 0x324D4
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5956)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ monk2_init();
/*
 * Offset 0x324E4
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5960)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ monk2_control()
{ // line 2, offset 0x324e4
    struct PHD_VECTOR pos; // stack offset -32
    int f; // register $4
} // line 33, offset 0x325f4
/*
 * Offset 0x325F4
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 5994)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ monk2_end();
/*
 * Offset 0x32608
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 6006)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ swampy_init()
{ // line 2, offset 0x32608
    struct ITEM_INFO *item; // register $16
} // line 17, offset 0x326ec
/*
 * Offset 0x326EC
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 6024)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ swampy_control()
{ // line 2, offset 0x326ec
    int f; // register $2
} // line 10, offset 0x3271c
/*
 * Offset 0x3271C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 6035)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ swampy_end();
/*
 * Offset 0x327F8
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 6062)
 * Stack frame base $29, size 80
 */
void /*reg $31*/ CutLaraBubbles()
{ // line 2, offset 0x327f8
    struct PHD_VECTOR offset; // stack offset -48
    struct PHD_VECTOR pos; // stack offset -32
    int i; // register $16
    short roomnum; // register $17
} // line 26, offset 0x32904
/*
 * Offset 0x32904
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 6101)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ trigger_title_spotcam(int num /*reg $18*/)
{ // line 1, offset 0x32904
    { // line 9, offset 0x3292c
        struct ITEM_INFO *item; // register $2
    } // line 10, offset 0x3292c
    { // line 23, offset 0x32970
        struct ITEM_INFO *item; // register $5
    } // line 46, offset 0x329fc
} // line 61, offset 0x32a80
/*
 * Offset 0x32A80
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 6167)
 * Stack frame base $29, size 32
 */
struct ITEM_INFO * /*reg $31*/ ResetCutanimate(int objnum /*reg $16*/)
{ // line 1, offset 0x32a80
    struct ITEM_INFO *item; // register $17
} // line 11, offset 0x32b50
/*
 * Offset 0x32B50
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 6190)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ Cutanimate(int objnum /*reg $16*/)
{ // line 1, offset 0x32b50
    struct ITEM_INFO *item; // register $17
} // line 12, offset 0x32c20
/*
 * Offset 0x32C20
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 6213)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy11_init();
/*
 * Offset 0x32C70
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 6223)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ andy11_control()
{ // line 2, offset 0x32c70
    int f; // register $4
} // line 22, offset 0x32d6c
/*
 * Offset 0x32D6C
 * C:\Projects2\Tomb5\GAME\DELTAPAK.C (line 6246)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ andy11_end();
extern struct CUTSEQ_ROUTINES cutseq_control_routines[45];
extern unsigned short crane_pistols_info[11];
extern unsigned short craneguard_pistols_info[7];
extern short admiral_chat_ranges_joby2[12];
extern short sergie_chat_ranges_joby2[8];
extern short lara_chat_ranges_joby3[6];
extern short lara_chat_ranges_joby4[10];
extern short admiral_chat_ranges_joby4[20];
extern unsigned short larson_pistols_info1[2];
extern short lara_chat_ranges_andrea1[4];
extern short larson_chat_ranges1[12];
extern short pierre_chat_ranges1[30];
extern short lara_chat_ranges_andrea2[32];
extern short larson_chat_ranges2[8];
extern short pierre_chat_ranges2[34];
extern short admiral_chat_ranges_joby5[18];
extern short sergie_chat_ranges_joby5[20];
extern short lara_chat_ranges_joby9[12];
extern short admiral_chat_ranges_joby9[36];
extern short lara_chat_ranges_joby10[12];
extern short admiral_chat_ranges_joby10[42];
extern unsigned short andrea3_pistols_info[5];
extern short lara_chat_ranges_andrea3[14];
extern short larson_chat_ranges3[14];
extern short lara_chat_ranges_andrea3b[12];
extern short larson_chat_ranges3b[4];
extern short priest_chat_ranges_andy7[32];
extern short lara_chat_ranges_andy7[14];
extern short lara_chat_ranges_joby7[10];
extern short lara_chat_ranges_andrea4[22];
extern short pierre_chat_ranges4[48];
extern int cuntercunter; // offset 0xA0998
extern char jobyfrigger; // offset 0xA099C
extern int cutrot; // offset 0xA09A0
extern int GLOBAL_playing_cutseq; // offset 0xA09B0
extern int cutseq_trig; // offset 0xA09AC
extern int cutseq_num; // offset 0xA09A8
extern unsigned char disable_horizon; // offset 0xA09A4
extern char cutseq_busy_timeout; // offset 0xA09B4
extern short frig_shadow_bbox[6];
extern int cut_seethrough; // offset 0xA09C4
extern char lara_chat_cnt; // offset 0xA09C8
extern char actor_chat_cnt; // offset 0xA09C9
extern struct NEW_CUTSCENE *GLOBAL_cutme;
extern int lastcamnum; // offset 0xA2698
extern int GLOBAL_cutseq_frame; // offset 0xA2668
extern int GLOBAL_numcutseq_frames; // offset 0xA2660
extern int GLOBAL_oldcamtype; // offset 0xA26EC
extern struct PACKNODE *camera_pnodes;
extern struct PACKNODE *actor_pnodes[10];
extern struct ITEM_INFO duff_item;
extern int numnailed; // offset 0xA266C
extern char old_status_flags[32];
extern unsigned short old_status_flags2[32];
extern unsigned long cutseq_meshbits[10];
extern unsigned long cutseq_meshswapbits[10];
extern struct RESIDENT_THING cutseq_resident_addresses[47];
extern char *GLOBAL_resident_depack_buffers; // offset 0xA2664
extern int cutseq_malloc_used; // offset 0xA2658
extern char *cutseq_malloc_ptr; // offset 0xA2654
extern int cutseq_malloc_free; // offset 0xA265C
extern unsigned short old_lara_holster; // offset 0xA26C0
extern short temp_rotation_buffer[160];