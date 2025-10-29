#include <stdio.h>

int main() {
    int pos[16];
    int i, pos_kung, pos_lu;
    for (i = 0; i < 16; i++) {
        scanf("%d", &pos[i]);
        if (pos[i] == 1) pos_kung = i;  
        if (pos[i] == 9) pos_lu = i;   
    }
    if (pos_kung / 2 == pos_lu / 2)
        printf("oitavas\n");
    else if (pos_kung / 4 == pos_lu / 4)
        printf("quartas\n");
    else if (pos_kung / 8 == pos_lu / 8)
        printf("semifinal\n");
    else
        printf("final\n");

    return 0;
}
