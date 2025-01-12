#include <stdio.h>
#include <string.h>

typedef struct stu
{
    int roll_no;
    int marks;
    char name[20];
}student;
int main (){
    student stu1;
    student *ptr = &stu1;

    printf("roll no = %d\n",ptr->roll_no = 1);
    strcpy(ptr->name, "Rahul");
    printf("name = %s\n",ptr->name);
    printf("marks = %d\n",ptr->marks = 45);
    
    return 0;
}