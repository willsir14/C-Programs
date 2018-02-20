//program to read the ASCII code and print the equivalent character
#include <stdio.h>
int main()
{
	int code;
	printf("Enter the ASCII code\n");
	scanf("%d",&code);
	printf("The character of the ASCII code %d is %c",code,code);
	return 0;
}
