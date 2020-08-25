#include<stdio.h>
int sum (int n);

 int main()
 {
   int n;

   printf("Enter the value of n: ");
   scanf("%d", &n);
   printf("\nsum of the series: \n");
    int result = sum(n);
   return 0;
 }

 int sum (int n)
 {
   int i ,sum=0;
   sum = (n * (n + 1)) / 2;
   for (i =1;i <= n;i++)
        {
    		if (i!=n)
                printf("%d + ",i);
            else
                printf("%d = %d\n ",i,sum);
        }
    	return sum;
 }
