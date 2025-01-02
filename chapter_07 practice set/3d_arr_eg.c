#include <stdio.h>

int main()
{
    int arr[1][2][3];
    //  arr[3][2]  -- [3] ye row  and [2] ye column

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("Enter the value of arr[%d][%d]\n", i, j);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    printf("---------------\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
        }
        printf("\n");
    }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("the value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
    //     }
    // }

    return 0;
}