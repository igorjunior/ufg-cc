#include <stdio.h>
#include <math.h>

int main () {
  int n;
  scanf("%d", &n);
  if(n == 0 || !(n % 10) || !(n % 100))
    return 0;
  int m[3], i = 0, current = n;
  while (i < 3){
    m[i] = current % 10;
    current = current / 10;
    i++;
  }
  printf("%d%d%d", m[0], m[1], m[2]);
  return 0;
}