#include <stdio.h>
 
int main() {
    int Ca, Ba, Pa, Cr, Br, Pr, R = 0;    
    scanf("%d%d%d%d%d%d", &Ca, &Ba, &Pa, &Cr, &Br, &Pr);

    if (Cr > Ca) R += Cr - Ca;
    if (Br > Ba) R += Br - Ba;
    if (Pr > Pa) R += Pr - Pa;

    printf("%d\n", R);

    return 0;
}
