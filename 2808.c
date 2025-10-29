#include <stdio.h>
#include <stdlib.h>

int main() {
    char c1, c2;
    int l1, l2;
    scanf(" %c%d %c%d", &c1, &l1, &c2, &l2);
    int x1 = c1 - 'a'; 
    int y1 = l1 - 1;   

    int x2 = c2 - 'a';
    int y2 = l2 - 1;
    int tabuleiro[8][8] = {0};
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2)) {
        printf("VALIDO\n");
    } else {
        printf("INVALIDO\n");
    }

    return 0;
}
