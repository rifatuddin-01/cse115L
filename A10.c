#include<stdio.h>
int main()
{
    int i ;
    printf("even numbers between 0 and 100 inclusive:\n");

    for(i=0 ; i<=100 ; i++)
    {
        if(i%2==0)
            printf("%d\n",i);
    }

return 0;
}
