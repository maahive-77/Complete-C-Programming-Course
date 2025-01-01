 #include <stdio.h>
int main()
{
    int i = 8;
    int *j;
    j = &i;
    int **k;
    k = &j;
    printf("add i = %u\n", &i);
    printf("add i = %u\n", j);
    printf("add j = %u\n", &j);
    printf("add k = %u\n", k);
    printf("add *k = i = %u\n", *k);

    printf("value k = %d\n", **k); 

    printf("value i= %d\n", i);
    printf("value i= %d\n", *(&i));
    printf("value i= %d\n", *j);

    

    return 0;

}