/*
 * E89 Pedagogical & Technical Lab
 * project:     strdup
 * created on:  2022-12-06 - 14:45 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: create allocated copy
 */

#include <stdlib.h>
#include <stdio.h>
#include "stu.h"

char *stu_strdup(const char *src)
{
    int len;
    char *final;

    len = stu_strlen(src);
    final = malloc(sizeof(char) * len);
    final = stu_strcpy(final, src);
    return(final);
}
