#include <stdio.h>

int main()
{
    int Age;
    printf("Enter Your Age :");
    scanf("%d", &Age);

    if (Age > 60)
    {
        printf("you can drive and you are a senoir citizen,\nso please drive slow speed below 40.");
    }
    else if (Age >= 18)
    {

        printf("you can drive");
    }
    else
    {
        printf("you cannot drive.");
    }

    return 0;
}