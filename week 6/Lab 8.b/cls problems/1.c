#include<stdio.h>
#include<math.h>
void findArea(int radius) ;
void findVolume(int radius) ;
int main()
{
    int radius ;
     printf("Enter radius of the sphere : ");
    scanf("%d", &radius);
    findArea(radius) ;
    findVolume(radius);
    return 0;
}
void findArea(int radius)
{
    float area = 4 * 3.1416 * radius * radius ;
    printf("\nArea of the sphere:%.2f",area);
}
void findVolume(int radius)
{
    float volume = (4.0/3) * 3.1416 * pow(radius , 3) ;
     printf("\nVolume of sphere is : %.2f\n", volume);
}
