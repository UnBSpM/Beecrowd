#include <stdio.h>
 
int main() {
 int A, B, D;
 scanf("%d%d", &A, &B);
 if(B>A){
 D = B-A;}
 else{
     D = 24-A+B;
 }
 printf("O JOGO DUROU %d HORA(S)\n", D);
    return 0;
}
