#ifndef SPEC_PSX_LOAD_LEV_H
#define SPEC_PSX_LOAD_LEV_H

/* This file was automatically generated.  Do not edit! */
extern short atanTab[2050];
extern long atanOctantTab[8];
extern long iAmbientB;
extern long iAmbientG;
extern long iAmbientR;
extern long iRate;
extern long iFrac;
extern struct MATRIX3D MatrixStack[32];
extern unsigned short MatrixSP;
extern struct MATRIX3D *iMatrix;
extern struct SVECTOR CamRot;
extern struct MATRIX3D iMatrixStack[32];
extern unsigned short ScalarTable[198];
extern unsigned short SqrtTable[210];
extern struct MATRIX3D *Matrix;
extern struct WATERTAB WaterTable[22][64];
extern unsigned char OurSqrt[1024];
extern unsigned char char_anim;
extern struct STASHEDDAT stashed_matrix_list[240];
extern struct STASHEDOBJ stashed_objects_list[128];
extern int num_objects_stashed;
extern struct STASHEDDAT *cur_stashed_matrix;
extern struct STASHEDOBJ *cur_stashed_object;
extern short DelRotAng;
extern unsigned char _first_time_ever;
extern unsigned char LoadingBarEnabled;
extern unsigned char LtLoadingBarEnabled;
void LOAD_Stop();
void LOAD_Start(int file_number);

#endif
