#include <stdio.h>

int main()
{   // type declaration method :

    int r = 10 ; // declare and initialize 'i' with 10 

    int w = r;
    int q = 2, t = 3, y = 4 , u = 5 ; 
    // %d is called format specifier 
    // %d is for int , %f is for float , %c is for char 
    printf("the value of i is %d and value of j is %d\n",r,w ) ;
    printf("the value of q is %d and value of t is %d\n",q, t ) ;
    printf("the value of y is %d and value of u is %d\n",y , u  ); 
/*

    int a;                          // Declare an integer variable 'a'
    float b;                        // Declare a float variable 'b'
    int i = 10;                     // Declare and initialize 'i' with 10
    int j = i;                      // Declare 'j' and initialize with 'i'
    int a = 2, b = 3, c = 4, d = 5; // Declare and initialize multiple variables
    int j1 = a + j - i;             // Valid: use previously defined variables
    // Invalid: 'a' is used before declaration
    // float b = a + 3;
    // float a = 1.1;
    // Valid: Assigning the same value to multiple variables
    int a, b, c, d;
    a = b = c = d = 30; // a, b, c, d all equal to 30 */
    return 0;
}