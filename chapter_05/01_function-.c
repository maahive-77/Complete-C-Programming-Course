#include <stdio.h>
int sum(int a, int b)
{ // a and b are parameters
    int c;
    c = a + b;
    printf("the sum is %d\n",c);
    return c;
}
// Now we can call sum (2,3); from main to get 5 in return. Here 2 & 3 are
// arguments.
int main()
{
    int d = sum(2, 3); // d becomes 5
   
}