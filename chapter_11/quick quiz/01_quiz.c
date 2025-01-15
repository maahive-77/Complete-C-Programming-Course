#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 5;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));
    ptr[0] = 20;
    ptr[1] = 41;
    ptr[2] = 55;
    ptr[3] = 6;
    ptr[4] = 7;
    printf("%.1f %.1f %.1f %.1f %.1f ", ptr[0],ptr[1],ptr[2],ptr[3],ptr[4]);
    return 0;
}