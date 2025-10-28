#include <stdio.h>

int main() {
    int N, X;
    scanf("%d %d", &N, &X);

    double dias = (double)X / (N + 2);

    printf("%.2lf\n", dias);
    return 0;
}
