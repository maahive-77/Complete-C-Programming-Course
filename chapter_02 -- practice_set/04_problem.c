#include <stdio.h>

int main (){
    int x = 2,y = 3 ,z = 3, k = 1;
    int solve = 3*x/y - z+k ;

    // 3*x/y - z+k
    // 3*2/3 - 3+1
    // 6/3-2
    // 2-2
    // 0

    printf(" the answer is %d\n",solve); 

    // extra  
    float a = 2.5/3;
    printf("the value is %f\n",a);
    // output : 0.833333
    printf("the value is %.2f\n",a);
    // output : 0.83


    return 0;
}