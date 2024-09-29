#include <stdio.h>
#include <math.h>

int main () {
   float a, b, c;
   a = 9.2;
   b = 3.7;
   c = 2;
   printf("Remainder of %.2f / %.2f is %lf\n", a, c, fmod(a,c));
   printf("Remainder of %.2f / %.2f is %lf\n", a, b, fmod(a,b));
   
   return(0);
}