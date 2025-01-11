#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];

}; // semicolon is improtant

int main (){
    
    struct  employee e1;
    e1.code = 66;
    struct  employee *ptr;
    
    ptr = &e1;
    printf("%d\n",(*ptr).code);
    

    // arrow operator;
    printf("%d\n",ptr->code); // exactly same as (*ptr).code;


    return 0;
}