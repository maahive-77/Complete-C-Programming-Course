#include <stdio.h>
int factorial(int);

    // factorial(5) = 1x2x3x4x5
    // factorial(4) = 1x2x3x4
    // factorial(3) = 1x2x3
    // factorial(n) = 1x2x3...x n-1 x n
    // factorial(n-1) = 1x2x3...x n-1
    
int factorial(int n){
   
    if ( n==1 || n==0)
    {
      // base case \ condition
        return 1;
    }
    
    // factorial(n) = factorial(n-1)x n;

    return factorial(n-1)* n;

}
int main (){

    int a;
    printf("enter your num :");
    scanf("%d",&a);
    printf("the factoril  of %d is %d", a ,factorial(a));

    return 0;
}