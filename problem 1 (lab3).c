#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,num5;
    int sum;
    float avg;

    printf("enter 5 number: ");
    scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);

    sum = num1+num2+num3+num4+num5;
    avg = sum/5;

    printf("sum = %d\n",sum);
    printf("average = %f",avg);

    return 0;


}
