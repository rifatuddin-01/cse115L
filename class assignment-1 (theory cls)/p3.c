#include<stdio.h>
int main()
{
    char ch;
    printf("enter a alphabet: ");
    scanf("%c",&ch);

     if(ch>=65 && ch<=90)
     {
        ch = ch+1;
        printf("next alphabet is %c",ch);
    }

    else if(ch>=97 && ch<=122)
     {
        ch = ch+1;
        printf("next alphabet is %c",ch);
    }

    else
        printf("wrong enter");

    return 0;



}
