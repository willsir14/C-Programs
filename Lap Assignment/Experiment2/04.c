/*Program to find the maximum of two numbers using condiotional operator.*/
#include <stdio.h>
int main()
{
    int num1,num2;
    printf("Enter your first number: ");
    scanf("%d",&num1);;
    printf("Enter your second number: ");
    scanf("%d",&num2);
    (num1>num2)?printf("%d is greater",num1):printf("%d is greater",num2);
return 0;
}
