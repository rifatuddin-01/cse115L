#include<stdio.h>
int main()
{
    int sec , h , i , m , s ;
    printf("enter any seconds: ");
    scanf("%d",&sec);

    h = sec/3600;
    i = sec%3600;
    m = i/60;
    s = i%60;

    printf("%d seconds is equal to  %d hours %d minutes %d seconds",sec , h , m , s);

    return 0;



}
