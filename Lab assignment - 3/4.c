#include<stdio.h>
int main()
{
    int a1[50] , a2[50] , merge[100] ;
    int i ,j ,a, n1 ,n2, k=0;


    printf("Enter Array 1 Size: ");
    scanf("%d", &n1);
    printf("Enter Array 1 Elements: ");
    for(i=0; i<n1; i++)
    {
        scanf("%d", &a1[i]);
        merge[k] = a1[i];
        k++;
    }


    printf("\nEnter Array 2 Size: ");
    scanf("%d", &n2);
    printf("Enter Array 2 Elements: ");
    for(i=0; i<n2; i++)
    {
        scanf("%d", &a2[i]);
        merge[k] = a2[i];
        k++;
    }


    printf("\nThe new array after merging is:  ");
    for(i=0; i<(n1+n2); i++)
    {
        printf("%d ", merge[i]);
    }


     printf("\n\nmerge array in ascending order:\n");

for (i = 0; i <(n1+n2); ++i)
        {
            for (j = i + 1; j <(n1+n2); ++j)
            {
                if (merge[i] > merge[j])
                {
                    a =  merge[i];

                    merge[i] = merge[j];

                    merge[j] = a;
                }

            }

        }
     for (i = 0; i <(n1+n2); ++i)

            printf("%d\n",merge[i]);



    return 0;
}
