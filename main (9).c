

#include <stdio.h>
#include <stdlib.h>

int main()
{   
   
    int num;
    printf("Enter a even number\n");
    scanf("%d",&num);
    int x=(num%2==0);
    switch(x)
    {
        case 1:
        {
            printf("the upper nearest odd number is %d",num+1);
            break;
        }
        case 0:
        {
            printf("please enter the even number\n");
            break;
        }
        
    }

    return 0;
}
