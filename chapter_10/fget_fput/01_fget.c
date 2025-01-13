#include <stdio.h>

int main()
{
    FILE *p;
    // p = fopen("maahi.txt", "r");
    // p = fopen("maahi.txt", "w");
    p = fopen("maahi.txt", "a");
    // char c = fgetc(p); // use to read a character from file
    // printf("%c", c)
    fputc('c',p);
    fclose(p);
    return 0;
}