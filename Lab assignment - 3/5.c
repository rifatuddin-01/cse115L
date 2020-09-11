#include<stdio.h>
int main()
{
    int arrSize,i,nE,nP;
    printf("Enter array size: ");
    scanf("%d", &arrSize);
    int arr[arrSize];
    printf("Enter elements: ");
    for(i=0;i<arrSize;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter new element and position: ");
    scanf("%d %d", &nE, &nP);

    printf("new array: ");

    if(nP>arrSize){
    printf("Error!\n");
    return 0;
    }
    else
    {
        arr[nP-1]=nE;
    }
    for(i=0;i<arrSize;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}
