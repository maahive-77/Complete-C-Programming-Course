#include <stdio.h>

// function prototype
 int sum(int, int); 
 
 // function definition
 int sum(int x,int y){ // x and y are parameters

    // printf("the sum is %d\n",x+y);
    return x+y;
 
 }

int main()
{
    int a = 1;
    int b = 5;

   
   int c= sum(a,b); // function call
   printf(" c = %d",c); 
    // int c = a+b;
    // printf("the sum of %d\n",c);

    int a1 = 4;
    int b1 = 6;

    sum(a1,b1); // function call
     
    // int c1 = a1 + b1;
    // printf("the sum of %d\n",c1);
    

    return 0;
}