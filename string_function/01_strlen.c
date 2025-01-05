#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "hello sir\' good morning";
    char a1[] = "hello maahi\' good morning";
    // strlen string ko count krta hai..
    int count_strlen, count_strlen1;

    count_strlen = strlen(a);
    count_strlen1 = strlen(a1);
    printf("----------------------\n");
    printf("string = %s  | count_strlen = %d\n", a,count_strlen);
    printf("string = %s  | count_strlen1 = %d\n",a1,count_strlen1);
    
    return 0;
}