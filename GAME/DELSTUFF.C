#include "DELSTUFF.H"
/*
 * Offset 0x2C1DC
 * C:\Projects2\Tomb5\GAME\DELSTUFF.C (line 319)
 * Stack frame base $29, size 72
 */
void /*reg $31*/ CalcLaraMatrices(int flag /*reg $21*/)
{ // line 1, offset 0x2c1dc
    struct object_info *object; // register $5
    short *frame; // register $4
    short *frmptr[2]; // stack offset -48
    int frac; // register $16
    int rate; // stack offset -40
    struct ITEM_INFO *item; // register $17
    long *bone; // register $20
    { // line 33, offset 0x2c2a4
        short spaz; // register $3
        struct ANIM_STRUCT *anim; // register $5
        int size; // register $3
    } // line 68, offset 0x2c34c
} // line 82, offset 0x2c3c4
extern char HairRotScratchVertNums[5][12];
extern char NodesToStashFromScratch[15][4];
extern char NodesToStashToScratch[14][2];
extern unsigned char SkinUseMatrix[14][2];
extern int lara_mesh_sweetness_table[15];
extern char lara_underwater_skin_sweetness_table[15];
extern long LaraGlobalClipFlag; // offset 0xA0994
extern unsigned char LaraNodeUnderwater[15];
extern short *GLaraShadowframe; // offset 0xA2634
extern struct CVECTOR LaraNodeAmbient[2];
extern struct MATRIX3D lara_matrices[15];
extern struct MATRIX3D lara_joint_matrices[15];