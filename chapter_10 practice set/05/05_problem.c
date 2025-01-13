#include <stdio.h>

int main()
{
    FILE *fptr;
    int num1;
    fptr = fopen("int.txt", "r");
    fscanf(fptr, "%d", &num1);
    
    fclose(fptr);

    fptr = fopen("int.txt", "w");
    fprintf(fptr, "%d", 2*num1);
    fclose(fptr);

    return 0;
}