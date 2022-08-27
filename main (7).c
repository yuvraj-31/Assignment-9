

#include <stdio.h>
#include <stdlib.h>

int main()
{   
   
    int unit;
    printf("Enter the electricity units\n");
    scanf("%d",&unit);
    switch(unit)
    {
        case 1 ... 50:
         {
          printf("%0.2fRs is the total electricity bill \n",(unit*0.50)+((unit*0.50*20)/100));
          break;
         }
         case 51 ... 150:
         {
             printf("%0.2fRs is the total electricity bill \n",(unit*0.75)+((unit*0.75*20)/100));
             break;
         }
         case 151 ... 250:
         {
             printf("%0.2fRs is the total electricity bill \n",(unit*1.20)+((unit*1.20*20)/100));
             break;
         }
         default:
         {
             printf("%0.2fRs is the total electricity bill \n",(unit*1.50)+((unit*1.50*20)/100));
             break;
         }
        
    }

    return 0;
}
