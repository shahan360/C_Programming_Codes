#include <stdio.h>
#include <string.h>
int main()
{
    int a = 34;
    // int *ptr = &a;
    int *ptr = NULL;

    if (ptr != NULL){
        printf("The address of a is %d\n", ptr);
    }
    else{
        printf("The pointer is a null pointer and cannot be dereferenced");
    }

    return 0;
}