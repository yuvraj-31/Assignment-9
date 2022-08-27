

#include <stdio.h>
#include <stdlib.h>

int main()
{   
   
    int year;
    printf("Enter a year\n");
    scanf("%d",&year);
    int x=(((year%100!=0) && (year%4==0)) || (year%400==0));
    switch(x)
    {
        case 1:
         {
          printf("%d is a leap year\n",year);
          break;
         }
         case 0:
         {
             printf("%d is not a leap year",year);
             break;
         }
        
    }

    return 0;
}
