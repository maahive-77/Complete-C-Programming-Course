
//  use of pointer.. and call of reference
#include <stdio.h>

int prt(int *, int *);

int prt(int *x, int *y)
{
    int add = (*x + *y);
    printf("add = %d\n",add);
    return add;
}
int prt1(int *x, int *y)
{
    int subtract = (*x - *y);
    printf("subtract = %d\n",subtract);
    return subtract;
}
int prt2(int *x, int *y)
{
    int sub = (*x - 5);
    printf("subtract %d - 5 = %d\n",*x,sub);
    return sub;
}
int prt3(int *x, int *y)
{
    int comp = *x > *y;
    if (comp)
    {

    printf("comparision : %d is greater than %i \n");
    
    }
    
    return comp;
}

int main()
{
    int x = 9;
    printf("x =%d\n",x);
    int y = 2;
    printf("y =%d\n",y);
    prt(&x,&y);
    prt1(&x,&y);
    prt2(&x,&y);
    prt3(&x,&y);

    return 0;
}