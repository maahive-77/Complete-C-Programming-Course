#include <stdio.h>
#include <string.h>
int main()
{
    char s1[10] = "Stone ";

    char s2[] = "my bacha"; 

    strcat(s1,s2);  // s1 now contain "my bacha stone"
    printf("%s",s1);
    

    return 0;
}