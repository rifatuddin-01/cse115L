#include<stdio.h>
void listNumbersAsc(int start , int end);

int main()
{
    int x,y ;
    printf("inputs two numbers: \n");
    scanf("%d %d",&x , &y);

printf("\nnumbers in ascending order: \n");
listNumbersAsc(x,y);
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

