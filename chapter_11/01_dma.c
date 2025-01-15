#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    printf("Enter n:");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 2;
    ptr[1] = 4;
    ptr[2] = 5;
    ptr[3] = 6;
    ptr[4] = 7;
 printf("%d %d %d %d %d ", ptr[0],ptr[1],ptr[2],ptr[3],ptr[4]);
 

    // int arr[n]; not allow in c

    return 0;
}