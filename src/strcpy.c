/*
 * E89 Pedagogical & Technical Lab
 * project:     strcpy
 * created on:  2022-10-10 - 14:33 +0200
 * 1st author:  nolan.vollet - nolan.vollet
 * description: copy
 */

#include "stu.h"

char *stu_strcpy(char *dest, const char *src)
{
    int i;
    int len;

    i = 0;
    len = stu_strlen(src);
    while (i <= len)
        {
            dest[i] = src[i];
            i += 1;
        }
    return (dest);
}
