#include <stdio.h>
#include <stdlib.h>

int* functionDangling()
{
    int a, b, sum;
    a =34;
    b = 364;
    sum = a + b;
    return sum;
}

int main2()
{
    int *ptr= (int *) malloc(7* sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr);

    int * dangPtr = functionDangling();

    int * danglingPtr3;

    {
        int a = 12;

        danglingPtr3 = &a;
    }

    return 0;
}