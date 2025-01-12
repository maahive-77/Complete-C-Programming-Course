// Write a program with a structure representing a complex number.
#include <stdio.h>
typedef struct complex_number
{
   int real;
   int imaginary;
} complex;

int main()
{

   // struct complex_number c1;
   // struct complex_number *ptr = &c1;

   // printf("Enter the real part of the complex number: ");
   // scanf("%d", &ptr->real);
   // printf("Enter the imaginary part of the complex number: ");
   // scanf("%d", &ptr->imaginary);
   // printf("The complex number is: %d + %di\n", ptr->real, ptr->imaginary);

   complex c = {1, 2};
   printf("The complex number is: %d + %di\n", c.real, c.imaginary);

   return 0;
}