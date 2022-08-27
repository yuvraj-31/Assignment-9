

#include <stdio.h>
#include <stdlib.h>

int main()
{   
   
    int Var;
    printf("Enter a number\n");
    scanf("%d",&Var);
    switch(Var)
    {
        case 1:
         {
           printf("good\n");
           break;
         }
        case 2:
         {
           printf("better\n");
           break;
         }
        case 3:
         {
           printf("best\n");
           break;
         }
          
         default:
         {
             printf("Invalid\n");
             break;
         }
         
    }

    return 0;
}
