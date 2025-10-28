#include <stdio.h>

int main() {
    int N, X, Y;
    if (scanf("%d %d %d", &N, &X, &Y) != 3) return 0;
    double icm = (double) N / (X + Y);
    printf("%.2f\n", icm);
    return 0;
}
