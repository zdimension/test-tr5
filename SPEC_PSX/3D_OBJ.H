#ifndef SPEC_PSX_3D_OBJ_H
#define SPEC_PSX_3D_OBJ_H

struct TSV {
    unsigned long xy; // size=0, offset=0
    unsigned long rgz; // size=0, offset=4
};

/* This file was automatically generated.  Do not edit! */
extern struct TSV tsv_buffer[512];
void CreateMonoScreen();

#endif
