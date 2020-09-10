#include<stdio.h>
int length(char*s);

int main()
{
   char str[50];
   int result;

   printf("Enter any string :: ");
   gets(str);

   result = length(str);
   printf("\nThe length of the given string [ %s ] is : %d\n", str, result);

  return 0;
}

int length(char*s)
{
   int count = 0;
   while (*s != '\0') {
      count++;
      s++;
   }
   return count;
}

