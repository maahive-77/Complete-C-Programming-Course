#include <stdio.h>

int main()
{
    int income;
    float tax = 0; // Use float for tax to get precise values

    printf("Enter income : \n");
    scanf("%d", &income);

    if (income <= 250000)
    {
        tax = 0;
    }
    else if (income > 250000 && income <= 500000)
    {
        tax = 0.05 * (income - 250000);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = 0.05 * (income - 250000) + 0.2 * (income - 500000);
    }
       else {
    tax = 0.05 * (income - 250000) + 0.2 * (income - 500000) + 0.3 * (income - 1000000); // Corrected
    }
    
    printf("The total tax you need to pay is %.2f\n", tax); // Use %.2f for decimal values


    // else if (income > 1000000)
    // {
    //     tax = 0.05 * (income - 250000) + 0.2 * (income - 500000) + 0.3 * (income - 1000000);
    // }
    //     printf("the total tax you need to pay is %.2f",tax);
 
    return 0;
}
