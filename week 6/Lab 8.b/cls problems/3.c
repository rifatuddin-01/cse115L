#include<stdio.h>
#include<math.h>
double getArea(int a, int b, int h);
int main()
{
    int x , y , z ;
     printf("Enter the value for two bases & height of the trapezium: ");
    scanf("%d %d %d", &x, &y, &z);
    float area = getArea(x,y,z);
    printf("\nArea of the trapezium is: %.2f\n", area);
    return 0;
}
double getArea(int a, int b, int h)
{
    float result = 0.5 * (a+b) * h;
    return result;
}
