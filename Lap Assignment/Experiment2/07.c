/*Program to use different unformatted input/output functions*/
#include <stdio.h>
int main()
{
    char name[10];
    printf("Enter your name:\n");
    gets(name);
    printf("Your name is:\n");
    puts(name);
return 0;
}
