#include <stdio.h>

typedef struct vector
{
    int i;
    int j;
} V;
// 2 dimentional vector...
// V = struct vector .
V Sumvector(V v1, V v2);
V Sumvector(V v1, V v2)
{
    V v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}
int main()
{

    V v1 = {1, 2};
    V v2 = {3, 5};
    V v3 = Sumvector(v1, v2);

    printf("the value of vector v3 is %di + %dj\n", v3.i, v3.j);

    return 0;
}