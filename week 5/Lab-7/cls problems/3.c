#include<stdio.h>

int main()
{
   int i , a[100], key, size;

   printf("Enter array size: ");
   scanf("%d", &size);

   printf("\nEnter the array elements: ");
   for (i = 0; i < size; i++)
    {
      scanf("%d", &a[i]);
   }

   printf("\nsearch key : ");
   scanf("%d", &key);

   i = 0;
   while (i < size && key != a[i])
    {
      i++;
   }

   if (i < size)
    {
      printf("\nFound\n");
   } else {
      printf("\nnot found\n");
   }

   return (0);
}
