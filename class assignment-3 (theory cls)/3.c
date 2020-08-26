#include<stdio.h>
void listNumbersDesc(int start , int end);

int main()
{
    int start ,end;
    printf("input start number: ");
    scanf("%d",&start);

    printf("input end number: ");
    scanf("%d",&end);

    printf("\nnumbers in descending order: \n");
    listNumbersDesc(start , end);
    return 0;
}

void listNumbersDesc(int start , int end)
 {
    int i;
    for(i=end ; i>=start ;i--)
   {
       printf("%d\n",i);
   }
 }
