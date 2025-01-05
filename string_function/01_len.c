// a look like of the function strlen().

#include <stdio.h>

int mystrlen(char * );
int mystrlen(char * s){
    int count_strlen = 0;
    while ( *s !='\0')
    {
        count_strlen++;
        s++;
    }
    return (count_strlen);
    
}

int main()
{
    char a[] = "hello ji\' good morning";
    char a1[] = "hello maahi\' good morning";
    // strlen string ko count krta hai..
    int count_strlen, count_strlen1;

    count_strlen = mystrlen(a);
    count_strlen1 = mystrlen(a1);
    printf("----------------------\n");
    printf("string = %s  | count_strlen = %d\n", a,count_strlen);
    printf("string = %s  | count_strlen1 = %d\n",a1,count_strlen1);
    
    return 0;
}