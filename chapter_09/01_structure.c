#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];

}; // semicolon is improtant

int main()
{

    struct employee e1, e2;
    strcpy(e1.name, "maahi");
    e1.code = 1001;
    e1.salary = 500.0;
    printf("code = %d\nname = %s\nsalary = %.2f\n",e1.code,e1.name,e1.salary);
     
     printf("\n");
     
     printf("Thank you!\n");
     printf("maahi..\n");
    return 0;
}