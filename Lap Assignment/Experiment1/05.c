/*Program to read the radius of a circle and compute its Area and Circumference*/
//A = pi*(r^2)        C=2*pi*r

#include <stdio.h>
#define pi 22/7.0
int main()
{
    float radius, area, circum;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    area = pi * (radius*radius);
    circum = 2 * pi * radius;
    printf("The Area is: %.3f\nThe circumference is %.3f",area,circum);
    return 0;
}
