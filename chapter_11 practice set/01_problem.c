#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *arr;
   
    arr = (int *)malloc(n * sizeof(int));
    arr[0] = 2;
    arr[1] = 4;
    arr[2] = 5;
    arr[3] = 6;
    arr[4] = 7;
    arr[5] = 1;
    printf("%d %d %d %d %d %d ", arr[0],arr[1],arr[2],arr[3],arr[4], arr[5]);
 

    // int arr[n]; not allow in c

    return 0;
}