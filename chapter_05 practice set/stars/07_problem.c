#include <stdio.h>

int main()
{
    int n = 4;
    for (int i =0; i <= n; i++)
    {
        // this loop runs from 0 to 5 ;
        // if i  = 0 ----> print one star ;
        // if i  = 1 ----> print three star ;
        // if i  = 2 ----> print five  star ;
        // if i  = 3 ----> print seven star ;
        
        
              // no_ of_stars = 2*i + 1
        // odd ke liye formula = 2*n + 1 hota hai 
         //even  ke liye formula = 2*n  hota hai 

        for (int j = 0; j < 2*i+1  ; j++)

            printf("*");

        printf("\n"); 
    }

    return 0;
}