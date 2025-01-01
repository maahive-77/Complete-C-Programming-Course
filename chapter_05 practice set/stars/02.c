#include <stdio.h>

// using function print increment numbers triangle pattern...

int num(int);
int num(int x)
{

    int n = 8;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)

            printf("%d", j);

        printf("\n");
    }
    
}

int main()
{
    int n;
    num(n);
    return 0;
}