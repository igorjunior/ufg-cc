#include <stdio.h>
#include <math.h>


int main () {
  int hours, minutes, seconds;
  scanf("%d", &hours);
  scanf("%d", &minutes);
  scanf("%d", &seconds);
  minutes += hours * 60;
  seconds += minutes * 60;
  printf("O TEMPO EM SEGUNDOS E = %d", seconds);
  return 0;
}