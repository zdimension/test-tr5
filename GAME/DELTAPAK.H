#ifndef GAME_DELTAPAK_H
#define GAME_DELTAPAK_H

struct RTDECODE {
    unsigned long length; // size=0, offset=0
    unsigned long off; // size=0, offset=4
    unsigned short counter; // size=0, offset=8
    unsigned short data; // size=0, offset=10
    unsigned char decodetype; // size=0, offset=12
    unsigned char packmethod; // size=0, offset=13
    unsigned short padfuck; // size=0, offset=14
};

struct ACTORME {
    int offset; // size=0, offset=0
    short objslot; // size=0, offset=4
    short nodes; // size=0, offset=6
};

struct PACKNODE {
    short xrot_run; // size=0, offset=0
    short yrot_run; // size=0, offset=2
    short zrot_run; // size=0, offset=4
    short xkey; // size=0, offset=6
    short ykey; // size=0, offset=8
    short zkey; // size=0, offset=10
    struct RTDECODE decode_x; // size=16, offset=12
    struct RTDECODE decode_y; // size=16, offset=28
    struct RTDECODE decode_z; // size=16, offset=44
    unsigned long xlength; // size=0, offset=60
    unsigned long ylength; // size=0, offset=64
    unsigned long zlength; // size=0, offset=68
    char *xpacked; // size=0, offset=72
    char *ypacked; // size=0, offset=76
    char *zpacked; // size=0, offset=80
};

struct NODELOADHEADER {
    short xkey; // size=0, offset=0
    short ykey; // size=0, offset=2
    short zkey; // size=0, offset=4
    short packmethod; // size=0, offset=6
    short xlength; // size=0, offset=8
    short ylength; // size=0, offset=10
    short zlength; // size=0, offset=12
};

struct RESIDENT_THING {
    char *packed_data; // size=0, offset=0
};

struct NEW_CUTSCENE {
    short numactors; // size=0, offset=0
    short numframes; // size=0, offset=2
    int orgx; // size=0, offset=4
    int orgy; // size=0, offset=8
    int orgz; // size=0, offset=12
    int audio_track; // size=0, offset=16
    int camera_offset; // size=0, offset=20
    struct ACTORME actor_data[10]; // size=80, offset=24
};

struct CUTSEQ_ROUTINES {
    void *init_func; // size=0, offset=0
    void *control_func; // size=0, offset=4
    void *end_func; // size=0, offset=8
};

/* This file was automatically generated.  Do not edit! */
extern short temp_rotation_buffer[160];
extern unsigned short old_lara_holster;
extern int cutseq_malloc_free;
extern char *cutseq_malloc_ptr;
extern int cutseq_malloc_used;
extern char *GLOBAL_resident_depack_buffers;
extern struct RESIDENT_THING cutseq_resident_addresses[47];
extern unsigned long cutseq_meshswapbits[10];
extern unsigned long cutseq_meshbits[10];
extern unsigned short old_status_flags2[32];
extern char old_status_flags[32];
extern int numnailed;
extern struct ITEM_INFO duff_item;
extern struct PACKNODE *actor_pnodes[10];
extern struct PACKNODE *camera_pnodes;
extern int GLOBAL_oldcamtype;
extern int GLOBAL_numcutseq_frames;
extern int GLOBAL_cutseq_frame;
extern int lastcamnum;
extern struct NEW_CUTSCENE *GLOBAL_cutme;
extern char actor_chat_cnt;
extern char lara_chat_cnt;
extern int cut_seethrough;
extern short frig_shadow_bbox[6];
extern char cutseq_busy_timeout;
extern unsigned char disable_horizon;
extern int cutseq_num;
extern int cutseq_trig;
extern int GLOBAL_playing_cutseq;
extern int cutrot;
extern char jobyfrigger;
extern int cuntercunter;
extern short pierre_chat_ranges4[48];
extern short lara_chat_ranges_andrea4[22];
extern short lara_chat_ranges_joby7[10];
extern short lara_chat_ranges_andy7[14];
extern short priest_chat_ranges_andy7[32];
extern short larson_chat_ranges3b[4];
extern short lara_chat_ranges_andrea3b[12];
extern short larson_chat_ranges3[14];
extern short lara_chat_ranges_andrea3[14];
extern unsigned short andrea3_pistols_info[5];
extern short admiral_chat_ranges_joby10[42];
extern short lara_chat_ranges_joby10[12];
extern short admiral_chat_ranges_joby9[36];
extern short lara_chat_ranges_joby9[12];
extern short sergie_chat_ranges_joby5[20];
extern short admiral_chat_ranges_joby5[18];
extern short pierre_chat_ranges2[34];
extern short larson_chat_ranges2[8];
extern short lara_chat_ranges_andrea2[32];
extern short pierre_chat_ranges1[30];
extern short larson_chat_ranges1[12];
extern short lara_chat_ranges_andrea1[4];
extern unsigned short larson_pistols_info1[2];
extern short admiral_chat_ranges_joby4[20];
extern short lara_chat_ranges_joby4[10];
extern short lara_chat_ranges_joby3[6];
extern short sergie_chat_ranges_joby2[8];
extern short admiral_chat_ranges_joby2[12];
extern unsigned short craneguard_pistols_info[7];
extern unsigned short crane_pistols_info[11];
extern struct CUTSEQ_ROUTINES cutseq_control_routines[45];
void andy11_end();
void andy11_control();
void andy11_init();
void Cutanimate(int objnum);
struct ITEM_INFO *ResetCutanimate(int objnum);
void trigger_title_spotcam(int num);
void CutLaraBubbles();
void swampy_end();
void swampy_control();
void swampy_init();
void monk2_end();
void monk2_control();
void monk2_init();
void do_pierre_gun_meshswap();
void andrea4_end();
void andrea4_control();
void andrea4_init();
void joby7_end();
void joby7_control();
void joby7_init();
void andy10_end();
void andy10_control();
void andy10_init();
void do_chalk_meshswap();
void andy8_end();
void andy8_control();
void andy8_init();
void andy9_end();
void andy9_control();
void andy9_init();
void TriggerDelBrownSmoke(long x,long y,long z);
void cossack_end();
void cossack_control();
void cossack_init();
void andy7_end();
void andy7_control();
void andy7_init();
void andypew_end();
void andypew_control();
void andypew_init();
void andy6_end();
void andy6_control();
void andy6_init();
void joby8_end();
void joby8_control();
void joby8_init();
void joby6_end();
void joby6_control();
void joby6_init();
void andy5_end();
void andy5_control();
void andy5_init();
void andrea3b_end();
void andrea3b_control();
void andrea3b_init();
void andrea3_end();
void andrea3_control();
void andrea3_init();
void do_clanger_meshswap();
void andy4b_end();
void andy4b_control();
void andy4b_init();
void andy4_end();
void andy4_control();
void andy4_init();
void richcut4_end();
void richcut4_control();
void richcut4_init();
void joby10_end();
void joby10_control();
void joby10_init();
void joby9_end();
void joby9_control();
void joby9_init();
void do_catapult_meshswap();
void andy3_end();
void andy3_control();
void andy3_init();
void joby5_end();
void joby5_control();
void joby5_init();
void andrea2_end();
void andrea2_control();
void andrea2_init();
void andrea1_end();
void andrea1_control();
void andrea1_init();
void joby4_end();
void joby4_control();
void joby4_init();
void DelTorchFlames(struct PHD_VECTOR *pos);
void setup_preist_meshswap();
void andy2_end();
void andy2_control();
void andy2_init();
void do_hammer_meshswap();
void hamgate_end();
void hamgate_control();
void hamgate_init();
void andy1_end();
void andy1_control();
void andy1_init();
void joby3_end();
void joby3_control();
void joby3_init();
void joby2_end();
void joby2_control();
void joby2_init();
void TriggerDelSmoke(long x,long y,long z,int sizeme);
void TriggerActorBlood(int actornum,unsigned long nodenum,struct PHD_VECTOR *pos,int direction,int speed);
void GetActorJointAbsPosition(int actornum,unsigned long nodenum,struct PHD_VECTOR *vec);
void deal_with_actor_shooting(unsigned short *shootdata,int actornum,int nodenum,struct PHD_VECTOR *pos);
void stealth3_end();
void stealth3_start();
void special4_end();
void special4_control();
void special4_init();
void special3_end();
void special3_control();
void special3_init();
void special2_end();
void special2_control();
void special2_init();
void special1_end();
void special1_control();
void special1_init();
void richcut3_control();
void richcut3_end();
void richcut3_init();
void richcut2_control();
void richcut2_end();
void richcut2_init();
void richcut1_control();
void richcut1_end();
void richcut1_init();
void cranecut_control();
void cranecut_end();
void cranecut_init();
struct ITEM_INFO *find_a_fucking_item(int object_number);
extern struct RANGE_STRUCT *ranges;
void handle_actor_chatting(int speechslot,int node,int slot,int objslot,short *ranges);
void handle_lara_chatting(short *ranges);
void DelsHandyTeleportLara(int x,int y,int z,int yrot);
void init_resident_cutseq(int num);
void init_cutseq_actors(char *data,int resident);
int Load_and_Init_Cutseq(int num);
struct ITEM_INFO *cutseq_restore_item(int num);
void cutseq_kill_item(int num);
void deal_with_pistols(unsigned short *shootdata);
void trigger_weapon_dynamics(int left_or_right);
void cutseq_shoot_pistols(int left_or_right);
void cutseq_removelara_hk();
void cutseq_givelara_hk();
void cutseq_removelara_pistols();
void cutseq_givelara_pistols();
void CalculateObjectLightingLaraCutSeq();
void finish_cutseq(int name);
void *cutseq_malloc(int size);
void init_cutseq_malloc();
void frigup_lara();
void InitPackNodes(struct NODELOADHEADER *lnode,struct PACKNODE *pnode,char *packed,int numnodes);
void do_new_cutscene_camera();
void handle_cutseq_triggering(int name);

#endif
