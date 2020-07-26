#include<stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d",&x);

    if(x%7==0)
        printf("%d is multiple of 7",x);
    else
        printf("%d is not multiple of 7",x);

        return 0;

}
