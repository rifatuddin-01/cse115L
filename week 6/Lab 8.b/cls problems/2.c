#include<stdio.h>
int computeAverage(int a, int b);
int main()
{
    int x, y;
    printf("enter 2 integer number: ");
    scanf("%d %d", &x, &y);
    int z =computeAverage(x,y);
    printf("Average = %d\n", z);
    return 0;
}

int computeAverage(int a, int b)
{
    int c = (a + b)/2;
    return c;
}
