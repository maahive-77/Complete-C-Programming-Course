#include <stdio.h>

int main()
{   // Topic -  Pointer Arithmetic
    int i = 32;
    int *a = &i; // a = 87994
    a++;         // address of i or value of a = 87998

    char a = 'A';
    char *b = &a; // a= 87994
    b++;          // now a = 87995
    float i = 1.7;
    float *a = &i;
    a++;
    return 0;

}