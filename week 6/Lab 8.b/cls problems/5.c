#include<stdio.h>
int fibonacci (int n);

 int main()
 {
   int n;

   printf("Enter the number of term: ");
   scanf("%d", &n);

   printf("\nThe fibonacci series is: \n");

   fibonacci(n);

   return 0;
 }

 int fibonacci (int n)
 {
   int a=0, b=1, c;
   for(int i=0; i<n; i++)
   {
     printf("%d ", a);
     c = a+b;
     a = b;
     b = c;
   }
   printf("\n");
 }
