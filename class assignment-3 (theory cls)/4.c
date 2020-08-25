#include <stdio.h>
double harmonicSum(int n);

int main()
{
    int n ;
    printf("enter the value of n: ");
    scanf("%d",&n);

    float sum = harmonicSum(n);
    printf("\nSum is : %f\n", sum);
    return 0;
}

double harmonicSum(int n)
{
  double i, s = 0.0;
  for (i = 1; i <= n; i++)
      s = s + 1/i;
  return s;
}
