

#include <stdio.h>
#include <stdlib.h>

int main()
{   
   
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    int x=(num>=0 || num<0);
    switch(x)
    {
        case 1:
        {
            printf("%d",~(num-1));
            break;
        }
        
    }

    return 0;
}
