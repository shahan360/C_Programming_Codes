#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){
    return a+b;
}

int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1,2));
    int (*fPtr)(int,int);
    fPtr = &sum;
    int d = (*fPtr)(4,6);
    printf("The value of d is %d\n", d);
    return 0;
}