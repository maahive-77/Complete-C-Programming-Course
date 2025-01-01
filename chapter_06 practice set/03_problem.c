#include <stdio.h>
// write a function and pass the value by reference.
void change(int*);
void change(int * a)
{
    *a = *a + 1; 
}
int main()
{
    int a = 4;
    printf("the value of a is %d\n", a);
    change(&a); // &a ye address pointer ke pass jayega or oo pointer iska value le lega... 
    printf("the value of a is %d\n", a);

    return 0;
}