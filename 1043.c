#include <stdio.h>
 
int main() {
 float A, B, C, P, AR;
 scanf("%f%f%f", &A, &B, &C);
 if((A+B)>C && (B+C)>A && (C+A)>B){
     P = A+B+C;
     printf("Perimetro = %.1f\n", P);
 } else{
     AR = ((A+B)*C)/2;
     printf("Area = %.1f\n", AR);
 }
    return 0;
}
