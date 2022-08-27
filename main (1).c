

#include <stdio.h>

int main()
{
    int month_no;
    printf("Enter a month number\n");
    scanf("%d",&month_no);
    switch(month_no)
    {
        case 1:
         {
             printf("This month has 31 days");
             break;
         }
        case 2:
         {
             printf("This month has 28/29 days");
             break;
         }
        case 3:
         {
             printf("This month has 31 days");
             break;
         }
        case 4:
         {
             printf("This month has 30 days");
             break;
         }
        case 5:
         {
             printf("This month has 31 days");
             break;
         }
        case 6:
         {
             printf("This month has 30 days");
             break;
         }
        case 7:
         {
             printf("This month has 31 days");
             break;
         }
        case 8:
         {
             printf("This month has 31 days");
             break;
         }
        case 9:
         {
             printf("This month has 30 days");
             break;
         }
        case 10:
         {
             printf("This month has 31 days");
             break;
         }
        case 11:
         {
             printf("This month has 30 days");
             break;
         }
        case 12:
         {
             printf("This month has 31 days");
             break;
         }
         default:
         {
             printf("please enter a valid month number");
         }
         
    }

    return 0;
}
