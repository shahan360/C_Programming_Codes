#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 4345;
    int *ptr;
    // *ptr = 343;
    ptr = &a;
    printf("The value of a is %d\n", *ptr);
    return 0;
}