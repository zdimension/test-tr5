#ifndef GAME_ITEMS_H
#define GAME_ITEMS_H

/* This file was automatically generated.  Do not edit! */
extern short GlobalPulleyFrigItem;
extern short next_item_active;
extern short next_item_free;
extern int level_items;
void EffectNewRoom(short fx_num,short room_number);
void KillEffect(short fx_num);
short CreateEffect(short room_num);
void InitialiseFXArray(int allocmem);
void AddActiveItem(short item_num);
void RemoveDrawnItem(short item_num);
void RemoveActiveItem(short item_num);
void InitialiseItem(short item_num);
short CreateItem();
void KillItem(short item_num);
void InitialiseItemArray(int numitems);

#endif
