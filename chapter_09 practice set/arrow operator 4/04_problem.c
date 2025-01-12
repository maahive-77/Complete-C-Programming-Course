#include <stdio.h>

typedef struct student
{
    int roll_no;
    int marks;
}stu;
int main (){
    stu *ptr, *ptr1; 
    stu s1 = {1, 45}; // s1 is a variable of type stu {1, 45} 1 is roll_no and 45 is marks
    stu s2 = {2, 55};
    ptr = &s1;
    ptr1 = &s2;
    printf("The roll number of student is %d\n", ptr->roll_no);
    printf("The marks of student is %d\n", ptr->marks);
    printf("The roll number of student is %d\n", ptr1->roll_no);
    printf("The marks of student is %d\n", ptr1->marks);

    return 0;
}