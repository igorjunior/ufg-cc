#include <stdio.h>

int main () {
  float fahrenheit, celsius, rainpol, rainmm;
  scanf("%f", &fahrenheit);
  scanf("%f", &rainpol);
  celsius = (5*(fahrenheit-32))/9;
  printf("O VALOR EM CELSIUS = %.2f\n", celsius);
  rainmm = rainpol * 25.4;
  printf("A QUANTIDADE DE CHUVA E = %.2f\n", rainmm);

  return 0;
}