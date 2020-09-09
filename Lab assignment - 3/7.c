#include <stdio.h>

int main()
{
   int i , j ,m, n;
   int a[10][10], b[10][10], sum[20][20];

   printf("Enter the number of rows and columns of matrices: "); //input size of row & colums//
   scanf("%d%d", &m, &n);

   //input elements of 1st matrices from user//
   printf("\nEnter the elements of first matrices:\n");
   for (i = 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &a[i][j]);

    //input elements of 1st matrices from user//
   printf("\nEnter the elements of second matrices:\n");
   for (i = 0; i < m; i++)
      for (j = 0 ; j < n; j++)
         scanf("%d", &b[i][j]);

   //finding sum of 1st & 2nd matrices//
   printf("\nSum of entered matrices:-\n");
   for (i = 0; i < m; i++) {
      for (j = 0 ; j < n; j++) {
         sum[i][j] = a[i][j] + b[i][j];
         printf("%d\t", sum[i][j]);
      }
      printf("\n");
   }

   return 0;
}
