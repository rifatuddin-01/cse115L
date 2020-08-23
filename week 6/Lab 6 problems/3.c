#include<stdio.h>
int main()
{
    int n , row , col;

    printf("Input: ");
    scanf("%d",&n);

    printf("\nOutput: \n");

    for(row=1;row<=n;row++)
    {
        if(row%2!=0)
            {
            for(col=1;col<=row;col++)
                {
                if(col%2!=0)
                    {
                     printf("%d ",col);
                    }
            }
            printf("\n");
        }

        else if(row%2==0)
            {
            for(col=1;col<=row;col++)
                {
                if(col%2==0)
                {
                     printf("%d ",col);
                }
            }
            printf("\n");
        }
    }
}
