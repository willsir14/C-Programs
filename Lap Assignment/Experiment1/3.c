/*Program to read the value of two varibles, and compute sum, difference and product*/
#include <stdio.h>
int main()
{
    int num1, num2, sum, diff, pro;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    sum = num1 + num2;
    diff = num1 - num2;
    pro = num1 * num2;
    printf("The sum is %d",sum);
    printf("\nThe difference is %d",diff);
    printf("\nThe product is %d",pro);
    return 0;
}
