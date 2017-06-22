#ifndef GAME_CAMERA_H
#define GAME_CAMERA_H

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
