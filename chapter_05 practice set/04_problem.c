#include <stdio.h>

// 0,1,1,2,3,5,8,13,21,34,...

// 1+2 = 3, 2+3= 5, 3+5= 8

// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2);
int fibonacci(int);

int fibonacci(int n)
{
    if (n == 1 || n == 2)

    {
        return n - 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    printf("\t-------------------\n");
    printf("\tEnter n = ");
    scanf("%d", &n);

    printf("\tThe value of fibonacci series at %d is %d\n", n, fibonacci(n));
    printf("\t----------------------------------------\n");

    return 0;
}