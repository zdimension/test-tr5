#ifndef GAME_HEALTH_H
#define GAME_HEALTH_H

/* This file was automatically generated.  Do not edit! */
extern short CurrentPickup;
extern short PickupVel;
extern short PickupY;
extern short PickupX;
extern struct DISPLAYPU pickups[8];
extern char PoisonFlag;
extern int health_bar_timer;
void AddDisplayPickup(short object_number);
void DrawPickups(int timed);
void InitialisePickUpDisplay();
void DrawAirBar(int flash_state);
void DrawHealthBar(int flash_state);
void DrawGameInfo(int timed);
int FlashIt();

#endif
