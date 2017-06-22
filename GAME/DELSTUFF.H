#ifndef GAME_DELSTUFF_H
#define GAME_DELSTUFF_H

/* This file was automatically generated.  Do not edit! */
extern struct MATRIX3D lara_joint_matrices[15];
extern struct MATRIX3D lara_matrices[15];
extern struct CVECTOR LaraNodeAmbient[2];
extern short *GLaraShadowframe;
extern unsigned char LaraNodeUnderwater[15];
extern long LaraGlobalClipFlag;
extern char lara_underwater_skin_sweetness_table[15];
extern int lara_mesh_sweetness_table[15];
extern unsigned char SkinUseMatrix[14][2];
extern char NodesToStashToScratch[14][2];
extern char NodesToStashFromScratch[15][4];
extern char HairRotScratchVertNums[5][12];
void CalcLaraMatrices(int flag);

#endif
