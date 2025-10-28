#include <stdio.h>

int main() {
    long long N, L;
    if (scanf("%lld %lld", &N, &L) != 2) return 0;
    long long P = N * L;
    printf("%lld\n", P);
    return 0;
}
