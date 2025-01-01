#include <stdio.h>
#include <math.h> // Include math library for pow()

int main() {
    double side, area;

    printf("Enter the side of the square: ");
    scanf("%lf", &side);

    // Use pow function to calculate the square of the side
    area = pow(side, 2);

    printf("The area of the square is: %.2lf\n", area);

    return 0;
}
