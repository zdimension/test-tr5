#ifndef SPEC_PSX_3D_GEN_H
#define SPEC_PSX_3D_GEN_H

/* This file was automatically generated.  Do not edit! */
extern struct VECTOR3D CamTgt;
extern struct VECTOR3D CamPos;
extern struct PHD_3DPOS viewer;
extern long matrix_stack[24];
extern long *phd_mxptr;
extern long w2v_matrix[12];
extern long phd_persp;
extern long phd_bottom;
extern long phd_top;
extern long phd_right;
extern long phd_left;
void phd_InitWindow(int view_angle);

#endif
