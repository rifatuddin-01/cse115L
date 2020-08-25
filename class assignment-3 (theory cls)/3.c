#include<stdio.h>
void listNumbersDesc(int start , int end);

int main()
{
    int x,y ;
    printf("inputs two numbers: \n");
    scanf("%d %d",&x , &y);

printf("\nnumbers in descending order: \n");
listNumbersDesc(x,y);
return 0;
}

void listNumbersDesc(int start , int end)
 {
    int i;
    for(i=start ; i>=end ; i--)
   {
       printf("%d\n",i);
   }

}

