#ifndef GAME_CAMERA_H
#define GAME_CAMERA_H

enum camera_type : int {
    CHASE_CAMERA = 0,
    FIXED_CAMERA = 1,
    LOOK_CAMERA = 2,
    COMBAT_CAMERA = 3,
    CINEMATIC_CAMERA = 4,
    HEAVY_CAMERA = 5,
};

struct CAMERA_INFO {
    struct GAME_VECTOR pos; // size=16, offset=0
    struct GAME_VECTOR target; // size=16, offset=16
    enum camera_type type; // size=4, offset=32
    enum camera_type old_type; // size=4, offset=36
    long shift; // size=0, offset=40
    long flags; // size=0, offset=44
    long fixed_camera; // size=0, offset=48
    long number_frames; // size=0, offset=52
    long bounce; // size=0, offset=56
    long underwater; // size=0, offset=60
    long target_distance; // size=0, offset=64
    short target_angle; // size=0, offset=68
    short target_elevation; // size=0, offset=70
    short actual_elevation; // size=0, offset=72
    short actual_angle; // size=0, offset=74
    short lara_node; // size=0, offset=76
    short box; // size=0, offset=78
    short number; // size=0, offset=80
    short last; // size=0, offset=82
    short timer; // size=0, offset=84
    short speed; // size=0, offset=86
    short targetspeed; // size=0, offset=88
    struct ITEM_INFO *item; // size=144, offset=92
    struct ITEM_INFO *last_item; // size=144, offset=96
    struct OBJECT_VECTOR *fixed; // size=16, offset=100
    int mike_at_lara; // size=0, offset=104
    struct PHD_VECTOR mike_pos; // size=12, offset=108
};

struct OLD_CAMERA {
    short current_anim_state; // size=0, offset=0
    short goal_anim_state; // size=0, offset=2
    long target_distance; // size=0, offset=4
    short target_angle; // size=0, offset=8
    short target_elevation; // size=0, offset=10
    short actual_elevation; // size=0, offset=12
    struct PHD_3DPOS pos; // size=20, offset=16
    struct PHD_3DPOS pos2; // size=20, offset=36
    struct PHD_VECTOR t; // size=12, offset=56
};

/* This file was automatically generated.  Do not edit! */
extern struct GAME_VECTOR last_target;
extern struct GAME_VECTOR last_ideal;
extern struct OLD_CAMERA old_cam;
extern struct GAME_VECTOR static_lookcamt;
extern struct GAME_VECTOR static_lookcamp;
extern struct SHATTER_ITEM ShatterItem;
extern struct PHD_VECTOR CamOldPos;
extern int number_cameras;
extern long NumFixedCameras;
extern struct GAME_VECTOR ForcedFixedCamera;
extern char UseForcedFixedCamera;
extern struct CAMERA_INFO camera;
extern char LSHKTimer;
extern char LSHKShotsFired;
extern char TLFlag;
extern unsigned char TargetSnaps;
extern unsigned char camerasnaps;
extern long CombatShift;
extern long TooFarCount;
extern long ExittingBinos;
extern char SniperCamActive;
extern char SniperCount;
extern long InfraRed;
extern long LaserSight;
extern long BinocularOldCamera;
extern long BinocularOn;
extern long BinocularRange;
void ScreenShake(struct ITEM_INFO *item,short MaxVal,short MaxDist);
void UpdateCameraElevation();
void ConfirmCameraTargetPos();
void LaraTorch(struct PHD_VECTOR *Soffset,struct PHD_VECTOR *Eoffset,short yrot,long brightness);
void BinocularCamera(struct ITEM_INFO *item);
long mgLOS(struct GAME_VECTOR *start,struct GAME_VECTOR *target,long push);
long CameraCollisionBounds(struct GAME_VECTOR *ideal,long push,long yfirst);
void CalculateCamera();
void FixedCamera();
void LookCamera(struct ITEM_INFO *item);
void CombatCamera(struct ITEM_INFO *item);
extern short angle;
void ChaseCamera(struct ITEM_INFO *item);
void MoveCamera(struct GAME_VECTOR *ideal,int speed);
void InitialiseCamera();

#endif
