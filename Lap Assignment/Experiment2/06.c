/*Program to find out the entered number is odd or not*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    if(num%2 !=0)
        printf("The number is odd");
    else
        printf("The entered number is not odd");
return 0;
}
