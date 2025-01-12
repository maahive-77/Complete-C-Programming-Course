//  Create an array of 5 complex numbers created in Problem 5 and display them with the help of a display function. The values must be taken as an input from the user without using loops.

#include <stdio.h>
struct complex_number
{
    int real;
    int imaginary;
};

int main()
{

    struct complex_number c[5];
    printf("Enter the real part of the complex number 1: ");
    scanf("%d", &c[0].real);
    printf("Enter the imaginary part of the complex number 1: ");
    scanf("%d", &c[0].imaginary);
    printf("-------------------------\n");
    printf("Enter the real part of the complex number 2: ");
    scanf("%d", &c[1].real);
    printf("Enter the imaginary part of the complex number 2: ");
    scanf("%d", &c[1].imaginary);
    printf("-------------------------\n");
    printf("Enter the real part of the complex number 3: ");
    scanf("%d", &c[2].real);
    printf("Enter the imaginary part of the complex number 3: ");
    scanf("%d", &c[2].imaginary);
    printf("-------------------------\n");
    printf("Enter the real part of the complex number 4: ");
    scanf("%d", &c[3].real);
    printf("Enter the imaginary part of the complex number 4: ");
    scanf("%d", &c[3].imaginary);
    printf("-------------------------\n");
    printf("Enter the real part of the complex number 5: ");
    scanf("%d", &c[4].real);
    printf("Enter the imaginary part of the complex number 5: ");
    scanf("%d", &c[4].imaginary);
    printf("-------------------------\n");

    printf("The complex number 1 is: %d + %di\n", c[0].real, c[0].imaginary);
    printf("The complex number 2 is: %d + %di\n", c[1].real, c[1].imaginary);
    printf("The complex number 3 is: %d + %di\n", c[2].real, c[2].imaginary);
    printf("The complex number 4 is: %d + %di\n", c[3].real, c[3].imaginary);
    printf("The complex number 5 is: %d + %di\n", c[4].real, c[4].imaginary);
    printf("-------------------------\n");

    printf("Thank you!\n");
    printf("maahi..\n");

    return 0;
}