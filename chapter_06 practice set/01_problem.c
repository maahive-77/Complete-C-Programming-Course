#include <stdio.h>

int main()
{
    int a = 5;
    int *ptr = &a;

    printf("the address of a is %u\n", &a);
    printf("the value of a is %u\n", *ptr);
    return 0;
}