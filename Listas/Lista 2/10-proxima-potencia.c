#include <stdio.h>
#include <math.h>

int next_power(int n, int p);
int main()
{
  int n, p;
  scanf("%d %d", &n, &p);
  int res = next_power(n, p);
  int pot = pow(res, p);
  printf("%d -> %d^%d = %d\n", n, res, p, pot);
  return 0;
}

int next_power(int n, int p)
{
  int i = 1;
  while (1)
  {
    int powactual = pow(i, p);
    int powprev = pow((i - 1), p);
    if (powactual > n)
    {
      int m = (powactual - n), o = (powprev - n);
      if (o < 0)
        o = n - powprev;
      if (m > o)
      {
        i--;
      }
      break;
    }
    i++;
  }
  return i;
}