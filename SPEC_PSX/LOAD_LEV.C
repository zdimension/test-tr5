#include "LOAD_LEV.H"
/*
 * Offset 0x602AC
 * C:\Projects2\Tomb5\SPEC_PSX\LOAD_LEV.C (line 89)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ LOAD_Start(int file_number /*reg $4*/)
{ // line 3, offset 0x602ac
    { // line 3, offset 0x602ac
        char *gfx; // register $19
        unsigned short *gfx2; // register $17
        unsigned short *cdgfx; // register $18
        int x; // register $4
        int y; // register $3
        unsigned long *tmpptr; // register $3
        { // line 3, offset 0x602ac
            int file; // register $16
        } // line 3, offset 0x602ac
        { // line 60, offset 0x603b4
            unsigned short dat; // register $3
        } // line 66, offset 0x603d4
    } // line 77, offset 0x60434
} // line 88, offset 0x60434
/*
 * Offset 0x60434
 * C:\Projects2\Tomb5\SPEC_PSX\LOAD_LEV.C (line 181)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ LOAD_Stop();
extern unsigned char LtLoadingBarEnabled; // offset 0xA1938
extern unsigned char LoadingBarEnabled; // offset 0xA1939
extern unsigned char _first_time_ever; // offset 0xA193A
extern short DelRotAng; // offset 0xA45F8
extern struct STASHEDOBJ *cur_stashed_object;
extern struct STASHEDDAT *cur_stashed_matrix;
extern int num_objects_stashed; // offset 0xA4850
extern struct STASHEDOBJ stashed_objects_list[128];
extern struct STASHEDDAT stashed_matrix_list[240];
extern unsigned char char_anim; // offset 0xA4C54
extern unsigned char OurSqrt[1024];
extern struct WATERTAB WaterTable[22][64];
extern struct MATRIX3D *Matrix;
extern unsigned short SqrtTable[210];
extern unsigned short ScalarTable[198];
extern struct MATRIX3D iMatrixStack[32];
extern struct SVECTOR CamRot;
extern struct MATRIX3D *iMatrix;
extern unsigned short MatrixSP; // offset 0xA5478
extern struct MATRIX3D MatrixStack[32];
extern long iFrac; // offset 0xA4C64
extern long iRate; // offset 0xA4C68
extern long iAmbientR; // offset 0xA4C6C
extern long iAmbientG; // offset 0xA4C74
extern long iAmbientB; // offset 0xA4C70
extern long atanOctantTab[8];
extern short atanTab[2050];