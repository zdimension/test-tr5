#include "COLLIDE.H"
/*
 * Offset 0x29A44
 * C:\Projects2\Tomb5\GAME\COLLIDE.C (line 779)
 * Stack frame base $29, size 128
 */
void /*reg $31*/ LaraBaddieCollision(struct ITEM_INFO *laraitem /*reg $19*/, struct COLL_INFO *coll /*reg $22*/)
{ // line 1, offset 0x29a44
    struct room_info *r; // register $3
    struct MESH_INFO *mesh; // register $16
    struct ITEM_INFO *item; // register $6
    struct object_info *object; // register $2
    struct static_info *sinfo; // register $5
    struct PHD_3DPOS pos; // stack offset -112
    int i; // register $6
    int j; // register $18
    int x; // register $7
    int y; // register $6
    int z; // register $4
    short roomies[21]; // stack offset -88
    short numroom; // register $20
    short *door; // register $7
    short *bounds; // register $17
    short item_num; // register $8
    short nex; // register $16
    { // line 24, offset 0x29af8
        int lp; // register $3
    } // line 32, offset 0x29b68
} // line 102, offset 0x29de0
/*
 * Offset 0x29E10
 * C:\Projects2\Tomb5\GAME\COLLIDE.C (line 886)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ CreatureCollision(short item_num /*reg $4*/, struct ITEM_INFO *laraitem /*reg $20*/, struct COLL_INFO *coll /*reg $17*/)
{ // line 1, offset 0x29e10
    struct ITEM_INFO *item; // register $16
    { // line 22, offset 0x29edc
        short *bounds; // register $2
        int x; // register $19
        int z; // register $18
        int rx; // register $4
        int rz; // register $3
        int c; // register $16
        int s; // register $17
        { // line 39, offset 0x29fc0
        } // line 47, offset 0x2a018
    } // line 48, offset 0x2a018
} // line 50, offset 0x2a018
/*
 * Offset 0x2A03C
 * C:\Projects2\Tomb5\GAME\COLLIDE.C (line 978)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ AIPickupCollision(short item_num /*reg $4*/, struct ITEM_INFO *laraitem /*reg $5*/, struct COLL_INFO *coll /*reg $6*/)
{ // line 1, offset 0x2a03c
    struct ITEM_INFO *item; // register $3
} // line 5, offset 0x2a098
/*
 * Offset 0x2A098
 * C:\Projects2\Tomb5\GAME\COLLIDE.C (line 988)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ TrapCollision(short item_num /*reg $16*/, struct ITEM_INFO *laraitem /*reg $18*/, struct COLL_INFO *coll /*reg $17*/)
{ // line 1, offset 0x2a098
    struct ITEM_INFO *item; // register $4
} // line 15, offset 0x2a128
/*
 * Offset 0x2A140
 * C:\Projects2\Tomb5\GAME\COLLIDE.C (line 1161)
 * Stack frame base $29, size 32
 */
int /*reg $31*/ TestBoundsCollideStatic(short *bounds /*reg $16*/, struct PHD_3DPOS *pos /*reg $17*/, long radius /*reg $18*/)
{ // line 1, offset 0x2a140
    long c; // register $6
    long s; // register $4
    long rx; // register $8
    long rz; // register $5
    long x; // register $7
    long z; // register $2
    short *larabounds; // register $6
    long minx; // register $2
    long maxx; // register $7
    long minz; // register $4
    long maxz; // register $3
} // line 33, offset 0x2a2d8
/*
 * Offset 0x2A2D8
 * C:\Projects2\Tomb5\GAME\COLLIDE.C (line 1196)
 * Stack frame base $29, size 40
 */
int /*reg $31*/ ItemPushLaraStatic(struct ITEM_INFO *laraitem /*reg $18*/, short *bounds /*reg $5*/, struct PHD_3DPOS *pos /*reg $16*/, struct COLL_INFO *coll /*reg $17*/)
{ // line 1, offset 0x2a2d8
    int x; // register $6
    int z; // register $10
    int rx; // register $8
    int rz; // register $4
    int c; // register $15
    int s; // register $14
    int minx; // register $12
    int maxx; // register $11
    int minz; // register $13
    int maxz; // register $7
    int l; // register $3
    int r; // register $5
    int t; // register $6
    int b; // register $7
    int ax; // register $3
    int az; // register $4
} // line 87, offset 0x2a5ec
/*
 * Offset 0x2A5EC
 * C:\Projects2\Tomb5\GAME\COLLIDE.C (line 1602)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ GenericSphereBoxCollision(short item_num /*reg $4*/, struct ITEM_INFO *laraitem /*reg $20*/, struct COLL_INFO *coll /*sp 8*/)
{ // line 1, offset 0x2a5ec
    struct ITEM_INFO *item; // register $18
    struct SPHERE *sptr; // register $23
    long TouchBits; // register $22
    long DeadlyBits; // register $21
    long dx; // register $16
    long dy; // register $19
    long dz; // register $17
} // line 78, offset 0x2a808
/*
 * Offset 0x2A838
 * C:\Projects2\Tomb5\GAME\COLLIDE.C (line 2014)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ TriggerLaraBlood()
{ // line 2, offset 0x2a838
    struct PHD_VECTOR vec; // stack offset -32
    short node; // register $18
    short lp; // register $16
} // line 19, offset 0x2a940
/*
 * Offset 0x2A940
 * C:\Projects2\Tomb5\GAME\COLLIDE.C (line 2035)
 * Stack frame base $29, size 104
 */
void /*reg $31*/ TestForObjectOnLedge(struct ITEM_INFO *item /*reg $4*/, struct COLL_INFO *coll /*reg $19*/)
{ // line 1, offset 0x2a940
    struct GAME_VECTOR s; // stack offset -88
    struct GAME_VECTOR d; // stack offset -72
    struct MESH_INFO *StaticMesh; // stack offset -40
    struct PHD_VECTOR v; // stack offset -56
    long lp; // register $16
} // line 33, offset 0x2aa88
extern char LM[15];
extern short GlobalCollisionBounds[6];
extern long xfront; // offset 0xA2498
extern long zfront; // offset 0xA2494