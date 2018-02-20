/*Program to calculate the mass of the air in auto mobile tire,
  using below formula:
  PV = 0.3m(T+460)
 */
 #include <stdio.h>
 int main()
 {
    float P,V,m,T;
    printf("Enter the Pressure: ");
    scanf("%f",&P);
    printf("Enter the Volume: ");
    scanf("%f",&V);
    printf("Enter the Mass: ");
    scanf("%f",&m);
    printf("Enter the Temperature: ");
    scanf("%f",&T);
    m = P*V/(0.3*(T+460));
    printf("The mass is %.3f",m);
return 0;
 }
