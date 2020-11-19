#include <stdio.h>

int main () {
  float s;
  scanf("%f", &s);
  if(s <= 300.f)
    s += s * .5f;
  else
    s += s * .3f;
  printf("SALARIO COM REAJUSTE = %.2f\n", s);
  return 0;
}