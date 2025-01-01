#include <stdio.h>

int main (){
    int sum = 0;
    int i = 1;
    while ( i <=10)
    {
        sum += i;
        i++;
        printf("the sum of %d first natural number is %d\n",i,sum);
    }
    
    /* for ( int i = 1; i<=10; i++)
    {
        sum += i;
        printf("the sum of first 10 natural number is %d\n",sum);
    }
    */
    return 0;
}