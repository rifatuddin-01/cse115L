#include<stdio.h>
#include<math.h>
int main()
{
    int i, a,sum;
    float s1 , s2 ;
    printf("Enter the value of a : ");
    scanf("%d", &a);

     s1 = 0;
     s2 = 0;

     for ( i = 0; i <= a;i++)
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
    sum = s1 - s2;
    printf("\nanswer of the series sum is = %d\n", sum);

    return 0;
}
