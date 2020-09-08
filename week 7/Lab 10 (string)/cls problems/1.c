#include<stdio.h>
int length(char arr[]);

int main()
{
        char s[30];
        printf("enter string: ");
        gets(s);

      int r =  length(s);
    printf("Length of the string is: %d\n", r);
    return 0;
}

int length(char arr[])
{
    int i=0 , len =0;

  while(arr[i]!='\0')
    {
        i++;
        len++;
    }

      return len;
}
