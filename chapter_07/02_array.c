#include <stdio.h>

int main()
{
    int marks[5];
    printf("Enter marks of 5 Students:\n");
    // scanf("%d",&marks[0]);
    // scanf("%d",&marks[1]);
    // scanf("%d",&marks[2]);
    // scanf("%d",&marks[3]);
    // scanf("%d",&marks[4]);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    

    printf("------------------------\n");
    printf("%d %d %d %d %d", marks[0], marks[1], marks[2], marks[3], marks[4]);
    return 0;
}