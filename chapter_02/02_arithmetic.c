#include <stdio.h>

int main (){
    int a = -6;
    int b = 5 ;
    int sum = a+b ;
    int substract = a-b ;
    int multiply = a*b ;
    int divide = a/b ;
    int modulus = a%b ; // modulus operator is used to get the remainder.
    
    
    /*this is not work for exponentiation in c .
           int b = a^c;   invalid 
           pow (a,c); valid 
     */ 
    


    printf("the value of a is %d and value of b is %d and sum is %d\n",a ,b,sum);
    printf("the value of a is %d and value of b is %d and substract is %d\n",a ,b,substract);
    printf("the value of a is %d and value of b is %d and multiply is %d\n",a ,b,multiply);
    printf("the value of a is %d and value of b is %d and divide is %d\n",a ,b,divide);
    printf("the remainder when a = %d divided by b = %d is: %d",a ,b,modulus);


    return 0;
}