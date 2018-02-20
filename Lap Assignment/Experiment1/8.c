/*Program to read the temperature in centigrade and convert it to farenheit
  equivalent
*/
//Hint: F = 1.8C + 32

#include <stdio.h>
int main()
{
    float F,C; //F-farenheit C-centigrade
    printf("Enter the temperature(centigrade): ");
    scanf("%f",&C);
    F = 1.8*C + 32;
    printf("The temerature in farenheit: %.3f",F);
return 0;
}
