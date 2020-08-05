#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    double result;
    printf("enter a number: ");
    scanf("%d",&x);
    result = sqrt(pow(x,3) + pow(x,2) - 12*x - 12);
    printf("%lf",result);

    return 0;

}
