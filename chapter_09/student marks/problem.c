#include <stdio.h>

    struct student {
        char name[50];
        int roll;
        float marks;
    };
int main (){
    struct student s[10];
    int i;
    for (i = 0; i < 10; i++){
        printf("Enter information of student %d\n", i+1);
        printf("-----------------------------\n");
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
        printf("-----------------------------\n");
        
    }
    printf("----------------------------------\n");
    printf("Displaying information of students\n");
    printf("----------------------------------\n");

    for (i = 0; i < 10; i++){
        printf("-----------------------------\n");
        printf("Information of student %d\n", i+1);
        printf("-----------------------------\n");
        printf("Name: %s\n", s[i].name);
        printf("Roll number: %d\n", s[i].roll);
        printf("Marks: %.2f\n", s[i].marks);
    }
     printf("-----------------------------\n");
    
    printf("\n");
    
    printf("Thank you!\n");
    printf("maahi..\n");


    
    return 0;
}