#ifndef GAME_MATHS_H
#define GAME_MATHS_H

struct VECTOR {
	long vx; // size=0, offset=0
	long vy; // size=0, offset=4
	long vz; // size=0, offset=8
	long pad; // size=0, offset=12
};

struct SVECTOR {
	short vx; // size=0, offset=0
	short vy; // size=0, offset=2
	short vz; // size=0, offset=4
	short pad; // size=0, offset=6
};

struct CVECTOR {
	unsigned char r; // size=0, offset=0
	unsigned char g; // size=0, offset=1
	unsigned char b; // size=0, offset=2
	unsigned char cd; // size=0, offset=3
};

struct DVECTOR {
	short vx; // size=0, offset=0
	short vy; // size=0, offset=2
};

struct RVECTOR {
	struct SVECTOR v; // size=8, offset=0
	unsigned char uv[2]; // size=2, offset=8
	unsigned short pad; // size=0, offset=10
	struct CVECTOR c; // size=4, offset=12
	struct DVECTOR sxy; // size=4, offset=16
	unsigned long sz; // size=0, offset=20
};

struct CRVECTOR3 {
	struct RVECTOR r01; // size=24, offset=0
	struct RVECTOR r12; // size=24, offset=24
	struct RVECTOR r20; // size=24, offset=48
	struct RVECTOR *r0; // size=24, offset=72
	struct RVECTOR *r1; // size=24, offset=76
	struct RVECTOR *r2; // size=24, offset=80
	unsigned long *rtn; // size=0, offset=84
};

struct CRVECTOR4 {
	struct RVECTOR r01; // size=24, offset=0
	struct RVECTOR r02; // size=24, offset=24
	struct RVECTOR r31; // size=24, offset=48
	struct RVECTOR r32; // size=24, offset=72
	struct RVECTOR rc; // size=24, offset=96
	struct RVECTOR *r0; // size=24, offset=120
	struct RVECTOR *r1; // size=24, offset=124
	struct RVECTOR *r2; // size=24, offset=128
	struct RVECTOR *r3; // size=24, offset=132
	unsigned long *rtn; // size=0, offset=136
};

struct RECT {
	short x; // size=0, offset=0
	short y; // size=0, offset=2
	short w; // size=0, offset=4
	short h; // size=0, offset=6
};


struct PHD_VECTOR {
	long x; // size=0, offset=0
	long y; // size=0, offset=4
	long z; // size=0, offset=8
};

struct PHD_3DPOS {
	long x_pos; // size=0, offset=0
	long y_pos; // size=0, offset=4
	long z_pos; // size=0, offset=8
	short x_rot; // size=0, offset=12
	short y_rot; // size=0, offset=14
	short z_rot; // size=0, offset=16
};

#endif