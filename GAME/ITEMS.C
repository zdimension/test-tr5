#include "ITEMS.H"
/*
 * Offset 0x418E8
 * C:\Projects2\Tomb5\GAME\ITEMS.C (line 76)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ InitialiseItemArray(int numitems /*reg $4*/)
{ // line 1, offset 0x418e8
    int i; // register $6
    struct ITEM_INFO *item; // register $3
} // line 19, offset 0x41950
/*
 * Offset 0x41950
 * C:\Projects2\Tomb5\GAME\ITEMS.C (line 103)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ KillItem(short item_num /*reg $16*/)
{ // line 1, offset 0x41950
    short linknum; // register $5
    struct ITEM_INFO *item; // register $8
} // line 63, offset 0x41b9c
/*
 * Offset 0x41BAC
 * C:\Projects2\Tomb5\GAME\ITEMS.C (line 173)
 * Stack frame base $29, size 0
 */
short /*reg $31*/ CreateItem()
{ // line 2, offset 0x41bac
    short item_num; // register $5
} // line 19, offset 0x41be4
/*
 * Offset 0x41BEC
 * C:\Projects2\Tomb5\GAME\ITEMS.C (line 199)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ InitialiseItem(short item_num /*reg $17*/)
{ // line 1, offset 0x41bec
    struct ITEM_INFO *item; // register $16
    struct room_info *r; // register $5
    struct FLOOR_INFO *floor; // register $4
} // line 102, offset 0x41e98
/*
 * Offset 0x41E98
 * C:\Projects2\Tomb5\GAME\ITEMS.C (line 308)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ RemoveActiveItem(short item_num /*reg $4*/)
{ // line 1, offset 0x41e98
    short linknum; // register $3
} // line 23, offset 0x41f40
/*
 * Offset 0x41F48
 * C:\Projects2\Tomb5\GAME\ITEMS.C (line 336)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ RemoveDrawnItem(short item_num /*reg $5*/)
{ // line 1, offset 0x41f48
    short linknum; // register $3
    struct ITEM_INFO *item; // register $6
} // line 22, offset 0x41fe4
/*
 * Offset 0x41FEC
 * C:\Projects2\Tomb5\GAME\ITEMS.C (line 364)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ AddActiveItem(short item_num /*reg $6*/)
{ // line 1, offset 0x41fec
    struct ITEM_INFO *item; // register $5
} // line 27, offset 0x42074
/*
 * Offset 0x4207C
 * C:\Projects2\Tomb5\GAME\ITEMS.C (line 498)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ InitialiseFXArray(int allocmem /*reg $4*/)
{ // line 2, offset 0x4207c
    int i; // register $4
    struct FX_INFO *fx; // register $3
} // line 14, offset 0x420e0
/*
 * Offset 0x420E0
 * C:\Projects2\Tomb5\GAME\ITEMS.C (line 517)
 * Stack frame base $29, size 0
 */
short /*reg $31*/ CreateEffect(short room_num /*reg $4*/)
{ // line 1, offset 0x420e0
    struct room_info *r; // register $5
    struct FX_INFO *fx; // register $4
    short fx_num; // register $7
} // line 31, offset 0x42170
/*
 * Offset 0x42178
 * C:\Projects2\Tomb5\GAME\ITEMS.C (line 554)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ KillEffect(short fx_num /*reg $16*/)
{ // line 1, offset 0x42178
    short linknum; // register $4
    struct FX_INFO *fx; // register $5
} // line 47, offset 0x42310
/*
 * Offset 0x42320
 * C:\Projects2\Tomb5\GAME\ITEMS.C (line 606)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ EffectNewRoom(short fx_num /*reg $6*/, short room_number /*reg $9*/)
{ // line 1, offset 0x42320
    short linknum; // register $3
    struct room_info *r; // register $4
    struct FX_INFO *fx; // register $8
} // line 35, offset 0x4243c
extern int level_items; // offset 0xA0B50
extern short next_item_free; // offset 0xA37B0
extern short next_item_active; // offset 0xA37A8
extern short GlobalPulleyFrigItem; // offset 0xA37AC