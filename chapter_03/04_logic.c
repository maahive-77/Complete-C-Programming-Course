#include <stdio.h>

int main (){
     // in c lang. [1] return ture  and [0] returns false.
    
    //    && (AND) → is true when both the conditions are true  
    //    || (OR) → is true when at least one of the conditions is true. (1 or 0 → 1) (1 or 1 → 1) 
   
    int a = 1 ,b = 1 ;
    // int a = 0 , b = 0;

    printf("the value of a and b is %d\n",a&&b);
    printf("the value of a or b is %d\n",a||b);
    printf("the value of not(a) is %d\n",!a);

    int c = 1 ,d = 0;
    // int c = 0 , d = 1;

    printf("the value of c and d is %d\n",c&&d);
    printf("the value of c or d is %d\n",c||d);
    printf("the value of not(d) is %d\n",!d);


      

    return 0;
}
