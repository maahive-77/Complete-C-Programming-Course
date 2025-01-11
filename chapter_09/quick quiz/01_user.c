#include <stdio.h>
#include <string.h>
struct employee
{
    int id_code;
    float salary;
    char name[10];

}; // semicolon is improtant

int main()
{

    struct employee e1, e2, e3;
    printf("Enter the id_code of e1: ");
    scanf("%d", &e1.id_code);
    printf("Enter the salary of e1: ");
    scanf("%f", &e1.salary);
    printf("Enter the name of e1: ");
    scanf("%s", e1.name);
    printf("---------------------\n");
    printf("Enter the id_code of e2: ");
    scanf("%d", &e2.id_code);
    printf("Enter the salary of e2: ");
    scanf("%f", &e2.salary);
    printf("Enter the name of e2: ");
    scanf("%s", e2.name);
    printf("---------------------\n");
    printf("Enter the id_code of e3: ");
    scanf("%d", &e3.id_code);
    printf("Enter the salary of e3: ");
    scanf("%f", &e3.salary);
    printf("Enter the name of e3: ");
    scanf("%s", e3.name);
    printf("----------------------------------------\n");
    printf("The details of employees are as follows:\n");
    printf("---------------------\n");
    printf("id_code = %d\nname = %s\nsalary = %.2f\n", e1.id_code, e1.name, e1.salary);
    printf("---------------------\n");
    printf("id_code = %d\nname = %s\nsalary = %.2f\n", e2.id_code, e2.name, e2.salary);
    printf("---------------------\n");
    printf("id_code = %d\nname = %s\nsalary = %.2f\n", e3.id_code, e3.name, e3.salary);
    printf("---------------------");

    printf("\n");

    printf("Thank you!\n");
    printf("maahi..\n");

    return 0;
}