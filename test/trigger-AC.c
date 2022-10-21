/* Copyright © 2022 Jakub Wilk <jwilk@jwilk.net>
 * SPDX-License-Identifier: MIT
 */

#include <stdio.h>

int main(int argc, char **argv)
{
    __asm__(
        "pushf\n"
        "orl $0x40000, (%esp)\n"
        "popf\n"
    );
    puts("Hello world!\n");
}

/* vim:set ts=4 sts=4 sw=4 et:*/
