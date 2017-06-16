/*
 *
 * Generate version.mac
 *
 *  Copyright (C) 2006-2007  Peter Johnson
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND OTHER CONTRIBUTORS ``AS IS''
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR OTHER CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#include "config.h"     /* for PACKAGE_VERSION */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int
main(int argc, char *argv[])
{
    FILE *out;
    int major, minor, subminor, patchlevel, matched;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <outfile>\n", argv[0]);
        return EXIT_FAILURE;
    }

    matched = sscanf(PACKAGE_VERSION, "%d.%d.%d.%d", &major, &minor, &subminor,
                     &patchlevel);

    if (matched == 3)
        patchlevel = 0;
    else if (matched != 4) {
        fprintf(stderr, "Version tokenizing error\n");
        return EXIT_FAILURE;
    }

    out = fopen(argv[1], "wt");

    if (!out) {
        fprintf(stderr, "Could not open `%s'.\n", argv[1]);
        return EXIT_FAILURE;
    }

    fprintf(out, "; This file auto-generated by genversion.c"
                 " - don't edit it\n");

    fprintf(out, "%%define __YASM_MAJOR__ %d\n", major);
    fprintf(out, "%%define __YASM_MINOR__ %d\n", minor);
    fprintf(out, "%%define __YASM_SUBMINOR__ %d\n", subminor);
    fprintf(out, "%%define __YASM_BUILD__ %d\n", patchlevel);
    fprintf(out, "%%define __YASM_PATCHLEVEL__ %d\n", patchlevel);

    /* Version id (hex number) */
    fprintf(out, "%%define __YASM_VERSION_ID__ 0%02x%02x%02x%02xh\n", major,
            minor, subminor, patchlevel);

    /* Version string */
    fprintf(out, "%%define __YASM_VER__ \"%s\"\n", PACKAGE_VERSION);
    fclose(out);

    return EXIT_SUCCESS;
}
