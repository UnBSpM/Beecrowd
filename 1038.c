#include <stdio.h>
 
int main() {
 int C, Q;
 float T;
 scanf("%d%d", &C, &Q);
 switch(C){
     case 1:
     T = Q*4;
     printf("Total: R$ %.2f\n", T);
    break;
    case 2:
    T= Q*4.5;
    printf("Total: R$ %.2f\n", T);
    break;
    case 3:
    T= Q*5;
    printf("Total: R$ %.2f\n", T);
    break;
    case 4:
    T= Q*2;
    printf("Total: R$ %.2f\n", T);
    break;
    case 5:
    T= Q*1.5;
    printf("Total: R$ %.2f\n", T);
    break;
 }
    return 0;
}
