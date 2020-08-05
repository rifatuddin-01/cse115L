#include<stdio.h>
int main()
{
    double num1 , num2;
    char operator;

    printf("enter an operator (+,-,*,/): ");
    scanf("%c",&operator);

    printf("enter two operands: ");
    scanf("%lf %lf",&num1, &num2);

    switch(operator)
 {
        case '+' :
            printf("%lf + %lf = %lf\n", num1,num1,num1+num2);
        break;

         case '-' :
            printf("%lf - %lf = %lf\n", num1,num1,num1-num2);
        break;

         case '*' :
            printf("%lf * %lf = %lf\n", num1,num1,num1*num2);
        break;

         case '/' :
            printf("%lf / %lf = %lf\n", num1,num1,num1/num2);
        break;

        default:
            printf("no result");
}

    return 0;

}
