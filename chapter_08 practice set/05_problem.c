// Q05. Write your own version of strcpy function from <string.h>

#include <stdio.h>

int mystrlen(char str[])
{

    int i = 0, count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;

    return count;
}

void mystrcpy(char Copy_Source[], char Source[])
{
    for (int i = 0; i < mystrlen(Source); i++)
    {
        Copy_Source[i] = Source[i];
    }
    Copy_Source[mystrlen(Source)] = '\0';
}
int main()
{
    char Source[] = "Stone";
    char Copy_Source[30];
    mystrcpy(Copy_Source, Source);
    printf("Source: %s | Copy_Source: %s", Source, Copy_Source);
    return 0;
}