/*
  What will be the value of A and B
  A = 10, B = 5;
  A = ++A + ++A;
  B = A-- - --B;
 */
 #include <stdio.h>
 int main()
 {
    int A,B;
    A = 10;
    B = 5;
    A = ++A + ++A;   //here A is pre incremented so A=11
                     //again A is pre incremented so A=12
                     //A = 12 + 12 = 24
    B = A-- - --B;   //here B is pre decrement so B=4
                     //A = 24 B = 24-4 = 20
                     //again due to post decrement A-- = 23
    printf("A = %d",A);
    printf("\nB = %d",B);
return 0;
 }
