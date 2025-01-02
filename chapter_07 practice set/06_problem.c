#include <stdio.h>
#include <math.h>

int count(int a[], int n)
{
    int positive = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            positive++;
        }
    }
    return positive;
}
 
int main()
{
    int a[] = {9, 8, 7, 6, 5, -4, -3, 2, -1, 10};
    int *point = a;
    printf(" total positive integer is %d\n", count(a, 10));
    
    return 0;
}