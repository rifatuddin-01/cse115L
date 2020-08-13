#include<stdio.h>
int main()
{
 int n , hours;
 float money ;
 double salary;

 printf("enter any number: "),
 scanf("%d",&n);

  printf("enter the Employee's daily worked hours : ");
 scanf("%d",&hours);

 printf("enter the Employee's working money per hours : ");
 scanf("%f",&money);

 salary = (hours*money)*30;

printf("\nEmployee's ID number = %d\n",n);
 printf("SALARY = BDT. %.2lf\n",salary);

return 0;

}
