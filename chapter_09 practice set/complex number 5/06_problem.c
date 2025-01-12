// Create an array of 5 complex numbers created in Problem 5 and display them with the help of a display function. The values must be taken as an input from the user
#include <stdio.h>
typedef struct complex_number
{
    int real;
    int imaginary;
} complex;

int main()
{

    complex c[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real part of the complex number %d: ", i + 1);
        scanf("%d", &c[i].real);
        printf("Enter the imaginary part of the complex number %d: ", i + 1);
        scanf("%d", &c[i].imaginary);
        printf("-------------------------\n");
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The complex number %d is: %d + %di\n", i + 1, c[i].real, c[i].imaginary);
    }

    printf("-------------------------");
    printf("\n");

    printf("Thank you!\n");
    printf("maahi..\n");
    return 0;
}