#include <stdio.h>
#include <math.h>

#define g10(x,y,z)(x < 7 && y > 50 && z > 80000)
#define g9(x,y,z)(x < 7 && y > 50 && z <= 80000)
#define g8(x,y,z)(x < 7 && y <= 50 && z <= 80000)

int main () {
  int e[3], i;

  for(i = 0; i < 3; i++){
    scanf("%d", &e[i]);
  }
  printf("ACO DE GRAU = ");
  if(g10(e[0], e[1], e[2])){
    printf("10\n");
  }else if(g9(e[0], e[1], e[2])){
    printf("9\n");
  }else if(g8(e[0], e[1], e[2])){
    printf("8\n");
  }else{
    printf("7\n");
  }
  

  return 0;
}