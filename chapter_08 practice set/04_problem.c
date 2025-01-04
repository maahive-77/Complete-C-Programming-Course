// Q04. Write a function slice() to slice a string. It should change the original string such that it is now the sliced string. Take 'm'and 'n' as the start and ending position for slice.

#include <stdio.h>

char* slice(char str[], int m, int n)
{
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';

    return str;
}
int main()
{
    // char str[] = "sanna";
    char str[] = "maahi";

    printf(" slice is : %s", slice(str, 0, 3));

    return 0;
}


