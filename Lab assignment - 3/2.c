#include <stdio.h>
int main()
 {
   int array[100], i , n;
   printf("enter the size of array: "); //inputs array size//
   scanf("%d",&n);

   printf("\nenter the elements of array:\n"); //input elements from user//
   for(i=0;i<n;i++)
   {
        scanf("%d", &array[i]);
   }

    printf("\nelements in reverse order:\n"); //printing elements in reverse order//
    for(i = n-1; i>=0; i--)
    {
        printf("%d\n", array[i]);
    }


   return 0;
}
