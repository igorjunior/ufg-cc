#include <stdio.h>
#include <math.h>


int main () {
  float height,arest,area,vol;
  scanf("%f", &height);
  scanf("%f", &arest);
  area = (3*(arest*arest * sqrt(3)))/2;
  vol = (area * height)/3;
  printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", vol);
  return 0;
}