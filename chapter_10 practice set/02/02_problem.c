#include <stdio.h>

int main()
{
    FILE *fptr;
    int num = 5 ;
    fptr = fopen("table.txt", "w");
    for ( int i = 1; i <=10; i++)
    {
        fprintf(fptr,"%d x %d = %d\n",num , i ,num*i);

    }

    

    fclose(fptr);

    return 0;
}