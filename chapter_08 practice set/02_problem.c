//Q02. rite a program to take string as an input from the user using %c and %s confirm that the strings are equal. 

#include <stdio.h>

int main()
{
    char str[6];
    // scanf("%s",str);
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin); // ye us  isliye kye kyu ke jb hum enter krte h to ye enterr key ko bhi read kr le rha islye hum use kiye h ki ye flush kr de 
    } 
    str[5] = '\0';
    printf("%s", str);

    return 0;
}