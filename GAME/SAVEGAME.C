#include "SAVEGAME.H"
/*
 * Offset 0x536A0
 * C:\Projects2\Tomb5\GAME\SAVEGAME.C (line 136)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ WriteSG(void *pointer /*reg $4*/, int size /*reg $5*/)
{ // line 1, offset 0x536a0
    char *data; // register $4
} // line 18, offset 0x536e0
/*
 * Offset 0x536E0
 * C:\Projects2\Tomb5\GAME\SAVEGAME.C (line 157)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ ReadSG(void *pointer /*reg $4*/, int size /*reg $5*/)
{ // line 1, offset 0x536e0
    char *data; // register $4
} // line 10, offset 0x53720
/*
 * Offset 0x53720
 * C:\Projects2\Tomb5\GAME\SAVEGAME.C (line 189)
 * Stack frame base $29, size 0
 */
int /*reg $31*/ CheckSumValid(char *buffer /*reg $4*/)
{ // line 1, offset 0x53720
    { // line 1, offset 0x53720
    } // line 23, offset 0x53738
} // line 26, offset 0x53738
/*
 * Offset 0x53738
 * C:\Projects2\Tomb5\GAME\SAVEGAME.C (line 232)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ SaveLaraData()
{ // line 2, offset 0x53738
    int i; // register $4
    { // line 30, offset 0x53844
        struct ITEM_INFO *item; // register $3
    } // line 37, offset 0x53894
} // line 41, offset 0x538d0
/*
 * Offset 0x538D0
 * C:\Projects2\Tomb5\GAME\SAVEGAME.C (line 290)
 * Stack frame base $29, size 40
 */
void /*reg $31*/ RestoreLaraData(int FullSave /*reg $4*/)
{ // line 2, offset 0x538d0
    { // line 29, offset 0x5397c
        char flag; // register $17
    } // line 39, offset 0x539c4
    { // line 45, offset 0x539d8
        struct ITEM_INFO *item; // register $4
    } // line 58, offset 0x53a4c
    { // line 63, offset 0x53a4c
        int i; // register $4
    } // line 67, offset 0x53a74
} // line 71, offset 0x53aac
/*
 * Offset 0x53AAC
 * C:\Projects2\Tomb5\GAME\SAVEGAME.C (line 378)
 * Stack frame base $29, size 80
 */
void /*reg $31*/ SaveLevelData(int FullSave /*reg $22*/)
{ // line 1, offset 0x53aac
    int i; // register $19
    int j; // register $5
    short pos; // stack offset -58
    short word; // stack offset -64
    struct room_info *r; // register $17
    struct ITEM_INFO *item; // register $17
    unsigned char byte; // stack offset -62
    { // line 59, offset 0x53bf0
        int k; // register $16
    } // line 74, offset 0x53c78
    { // line 102, offset 0x53db8
        unsigned short packed; // stack offset -60
        struct object_info *obj; // register $18
        { // line 231, offset 0x541ac
            unsigned long flags; // stack offset -52
            { // line 276, offset 0x54374
                char lflags; // stack offset -56
            } // line 296, offset 0x544a0
        } // line 297, offset 0x544a0
    } // line 306, offset 0x544c8
    { // line 356, offset 0x546ac
        int flare_age; // stack offset -48
    } // line 358, offset 0x546ac
    { // line 381, offset 0x54748
        struct RAT_STRUCT *rat; // register $16
        short objnum; // register $3
        short maxval; // register $17
    } // line 447, offset 0x54910
    { // line 452, offset 0x54920
        struct BAT_STRUCT *bat; // register $16
    } // line 505, offset 0x54aac
} // line 514, offset 0x54b08
/*
 * Offset 0x54B08
 * C:\Projects2\Tomb5\GAME\SAVEGAME.C (line 909)
 * Stack frame base $29, size 96
 */
void /*reg $31*/ RestoreLevelData(int FullSave /*sp 0*/)
{ // line 1, offset 0x54b08
    int i; // register $21
    int j; // register $20
    char byte; // stack offset -74
    unsigned short word; // stack offset -78
    short sword; // stack offset -80
    struct room_info *r; // register $17
    struct ITEM_INFO *item; // register $19
    short item_number; // register $20
    struct creature_info *creature; // register $16
    { // line 46, offset 0x54c30
        int k; // register $19
        { // line 62, offset 0x54cc4
            struct FLOOR_INFO *floor; // register $16
            short room_number; // stack offset -76
        } // line 69, offset 0x54d1c
    } // line 75, offset 0x54d40
    { // line 99, offset 0x54e6c
        char anim; // stack offset -62
        unsigned short packed; // stack offset -72
        struct object_info *obj; // register $17
        { // line 124, offset 0x54eec
            unsigned short room_number; // stack offset -70
            { // line 170, offset 0x55054
            } // line 174, offset 0x55080
        } // line 175, offset 0x55080
        { // line 181, offset 0x55094
            short req; // stack offset -64
            short goal; // stack offset -66
            short current; // stack offset -68
        } // line 202, offset 0x55120
        { // line 213, offset 0x55150
            unsigned long flags; // stack offset -52
            { // line 277, offset 0x553d8
                char lflags; // stack offset -61
            } // line 285, offset 0x5540c
        } // line 309, offset 0x55508
    } // line 348, offset 0x55650
    { // line 352, offset 0x5567c
        unsigned char numberof; // stack offset -60
        { // line 397, offset 0x5579c
            int flare_age; // stack offset -48
        } // line 399, offset 0x5579c
        { // line 420, offset 0x55820
            struct RAT_STRUCT *rat; // register $16
            short objnum; // register $3
            { // line 440, offset 0x55884
                unsigned short uword; // stack offset -58
            } // line 464, offset 0x5592c
        } // line 470, offset 0x55964
        { // line 475, offset 0x55974
            struct BAT_STRUCT *bat; // register $16
            { // line 485, offset 0x559b0
                unsigned short uword; // stack offset -56
            } // line 509, offset 0x55a58
        } // line 515, offset 0x55a90
    } // line 523, offset 0x55ac0
} // line 526, offset 0x55af8
/*
 * Offset 0x55AF8
 * C:\Projects2\Tomb5\GAME\SAVEGAME.C (line 1478)
 * Stack frame base $29, size 32
 */
void /*reg $31*/ sgSaveGame()
{ // line 2, offset 0x55af8
    { // line 2, offset 0x55af8
    } // line 22, offset 0x55b88
} // line 27, offset 0x55b88
/*
 * Offset 0x55B88
 * C:\Projects2\Tomb5\GAME\SAVEGAME.C (line 1507)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ sgRestoreGame();
extern char FromTitle; // offset 0xA14AC
extern char JustLoaded; // offset 0xA14AD
extern char *MGSaveGamePtr; // offset 0xA3924
static int SGcount; // offset 0xA391C
static char *SGpoint; // offset 0xA3920
extern struct savegame_info savegame;