// Write a program to decrypt the string encrypted using encrypt function in problem 6.

#include <stdio.h>
#include <string.h>

int main (){
    char str[] ="nz!cbdib!tupof!";
    for ( int i = 0; i <  strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }
    printf("%s", str);
    
    return 0;
}
