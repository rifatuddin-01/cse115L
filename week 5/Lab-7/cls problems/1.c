#include<stdio.h>
int main()
{
    int a[5] , n , i;
    printf("enter size of the array: ");
    scanf("%d",&n);
    printf("enter the element of the array: ");
    for (i=0 ; i<n; i++ )
    {
        scanf("%d",&a[i]);
    }
    printf("\nafter reverse array elements are: ");
    for(i=n-1; i>=0 ; i--)
    {
        printf(" ");
        printf("%d",a[i]);
    }

    return 0;
}
