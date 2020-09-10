#include <stdio.h>
int compare(char str1[], char str2[]);

int main()
{
    char str1[50], str2[50];
    int result;

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    result = compare(str1, str2);

    if(result == 0)
    {
        printf("Result : 0\n");
    }
    else if(result < 0)
    {
        printf("Result : -1\n");
    }
    else
    {
        printf("Result : 1\n");
    }

    return 0;
}


int compare(char str1[], char str2[])
{
    int i = 0;

    while(str1[i] == str2[i])
    {
        if(str1[i] == '\0' && str2[i] == '\0')
            break;

        i++;
    }

    return str1[i] - str2[i];
}
