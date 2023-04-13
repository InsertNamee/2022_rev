/*
 * E89 Pedagogical & Technical Lab
 * project:     strlen
 * created on:  2022-10-07 - 17:00 +0200
 * 1st author:  nolan.vollet - nolan.vollet
 * description: claculate string lenght
 */

unsigned int stu_strlen(const char *str)
{
    unsigned int t;

    t = 0;
    while (str[t] != '\0'){
        t += 1;
    }
    return (t);
}
