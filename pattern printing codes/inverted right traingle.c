#include <stdio.h>

int main()
{
    int i, j, rows;
     /* Input number of rows from user */
    printf("Enter number of rows : ");
    scanf("%d", &rows);
    for(i=1; i<=rows; i++)
    {
        for(j=i; j<=rows; j++)
        {
            printf("*"); //print star
        }
        printf("\n");
    }

    return 0;
}
