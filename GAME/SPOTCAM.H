#ifndef GAME_SPOTCAM_H
#define GAME_SPOTCAM_H

/* This file was automatically generated.  Do not edit! */
extern struct QUAKE_CAM quakecam;
extern short InitialCameraRoom;
extern struct PHD_VECTOR LaraFixedPosition;
extern struct PHD_VECTOR InitialCameraTarget;
extern struct PHD_VECTOR InitialCameraPosition;
extern int spline_to_camera;
extern int spline_from_camera;
extern short last_camera;
extern short first_camera;
extern short current_sequence;
extern short current_camera_cnt;
extern short current_spline_camera;
extern long camera_speed[18];
extern long camera_fov[18];
extern long camera_roll[18];
extern long camera_ztarget[18];
extern long camera_ytarget[18];
extern long camera_xtarget[18];
extern long camera_zposition[18];
extern long camera_yposition[18];
extern long camera_xposition[18];
extern int LaraAir;
extern int LaraHealth;
extern int CameraFade;
extern short LastFov;
extern long current_spline_position;
extern unsigned char SpotRemap[16];
extern unsigned char CameraCnt[16];
extern struct SPOTCAM *SpotCam;
extern short number_spotcams;
extern short spotcam_loopcnt;
extern short CurrentFov;
extern short LastSequence;
extern int bCheckTrigger;
extern short spotcam_timer;
extern char SniperOverlay;
extern char SCNoDrawLara;
extern char SCOverlay;
extern int bTrackCamInit;
extern int bDisableLaraControl;
extern int bUseSpotCam;
void CalculateSpotCams();
void InitialiseSpotCam(short Sequence);
long Spline(long x,long *knots,int nk);
void InitSpotCamSequences();

#endif
