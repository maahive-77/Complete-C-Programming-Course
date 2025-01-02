#include <stdio.h>

int main()
{
    int a[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int *point = a;
    printf("the value of a is at point prt+2 is %d\n", *(point + 2));

    return 0;
}