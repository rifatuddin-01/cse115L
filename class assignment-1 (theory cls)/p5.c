#include<stdio.h>
int main()
{
    int a , b , c , temp;
    printf("enter value for a b & c: ");
    scanf("%d %d %d",&a , &b , &c);

    printf("value before swap are\n a=%d\n b=%d\n c=%d\n",a , b , c);

    temp=b;
    b=a;
    a=c;
    c=temp;

    printf("value after swap are\n a=%d\n b=%d\n c=%d\n",a , b , c);

    return 0;

}
