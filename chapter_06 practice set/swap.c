#include <stdio.h>

void swap(int* a, int* b);
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    // swapping...
    int a = 3, b = 5;
    swap(&a,&b); // swap krne ke liye appko address lena hoga...  variable ka okay..
    printf("the value of a is %d and  the value of b %d\n",a,b);
    return 0;
}