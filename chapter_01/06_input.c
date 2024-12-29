#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;
    c = '$';
    // ek user se input lene ke liye scanf ka use krna hai..
    scanf("%d", &a); // &  ampersent is a address of operator..
    scanf("%f", &b); // &  ampersent is a address of operator..
    // scanf("%c", &c); // &  ampersent is a address of operator..

    printf("the value of a is %d\n", a);
    printf("the value of b is %f\n", b);
    printf("the value of c is %c\n", c);
    return 0;
} 