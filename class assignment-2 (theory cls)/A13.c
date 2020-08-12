#include<stdio.h>
int main()
{
    int a , x , result;

    printf("enter the value of a: ");
    scanf("%d",&a);

    printf("enter the power value of x: ");
    scanf("%d",&x);

    result = pow( a , x);
    printf("answer : %d",result);

    return 0;

}
