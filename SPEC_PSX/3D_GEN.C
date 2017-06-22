#include "3D_GEN.H"
/*
 * Offset 0x5D74C
 * C:\Projects2\Tomb5\SPEC_PSX\3D_GEN.C (line 554)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ phd_InitWindow(int view_angle /*reg $4*/);
extern long phd_left; // offset 0xA3A7C
extern long phd_right; // offset 0xA3A84
extern long phd_top; // offset 0xA3A74
extern long phd_bottom; // offset 0xA3A58
extern long phd_persp; // offset 0xA3A80
extern long w2v_matrix[12];
extern long *phd_mxptr; // offset 0xA3A78
extern long matrix_stack[24];
extern struct PHD_3DPOS viewer;
extern struct VECTOR3D CamPos;
extern struct VECTOR3D CamTgt;