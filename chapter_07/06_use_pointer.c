#include <stdio.h>

int main()
{

    int marks[] = {12, 32, 45, 60, 80, 95};

    // int * prt = &marks[1];
    int *prt = marks; //  same as int *prt = &marks[1];

    printf("----------------------\n");
    printf("without use pointer... get value...\n");
    printf("----------------------\n");
    for (int i = 0; i < 6; i++)
    {
        printf("the marks at index %d is %d\n", i, marks[i]);
    }

    printf("----------------------\n");
    printf("use pointer in array... get value...\n");
    printf("----------------------\n");

    for (int i = 0; i < 6; i++)
    {
        printf("the marks at index %d is %d\n", i, *prt);
        prt++;
    }

    return 0;
}