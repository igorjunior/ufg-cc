#include <stdio.h>
#include <math.h>

int main()
{
  double n;
  int m, i = 0, o, p, j = 0;
  scanf("%lf", &n);
  i = n;
  while (i != (round(n * 10) / 10))
  {
    n = n * 10;
    i = n;
    j++;
  }
  o = pow(10, j);
  if (n < o)
  {
    for (p = 2; p < o; p++)
    {
      if (i % p == 0 && o % p == 0)
      {
        o = o / p;
        i = i / p;
      }
    }
  }
  if (n > o)
  {
    for (p = 2; p < n; p++)
    {
      if (i % p == 0 && o % p == 0)
      {
        o = o / p;
        i = i / p;
      }
    }
  }

  printf("%d/%d", i, o);
  return 0;
}