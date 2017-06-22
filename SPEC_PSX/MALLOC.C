#include "MALLOC.H"
#include <stdlib.h>
#include <stdio.h>

extern char *malloc_ptr; // offset 0xA450C
extern int malloc_used; // offset 0xA4510
extern int malloc_free; // offset 0xA4518
extern int script_malloc_size; // offset 0xA4514
extern char malloc_buffer[1085440];

/*
 * Offset 0x5E79C
 * C:\Projects2\Tomb5\SPEC_PSX\MALLOC.C (line 72)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ init_game_malloc();
/*
 * Offset 0x5E7E8
 * C:\Projects2\Tomb5\SPEC_PSX\MALLOC.C (line 85)
 * Stack frame base $29, size 104
 */
char * /*reg $31*/ game_malloc(int size /*reg $6*/)
{ // line 2, offset 0x5e7e8
    char *ptr; // register $4
    { // line 16, offset 0x5e828
        char buf[80]; // stack offset -88
    } // line 16, offset 0x5e828
} // line 26, offset 0x5e85c
/*
 * Offset 0x5E85C
 * C:\Projects2\Tomb5\SPEC_PSX\MALLOC.C (line 113)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ game_free(int size /*reg $4*/);
/*
 * Offset 0x5E894
 * C:\Projects2\Tomb5\SPEC_PSX\MALLOC.C (line 123)
 * Stack frame base $29, size 24
 */
void /*reg $31*/ show_game_malloc_totals();
