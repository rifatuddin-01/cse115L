#include<stdio.h>
#include<math.h>

int seriesSum1(int a);

int main()
{
    int a,sum;
    printf("Enter the value of a : ");
    scanf("%d", &a);

    sum = seriesSum1(a);
    printf("\nanswer of the series sum is = %d\n", sum);

    return 0;
}

 int seriesSum1 (int a)
 {
     float s1, s2;
     s1 = 0;
     s2 = 0;

     for (int i = 0; i <= a;i++)
    {
        if(i % 2 == 0)
        {
            s1 = pow((a - i), 2) + s1;
        }
        else
        {
            s2 = pow((a - i), 2) + s2;
        }

    }
    return s1 - s2;
 }
