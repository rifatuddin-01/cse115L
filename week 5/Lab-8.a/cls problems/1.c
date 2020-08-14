#include<stdio.h>
int main()
{
    int i , arr[10] , size , key , count=0 ;

    printf(" enter array size: ");
    scanf("%d",&size);

    printf("\n enter array elements: ");

    for(i=0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n enter search key: ");
    scanf("%d",&key);

    for(i=0 ; i<size ; i++)
    {
        if(arr[i] == key)
        {
            count++;
        }
    }

    printf("\n Search Key appears %d times\n",count);

    return 0;
}
