#include <stdio.h>

int main()
{
    // float  p = 34.0;
    // int rate = 8;
    // 
    // int time = 5;

    //printf("the value of simple interest is %f",(p*rate*time)/100);


    float p;
    int  r, t;

    printf("enter principle:\n");
    scanf("%f", &p);
 
    printf("enter rate:\n");
    scanf("%d", &r);

    printf("enter time:\n");
    scanf("%d", &t);

    printf("the value of simple interest is %f", (p*r*t)/100);
 
    return 0;
}