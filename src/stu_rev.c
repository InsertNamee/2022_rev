/*
 * E89 Pedagogical & Technical Lab
 * project:     rev
 * created on:  2022-11-22 - 09:30 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: revert input
 */

#include <stdlib.h>
#include <unistd.h>
#include "stu.h"

void stu_rev(char *buffer)
{
    int i;
    int k;
    int max;
    char last;

    i = 0;
    k = 0;
    while(buffer[i] != '\0'){
        if(buffer[i] == '\n'){
            max = k;
            k = 1;
            while (k <= max) {
                write(1, &buffer[i - k], 1);
                last = buffer[i - k];
                k += 1;
            }
            if (last != '\n')
                write(1, "\n", 1);
            k = 0;
        }
        i += 1;
        k += 1;
    }
    free(buffer);
}
