#include <stdio.h>

int main (){
    int a =3; int b = 6; int c = 2;

    printf("the value is %d\n",a*c/b*b+5%c);
   
    printf("the value is %d\n",a*b/c);
    
    printf("the value is %d\n",5*b/2*c+5*a);
    /* 5*b/2*c+5*a
    = 5*6/2*c+5*3 
    =30/2*2+15
    =15*2+15
    =30+15
    =45

    */
    return 0;
}