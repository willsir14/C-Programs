/*Program to read the radius of a sphere and compute its Surface Area and Volume*/
#include <math.h>
#include <stdio.h>
#define pi 22/7.0
int main()
{
    float radius, sarea, volume;
    printf("Enter the radius of Sphere: ");
    scanf("%f",&radius);
    sarea = 4 * pi * pow(radius,2);
    volume = 4/3 * pi * (pow(radius,3));
    printf("The Surface Area: %.3f\nThe Volume: %.3f",sarea,volume);
    return 0;
}
