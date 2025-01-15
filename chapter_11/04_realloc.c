#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr;
    
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 3;
    printf("%d ", ptr[0]);

    ptr = (int *)realloc(ptr, 10 * sizeof(int)); // ye krne se mera size bd gya like phle arr[4] hota or ab arr[9] hoga...

    return 0;
}