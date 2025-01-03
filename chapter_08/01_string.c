#include <stdio.h>

int main()
{
    char string[] = {'a', 'b', 'c', '\0'};
    char st[] = "abc"; // same as  above char.
    
    for (int i = 0; i < 3; i++)
    {
        printf("character is % c \n", string[i]);
    }
    printf("-----------------------\n");

    //  double quote & print using loop..
    for (int j = 0; j < 3; j++)  
    {
        printf("%c\n", st[j]);
    }
    printf("----------------------\n");


    printf("%s",st);
    

    return 0;
}