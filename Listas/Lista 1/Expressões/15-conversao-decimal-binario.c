#include <stdio.h>
#include <math.h>

int main () {
  int n;
  scanf("%d", &n);
  if(n < 0 || n> 255){
    printf("Numero invalido!");
    return 0;
  }
  int res = n, current = 7;
  int bin[8];
  while(current >= 0){
    bin[current] = res % 2;
    res = res / 2;
    current--;
  }
  current = 0;
  while(current < 8){
    printf("%d", bin[current]);
    current++;
  }
  return 0;
}