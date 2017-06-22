#include "CAMERA.H"
/*
 * Offset 0x25AAC
 * C:\Projects2\Tomb5\GAME\CAMERA.C (line 172)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ InitialiseCamera();
/*
 * Offset 0x25B68
 * C:\Projects2\Tomb5\GAME\CAMERA.C (line 206)
 * Stack frame base $29, size 128
 */
void /*reg $31*/ MoveCamera(struct GAME_VECTOR *ideal /*reg $21*/, int speed /*reg $9*/)
{ // line 1, offset 0x25b68
    struct FLOOR_INFO *floor; // register $19
    struct GAME_VECTOR tcp; // stack offset -96
    long height; // register $18
    long ceiling; // register $3
    long shake; // register $4
    { // line 134, offset 0x25f3c
        long rndval; // register $16
    } // line 143, offset 0x25fd0
    { // line 175, offset 0x25fd0
        short room_number; // stack offset -80
        long wx; // register $17
        long wy; // register $20
        long wz; // register $16
        { // line 188, offset 0x2603c
            long dx; // register $2
            long dy; // register $4
            long dz; // register $3
            struct GAME_VECTOR temp1; // stack offset -72
            struct GAME_VECTOR temp2; // stack offset -56
        } // line 221, offset 0x2613c
    } // line 222, offset 0x2613c
    { // line 228, offset 0x2613c
        short room_number; // stack offset -40
        long wx; // register $17
        long wy; // register $20
        long wz; // register $16
    } // line 258, offset 0x2628c
} // line 309, offset 0x263b4
/*
 * Offset 0x263B4
 * C:\Projects2\Tomb5\GAME\CAMERA.C (line 518)
 * Stack frame base $29, size 200
 */
void /*reg $31*/ ChaseCamera(struct ITEM_INFO *item /*reg $4*/)
{ // line 1, offset 0x263b4
    struct FLOOR_INFO *floor; // register $18
    struct GAME_VECTOR ideal; // stack offset -184
    struct GAME_VECTOR ideals[5]; // stack offset -168
    struct GAME_VECTOR temp[2]; // stack offset -88
    long distance; // register $23
    long lp; // register $18
    long dx; // register $8
    long dz; // register $3
    long farthest; // register $20
    long farthestnum; // stack offset -52
    long h; // register $16
    long c; // register $3
    short angle; // register $2
    { // line 23, offset 0x26434
        short room_number; // stack offset -56
        long wx; // register $17
        long wy; // register $19
        long wz; // register $16
    } // line 151, offset 0x26544
} // line 167, offset 0x26838
/*
 * Offset 0x26838
 * C:\Projects2\Tomb5\GAME\CAMERA.C (line 687)
 * Stack frame base $29, size 264
 */
void /*reg $31*/ CombatCamera(struct ITEM_INFO *item /*reg $4*/)
{ // line 1, offset 0x26838
    struct FLOOR_INFO *floor; // register $19
    struct GAME_VECTOR ideal; // stack offset -248
    struct GAME_VECTOR ideals[9]; // stack offset -232
    struct GAME_VECTOR temp[2]; // stack offset -88
    long distance; // register $21
    long lp; // register $18
    long dx; // register $8
    long dz; // register $3
    long farthest; // register $20
    long farthestnum; // stack offset -52
    long h; // register $18
    long c; // register $4
    short angle; // register $2
    { // line 45, offset 0x269a0
        short room_number; // stack offset -56
        long wx; // register $17
        long wy; // register $20
        long wz; // register $16
    } // line 166, offset 0x26a80
} // line 182, offset 0x26d9c
/*
 * Offset 0x26D9C
 * C:\Projects2\Tomb5\GAME\CAMERA.C (line 871)
 * Stack frame base $29, size 184
 */
void /*reg $31*/ LookCamera(struct ITEM_INFO *item /*reg $4*/)
{ // line 4, offset 0x26d9c
    struct GAME_VECTOR ideal; // stack offset -152
    struct PHD_VECTOR pos1; // stack offset -136
    struct PHD_VECTOR pos2; // stack offset -120
    struct PHD_VECTOR pos3; // stack offset -104
    struct FLOOR_INFO *floor; // register $19
    long shake; // register $4
    long lp; // register $21
    short room_number; // stack offset -88
    short room_number2; // stack offset -86
    long dx; // register $30
    long dy; // register $23
    long dz; // register $22
    long wx; // register $20
    long wy; // register $16
    long wz; // register $17
    long clipped; // register $20
    long h; // register $18
    long c; // register $3
    long hxrot; // stack offset -76
    long txrot; // stack offset -72
    long hyrot; // stack offset -68
    long tyrot; // stack offset -64
    { // line 204, offset 0x27498
        long rndval; // register $16
    } // line 213, offset 0x2752c
    { // line 216, offset 0x2752c
        short room_number; // stack offset -84
        long wx; // register $17
        long wy; // register $20
        long wz; // register $16
    } // line 236, offset 0x27630
    { // line 241, offset 0x27630
        short room_number; // stack offset -82
        long wx; // register $17
        long wy; // register $20
        long wz; // register $16
    } // line 253, offset 0x276c8
    { // line 256, offset 0x276c8
        short room_number; // stack offset -80
        long wx; // register $17
        long wy; // register $20
        long wz; // register $16
    } // line 273, offset 0x2777c
} // line 310, offset 0x278e4
/*
 * Offset 0x278E4
 * C:\Projects2\Tomb5\GAME\CAMERA.C (line 1183)
 * Stack frame base $29, size 104
 */
void /*reg $31*/ FixedCamera()
{ // line 3, offset 0x278e4
    struct GAME_VECTOR ideal; // stack offset -80
    struct GAME_VECTOR t2; // stack offset -64
    struct OBJECT_VECTOR *fixed; // register $3
    struct PHD_VECTOR v; // stack offset -48
    struct MESH_INFO *StaticMesh; // stack offset -32
    long Target; // register $18
    long ricochet; // register $20
    long HitLara; // register $19
} // line 107, offset 0x27da0
/*
 * Offset 0x27DA0
 * C:\Projects2\Tomb5\GAME\CAMERA.C (line 1294)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ CalculateCamera()
{ // line 3, offset 0x27da0
    struct ITEM_INFO *item; // register $18
    short *bounds; // register $19
    short tilt; // register $7
    short change; // register $16
    long shift; // register $17
    long fixed_camera; // register $21
    long y; // register $20
    long gotit; // register $5
    { // line 213, offset 0x2830c
        struct OBJECT_VECTOR *fixed; // register $4
        struct PHD_VECTOR v; // stack offset -48
    } // line 226, offset 0x28370
} // line 301, offset 0x28610
/*
 * Offset 0x28634
 * C:\Projects2\Tomb5\GAME\CAMERA.C (line 1598)
 * Stack frame base $29, size 64
 */
long /*reg $31*/ CameraCollisionBounds(struct GAME_VECTOR *ideal /*reg $22*/, long push /*reg $23*/, long yfirst /*reg $30*/)
{ // line 1, offset 0x28634
    struct FLOOR_INFO *floor; // register $18
    long wx; // register $20
    long wy; // register $19
    long wz; // register $21
    long h; // register $17
    long c; // register $3
    short room_number; // stack offset -48
} // line 88, offset 0x28b5c
/*
 * Offset 0x28B5C
 * C:\Projects2\Tomb5\GAME\CAMERA.C (line 1688)
 * Stack frame base $29, size 72
 */
long /*reg $31*/ mgLOS(struct GAME_VECTOR *start /*reg $4*/, struct GAME_VECTOR *target /*reg $30*/, long push /*sp 8*/)
{ // line 1, offset 0x28b5c
    struct FLOOR_INFO *floor; // register $16
    long x; // register $19
    long y; // register $17
    long z; // register $18
    long h; // register $16
    long c; // register $3
    long cdiff; // register $2
    long hdiff; // register $2
    long dx; // register $22
    long dy; // register $21
    long dz; // register $20
    long lp; // register $23
    long clipped; // stack offset -52
    long nc; // stack offset -48
    short room_number; // stack offset -54
    short room_number2; // stack offset -56
} // line 84, offset 0x28d4c
/*
 * Offset 0x28D4C
 * C:\Projects2\Tomb5\GAME\CAMERA.C (line 1777)
 * Stack frame base $29, size 128
 */
void /*reg $31*/ BinocularCamera(struct ITEM_INFO *item /*reg $4*/)
{ // line 4, offset 0x28d4c
    struct PHD_VECTOR pos1; // stack offset -96
    struct PHD_VECTOR pos3; // stack offset -80
    struct PHD_VECTOR Soffset; // stack offset -64
    struct PHD_VECTOR Eoffset; // stack offset -48
    long shake; // register $3
    long speed; // register $6
    long c; // register $4
    short room_number; // stack offset -32
    short hxrot; // register $17
    short hyrot; // register $16
    long BinocStep; // register $4
    long pit; // register $6
    { // line 114, offset 0x29098
        long rndval; // register $16
    } // line 123, offset 0x29138
    { // line 190, offset 0x29308
        char Fire; // register $18
        short *ammo; // register $17
    } // line 296, offset 0x29584
} // line 311, offset 0x295f0
/*
 * Offset 0x2960C
 * C:\Projects2\Tomb5\GAME\CAMERA.C (line 2090)
 * Stack frame base $29, size 72
 */
void /*reg $31*/ LaraTorch(struct PHD_VECTOR *Soffset /*reg $2*/, struct PHD_VECTOR *Eoffset /*reg $3*/, short yrot /*reg $6*/, long brightness /*reg $16*/)
{ // line 1, offset 0x2960c
    struct GAME_VECTOR s; // stack offset -40
    struct GAME_VECTOR d; // stack offset -24
    long dx; // register $2
    long dy; // register $5
    long dz; // register $4
    long radius; // register $7
} // line 45, offset 0x2972c
/*
 * Offset 0x2973C
 * C:\Projects2\Tomb5\GAME\CAMERA.C (line 2137)
 * Stack frame base $29, size 64
 */
void /*reg $31*/ ConfirmCameraTargetPos()
{ // line 2, offset 0x2973c
    struct PHD_VECTOR pos; // stack offset -48
    struct FLOOR_INFO *floor; // register $18
    short room_number; // stack offset -32
    long wx; // register $17
    long wy; // register $19
    long wz; // register $16
    long c; // register $3
    long h; // register $16
} // line 36, offset 0x29890
/*
 * Offset 0x29890
 * C:\Projects2\Tomb5\GAME\CAMERA.C (line 2175)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ UpdateCameraElevation()
{ // line 2, offset 0x29890
    struct PHD_VECTOR pos; // stack offset -40
    struct PHD_VECTOR pos1; // stack offset -24
} // line 20, offset 0x29954
/*
 * Offset 0x29954
 * C:\Projects2\Tomb5\GAME\CAMERA.C (line 2197)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ ScreenShake(struct ITEM_INFO *item /*reg $4*/, short MaxVal /*reg $17*/, short MaxDist /*reg $16*/)
{ // line 1, offset 0x29954
    long dx; // register $3
    long dy; // register $3
    long dz; // register $4
} // line 19, offset 0x29a44
extern long BinocularRange; // offset 0xA0758
extern long BinocularOn; // offset 0xA075C
extern long BinocularOldCamera; // offset 0xA0760
extern long LaserSight; // offset 0xA0764
extern long InfraRed; // offset 0xA0768
extern char SniperCount; // offset 0xA0744
extern char SniperCamActive; // offset 0xA0745
extern long ExittingBinos; // offset 0xA0748
extern long TooFarCount; // offset 0xA074C
extern long CombatShift; // offset 0xA0750
extern unsigned char camerasnaps; // offset 0xA0754
extern unsigned char TargetSnaps; // offset 0xA0755
extern char TLFlag; // offset 0xA076C
extern char LSHKShotsFired; // offset 0xA076D
extern char LSHKTimer; // offset 0xA076E
extern struct CAMERA_INFO camera;
extern char UseForcedFixedCamera; // offset 0xA2388
extern struct GAME_VECTOR ForcedFixedCamera;
extern long NumFixedCameras; // offset 0xA2434
extern int number_cameras; // offset 0xA2344
extern struct PHD_VECTOR CamOldPos;
extern struct SHATTER_ITEM ShatterItem;
extern struct GAME_VECTOR static_lookcamp;
extern struct GAME_VECTOR static_lookcamt;
extern struct OLD_CAMERA old_cam;
extern struct GAME_VECTOR last_ideal;
extern struct GAME_VECTOR last_target;