#include "SPOTCAM.H"
/*
 * Offset 0x374B8
 * C:\Projects2\Tomb5\GAME\SPOTCAM.C (line 156)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ InitSpotCamSequences()
{ // line 2, offset 0x374b8
    int s; // register $6
    int cc; // register $7
    int n; // register $5
    int ce; // register $8
} // line 34, offset 0x37554
/*
 * Offset 0x37554
 * C:\Projects2\Tomb5\GAME\SPOTCAM.C (line 209)
 * Stack frame base $29, size 40
 */
long /*reg $31*/ Spline(long x /*reg $19*/, long *knots /*reg $20*/, int nk /*reg $18*/)
{ // line 1, offset 0x37554
    int span; // register $17
    long *k; // register $17
    long c1; // register $18
    long c2; // register $16
} // line 29, offset 0x37648
/*
 * Offset 0x37648
 * C:\Projects2\Tomb5\GAME\SPOTCAM.C (line 298)
 * Stack frame base $29, size 48
 */
void /*reg $31*/ InitialiseSpotCam(short Sequence /*reg $16*/)
{ // line 1, offset 0x37648
    struct SPOTCAM *s; // register $16
    int n; // register $10
    int i; // register $9
    int next_spline_camera; // register $9
    { // line 84, offset 0x3789c
        int c; // register $11
        { // line 90, offset 0x3789c
            int sp; // register $11
        } // line 90, offset 0x3789c
        { // line 1, offset 0x37960
            int sp; // register $11
            int cn; // register $9
        } // line 1, offset 0x37960
        { // line 105, offset 0x379f8
            int sp; // register $11
        } // line 105, offset 0x379f8
    } // line 105, offset 0x379f8
    { // line 116, offset 0x37ab0
        int cn; // register $9
    } // line 116, offset 0x37ab0
    { // line 1, offset 0x37b74
        int sp; // register $10
        int cn; // register $9
    } // line 1, offset 0x37b74
    { // line 155, offset 0x37cc8
        int cn; // register $10
    } // line 155, offset 0x37cc8
    { // line 1, offset 0x37dec
        int cn; // register $10
    } // line 1, offset 0x37e90
} // line 205, offset 0x37eac
/*
 * Offset 0x37ED0
 * C:\Projects2\Tomb5\GAME\SPOTCAM.C (line 516)
 * Stack frame base $29, size 248
 */
void /*reg $31*/ CalculateSpotCams()
{ // line 2, offset 0x37ed0
    long cpx; // stack offset -96
    long cpy; // stack offset -92
    long cpz; // stack offset -88
    long ctx; // stack offset -84
    long cty; // stack offset -80
    long ctz; // stack offset -76
    long cspeed; // stack offset -72
    long cfov; // stack offset -68
    long croll; // stack offset -64
    struct SPOTCAM *s; // stack offset -60
    short spline_cnt; // register $19
    int next_spline_camera; // register $16
    int n; // register $21
    static int bFirstLook; // offset 0x18
    long dx; // register $3
    long dy; // register $16
    long dz; // register $17
    { // line 76, offset 0x38114
        long cs; // register $22
        long sp; // register $18
        long cp; // register $30
        long clen; // register $20
        long tlen; // register $3
        long cx; // register $17
        long cy; // register $16
        long cz; // register $2
        long lx; // stack offset -56
        long lz; // stack offset -52
        long ly; // stack offset -48
        int i; // register $3
    } // line 142, offset 0x382c4
    { // line 1, offset 0x386ac
        { // line 1, offset 0x386ac
            int ctype; // register $16
        } // line 1, offset 0x38760
    } // line 1, offset 0x38760
    { // line 396, offset 0x38a50
        int sp; // register $21
        int cn; // register $16
    } // line 396, offset 0x38a50
    { // line 1, offset 0x38b04
        int sp; // register $21
        int cn; // register $16
    } // line 1, offset 0x38b04
    { // line 1, offset 0x38c2c
        int sp; // register $21
        int cn; // register $16
    } // line 1, offset 0x38c2c
    { // line 439, offset 0x38d68
        struct CAMERA_INFO Backup; // stack offset -216
        { // line 441, offset 0x38d68
            int cn; // register $3
        } // line 441, offset 0x38d68
        { // line 441, offset 0x38d68
        } // line 441, offset 0x38d68
    } // line 441, offset 0x38d68
    { // line 1, offset 0x38ff0
        { // line 1, offset 0x38ff0
            int ctype; // register $16
        } // line 1, offset 0x390a0
    } // line 1, offset 0x390a0
} // line 547, offset 0x39160
extern int bUseSpotCam; // offset 0xA0AB8
extern int bDisableLaraControl; // offset 0xA0ABC
extern int bTrackCamInit; // offset 0xA0AB0
extern char SCOverlay; // offset 0xA0AC0
extern char SCNoDrawLara; // offset 0xA0AC1
extern char SniperOverlay; // offset 0xA0AC2
extern short spotcam_timer; // offset 0xA0AAC
extern int bCheckTrigger; // offset 0xA0AB4
extern short LastSequence; // offset 0xA3344
extern short CurrentFov; // offset 0xA3350
extern short spotcam_loopcnt; // offset 0xA3560
extern short number_spotcams; // offset 0xA333C
extern struct SPOTCAM *SpotCam;
extern unsigned char CameraCnt[16];
extern unsigned char SpotRemap[16];
extern long current_spline_position; // offset 0xA343C
extern short LastFov; // offset 0xA361C
extern int CameraFade; // offset 0xA354C
extern int LaraHealth; // offset 0xA35AC
extern int LaraAir; // offset 0xA3618
extern long camera_xposition[18];
extern long camera_yposition[18];
extern long camera_zposition[18];
extern long camera_xtarget[18];
extern long camera_ytarget[18];
extern long camera_ztarget[18];
extern long camera_roll[18];
extern long camera_fov[18];
extern long camera_speed[18];
extern short current_spline_camera; // offset 0xA334C
extern short current_camera_cnt; // offset 0xA34FC
extern short current_sequence; // offset 0xA3340
extern short first_camera; // offset 0xA3338
extern short last_camera; // offset 0xA3334
extern int spline_from_camera; // offset 0xA3348
extern int spline_to_camera; // offset 0xA355C
extern struct PHD_VECTOR InitialCameraPosition;
extern struct PHD_VECTOR InitialCameraTarget;
extern struct PHD_VECTOR LaraFixedPosition;
extern short InitialCameraRoom; // offset 0xA3548
extern struct QUAKE_CAM quakecam;