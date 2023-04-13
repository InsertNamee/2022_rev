/*
 * E890 Pedagogical & Technical Lab
 * project:     stu
 * created on:  2022-10-27 - 17:42 +0200
 * 1st author:  nolan.vollet - nolan.vollet
 * description: include function
 */

#ifndef STU_PUTCHAR_H_
#define STU_PUTCHAR_H_

void stu_rev(char *buffer);
int stu_strcmp(const char *s1, const char *s2);
unsigned int stu_strlen(const char *src);
char *stu_strcpy(char *dest, const char *src);
char *stu_strcat(char *dest, const char *src);
char *echo_read(int *tsize);
char *stu_strdup(const char *src);

#endif
