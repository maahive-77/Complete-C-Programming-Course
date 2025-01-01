#include <stdio.h>

int main (){
    int i=5;
    printf("the value of i is %d\n",i);

    i = i+5; // 10
    printf("the value of i+5 is %d\n",i);

    i++; // 11
    printf("the value of i++ is %d\n",i); 
    printf("the value of i++ is %d\n",i++); // i = 11
    printf("the value of i is %d\n",i); // i = 12

    ++i; // 13
    printf("the value of ++i is %d\n",i);
   
    

    // i++ print i first then increments i (post increments operator)
    // ++i increments i first then prints i (per increments operator)

    return 0; 
}
 