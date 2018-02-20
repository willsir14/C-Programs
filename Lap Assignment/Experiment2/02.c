/*Program to find out the real and equal roots of a quadratic equations*/
//ax2 + bx + c
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,x1,x2,sqroot;
    printf("Enter the coefficient of x^2: ");
    scanf("%d",&a);
    printf("Enter the coefficient of x: ");
    scanf("%d",&b);
    printf("Enter the constant term: ");
    scanf("%d",&c);
    if(pow(b,2)>=(4*a*c))
    {
        printf("The real roots exits\n\n");
        sqroot = sqrt(pow(b,2)-(4*a*c));
        x1 = (-b + sqroot) / 2*a;
        x2 = (-b - sqroot) / 2*a;
        if(x1 == x2)
            printf("The equal root is: %d",x1);
        else
            printf("The roots are: %d and %d",x1,x2);
    }
    else
        printf("Real roots doesn't exists");
return 0;
}
