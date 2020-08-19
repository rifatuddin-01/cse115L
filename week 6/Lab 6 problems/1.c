#include<stdio.h>
int main()
{
    int i,n,age[100],count=0;

    printf("Enter the number of persons: ");
    scanf("%d",&n);

    i=1;
    while (i<=n)
    {
        printf("Enter age of %d persons: ",i);
        scanf("%d",&age[i]);
        i++;
    }

    i=0;
    while (i<=n)
    {
        i++;
        if(age[i]>40 && age[i] <60)
        count++;
        else
        continue;

    }

    printf("\nNumber of persons whose age between 40-60 are: %d\n",count);

    return 0;
}
