#include "CONTROL.H"
/*
 * Offset 0x1D420
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 324)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ KillMoveItems()
{ // line 2, offset 0x1d420
    short nex; // register $2
} // line 12, offset 0x1d4ac
/*
 * Offset 0x1D4AC
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 338)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ KillMoveEffects()
{ // line 2, offset 0x1d4ac
    short nex; // register $2
} // line 12, offset 0x1d538
/*
 * Offset 0x1D538
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 388)
 * Stack frame base $29, size 56
 */
long /*reg $31*/ ControlPhase(long nframes /*reg $16*/, int demo_mode /*reg $22*/)
{ // line 1, offset 0x1d538
    short item_num; // register $5
    { // line 413, offset 0x1db7c
        short nex; // register $16
    } // line 420, offset 0x1dbdc
    { // line 434, offset 0x1dc0c
        short nex; // register $16
    } // line 439, offset 0x1dc54
    { // line 636, offset 0x1e0c0
        struct FLOOR_INFO *floor; // register $16
    } // line 637, offset 0x1e0c0
    { // line 704, offset 0x1e320
        int val; // register $16
    } // line 709, offset 0x1e384
} // line 727, offset 0x1e3e4
/*
 * Offset 0x1E3E4
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 1377)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ AlterFloorHeight(struct ITEM_INFO *item /*reg $17*/, int height /*reg $16*/)
{ // line 1, offset 0x1e3e4
    struct FLOOR_INFO *floor; // register $17
    struct FLOOR_INFO *ceiling; // register $4
    short room_num; // stack offset -24
    short joby; // register $18
} // line 37, offset 0x1e534
/*
 * Offset 0x1E534
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 1546)
 * Stack frame base $29, size 40
 */
long /*reg $31*/ GetWaterHeight(long x /*reg $19*/, long y /*reg $5*/, long z /*reg $18*/, short room_number /*reg $7*/)
{ // line 1, offset 0x1e534
    long x_floor; // register $5
    long y_floor; // register $4
    struct room_info *r; // register $16
    struct FLOOR_INFO *floor; // register $17
    short data; // register $3
} // line 108, offset 0x1e7fc
/*
 * Offset 0x1E7FC
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 1913)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ RefreshCamera(short type /*reg $4*/, short *data /*reg $5*/)
{ // line 1, offset 0x1e7fc
    short trigger; // register $6
    short value; // register $4
    short target_ok; // register $7
} // line 66, offset 0x1e9b4
/*
 * Offset 0x1E9B4
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 1996)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ TestTriggers(short *data /*reg $4*/, int heavy /*reg $5*/, int HeavyFlags /*reg $6*/);
/*
 * Offset 0x1E9FC
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 2011)
 * Stack frame base $29, size 80
 */
void /*reg $31*/ _TestTriggers(short *data /*reg $19*/, int heavy /*reg $30*/, int HeavyFlags /*sp 8*/)
{ // line 1, offset 0x1e9fc
    int key; // stack offset -64
    struct ITEM_INFO *item; // register $16
    struct ITEM_INFO *camera_item; // stack offset -60
    short camera_timer; // register $6
    short type; // register $18
    short trigger; // register $21
    short value; // register $17
    short flags; // register $20
    char timer; // register $22
    char SwitchOnOnly; // stack offset -56
    int switch_off; // stack offset -52
    int flip; // register $23
    int flip_available; // stack offset -48
    int neweffect; // stack offset -44
    { // line 41, offset 0x1eaf8
        int quad; // register $3
    } // line 46, offset 0x1eb38
    { // line 404, offset 0x1f430
        short CamSeq; // register $5
        short lp; // register $8
    } // line 439, offset 0x1f548
} // line 551, offset 0x1f7a4
/*
 * Offset 0x1F7D4
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 3364)
 * Stack frame base $29, size 120
 */
void /*reg $31*/ FlipMap(int FlipNumber /*reg $19*/)
{ // line 1, offset 0x1f7d4
    int i; // register $18
    struct room_info *r; // register $17
    struct room_info *flipped; // register $16
    struct room_info temp; // stack offset -104
    { // line 35, offset 0x1f8cc
        struct creature_info *cinfo; // register $4
        short slot; // register $2
    } // line 46, offset 0x1f938
} // line 48, offset 0x1f938
/*
 * Offset 0x1F938
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 3417)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ RemoveRoomFlipItems(struct room_info *r /*reg $4*/)
{ // line 2, offset 0x1f938
    struct ITEM_INFO *item; // register $4
    short item_num; // register $16
} // line 19, offset 0x1fa0c
/*
 * Offset 0x1FA0C
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 3441)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ AddRoomFlipItems(struct room_info *r /*reg $4*/)
{ // line 2, offset 0x1fa0c
    short item_num; // register $17
    { // line 6, offset 0x1fa34
        struct ITEM_INFO *item; // register $16
    } // line 15, offset 0x1fa98
} // line 16, offset 0x1fad4
/*
 * Offset 0x1FAD4
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 3464)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ TriggerCDTrack(short value /*reg $4*/, short flags /*reg $5*/, short type /*reg $6*/);
/*
 * Offset 0x1FB14
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 3473)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ TriggerNormalCDTrack(short value /*reg $4*/, short flags /*reg $5*/, short type /*reg $6*/)
{ // line 1, offset 0x1fb14
    int code; // register $2
} // line 35, offset 0x1fbb0
/*
 * Offset 0x1FBC0
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 4399)
 * Stack frame base $29, size 56
 */
void /*reg $31*/ FireCrossBowFromLaserSight(struct GAME_VECTOR *src /*reg $16*/, struct GAME_VECTOR *target /*reg $5*/)
{ // line 1, offset 0x1fbc0
    short angles[2]; // stack offset -40
    struct PHD_3DPOS pos; // stack offset -32
} // line 18, offset 0x1fc5c
/*
 * Offset 0x1FC5C
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 4419)
 * Stack frame base $29, size 136
 */
int /*reg $31*/ GetTargetOnLOS(struct GAME_VECTOR *src /*reg $17*/, struct GAME_VECTOR *dest /*reg $18*/, int DrawTarget /*reg $30*/, int firing /*reg $20*/)
{ // line 1, offset 0x1fc5c
    struct GAME_VECTOR target; // stack offset -104
    struct PHD_VECTOR v; // stack offset -88
    struct MESH_INFO *StaticMesh; // stack offset -48
    struct MESH_INFO *Mesh; // register $4
    short item_no; // register $19
    short hit; // register $21
    short ricochet; // register $23
    { // line 51, offset 0x1fe28
        int i; // register $16
        { // line 71, offset 0x1ff1c
            struct ITEM_INFO *shotitem; // register $18
            { // line 88, offset 0x1fffc
                short room_number; // stack offset -72
            } // line 91, offset 0x1fffc
            { // line 98, offset 0x2004c
                short TriggerItems[8]; // stack offset -64
                short NumTrigs; // register $17
            } // line 107, offset 0x200e0
            { // line 140, offset 0x20240
            } // line 147, offset 0x20298
        } // line 172, offset 0x204b8
    } // line 196, offset 0x205ec
    { // line 202, offset 0x20610
        struct ITEM_INFO *shotitem; // register $5
    } // line 205, offset 0x2066c
} // line 236, offset 0x207dc
/*
 * Offset 0x207DC
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 4657)
 * Stack frame base $29, size 48
 */
int /*reg $31*/ ExplodeItemNode(struct ITEM_INFO *item /*reg $17*/, int Node /*reg $19*/, int NoXZVel /*reg $20*/, long bits /*reg $18*/)
{ // line 1, offset 0x207dc
    struct object_info *object; // register $4
    short **meshpp; // register $5
} // line 40, offset 0x209ac
/*
 * Offset 0x209AC
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 4811)
 * Stack frame base $29, size 32
 */
int /*reg $31*/ CheckGuardOnTrigger()
{ // line 2, offset 0x209ac
    int slot; // register $6
    short room_number; // stack offset -16
    struct creature_info *cinfo; // register $16
    struct ITEM_INFO *item; // register $4
} // line 24, offset 0x20af0
/*
 * Offset 0x20AF0
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 4838)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ InterpolateAngle(short dest /*reg $4*/, short *src /*reg $5*/, short *diff /*reg $6*/, short speed /*reg $4*/)
{ // line 1, offset 0x20af0
    long adiff; // register $3
} // line 15, offset 0x20b48
/*
 * Offset 0x20B48
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 4855)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ ResetGuards()
{ // line 2, offset 0x20b48
    short item_num; // register $17
    short room_num; // register $9
    struct ITEM_INFO *target_item; // register $16
} // line 41, offset 0x20d90
/*
 * Offset 0x20D90
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 4912)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ InitCutPlayed();
/*
 * Offset 0x20DA0
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 4919)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ SetCutPlayed(int num /*reg $4*/);
/*
 * Offset 0x20DEC
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 4934)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ SetCutNotPlayed(int num /*reg $4*/);
/*
 * Offset 0x20E34
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 4947)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ CheckCutPlayed(int num /*reg $4*/)
{ // line 1, offset 0x20e34
    int ret; // register $2
} // line 13, offset 0x20e6c
/*
 * Offset 0x20E6C
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 4974)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ NeatAndTidyTriggerCutscene(int value /*reg $16*/, int timer /*reg $17*/)
{ // line 1, offset 0x20e6c
    int inv_item_stealth_frigggggs; // register $17
    { // line 151, offset 0x21210
        short item_num; // register $4
        short nex; // register $5
        struct ITEM_INFO *item; // register $4
    } // line 177, offset 0x212d8
} // line 296, offset 0x215b8
/*
 * Offset 0x215D0
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 5274)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ is_object_in_room(int roomnumber /*reg $4*/, int objnumber /*reg $5*/)
{ // line 1, offset 0x215d0
    short item_num; // register $3
    short nex; // register $2
    struct ITEM_INFO *item; // register $2
} // line 15, offset 0x21634
/*
 * Offset 0x21634
 * C:\Projects2\Tomb5\GAME\CONTROL.C (line 5294)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ check_xray_machine_trigger()
{ // line 2, offset 0x21634
    int i; // register $4
} // line 12, offset 0x216ac
extern int flipeffect; // offset 0xA0724
extern int fliptimer; // offset 0xA0728
extern unsigned char ShatterSounds[18][10];
extern unsigned char WeaponDelay; // offset 0xA0658
extern unsigned char KeyTriggerActive; // offset 0xA065C
extern unsigned short GlobalCounter; // offset 0xA065E
extern char TriggerTimer; // offset 0xA0660
extern int reset_flag; // offset 0xA0730
extern short SlowMotion; // offset 0xA0654
extern short SlowMoFrameCount; // offset 0xA0656
extern unsigned char InItemControlLoop; // offset 0xA0659
extern short ItemNewRoomNo; // offset 0xA065A
extern short SmashedMeshCount; // offset 0xA0662
extern char richcutfrigflag; // offset 0xA0664
extern int nRope; // offset 0xA0668
extern char GetLaraOnLOS; // offset 0xA066C
extern int NoInput; // offset 0xA072C
extern int number_los_rooms; // offset 0xA0734
extern long rand_1; // offset 0xA073C
extern int framecount; // offset 0xA0738
extern long rand_2; // offset 0xA0740
extern struct ITEM_INFO *items;
extern int flip_status; // offset 0xA20BC
extern int flipmap[10];
extern int flip_stats[10];
extern int height_type; // offset 0xA2220
extern int tiltxoff; // offset 0xA2080
extern int tiltyoff; // offset 0xA2084
extern unsigned long _CutSceneTriggered1; // offset 0xA2218
extern unsigned long _CutSceneTriggered2; // offset 0xA221C
extern unsigned long FmvSceneTriggered; // offset 0xA22F0
extern unsigned char CurrentAtmosphere; // offset 0xA2054
extern unsigned char IsAtmospherePlaying; // offset 0xA2180
extern char *OutsideRoomTable; // offset 0xA2214
extern short *OutsideRoomOffsets; // offset 0xA2090
extern short IsRoomOutsideNo; // offset 0xA2208
extern short FXType; // offset 0xA2060
extern int OnObject; // offset 0xA20E8
extern short *trigger_index; // offset 0xA20F0
extern char cd_flags[136];
extern unsigned char InGameCnt; // offset 0xA204C
extern struct RAT_STRUCT *Rats;
extern struct BAT_STRUCT *Bats;
extern struct SPIDER_STRUCT *Spiders;
extern struct TWOGUN_INFO twogun[4];
extern int SetDebounce; // offset 0xA2204
extern short WB_room; // offset 0xA22F8
extern struct ITEM_INFO *WB_item;
extern unsigned char HeavyTriggered; // offset 0xA22EC
extern struct MESH_INFO *SmashedMesh[16];
extern short SmashedMeshRoom[16];
extern struct PENDULUM CurrentPendulum;
extern char LaraDrawType; // offset 0xA220C
extern char WeatherType; // offset 0xA20F4
extern char RoomDrawType; // offset 0xA2210
extern struct PHD_VECTOR ClosestCoord;
extern int ClosestItem; // offset 0xA2064
extern int ClosestDist; // offset 0xA2068
extern short XSoff1; // offset 0xA2088
extern short YSoff1; // offset 0xA2078
extern short ZSoff1; // offset 0xA206C
extern short XSoff2; // offset 0xA208C
extern short YSoff2; // offset 0xA207C
extern short ZSoff2; // offset 0xA2070
extern short los_rooms[20];
extern char globoncuttrig; // offset 0xA2050
extern short ItemNewRooms[256][2];
extern struct CHARDEF CharDef[106];