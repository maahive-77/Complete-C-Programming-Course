#include <stdio.h>

int main()
{   int a,b,c;
printf("Enter a b c :");
    scanf("%d %d %d",&a,&b,&c);
    int arr[3][10];
    int mul[] = {a,b,c};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }
    printf("Table of %d, %d , %d.\n",a,b,c);
    printf("----------------------\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n-----------------------");
        printf("\n");
    }

    return 0;
} 