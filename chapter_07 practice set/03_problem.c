#include <stdio.h>

int main()
{
    // Write a program to create an array of 10 integers and store multiplication table of 5 in it.
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("5 X %d = %d\n",i + 1, arr[i]);
    }

    printf(" \n");

    return 0;
}