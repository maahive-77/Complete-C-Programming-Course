#include <stdio.h>

int main()
{
    int a = 4;

    printf(" a =%d %d %d \n", a, ++a, a++); // 6  6  4

    // printf(" a= %d %d %d \n", a++, ++a, a); // 5 6 6
    // 6 6 4 both the answer are correct  evalution order ( left to right to ye hoga )
    // define ho to 4 5 5 answer aayega
    // or not define to  compiler kud detect kr lega 6 6 4

    {
        int a = 4;
        printf("%d ", a);     // 4
        printf("%d ", ++a);   // 5
        printf("%d \n", a++); // 5
       
    // define ho to 4 5 5 answer aayega
    }

    return 0;
}