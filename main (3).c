

#include <stdio.h>
#include <stdlib.h>

int main()
{   
   
    int day_no;
    
    printf("Enter a Day number\n");
    scanf("%d",&day_no);
    switch(day_no)
    {
        case 1:
         {
           printf("Hello buddy ,Today is Monday\n");
           break;
         }
        case 2:
         {
           printf("Hello buddy,Today is Tuesday \n");
           break;
         }
        case 3:
         {
           printf("Hello buddy,Today is Wednesday\n");
           break;
         }
        case 4:
         {
           printf("Hello buddy,Today is Thursday\n");
           break;
         }
        case 5:
         {
           printf("Hello buddy,Today is Friday\n");
           break;
         }
        case 6:
         {
           printf("Hello buddy,Today is Saturday\n");
           break;
         }
        case 7:
         {
           printf("Hello,Today is Sunday\n");
           break;
         }
           
          
         default:
         {
             printf("please enter a valid Day number\n");
             break;
         }
         
    }
  

    return 0;
}
