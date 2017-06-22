#ifndef SPEC_PSX_DRAWPHAS_H
#define SPEC_PSX_DRAWPHAS_H

/* This file was automatically generated.  Do not edit! */
extern short MonitorOff2;
extern short MonitorOff;
extern unsigned char MonitorHold;
extern unsigned char MonitorScreenU0;
extern struct PSXTEXTI *MonitorScreenTI;
extern struct GAME_VECTOR LaraPos;
extern long StoreBoxes;
void MGDrawSprite(int x,int y,int def,int z,int xs,int ys,long rgb);
void SortOutWreckingBallDraw();
void DrawRooms(short current_room);
long DrawPhaseGame();

#endif
