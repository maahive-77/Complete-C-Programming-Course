// Write a program with a structure representing a complex number.
#include <stdio.h>
typedef struct complex_number
{
    int real;
    int imaginary;
} complex;

int main()
{

    complex c1;
    complex *ptr = &c1;

    printf("Enter the real part of the complex number: ");
    scanf("%d", &ptr->real);
    printf("Enter the imaginary part of the complex number: ");
    scanf("%d", &ptr->imaginary);
    printf("The complex number is: %d + %di\n", ptr->real, ptr->imaginary);

    return 0;
}