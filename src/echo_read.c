/*
 * E89 Pedagogical & Technical Lab
 * project:     echo read
 * created on:  2022-12-05 - 16:21 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: return string
 */

#include "stu.h"
#include <stdlib.h>
#include <unistd.h>

char *echo_read(int *tsize)
{
    char *fixe;
    char *tmp;
    char *final;
    int size_read;
    int size;
    int i;

    size_read = 1;
    *tsize = 0;
    final = malloc(sizeof(char) * 11);
    fixe = malloc(sizeof(char) * 11);
    i = 1;
    while (size_read != 0) {
        size_read = read(0, fixe, 10);
        *tsize += size_read;
        fixe[size_read] = '\0';
        size = 10 * i + 1;
        tmp = malloc(sizeof(char) * size);
        stu_strcat(stu_strcpy(tmp, final), fixe);
        free(final);
        final = stu_strdup(tmp);
        free(tmp);
        i += 1;
    }
    free(fixe);
    return (final);
}
