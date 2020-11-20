#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  if(!(n % 3) && !(n % 5)){
    printf("O NUMERO E DIVISIVEL\n");
    return 0;
  }
  printf("O NUMERO NAO E DIVISIVEL\n");
  return 0;
}