#include <stdio.h>



int main () {
  const float price = 100.0, pi =  3.14159;
  float radius, height, total;
  scanf("%f", &radius);
  scanf("%f", &height);

  float ac, al, at;
  ac = pi * (radius * radius);
  al = 2 * pi * radius * height;
  at = (2 * ac) + al; 

  total = at * price;
  printf("O VALOR DO CUSTO E = %.2f\n", total);
  return 0;
}