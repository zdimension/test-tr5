#include "FILE.H"
/*
 * Offset 0x5E528
 * C:\Projects2\Tomb5\SPEC_PSX\FILE.C (line 57)
 * Stack frame base $29, size 32
 */
int /*reg $31*/ FILE_Load(char *szFileName /*reg $16*/, void *pDest /*reg $17*/)
{ // line 1, offset 0x5e528
    int nHandle; // register $18
    unsigned long dwFileSize; // register $16
    unsigned long dwBytesRead; // register $17
} // line 46, offset 0x5e60c
/*
 * Offset 0x5E60C
 * C:\Projects2\Tomb5\SPEC_PSX\FILE.C (line 143)
 * Stack frame base $29, size 32
 */
unsigned long /*reg $31*/ FILE_Length(char *szFileName /*reg $16*/)
{ // line 1, offset 0x5e60c
    int nHandle; // register $17
    unsigned long dwFileSize; // register $16
} // line 33, offset 0x5e6a8
/*
 * Offset 0x5E6A8
 * C:\Projects2\Tomb5\SPEC_PSX\FILE.C (line 180)
 * Stack frame base $29, size 24
 */
int /*reg $31*/ FILE_Read(void *pDest /*reg $5*/, int nItemSize /*reg $5*/, int nItems /*reg $6*/, int nHandle /*reg $7*/)
{ // line 1, offset 0x5e6a8
    int nAmount; // register $6
} // line 14, offset 0x5e6d4
/*
 * Offset 0x5E6D4
 * C:\Projects2\Tomb5\SPEC_PSX\FILE.C (line 214)
 * Stack frame base $29, size 0
 */
void /*reg $31*/ RelocateModule(unsigned long Module /*reg $4*/, unsigned long *RelocData /*reg $5*/)
{ // line 1, offset 0x5e6d4
    unsigned int *rel; // register $6
} // line 24, offset 0x5e79c