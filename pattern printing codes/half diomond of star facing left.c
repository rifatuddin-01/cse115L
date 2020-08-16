#include <stdio.h>

int main()
{
    int i, j, N;
    int star, spaces;
    printf("Enter number of columns : ");  //Input number of columns to print from user
    scanf("%d", &N);


    spaces = N-1;
    star = 1;

    for(i=1; i<N*2; i++)  //Iterate through rows
    {
        for(j=1; j<=spaces; j++)  //Print leading spaces
            printf(" ");
        for(j=1; j<=star; j++)
            printf("*"); //print stars
        printf("\n"); //Move to next line

        if(i < N)
        {
            star++;
            spaces--;
        }
        else
        {
            star--;
            spaces++;
        }
    }

    return 0;
}
