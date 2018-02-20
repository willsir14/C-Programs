/*Program to read the graphical character and print their ASCII codes*/
#include <stdio.h>
int main()
{
    char charac;
    printf("Enter the character:\n");
    scanf("%c",&charac);
    printf("The ASCII code of character %c is %d\n",charac,charac);
    return 0;
}
