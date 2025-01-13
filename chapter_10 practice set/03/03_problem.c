// read  char by char
#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    FILE *ptr1;
    ptr = fopen("maahi.txt", "r");
    ptr1 = fopen("maahi1.txt", "a");
    while (1)
    {
        ch = fgetc(ptr);

        if (ch ==EOF)
        {
        
            break;
        }
        else{
            fprintf(ptr1, "%c",ch);
            fprintf(ptr1, "%c",ch);

            printf("%c", ch);
        }
    }

    return 0;
}