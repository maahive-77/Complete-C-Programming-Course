#include <stdio.h>

int main()
{
    int n;
    printf("enter num :");
    scanf("%d", &n);
    int not_prime = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0 && n != 2)
        {
            not_prime = 1 ;
            break;
        }
    }
    if (not_prime)
    {
        printf("%d is not prime\n", n);
    }
    else
    {
        printf("%d is prime\n", n);
    }

    return 0;
}