#include "LOT.H"
/*
 * Offset 0x4DE40
 * C:\Projects2\Tomb5\GAME\LOT.C (line 57)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ InitialiseLOTarray(int allocmem /*reg $18*/)
{ // line 1, offset 0x4de40
    int i; // register $17
    struct creature_info *creature; // register $16
} // line 19, offset 0x4dec0
/*
 * Offset 0x4DEC0
 * C:\Projects2\Tomb5\GAME\LOT.C (line 83)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ DisableBaddieAI(short item_num /*reg $4*/)
{ // line 1, offset 0x4dec0
    struct ITEM_INFO *item; // register $3
    struct creature_info *creature; // register $4
} // line 18, offset 0x4df0c
/*
 * Offset 0x4DF0C
 * C:\Projects2\Tomb5\GAME\LOT.C (line 110)
 * Stack frame base $29, size 32
 */
int /*reg $31*/ EnableBaddieAI(short item_number /*reg $17*/, int Always /*reg $5*/)
{ // line 1, offset 0x4df0c
    int x; // register $3
    int y; // register $2
    int z; // register $2
    int worstslot; // register $16
    int slot; // register $11
    int worstdist; // register $7
    int dist; // register $3
    struct ITEM_INFO *item; // register $9
    struct creature_info *creature; // register $10
} // line 68, offset 0x4e13c
/*
 * Offset 0x4E13C
 * C:\Projects2\Tomb5\GAME\LOT.C (line 185)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ InitialiseSlot(short item_number /*reg $16*/, int slot /*reg $5*/)
{ // line 1, offset 0x4e13c
    struct creature_info *creature; // register $10
    struct ITEM_INFO *item; // register $17
    int i; // register $6
} // line 136, offset 0x4e330
/*
 * Offset 0x4E330
 * C:\Projects2\Tomb5\GAME\LOT.C (line 324)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ CreateZone(struct ITEM_INFO *item /*reg $9*/)
{ // line 1, offset 0x4e330
    int i; // register $5
    struct creature_info *creature; // register $7
    struct box_node *node; // register $6
    short *zone; // register $8
    short zone_number; // register $10
    short *flip; // register $4
    short flip_number; // register $9
    struct room_info *r; // register $5
} // line 46, offset 0x4e4a0
extern int slots_used; // offset 0xA1234
extern short nAIObjects; // offset 0xA38C8
extern struct AIOBJECT *AIObjects;
extern struct creature_info *baddie_slots;