// Write a program to print the value of a variable i by using “pointer to pointer” type of variable.
#include <stdio.h>
int main()
{
    int i = 81;
    int *j;
    j = &i;
    int **k;
    k = &j;
    // printf("address of i = %u\n", &i);
    // printf("address of i = %u\n", j);
    // printf("address of j = %u\n", &j);
    printf("address of k = %u\n", k);
    printf("address of *k = i = %u\n", *k);
    printf("value of k = %d\n", **k);
    // printf("value of i= %d\n", i);
    // printf("value of i= %d\n", *(&i));
    // printf("value of i= %d\n", *j);
    return 0;
}