#include <stdio.h>

int main (){
    FILE *ptr;
    char name1[10], name2[10] ;
    int salary , salary1;
    ptr = fopen("maahi.txt", "w");

    printf("Enter the name: \n");
    scanf("%s",&name1);

    printf("Enter tne salary: ");
    scanf("%d", &salary);

    printf("Enter the name 2:  \n");
    scanf("%s",&name2);

    printf("Enter tne salary 2: ");
    scanf("%d", &salary1);

    fprintf(ptr,"%s", name1);
    fprintf(ptr,"%s", ",");
    fprintf(ptr,"%d", salary);
    fprintf(ptr , "%s", "\n");
    fprintf(ptr,"%s", name2);
    fprintf(ptr,"%s", ",");
    fprintf(ptr,"%d", salary1);




    return 0;
}