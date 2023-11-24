#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr = NULL;
    char string[64]="This content was produced by Tutorial64.c";
    // ptr = fopen("myfile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content of this file has %s\n",string);

    ptr = fopen("myfile.txt","a");
    fprintf(ptr,"%s",string);
    return 0;
}