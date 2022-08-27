

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    while(1)
  {
    int choice,n1,n2;
    printf("1: Addition\n");
    printf("2: Subtraction\n");
    printf("3: Multiplication\n");
    printf("4: division\n");
    printf("5: Exit\n");
    printf("Enter a choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
         {
           printf("Enter the two numbers\n");
           scanf("%d %d",&n1,&n2);
           printf(" The result is %d\n",n1+n2);
           break;
         }
        case 2:
         {
           printf("Enter the two numbers\n");
           scanf("%d %d",&n1,&n2);
           printf(" The result is %d\n",n1-n2);
           break;
         }
        case 3:
         {
           printf("Enter the two numbers\n");
           scanf("%d %d",&n1,&n2);
           printf(" The result is %d\n",n1*n2);
           break;
         }
        case 4:
         {
           printf("Enter the two numbers\n");
           scanf("%d %d",&n1,&n2);
           printf(" The result is %d\n",n1/n2);
           break;
         }
         case 5:
         {
             exit(0);
         }
         default:
         {
             printf("please enter a correct choice\n");
             break;
         }
         
    }
  }

    return 0;
}
