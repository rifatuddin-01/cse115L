#include<stdio.h>
int main()
{
        int month;
        printf("Enter a month: ");
        scanf("%d",&month);
        switch(month)
{
        case 1:
                printf("Number of Days= 31");
        break;

        case 2:
                printf("Number of Days= 28 or 29");
        break;

        case 3:
                printf("Number of Days= 31");
        break;

         case 4:
                printf("Number of Days= 30");
        break;

        case 5:
                printf("Number of Days= 31");
        break;

        case 6:
                printf("Number of Days= 30");
        break;
         case 7:
                printf("Number of Days= 31");
        break;

        case 8:
                printf("Number of Days= 31");
        break;

        case 9:
                printf("Number of Days= 30");
        break;
         case 10:
                printf("Number of Days= 31");
        break;

        case 11:
                printf("Number of Days= 30");
        break;

        case 12:
                printf("Number of Days= 31");
        break;

        default:
                printf("You typed something else");
}
return 0;
}
