#ifndef GAME_LARA2GUN_H
#define GAME_LARA2GUN_H

struct PISTOL_DEF {
    short ObjectNum; // size=0, offset=0
    char Draw1Anim2; // size=0, offset=2
    char Draw1Anim; // size=0, offset=3
    char Draw2Anim; // size=0, offset=4
    char RecoilAnim; // size=0, offset=5
};

/* This file was automatically generated.  Do not edit! */
void AnimatePistols(int weapon_type);
void PistolHandler(int weapon_type);
void undraw_pistol_mesh_right(int weapon_type);
void undraw_pistol_mesh_left(int weapon_type);
void draw_pistol_meshes(int weapon_type);
void ready_pistols(int weapon_type);
void undraw_pistols(int weapon_type);
void draw_pistols(int weapon_type);
void set_arm_info(struct lara_arm *arm,int frame);

#endif
