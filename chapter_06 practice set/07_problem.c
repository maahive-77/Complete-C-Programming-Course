// Try problem 3 using call by value and verify that it does not change the value of the said variable.

#include <stdio.h>

void change(int);
void change(int  a)
{
    a = a + 1;  // i'm add  1 in a but  a is not increase because a Sending the values of arguments , send like a copy not a oringal value, this is called as call by value.
}
int main()
{
    int a = 4;
    printf("the value of a is %d\n", a);
    change(a); // the value does not change... 
    printf("the value of a is %d\n", a);

    return 0;
}