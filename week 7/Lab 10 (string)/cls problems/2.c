#include<stdio.h>
void search(char arr[], char key);

int main()
{
    int s[30] ;
    char key;
    printf("Enter String: ");
    gets(s);

    printf("\nenter key: ");
    scanf("%c",&key);

    search(s, key);
    return 0;
}

void search(char arr[], char key)
{
    char c;
    while (c<arr[c] && key != arr[c])
    {
        c++;
    }

   if (c < arr[c])
    {
      printf("\nFound\n");
    }
   else
    {
      printf("\nnot found\n");
    }


}
