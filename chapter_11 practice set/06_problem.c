#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *arr;
    int a = 7;

    arr = (int *)calloc(n,sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        arr[i] = a * i; // ye krne se error aayega kyuki arr[10] hoga or hum 10 tk hi access kr skte hain

        printf(" %d x %d = %d\n", a, i, arr[i]);
    }
    n = 15;
    arr = (int *)realloc(arr, 10 * sizeof(int)); // ye krne se mera size bd gya like phle arr[4] hota or ab arr[9] hoga...
    printf("\n------------\n");
    printf("Realloc");
    printf("\n------------\n");
    for (size_t i = 1; i <= n; i++)
    {
        arr[i] = a * i;
        printf("%d x %d = %d\n ",a,i,arr[i]);
    }
    return 0;
}