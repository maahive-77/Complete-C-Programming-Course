#include <stdio.h>

int main()
{
    int marks[5];
    // reserve space to store 5 integers
    // we can go the way till marks[4]
    marks[0]= 45;
    marks[1]= 85; 
    marks[2]= 75;
    marks[3]= 95;
    marks[4]= 65;
    printf("marks 0 = %d\nmarks 1 = %d\n ",marks[0],marks[1]);

    return 0;
}