#include <stdio.h>

int main()
{
    int Age;
    printf("Enter Your Age :");
    scanf("%d", &Age);

    if (Age>60&&Age<=70)
    {
        printf("you can drive and you are a senoir citizen,\nso please drive slow speed below 40.");
    }
    else if (Age>=70)
    { 
       printf("you cannot drive\n Your Age is above 70. ") ;
    }
    
    else if (Age > 40)
    {
        printf("you can drive and you are elder.");
    }
    else if (Age >= 18)
    {

        printf("you can drive.");
    }
    else
    {
        printf("you cannot drive.");
    }

    return 0;
}
 