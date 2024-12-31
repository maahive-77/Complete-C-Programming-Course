#include <stdio.h>

int main (){
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);

    if (marks<=100 && marks>=90)
    {
        printf("grade = A");
    }
    else if (marks<=90 && marks>=80)
    {
        printf("grade = B");
    }
    else if (marks<=80 && marks>=70)
    {
        printf("grade = c");
    }
    else if (marks<=70 && marks>=55)
    {
        printf("grade = D");
    }
    else if (marks<=55 && marks>=40)
    {
        printf("grade = E");
    }
    else if (marks<=40 && marks>=0)
    {
        printf("grade = Fail");   
    }
    else{
        printf("Enter your valid marks");
    }
    
    
    return 0;
}