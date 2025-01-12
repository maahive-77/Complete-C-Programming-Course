#include <stdio.h>

 typedef struct  vector
{
    int i ,j;
} vec;
 // 2 dimentional vector...
int main (){

    vec v  = {1,2};
    printf("the value of vector is %di + %dj\n", v);
    
    return 0;
}