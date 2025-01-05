#include <stdio.h>

int mystrcpy(char *, char *);
int mystrcpy(char *t, char *s)
{
    while (*s != '\0')
    {
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';
}
int main()
{
    char source[] = "pagal";
    char target[20];
    mystrcpy(target, source);
    printf("----------------------\n");
    printf("source string = %s\n", source);
    printf("target string = %s\n", target);

    return 0;
}