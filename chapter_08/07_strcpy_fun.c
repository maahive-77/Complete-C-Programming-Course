#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "Stone";

    char source[] = "sanna";
    char target[30];
    strcpy(target, source); // target now contains "sanna"
    printf("%s %s\n", s, target);

    return 0;
}