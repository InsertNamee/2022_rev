/*
 * E89 Pedagogical & Technical Lab
 * project:     strcat
 * created on:  2022-12-06 - 14:33 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: two string into one
 */

#include "stu.h"
#include <stdlib.h>

char *stu_strcat(char *dest, const char *src)
{
    int len_dest;
    int len_src;
    int i;

    len_dest = stu_strlen(dest);
    len_src = stu_strlen(src);
    i = 0;
    while (i <= len_src) {
        dest[len_dest] = src[i];
        i += 1;
        len_dest += 1;
    }
    return (dest);
}
