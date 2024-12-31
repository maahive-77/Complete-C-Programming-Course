#include <stdio.h>

int main()
{

    int age;
    printf("enter age:");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("congratulation, your age is above 18, you able to vote.\n");
        printf("thanks you!");
    }
    else
    {
        printf("your age is under 18, so you able not to vote. \n");
        printf("thanks you!");
    }
    

    return 0;
}