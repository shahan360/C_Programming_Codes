#include <stdio.h>
#include "ctuts54.c"
#define PI 3.14
#define SQUARE(r)
int main()
{
    float var = PI;
    int r = 4;
    int *ptr = functionDangling();
    printf("The value of PI is %f\n",var);
    printf("The area of the circle is %f\n",PI * SQUARE(r));
    return 0;
}