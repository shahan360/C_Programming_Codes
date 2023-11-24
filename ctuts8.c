#include <stdio.h>

int main()
{
     int a,i;
    printf("Enter the number for which the multiplication table is required  \n");
    scanf("%d", &a);
    printf("The Table is :- \n");
    for ( i = 1; i < 11; i++)
    {
        printf("%d*%d=%d\n",a,i,a*i);
    }
    return 0;
}
