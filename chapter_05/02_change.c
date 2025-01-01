#include <stdio.h>
// If the passed variable is changed inside the function, the function call doesn’t
// change the value in the calling function.

int change(int a)
{
    a = 77; // Misnomer - ye change n hoga
    // a = 77 no chng but  only a likhe to a ka value 22  hoga. 
    printf(" a = %d\n",a);
    return a;
}
// ‘change’ is a function which pretends to change ‘a’ to 77. Now if we call it from main
//  like this

int main()
{
    int b = 22;
    change(b); // The value of b remains 22
    printf("b is %d", b);
    // This happens because a copy of ‘b’ is passed to the change function.

    return 0;
}