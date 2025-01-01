#include <stdio.h>

int main()
{
    int n;
    printf("enter num :");
    scanf("%d", &n);
    int not_prime = 0;
    int i = 2;
    while (i < n)
    {

        if (n % i == 0 && n != 2)
        {
            not_prime = 1;
            break;
        }
        i++;
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