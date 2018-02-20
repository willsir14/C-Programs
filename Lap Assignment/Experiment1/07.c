/*Program to calculate the sum of the series:
  sum = 1 - (x^2)/2! + (x^4)/4! - (x^6)/6! + (x^8)/8! - (x^10)/10!
 */

 #include <stdio.h>
 #include <math.h>
 int main()
 {
    int x,i,j,temp,square,fact;
    float sum;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    square = -(pow(x,2));
    temp = 1;
    sum = 0;
    for(i=1; i<10; i++)
    {
        if(i%2==0)
        {
            fact = 1;
            for(j=1; j<=i; j++)
                fact *= j;
            temp *= square;
            sum += (float)temp/fact;
        }
    }
    printf("The required sum is %.4f",(1+sum));
return 0;
 }
