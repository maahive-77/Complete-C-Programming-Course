#include <stdio.h>
#include <string.h>

int main (){
    char source[] = "pagal";
    char target[20];
    strcpy(target,source);
    printf("----------------\n");
    printf("source string = %s\n",source);
    printf("target string = %s\n",target);

    return 0;
}