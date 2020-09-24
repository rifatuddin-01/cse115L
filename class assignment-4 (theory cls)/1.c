#include<stdio.h>
#include<string.h>

    struct Employee
    {
        char name[25];
        int age;
        float salary;
        float bonus;
    };

    double emp_bonus(float salary , int age)
    {
        float b ;

        if(age>50)
        {
            b = (double)40/100 * salary ;
        }
        else
        {
            b = (double)25/100 * salary ;
        }

    return b ;
    }

  int main()
    {
        int i;
        struct Employee Emp[ 50 ];

        for(i=0;i<50;i++)
        {

            printf("\nEnter details of %d Employee",i+1);

            printf("\n\tEnter Employee Name : ");
            scanf("%s",&Emp[i].name);


            printf("\tEnter Employee Age : ");
            scanf("%d",&Emp[i].age);

            printf("\tEnter Employee Salary : ");
            scanf("%f",&Emp[i].salary);

        }

        for(i=0;i<50;i++)
        {
            printf("\n\nDetails of Employee NO [%d]",i+1);
             printf("\n\tEmployee Name : %s",Emp[i].name);

            Emp[i].bonus = emp_bonus(Emp[i].salary , Emp[i].age);

            float total_salary= Emp[i].bonus + Emp[i].salary;

            printf("\n\tTotal salary: %.2f\n",total_salary);
        }

         FILE *f=fopen("Employee_Data.txt","w");

        if(f==NULL)
        {
            printf("Error!");
            exit(1);
        }

    fwrite(Emp, sizeof(struct Employee), 50, f);


    fclose(f);

        return 0;
    }




