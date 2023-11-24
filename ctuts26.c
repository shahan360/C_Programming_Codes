#include <stdio.h>

int main()
{
    printf("Lets learn about pointers\n");
    int a=76;
    int *x = &a;
    int *xx = NULL;
    printf("The address of pointer to a is %p\n", &x);
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", x);
    printf("The address of some garbage is %p\n", xx);
    printf("The value of a is %d\n", *x);
    printf("The value of a is %d\n", a);
    return 0;
}
