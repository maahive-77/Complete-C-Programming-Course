#include <stdio.h>

int main (){
    int a , b,c ;
    printf("enter  first num:");
    scanf("%d",&a);
    printf("enter  second num:");
    scanf("%d",&b);
    printf("enter  third num:");
    scanf("%d",&c);

    a>b?printf("a is greater."):printf("b is greater.");
    
    return 0;
}