#include <stdio.h>

int main (){
    int a = 2 ,b = 555,c = 41,d = 52 ;
    if (a>b && a>c && a>d )
    {
        printf("the greatest of all is %d",a);
    }
    else if(b>a && b>c && b>d )
    {
        printf("the greatest of all is %d",b);
    }
    else if(c>a && c>b && c>d )
    {
        printf("the greatest of all is %d",c);
    }
    else if(d>a && d>b && d>c)
    {
        printf("the greatest of all is %d",d);
    }
    
    return 0;
}