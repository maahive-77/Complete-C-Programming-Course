#include <stdio.h>

int sum(int, int);
int sum(int x, int y)
{
 x = 8; // sum function cannot change a because copy of x is provided to sum in x.
    return x + y;
}
int main()
{
    int a = 5, b = 6;
    printf("the sum of  1 and 6 is %d\n", sum(a, b));
   

    return 0;
}