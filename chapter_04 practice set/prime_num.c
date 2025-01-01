#include <stdio.h>

int main() {
    int prime = 4; // Number to check
    int isPrime = 1; // Assume the number is prime

    // Check divisors from 2 to prime / 2
    for (int i = 2; i <= prime / 2; i++) {
        if (prime % i == 0) { 
            isPrime = 0; // Found a divisor, not a prime number
            break; // Exit the loop early
        }
    }

    // Output the result
    if (prime > 1 && isPrime) {
        printf("%d is a prime number\n", prime);
    } else {
        printf("%d is not a prime number\n", prime);
    }

    return 0;
}
