#include <stdio.h>
int sum(int);
int sum(int n)
{

    if (n == 1)
    // sum(n) = 1+2+3+4+5+6+7+8+9+......+n-1+n;
    {
        return 1;
    }

    return sum(n - 1) + n;
}

int main()
{
    printf("---------------------\n");
    int n;
    printf("Enter n :");
    scanf("%d", &n);

    printf("the sum of first %d natural numbers is %d\n", n, sum(n));
    printf("---------------------\n");

    return 0;
}