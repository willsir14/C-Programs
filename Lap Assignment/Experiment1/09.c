/*Program to read the Principle, Time, Rate and calculate the interest
  and total amount
*/
#include <stdio.h>
int main()
{
    float P,T,R,I,A;//P=principle,T=time,R=rate,I=interest,A=toatal amount
    printf("Enter the principle: ");
    scanf("%f",&P);
    printf("Enter the time: ");
    scanf("%f",&T);
    printf("Enter the rate: ");
    scanf("%f",&R);
    I = (P*T*R)/100;
    A = P + I;
    printf("The Interest = %.3f",I);
    printf("\nThe Total Amount is %.3f",A);
return 0;
}
