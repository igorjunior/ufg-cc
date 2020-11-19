#include <stdio.h>

int main () {
  int n, y;
  scanf("%d", &n);
  if(n == 1)
    y = 1;
  else if(n < 1)
    y = n;
  else if(n > 1)
    y = pow(n,2);

  printf("Y = %d\n", y);
  return 0;
}