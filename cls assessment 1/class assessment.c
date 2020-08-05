#include<stdio.h>
int main()
{
  double number;
  printf("Enter a number: ");
  scanf("%lf", &number);
  if(number>0)
    printf("The number is a positive number. \n");
  else if(number<0)
    printf("The number is a negative number. \n");
  else if(number>0&& number==(int)number)
    printf("The number is a natural number. \n");
  else if(number-(int)number!=0)
    printf("number is rational.\n");
  else
    printf("nothin\n");
    return 0;

}

