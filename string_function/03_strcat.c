#include <stdio.h>
#include <string.h>
int main()
{
    char source[] = "sajna";
    char target[30] = "sanji ";
    strcat(target, source);
    printf("source string :%s\n", source);
    printf("target string :%s\n", target);
    return 0;
}