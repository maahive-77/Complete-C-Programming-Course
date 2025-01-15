#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *arr;

    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    n = 10;
    arr = (int *)realloc(arr, 10 * sizeof(int)); // ye krne se mera size bd gya like phle arr[4] hota or ab arr[9] hoga...
    printf("\n------------\n");
    printf("Realloc");
    printf("\n------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}