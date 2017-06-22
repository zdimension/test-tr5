#include "SPHERE.H"
/*
 * Offset 0x55C3C
 * C:\Projects2\Tomb5\GAME\SPHERE.C (line 79)
 * Stack frame base $29, size 40
 */
int /*reg $31*/ TestCollision(struct ITEM_INFO *item /*reg $20*/, struct ITEM_INFO *laraitem /*reg $17*/)
{ // line 1, offset 0x55c3c
    int num1; // register $19
    int num2; // register $12
    int x1; // register $11
    int y1; // register $10
    int z1; // register $16
    int r1; // register $9
    int x; // register $3
    int y; // register $4
    int z; // register $2
    int r; // register $5
    int i; // register $8
    int j; // register $7
    unsigned long flags; // register $18
    struct SPHERE *ptr1; // register $16
    struct SPHERE *ptr2; // register $6
} // line 66, offset 0x55de4
extern char GotLaraSpheres; // offset 0xA3A20
extern int NumLaraSpheres; // offset 0xA3A24
extern struct SPHERE LaraSpheres[15];
extern struct SPHERE Slist[34];