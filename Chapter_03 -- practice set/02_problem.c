#include <stdio.h>

int main()
{
    int marks_1, marks_2, marks_3;
    printf("Enter marks_1 : ");
    scanf("%d", &marks_1);
    printf("Enter  marks_2 : ");
    scanf("%d", &marks_2);
    printf("Enter  marks_3 : ");
    scanf("%d", &marks_3);
    printf(" the marks are %d %d and %d\n", marks_1, marks_2, marks_3);
    if (marks_1 < 33 || marks_2 < 33 || marks_3 < 33)
    {
        printf(" you are failed due to your marks less than 33 in individual subject's\n");
    }
    else if ((marks_1 + marks_2 + marks_3) / 3 < (40))
    {
        printf(" you are failed due to precentage less than 40\n");
    }
    else
    {
        printf(" you are passed !\n");
    }

    return 0; 
}
