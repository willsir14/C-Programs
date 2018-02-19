//Program to find sum of tho numbers

#include <stdio.h>
int main()
{
	int num1, num2;
	int sum;
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	sum = num1 + num2;
	printf("%d + %d = %d",num1,num2,sum);
return 0;
}