#include <stdio.h>

int main () {
  int a,b;
  scanf("%d %d", &a, &b);
  float media = (a+b);
  media = media/2;
  printf("%.3f\n", media);
  return 0;
}