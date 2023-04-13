/*
 * E89 Pedagogical & Technical Lab
 * project:     strcmp
 * created on:  2022-10-10 - 16:05 +0200
 * 1st author:  nolan.vollet - nolan.vollet
 * description: compare
 */
int stu_strcmp(const char *s1, const char *s2)
{
    int i;
    int t;
    int stop;

    i = 0;
    stop = 0;
    while (stop == 0 && (s1[i] != '\0') | (s2[i] !='\0'))
        {
            if (s1[i] == s2[i])
                {
                    t = 0;
                }
            else if (s1[i] > s2[i])
                {
                    stop =1;
                    t = 1;
                }
            else
                {
                    stop =1;
                    t = (-1);
                }
            i += 1;
        }
        return (t);
}
