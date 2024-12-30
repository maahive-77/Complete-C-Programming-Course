#include <stdio.h>

int main (){
    // int + int = int 
    
    int a = 5;
    int b = 2;
    int c = (a/b);

    printf("the divide of a and b is %d\n",c);

    // float + float = float 
    float d = 5.0;
    float e = 2.0;
    float f = (d/e);
    printf("the divide of a and b is %f\n",f);

    float q = 2.0;
    int p = 4;

    // int + float = float 
    // 2+2.0 = 0  %d krte hai to zero aa rha hai 
    //  2 + 2.0 = 4.000000 %f krte hia to shi de rha hai answer 

    printf("the divide of int and float is %d\n",q/p);
    printf("the divide of int and float is %f\n",p/q);

    int r = 5.3;
    // demotion ho gs yeha 5.3 = 5 kr diya ye compile.

    printf("the value of d is %d",r);

    return 0;
}