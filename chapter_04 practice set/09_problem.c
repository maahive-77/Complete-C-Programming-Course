#include <stdio.h>

int main (){
    //5! = 1*2*3*4*5
    //2! = 1*2
    int product = 1;
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for ( int  i = 1; i <=n; i++)
    {
        product *= i;

    }
    printf("the factorial of %d is %d",n,product);
    
    return 0; 
}