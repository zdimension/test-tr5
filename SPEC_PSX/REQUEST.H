#ifndef SPEC_PSX_REQUEST_H
#define SPEC_PSX_REQUEST_H

struct REQUESTER {
    unsigned short TitleTxt; // size=0, offset=0
    unsigned short TitleCol : 5; // offset=2.0
    unsigned short nOptions : 3; // offset=2.5
    unsigned short CursorPos : 3; // offset=3.0
    unsigned short OptionCol : 5; // offset=3.3
    unsigned long JustifyL : 5; // offset=4.0
    unsigned long JustifyR : 5; // offset=4.5
    unsigned long Arrows : 5; // offset=5.2
    unsigned long Ignore : 5; // offset=5.7
    unsigned short OptionTxt[5]; // size=10, offset=8
};

/* This file was automatically generated.  Do not edit! */
long Requester(struct REQUESTER *r);

#endif
