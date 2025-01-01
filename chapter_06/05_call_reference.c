#include <stdio.h>

int sum(int *, int *);

int sum(int *x, int *y)
{
    int t = *x;
    *x = 1;

    return (*x + *y);
}

int main()
{
    int a = 5, b = 6;
    printf(" a = %d b = %d\nthe sum of  a  and b is %d \n",a,b, sum(&a, &b));
    

    return 0;
}