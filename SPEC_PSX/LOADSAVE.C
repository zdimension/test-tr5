#include "LOADSAVE.H"
/*
 * Offset 0x626E4
 * C:\Projects2\Tomb5\SPEC_PSX\LOADSAVE.C (line 229)
 * Stack frame base $29, size 152
 */
int /*reg $31*/ DisplayFiles(int cursor /*sp 0*/, int maxfiles /*reg $5*/)
{ // line 1, offset 0x626e4
    int i; // register $19
    int n; // register $20
    int y; // register $17
    unsigned short flags; // register $22
    { // line 24, offset 0x6279c
        char buf[80]; // stack offset -120
        { // line 28, offset 0x627b4
            struct PACKEDNAME *pn; // register $8
        } // line 28, offset 0x627b4
    } // line 47, offset 0x62870
} // line 61, offset 0x6297c
/*
 * Offset 0x6297C
 * C:\Projects2\Tomb5\SPEC_PSX\LOADSAVE.C (line 314)
 * Stack frame base $29, size 56
 */
int /*reg $31*/ LoadGame()
{ // line 2, offset 0x6297c
    unsigned char stat; // register $16
    int ret; // register $19
    unsigned char cancel; // register $18
    static int cursor; // offset 0x0
    static unsigned char init; // offset 0x144
    static unsigned char func; // offset 0x145
    { // line 33, offset 0x62a40
        long cmd; // stack offset -32
        long result; // stack offset -28
        static unsigned char AutoTime; // offset 0x4
        static unsigned char AutoFunc; // offset 0x5
        static struct REQUESTER *AutoRequester; // offset 0x8
        { // line 83, offset 0x62b10
            int nfiles; // register $5
        } // line 107, offset 0x62bf8
    } // line 182, offset 0x62dc0
} // line 199, offset 0x62e3c
/*
 * Offset 0x62E3C
 * C:\Projects2\Tomb5\SPEC_PSX\LOADSAVE.C (line 532)
 * Stack frame base $29, size 64
 */
int /*reg $31*/ SaveGame()
{ // line 2, offset 0x62e3c
    unsigned char cancel; // register $18
    unsigned char stat; // register $16
    int ret; // register $19
    static int cursor; // offset 0xc
    static unsigned char init; // offset 0x146
    static struct PACKEDNAME pn; // offset 0x10
    static unsigned char func; // offset 0x147
    { // line 14, offset 0x62e68
        int seconds; // register $16
    } // line 41, offset 0x62ff4
    { // line 51, offset 0x63034
        int i; // register $5
        int nfiles; // register $5
        long cmd; // stack offset -32
        long result; // stack offset -28
        static unsigned char AutoTime; // offset 0x24
        static unsigned char AutoFunc; // offset 0x25
        static struct REQUESTER *AutoRequester; // offset 0x28
        { // line 151, offset 0x63268
            char slots[7]; // stack offset -40
            struct PACKEDNAME *p; // register $2
        } // line 175, offset 0x63340
        { // line 354, offset 0x63568
            int i; // register $3
        } // line 358, offset 0x63598
    } // line 393, offset 0x63690
} // line 411, offset 0x63718
static struct REQUESTER InsertReq; // offset 0xA1DFC
static struct REQUESTER CheckingReq; // offset 0xA1E10
static struct REQUESTER FormatReq; // offset 0xA1E24
static struct REQUESTER OverwriteReq; // offset 0xA1E38
static struct REQUESTER LoadingReq; // offset 0xA1E4C
static struct REQUESTER SavingReq; // offset 0xA1E60
static struct REQUESTER FormattingReq; // offset 0xA1E74
static struct REQUESTER LoadOkReq; // offset 0xA1E88
static struct REQUESTER LoadErrorReq; // offset 0xA1E9C
static struct REQUESTER SaveOkReq; // offset 0xA1EB0
static struct REQUESTER SaveErrorReq; // offset 0xA1EC4
static struct REQUESTER FormatErrorReq; // offset 0xA1ED8
static struct REQUESTER NotFormatReq; // offset 0xA1EEC
static struct REQUESTER NoSpaceReq; // offset 0xA1F00
static struct REQUESTER NoGamesReq; // offset 0xA1F14