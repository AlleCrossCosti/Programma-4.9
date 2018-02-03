#include <stdio.h>
#include <stdbool.h>

int main () {
 
 int  intVAR;
 float  floatVAR;
 double doubleVAR;
 char charVAR;
 bool  boolVAR;
 
 intVAR = 1024;
 floatVAR = 24.75;
 doubleVAR = 18.34e+6;
 charVAR = 'C';
 boolVAR = 1;
 
 printf("intVAR = %d\n", intVAR);
 printf("floatVAR = %f\n", floatVAR);
 printf("doubleVAR = %f\n", doubleVAR);
 printf("doubleVAR = %e\n", doubleVAR);
 printf("charVAR = %c\n", charVAR);
 printf("boolVAR = %d\n", boolVAR);
 
 return 0;
 
 }
