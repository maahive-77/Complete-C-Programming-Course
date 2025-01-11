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
    strcpy(e1.name, "maahi");
    e1.id_code = 1001;
    e1.salary = 500.0;
    printf("---------------------\n");
    printf("id_code = %d\nname = %s\nsalary = %.2f\n", e1.id_code, e1.name, e1.salary);
    printf("---------------------\n");
    strcpy(e2.name, "sanna");
    e2.id_code = 1002;
    e2.salary = 500.0;
    printf("id_code = %d\nname = %s\nsalary = %.2f\n", e2.id_code, e2.name, e2.salary);

    printf("---------------------\n");
    strcpy(e3.name, "moon");
    e3.id_code = 1003;
    e3.salary = 500.0;
    printf("id_code = %d\nname = %s\nsalary = %.2f\n", e3.id_code, e3.name, e3.salary);
    printf("---------------------");

    printf("\n");

    printf("Thank you!\n");
    printf("maahi..\n");
    return 0;
}