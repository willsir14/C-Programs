/*Program to second is entered and and find hours, minutes, seconds*/
#include <stdio.h>
int main()
{
    int second,minute,hours;
    printf("Enter the seconds: ");
    scanf("%d",&second);
    hours = second / 3600;
    if(hours != 0)
    {
        minute = hours /60;
        second = second % 60;
    }
    else
    {
        minute = second / 60;
        second = second % 60;
    }
    printf("The result = %d hours, %d minute and %d second",hours,minute,second);
return 0;
}
