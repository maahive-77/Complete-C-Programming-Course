#include <stdio.h>
#include <string.h>
struct student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct student s[10];
    s[0].roll = 1;
    s[1].roll = 2;
    s[2].roll = 3;
    s[3].roll = 4;
    s[4].roll = 5;
    s[5].roll = 6;
    s[6].roll = 7;
    s[7].roll = 8;
    s[8].roll = 9;
    s[9].roll = 10;
    s[0].marks = 100;
    s[1].marks = 99;
    s[2].marks = 98;
    s[3].marks = 97;
    s[4].marks = 96;
    s[5].marks = 95;
    s[6].marks = 94;
    s[7].marks = 93;
    s[8].marks = 92;
    s[9].marks = 91;
    strcpy(s[0].name, "Maahi");
    strcpy(s[1].name, "Rahul");
    strcpy(s[2].name, "Rohit");
    strcpy(s[3].name, "Raj");   
    strcpy(s[4].name, "Ravi");
    strcpy(s[5].name, "Rajesh");
    strcpy(s[6].name, "sonal");
    strcpy(s[7].name, "moon");
    strcpy(s[8].name, "sanna");
    strcpy(s[9].name, "pallavi");


    printf("--------------------\n");
    printf("Roll: %d, Marks: %.2f,Name:%s\n", s[0].roll, s[0].marks,s[0].name);
    printf("-----------------------------\n");
    printf("Roll: %d, Marks: %.2f,Name:%s\n", s[1].roll, s[1].marks,s[1].name);
    printf("-----------------------------\n");
    printf("Roll: %d, Marks: %.2f,Name:%s\n", s[2].roll, s[2].marks,s[2].name);
    printf("-----------------------------\n");
    printf("Roll: %d, Marks: %.2f,Name:%s\n", s[3].roll, s[3].marks,s[3].name);
    printf("-----------------------------\n");
    printf("Roll: %d, Marks: %.2f,Name:%s\n", s[4].roll, s[4].marks,s[4].name);
    printf("-----------------------------\n");
    printf("Roll: %d, Marks: %.2f,Name:%s\n", s[5].roll, s[5].marks,s[5].name);
    printf("-----------------------------\n");
    printf("Roll: %d, Marks: %.2f,Name:%s\n", s[6].roll, s[6].marks,s[6].name);
    printf("-----------------------------\n");
    printf("Roll: %d, Marks: %.2f,Name:%s\n", s[7].roll, s[7].marks,s[7].name);
    printf("-----------------------------\n");
    printf("Roll: %d, Marks: %.2f,Name:%s\n", s[8].roll, s[8].marks,s[8].name);
    printf("-----------------------------\n");
    printf("Roll: %d, Marks: %.2f,Name:%s\n", s[9].roll, s[9].marks,s[9].name);
    printf("-----------------------------\n");

    printf("\n");

    printf("Thank you!\n"); 
    printf("maahi..\n");
    return 0;
}