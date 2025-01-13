#include <stdio.h>

int main (){
    FILE *fptr;
    fptr = fopen("maahi.txt","a");
    int num = 77;
    fprintf(fptr,"%d",num);
    
    fclose(fptr);
   
    
    return 0;
}