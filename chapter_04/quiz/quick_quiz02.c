#include <stdio.h>

int main (){
    int n;
    int i = 0;
    printf("enter natural num:");
    scanf("%d",&n);
    do
    {
        printf("the value of i is %d\n",i);
        i++;
    } while (i<=n); 
    
    return 0;
}