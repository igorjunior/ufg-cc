#include <stdio.h>

int main () {
  int n;
  scanf("%d", &n);
  const int div = n % 3;
  const int newn = n / 3;
  
  printf("O VALOR A PAGAR E = %.2f", (div * 5.f) + (newn * 10.f));
  return 0;
}