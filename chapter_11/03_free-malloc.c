 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    printf("Enter n:");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));  // n = 4 to ye utne size ka arr bna dega arr[3] tk..
    ptr[0] = 2;
    free(ptr);          // yeha ye garbage value dega.
    printf("%d ", ptr[0]);  
    // int arr[n]; not allow in c

    return 0;
}