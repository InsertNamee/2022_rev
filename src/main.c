/*
 * E89 Pedagogical & Technical Lab
 * project:     main
 * created on:  2022-10-27 - 14:22 +0200
 * 1st author:  nolan.vollet - nolan.vollet
 * description: execute the rev function
 */

#include <stdlib.h>
#include <unistd.h>
#include "stu.h"

int main(void)
{
    char *buffer;
    int size_read;

    buffer = echo_read(&size_read);
    stu_rev(buffer);
}
