#include <stdio.h>
#include <math.h>

int main () {
  float x1, x2, y1, y2, res;
  scanf("%f", &x1);
  scanf("%f", &y1);
  scanf("%f", &x2);
  scanf("%f", &y2);
  res = sqrt(pow((x2-x1), 2)+ pow((y2-y1),2));
  printf("A DISTANCIA ENTRE A e B = %.2f\n", res);
  return 0;
}