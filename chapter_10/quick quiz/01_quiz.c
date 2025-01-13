#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("maahi.txt", "r"); // file exist 
    // ptr = fopen("maahi.txt", "r"); // file  dose no exist 
    if (ptr == NULL)
    {
        printf("the file dose no exist sorry! \n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("the value of num is %d \n", num);

        fscanf(ptr, "%d", &num);
        printf("the value of num is %d \n", num);
        fclose(ptr);
    }

    return 0;
}