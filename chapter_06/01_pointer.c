#include <stdio.h>

// %p use pointer and %u bhi address kr skte h (unsign integers) 

int main (){
    int i = 70 ; 
    int * j = &i; // j is a pointer pointing to i 
    printf("p = %p\n",*j); // value 
    printf("*(&j) = %p\n",*(&j)); // address
    printf("p = %p\n",j); // address 
    printf("the address of i is %p\n",&i); // address
    printf("the address of i is %u",&i); // int me address
    return 0;
}