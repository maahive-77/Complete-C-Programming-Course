#include <stdio.h>

int function(int *ptr)

{
    printf("the value  of ptr is %d\n", ptr); // ka value
    printf("the value  at ptr is %d\n", *ptr); // per value 
    return 5;
}
int main()
{
    int a = 5;
    int *ptr = &a;

    printf("the address of a is %u\n", &a);
    function(ptr);
    return 0;
}