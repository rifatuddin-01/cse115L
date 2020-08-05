#include<stdio.h>

int main()
{
    float radius , area , perimeter;

    printf("enter the radius: ");
    scanf("%f",&radius);

    area = 3.1416 * radius * radius;
    printf("area = %f\n",area);

    perimeter = 2*3.1416*radius;
    printf("perimeter=%f\n",perimeter);


    return 0;
}
