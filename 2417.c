#include <stdio.h>
 
int main() {
 int  Cv, Ce, Cs, Fv, Fe, Fs;
 scanf("%d%d%d%d%d%d", &Cv, &Ce, &Cs, &Fv, &Fe, &Fs);
 if (3*Cv+Ce > 3*Fv+Fe){
 printf("C\n");
 } else if(3*Fv+Fe > 3*Cv+Ce){
     printf("F\n");
 } else if(3*Cv+Ce == 3*Fv+Fe && Cs>Fs){
  printf("C\n");
} else if(3*Cv+Ce == 3*Fv+Fe && Cs<Fs){
  printf("F\n");
  } else{
      printf("=\n");
  }
    return 0;
}
