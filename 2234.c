#include <stdio.h>

int main() {
    int H, P;
    scanf("%d %d", &H, &P);
    double media = (double)H / P;
    printf("%.2lf\n", media);
    return 0;
}
