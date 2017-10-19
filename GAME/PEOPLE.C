#include "PEOPLE.H"
/*
 * Offset 0x507DC
 * C:\Projects2\Tomb5\GAME\PEOPLE.C (line 58)
 * Stack frame base $29, size 56
 */
int /*reg $31*/ TargetVisible(struct ITEM_INFO *item /*reg $4*/, struct AI_info *info /*reg $5*/)
{ // line 1, offset 0x507dc
    struct GAME_VECTOR start; // stack offset -40
    struct GAME_VECTOR target; // stack offset -24
    struct creature_info *creature; // register $3
    struct ITEM_INFO *enemy; // register $16
    short *bounds; // register $2
} // line 34, offset 0x508ec
/*
 * Offset 0x508EC
 * C:\Projects2\Tomb5\GAME\PEOPLE.C (line 94)
 * Stack frame base $29, size 64
 */
int /*reg $31*/ Targetable(struct ITEM_INFO *item /*reg $17*/, struct AI_info *info /*reg $5*/)
{ // line 1, offset 0x508ec
    struct GAME_VECTOR start; // stack offset -48
    struct GAME_VECTOR target; // stack offset -32
    struct creature_info *creature; // register $2
    struct ITEM_INFO *enemy; // register $16
    short *bounds; // register $4
} // line 56, offset 0x50a34
/*
 * Offset 0x50A34
 * C:\Projects2\Tomb5\GAME\PEOPLE.C (line 152)
 * Stack frame base $29, size 0
 */
short /*reg $31*/ GunShot(long x /*reg $4*/, long y /*reg $5*/, long z /*reg $6*/, short speed /*reg $7*/, int yrot /*sp 16*/, int room_number /*sp 20*/)
{

}
/*
 * Offset 0x50A3C
 * C:\Projects2\Tomb5\GAME\PEOPLE.C (line 184)
 * Stack frame base $29, size 72
 */
short /*reg $31*/ GunHit(long x /*reg $19*/, long y /*reg $20*/, long z /*reg $21*/, short speed /*reg $7*/, int yrot /*sp 16*/, int room_number /*sp 20*/)
{ // line 1, offset 0x50a3c
    struct PHD_VECTOR pos; // stack offset -48
} // line 12, offset 0x50b58
/*
 * Offset 0x50B58
 * C:\Projects2\Tomb5\GAME\PEOPLE.C (line 199)
 * Stack frame base $29, size 72
 */
short /*reg $31*/ GunMiss(long x /*reg $20*/, long y /*reg $21*/, long z /*reg $22*/, short speed /*reg $7*/, int yrot /*sp 16*/, int room_number /*sp 20*/)
{ // line 1, offset 0x50b58
    struct GAME_VECTOR pos; // stack offset -48
} // line 13, offset 0x50c74
/*
 * Offset 0x50C74
 * C:\Projects2\Tomb5\GAME\PEOPLE.C (line 215)
 * Stack frame base $29, size 128
 */
int /*reg $31*/ ShotLara(struct ITEM_INFO *item /*reg $19*/, struct AI_info *info /*reg $16*/, struct BITE_INFO *gun /*reg $21*/, short extra_rotation /*reg $7*/, int damage /*sp 16*/)
{ // line 1, offset 0x50c74
    int hit; // register $16
    int targetable; // register $18
    int random; // register $16
    int distance; // register $2
    struct GAME_VECTOR start; // stack offset -104
    struct GAME_VECTOR target; // stack offset -88
    struct creature_info *creature; // register $3
    struct ITEM_INFO *enemy; // register $17
    struct PHD_VECTOR pos; // stack offset -72
    { // line 65, offset 0x50e94
        struct PHD_VECTOR v; // stack offset -56
        struct MESH_INFO *StaticMesh; // stack offset -40
    } // line 102, offset 0x50fdc
} // line 105, offset 0x51004