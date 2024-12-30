#include <stdio.h>

int main (){
    
    int k = 3.0/9;

    printf("%d",k);  //answer is = 0

    /* 3.0/9 = 0.333, but k is  an int , so the answer will be 0, 
    it cannot store float and 0.333 is demoted to  0.  */


    return 0;
}