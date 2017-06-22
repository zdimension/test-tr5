#include "ROOMLOAD.H"
/*
 * Offset 0x600E4
 * C:\Projects2\Tomb5\SPEC_PSX\ROOMLOAD.C (line 98)
 * Stack frame base $29, size 112
 */
void /*reg $31*/ ReloadAnims(int name /*reg $4*/, long len /*reg $17*/)
{ // line 1, offset 0x600e4
    int file; // register $16
    char buf[80]; // stack offset -96
} // line 18, offset 0x60188
/*
 * Offset 0x60188
 * C:\Projects2\Tomb5\SPEC_PSX\ROOMLOAD.C (line 123)
 * Stack frame base $29, size 120
 */
void /*reg $31*/ S_LoadLevelFile(int Name /*reg $19*/)
{ // line 1, offset 0x60188
    char buf[80]; // stack offset -104
    unsigned long *mod; // register $4
    int len; // register $18
    int file; // register $16
} // line 72, offset 0x602ac
extern long AnimFilePos; // offset 0xA45F0
extern long AnimFileLen; // offset 0xA45EC
extern short *floor_data; // offset 0xA45B8
extern unsigned long *SetupPtr; // offset 0xA4594
extern unsigned short ClutStartY; // offset 0xA4590
extern struct SVECTOR *RoomBBoxes;
extern short *mesh_base; // offset 0xA45B4
extern struct PSXSPRITESTRUCT *GLOBAL_default_sprites_ptr;
extern struct PSXTEXTI *AnimatingWaterfalls[6];
extern int AnimatingWaterfallsV[6];
extern unsigned long envmap_data[6];
extern unsigned long *RelocPtr[128];