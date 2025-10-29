#include <stdio.h>
int cs(int d, int h, int m, int s){
    return d*86400+h*3600+m*60+s;
} 
int main() {
 int D1, H1, M1, S1, D2, H2, M2, S2, w, x, y, b;
 scanf("Dia %d\n", &D1);
 scanf("%d : %d : %d\n", &H1, &M1, &S1);
 scanf("Dia %d\n", &D2);
 scanf("%d : %d : %d\n", &H2, &M2, &S2); 
 int z = cs(D1, H1, M1, S1);
 int v = cs(D2, H2, M2, S2);
 w = (v-z)/86400;
 x = ((v-z)%86400)/3600;
 y = (((v-z)%86400)%3600)/60;
 b = ((((v-z)%86400)%3600)%60);
 printf("%d dia(s)\n", w);
 printf("%d hora(s)\n", x);
 printf("%d minuto(s)\n", y);
 printf("%d segundo(s)\n", b);
    return 0;
}
