#include<stdio.h>

int main()
{
    int sum, a[100][100], b[100][100] ,c[100][100];
    int rowa, rowb, cola, colb;

    printf("enter the number of rows & columns for A: ");
    scanf("%d %d",&rowa , &cola);

     printf("enter the number of rows & columns for B: ");
    scanf("%d %d",&rowb , &colb);

     printf("\n");

    if(cola != rowb)
    {
        printf("\nInvalid matrix dimensions\n");
        return 0;
    }

    for(int i=0;i<rowa;i++){
        for(int j=0;j<cola;j++)
        {
            printf("A[%d][%d]: ",i, j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

    for(int i=0;i<rowb;i++)
    {
        for(int j=0;j<colb;j++)
        {
            printf("B[%d][%d]: ",i, j);
            scanf("%d",&b[i][j]);
        }
    }

    for (int r = 0; r < rowa; r++)
    {
        for (int i = 0; i < colb; i++)
        {
            sum = 0;
            for (int j = 0; j < cola; j++)
            {
                sum = sum + a[r][j] * b[j][i];
            }
            c[r][i] = sum;
        }
    }

    printf("\nresult: \n\n");

    for (int i = 0; i < rowa;i++)
    {
        for (int j = 0; j < colb;j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
