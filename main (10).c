

#include <stdio.h>
#include <math.h>

int main()
{   
   
    int a,b,c;
    printf("Enter the coefficients of a quadratic equation\n");
    scanf("%d %d %d",&a,&b,&c);
    int x=(b*b)-4*a*c;
    int D=(x>=0);
    switch(D)
    {
        case 1:
        {
            printf("the roots of the given quadratic equations are %0.2f and %0.2f",(-b+sqrt(x))/(2*a),(-b-sqrt(x))/(2*a));
            break;
        }
        case 0:
        {
            printf("the roots of the given quadratic equations are %d + %fi and %d + %fi",(-b)/(2*a), sqrt(-x)/(2*a), (-b)/(2*a), -sqrt(-x)/(2*a));
            break;
        }
        
    }

    return 0;
}
