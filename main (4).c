

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    while(1)
 {
    int a,b,c,choice;
    printf(" 1: Check whether a given set of three numbers are lengths of sides of an isosceles triangle or not\n");
    printf(" 2: Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
    printf(" 3: Check whether a given set of three numbers are lengths of sides of an equilateral triangle or not\n");
    printf(" 4: Exit\n");
    
    printf("Enter a Choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
         {
           printf("Enter the three numbers\n");
           scanf("%d %d %d",&a,&b,&c);
           if(a==b || a==c || b==c)
           {
               printf("three numbers are lengths of sides of an isosceles triangle\n");
           }
           else
           {
               printf("three numbers are not the lengths of sides of an isosceles triangle\n");
           }
           break;
         }
        case 2:
         {
           printf("Enter the three numbers\n");
           scanf("%d %d %d",&a,&b,&c);
           if(((a*a)+(b*b)==(c*c)) || ((c*c)+(b*b)==(a*a)) || ((a*a)+(c*c)==(b*b)))
           {
               printf("three numbers are lengths of sides of a right angled triangle\n");
           }
           else
           {
               printf("three numbers are not the lengths of sides of a right angled triangle\n");
           }
           break;
         }
        case 3:
         {
           printf("Enter the three numbers\n");
           scanf("%d %d %d",&a,&b,&c);
           if(a==b && a==c && b==c)
           {
               printf("three numbers are lengths of sides of an equilateral triangle\n");
           }
           else
           {
               printf("three numbers are not the lengths of sides of an equiateral triangle\n");
           }
           break;
         }
         case 4:
         {
             exit(0);
         }
          
         default:
         {
             printf("please enter a valid choice\n");
             break;
         }
         
    }
 }
  

    return 0;
}
