#include <stdio.h>
 
int main() {
 double R, V;
 double PI = 3.14159;
 scanf("%lf", &R);
 V = PI * R * R * R * (4.0/3);
 printf("VOLUME = %.3lf\n", V);
 
    return 0;
}
