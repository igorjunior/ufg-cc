#include <stdio.h>
#include <math.h>


int main () {
  float a,b,c, t, area;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  t = (a+b+c)/2;
  area = sqrt((t*(t-a))*(t-b)*(t-c));
  printf("A AREA DO TRIANGULO E = %.2f", area);
  return 0;
}