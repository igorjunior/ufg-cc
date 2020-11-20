#include <stdio.h>

int separaDigitos(int n);
int main()
{
  int n;
  scanf("%d", &n);
  printf("%d", separaDigitos(n));
  return 0;
}

int separaDigitos(int n)
{
  int m, o = 0, k;
  for (k = 0; k < 3; k++)
  {
    m = n % 10;
    n /= 10;
    if (k == 0)
      o += m * 100;
    if (k == 1)
      o += m * 10;
    if (k == 2)
      o += m;
  }
  return o;
}