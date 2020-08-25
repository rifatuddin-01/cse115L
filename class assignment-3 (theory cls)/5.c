#include<stdio.h>
int sumofDigits(int x);

int main()
{
  int x;
  printf("enter some positive integers: "),
  scanf("%d",&x);

  int result =  sumofDigits(x);
  printf("\nsum of %d is : %d \n", x , result);
  return 0;
}

int sumofDigits(int x)
 {
   int sum = 0;
   while (x != 0)
   {
       sum = sum + x % 10;
       x = x/10;
   }
   return sum;
}
