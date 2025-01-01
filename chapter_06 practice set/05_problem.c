#include <stdio.h>

//  call by reference...
int sum(int *, int *);
int sum(int *x, int *y)
{
    int n;
    n = (*x + *y);
    return n;
}
int average(int *, int *);
int average(int *z, int *t)
{
    int avg;
    avg = (*z + *t) / 2;
    return avg;
}
int main()
{
    int a, b;
    printf("Enter a :");
    scanf("%d", &a);
    printf("Enter b :");
    scanf("%d", &b);
    printf("The Sum of a and b = %d\n", sum(&a, &b));
    printf("The Average of a and b = %d\n", average(&a, &b));

    return 0;
}