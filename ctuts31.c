#include <stdio.h>
void addsubtract(int *a, int *b){
    int temp1;
    int temp2;
    temp1 = *a+*b;
    temp2 = *a-*b;
    printf("The value of a now is %d\n", temp1);
    printf("The value of b now is %d\n", temp2);
}
int main()
{
    int a = 4, b =3;
    printf("The value of a now is %d\n", a);
    printf("The value of b now is %d\n", b);
    addsubtract(&a,&b);
    return 0;
}
