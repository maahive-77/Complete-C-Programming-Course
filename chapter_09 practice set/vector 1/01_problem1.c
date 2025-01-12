#include <stdio.h>

struct  vector
{
    int i ,j;
    int a ,b ;
};
 // 2 dimentional vector...
int main (){
    struct vector v;
    v.i = 1;
    v.j = 2;

    struct vector v2;
    struct vector a = {2, 3};
 
        
    printf("the value of vector is %da + %db\n",a);
    printf("the value of vector is %di + %dj\n", v.i, v.j);
    
    return 0;
}