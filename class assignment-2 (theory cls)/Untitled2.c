#include <stdio.h>

int main()
{
    int i, x , n ;
    float temp=1;
    float result=1;

	printf("enter the value of x :");
	scanf("%d",&x);

	printf("enter the number of terms : ");
	scanf("%d",&n);

	for (i=1;i<=n;i++)
	{
	    temp = (temp* x)/i;
        result= result+temp;
	}
	printf("\nThe sum  is : %f\n",result);
}
