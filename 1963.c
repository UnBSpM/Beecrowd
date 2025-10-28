#include <stdio.h>

int main() {
    double A, B;
    scanf("%lf %lf", &A, &B);
    double aumento = ((B - A) / A) * 100.0;
    printf("%.2lf%%\n", aumento);
    return 0;
}
