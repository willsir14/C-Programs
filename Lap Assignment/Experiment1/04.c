/*Program to calculate the result of cb^3/d^2*/
#include <stdio.h>
#include <math.h>
int main()
{
    int d,b,c;
    int result;
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    printf("Enter the value of d: ");
    scanf("%d",&d);
    result = c * ((int)pow(b,3)) * ((int)pow(d,2));
    printf("The result is %d",result);
    return 0;
}
