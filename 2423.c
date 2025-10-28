#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    
    int bolos_farinha = A / 2;
    int bolos_ovos = B / 3;
    int bolos_leite = C / 5;
    
    int max_bolos;
    if (bolos_farinha < bolos_ovos)
        max_bolos = bolos_farinha;
    else
        max_bolos = bolos_ovos;

    if (bolos_leite < max_bolos)
        max_bolos = bolos_leite;

    printf("%d\n", max_bolos);

    return 0;
}
