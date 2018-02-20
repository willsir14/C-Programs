/*Program to read the weight in gram and convert it to kilogram and gram*/
/*e.g. 2076gram = 2kilogram, 76gram*/
#include <stdio.h>
int main()
{
    int gm,kg;
    printf("Enter the weight in gram: ");
    scanf("%d",&gm);
    printf("%d Gram = %d Kilogram, %d Gram",gm,(gm/1000),(gm%1000));
return 0;
}
