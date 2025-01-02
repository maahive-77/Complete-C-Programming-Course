#include <stdio.h>

int main() {
    // Declare variables
    int x = 10, y = 20;

    // Declare pointers
    int *ptr1, *ptr2;

    // 1. Assignment operation
    ptr1 = &x;  // Assign address of x to ptr1
    ptr2 = &y;  // Assign address of y to ptr2

    // Print values and addresses
    printf("Address of x: %p, Value of x: %d\n", ptr1, *ptr1);
    printf("Address of y: %p, Value of y: %d\n", ptr2, *ptr2);

    // 2. Dereferencing operation
    *ptr1 = 15;  // Change the value of x through ptr1
    *ptr2 = 25;  // Change the value of y through ptr2

    // Print updated values
    printf("Updated value of x: %d\n", x);
    printf("Updated value of y: %d\n", y);

    // 3. Address-of operation
    int **double_ptr = &ptr1; // Pointer to pointer
    printf("Address of ptr1: %p, Value pointed by double_ptr: %d\n", double_ptr, **double_ptr);

    // 4. Pointer arithmetic
    ptr1++;  // Increment pointer (for demonstration purposes)
    ptr2--;  // Decrement pointer (for demonstration purposes)

    // Print the values after pointer arithmetic
    printf("After increment, ptr1 points to: %p\n", ptr1);
    printf("After decrement, ptr2 points to: %p\n", ptr2);

    return 0;
}
