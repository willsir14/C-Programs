#include<stdio.h>
int main()
{
	int age;
	printf("Enter age of a person:");
	scanf("%d",&age);
	if(age<12)
	printf("\nCHILD");
	else if(age>=12&&age<20)
	printf("\nTEEN");
    else if(age>=20&&age<30)
	printf("\nADULT");
	else if(age>=30&&age<55)
	printf("\nYOUNG");
	else if(age>=55)
	printf("\nOLD");
	return 0;	
	}
