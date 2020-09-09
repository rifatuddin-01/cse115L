#include <stdio.h>
int main()
{
        int array[100], i, num;
        printf("Enter the size of an array: ");
        scanf("%d", &num);

        printf("\nEnter the elements of the array \n"); //taking elements from user//

        for (i = 0; i < num; i++)
        {
            scanf("%d", &array[i]);
        }


        printf("\nEven numbers in the array are: ");
        //finding even numbers from user elements//
        for (i = 0; i < num; i++)
        {
            if (array[i] % 2 == 0)
            {
                printf("%d  ", array[i]);
            }

        }


        printf("\nOdd numbers in the array are: ");
        //finding odd numbers from user elements//
        for (i = 0; i < num; i++)
        {
            if (array[i] % 2 != 0)
            {
                printf("%d  ", array[i]);
            }

        }

    printf("\n");

    return 0;
    }
