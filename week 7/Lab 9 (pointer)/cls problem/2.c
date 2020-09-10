#include <stdio.h>
int max(int *p, int size);
int main()
{
    int i, size=4;


    int* p;

    p = (int*)calloc(size, sizeof(int));


    if (p == NULL)
    {
        printf("No memory allocated");
        exit(0);
    }

    *(p + 0) = 14;
    *(p + 1) = 12;
    *(p + 2) = 19;
    *(p + 3) = 20;

   int result = max(p, size);
    printf("largest number is :%d \n", result);
    return 0;
}

int max(int *p, int size)
{
    int i;


    for (i = 1; i < size; i++)
     {
        if (*p < *(p + i))
         {
            *p = *(p + i);
        }
    }

    return *p;

}

