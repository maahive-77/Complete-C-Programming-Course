#include <stdio.h>

void change(int*);
void change(int * a)
{
    *a = *a * 10;
}
int main()
{
    int a = 4;
    printf("the value of a is %d\n", a);
    change(&a); // &a ye address pointer ke pass jayega or oo pointer iska value le lega... 
    printf("the value of a is %d\n", a);

    return 0;
}