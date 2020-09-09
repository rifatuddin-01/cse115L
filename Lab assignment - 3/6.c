#include<stdio.h>
int main()
{
        int a[50],size ,  i ;
        int first=0 , second=0 , third=0 ;

        printf("enter the size of array: "); //input array size//
        scanf("%d",&size);
         printf("\nenter the elements of array:\n");
         for(i=0;i<size;i++)
         {
            scanf("%d",&a[i]); //input array elements//

            //finding top three elements//
            if(a[i]>first)
            {
                third=second;
                second=first;
                first=a[i];
            }

            else if(a[i]>second)
            {
                third=second;
                second=a[i];
            }

            else if (a[i]>third)
            {
                third=a[i];
            }

         }
         printf("\ntop three largest elements are: %d  %d  %d\n",first ,second,third); //printing top three elements//


         return 0;



}
