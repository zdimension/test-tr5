#include "LARA2GUN.H"
/*
 * Offset 0x44308
 * C:\Projects2\Tomb5\GAME\LARA2GUN.C (line 80)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ set_arm_info(struct lara_arm *arm /*reg $7*/, int frame /*reg $5*/)
{ // line 1, offset 0x44308
    int anim_base; // register $4
    struct PISTOL_DEF *p; // register $6
} // line 23, offset 0x443b4
/*
 * Offset 0x443B4
 * C:\Projects2\Tomb5\GAME\LARA2GUN.C (line 112)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ draw_pistols(int weapon_type /*reg $4*/)
{ // line 1, offset 0x443b4
    short ani; // register $17
    struct PISTOL_DEF *p; // register $5
} // line 25, offset 0x444a4
/*
 * Offset 0x444A4
 * C:\Projects2\Tomb5\GAME\LARA2GUN.C (line 142)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ undraw_pistols(int weapon_type /*reg $19*/)
{ // line 1, offset 0x444a4
    struct PISTOL_DEF *p; // register $18
    short anil; // register $17
    short anir; // register $16
} // line 85, offset 0x44804
/*
 * Offset 0x44804
 * C:\Projects2\Tomb5\GAME\LARA2GUN.C (line 233)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ ready_pistols(int weapon_type /*reg $4*/);
/*
 * Offset 0x4487C
 * C:\Projects2\Tomb5\GAME\LARA2GUN.C (line 251)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ draw_pistol_meshes(int weapon_type /*reg $16*/)
{ // line 1, offset 0x4487c
} // line 15, offset 0x448f0
/*
 * Offset 0x448F0
 * C:\Projects2\Tomb5\GAME\LARA2GUN.C (line 272)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ undraw_pistol_mesh_left(int weapon_type /*reg $16*/)
{ // line 1, offset 0x448f0
    { // line 4, offset 0x44908
    } // line 12, offset 0x44958
} // line 13, offset 0x44968
/*
 * Offset 0x44968
 * C:\Projects2\Tomb5\GAME\LARA2GUN.C (line 290)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ undraw_pistol_mesh_right(int weapon_type /*reg $16*/)
{ // line 1, offset 0x44968
} // line 13, offset 0x449e4
/*
 * Offset 0x449E4
 * C:\Projects2\Tomb5\GAME\LARA2GUN.C (line 308)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ PistolHandler(int weapon_type /*reg $18*/)
{ // line 1, offset 0x449e4
    struct WEAPON_INFO *winfo; // register $17
    { // line 61, offset 0x44bf8
        struct PHD_VECTOR pos; // stack offset -32
    } // line 100, offset 0x44d60
} // line 101, offset 0x44d78
/*
 * Offset 0x44D78
 * C:\Projects2\Tomb5\GAME\LARA2GUN.C (line 414)
 * Stack frame base $29, size 112
 */
void /*reg $31*/ AnimatePistols(int weapon_type /*reg $20*/)
{ // line 1, offset 0x44d78
    struct PISTOL_DEF *p; // register $18
    struct WEAPON_INFO *winfo; // register $19
    short angles[2]; // stack offset -72
    static int uzi_left; // offset 0x18
    static int uzi_right; // offset 0x1c
    short anil; // register $16
    short anir; // register $17
    short sound_already; // register $21
    { // line 14, offset 0x44dcc
        struct PHD_VECTOR pos; // stack offset -64
    } // line 36, offset 0x44e74
    { // line 39, offset 0x44e88
        struct PHD_VECTOR pos; // stack offset -48
    } // line 61, offset 0x44f30
} // line 234, offset 0x45434
static struct PISTOL_DEF PistolTable[4]; // offset 0xA0B5C