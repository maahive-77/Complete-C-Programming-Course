 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    printf("Enter n:");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    ptr[0] = 2;
    printf("%d ", ptr[0]);
    free(ptr);
    // int arr[n]; not allow in c

    return 0;
}