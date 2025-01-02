#include <stdio.h>

int main (){
    int arr[10],num;
    printf("Enter the number :");
    scanf("%d",&num);
    for ( int i = 0; i <10; i++)
    {
        arr[i] = num*(i+1);
    }
    for ( int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n",num,i+1,arr[i]);   
    }
        printf("\n");
    
    return 0;
}