#include <stdio.h>
 
int main() {
 int C, M;
 scanf("%d", &M);
 if(M<=10){
     printf("7\n");
 } else if(M<=30){
     C = 7+ ((M-10)*1);
     printf("%d\n", C);
 } else if(M<=100){
     C = 7+20+((M-30)*2);
     printf("%d\n", C);
 } else{
     C = 7+20+140+((M-100)*5);
     printf("%d\n", C);
 }  
    return 0;
}
