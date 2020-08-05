#include<stdio.h>
#include<math.h>
int main()
{
    float hypotenuse , base , height , area;


    printf("enter the hypotenuse : ");
    scanf("%f",&hypotenuse);

    printf("enter the base: ");
    scanf("%f",&base);

    height =sqrt(pow(hypotenuse,2)-pow(base,2));
    printf("height of triangle = %.2f\n",height);

    area= 0.5 * base * height;
    printf("area of triangle = %.2f",area);

    return 0;



}
