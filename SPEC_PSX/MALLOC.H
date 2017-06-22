#ifndef SPEC_PSX_MALLOC_H
#define SPEC_PSX_MALLOC_H

/* This file was automatically generated.  Do not edit! */
void show_game_malloc_totals();
void game_free(int size);
char *game_malloc(int size);
void init_game_malloc();
extern char malloc_buffer[1085440];
extern int script_malloc_size;
extern int malloc_free;
extern int malloc_used;
extern char *malloc_ptr;

#endif
