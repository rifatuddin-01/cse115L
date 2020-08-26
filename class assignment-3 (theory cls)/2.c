#include<stdio.h>
void listNumbersAsc(int start , int end);

int main()
{
    int start ,end;
    printf("input start number: ");
    scanf("%d",&start);

    printf("input end number: ");
    scanf("%d",&end);

    printf("\nnumbers in ascending order: \n");
    listNumbersAsc(start , end);
    return 0;
}

void listNumbersAsc(int start , int end)
 {
    int i;
    for(i=start ; i<=end ;i++)
   {
       printf("%d\n",i);
   }

}
