#include <stdio.h>
#include <math.h>

int main () {
  int n;
  scanf("%d", &n);
  int notas[4] = {0,0,0,0};
  while(n > 0){
    if(!(n % 100)){
      notas[0]++;
      n -= 100;
    }else if(!(n % 50)){
      notas[1]++;
      n -= 50;
    }else if(!(n % 10)){
      notas[2]++;
      n -= 10;
    }else{
      notas[3]++;
      n -= 1;
    }
  }
  printf("NOTAS DE 100 = %d\n", notas[0]);
  printf("NOTAS DE 50 = %d\n", notas[1]);
  printf("NOTAS DE 10 = %d\n", notas[2]);
  printf("MOEDAS DE 1 = %d\n", notas[3]);
  return 0;
}