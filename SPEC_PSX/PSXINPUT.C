#include "PSXINPUT.H"
/*
 * Offset 0x5F628
 * C:\Projects2\Tomb5\SPEC_PSX\PSXINPUT.C (line 191)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ S_UpdateInput()
{ // line 2, offset 0x5f628
    int state; // register $17
    unsigned char type; // register $18
    unsigned long in; // register $16
    static unsigned long Pad2; // offset 0x0
    static int pause_db; // offset 0xc
    static int option_db; // offset 0x10
    static char LookCnt; // offset 0x14
    { // line 151, offset 0x5fa3c
        char pos; // register $4
        char walking; // register $5
    } // line 290, offset 0x5fcfc
    { // line 353, offset 0x5fe70
        static int send; // offset 0x18
    } // line 374, offset 0x5fed4
} // line 474, offset 0x600cc
static struct pad_configs pad_cons[5]; // offset 0x93F38
extern unsigned char DualShock; // offset 0xA1885
extern unsigned char PadConnected; // offset 0xA1886
extern short reset_count; // offset 0xA188E
extern char SayNoCount; // offset 0xA1884
static unsigned char align[6]; // offset 0xA1888
extern long input; // offset 0xA457C
extern long dbinput; // offset 0xA4580
extern long dbinput2; // offset 0xA458C
extern long inputBusy; // offset 0xA4528
extern long RawPad; // offset 0xA4578
extern long RawEdge; // offset 0xA4520
extern unsigned char Motors[2];
extern long LaraLookY; // offset 0xA4588
extern long LaraLookX; // offset 0xA4584
extern struct ControllerPacket GPad1;
extern struct ControllerPacket GPad2;
extern unsigned long Edge2; // offset 0xA4574
extern struct GouraudBarColourSet healthBarColourSet;
extern struct GouraudBarColourSet poisonBarColourSet;
extern struct GouraudBarColourSet airBarColourSet;
extern struct GouraudBarColourSet dashBarColourSet;