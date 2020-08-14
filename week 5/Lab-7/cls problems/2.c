#include <stdio.h>
int main()
{
        int i, n , largest;
        printf("Enter the number of the array: ");
        scanf("%d", &n);
        int arr[n];
        printf("\nEnter the %d elements of array: ", n);

        for (i = 0; i <n; i++)
        {
            scanf("%d", &arr[i]);
        }

        largest = arr[0];

        for (i = 1; i <n; i++)
        {
            if (largest < arr[i])
            largest = arr[i];
        }
        printf("\nLargest element : %d\n", largest);
        return 0;
}
