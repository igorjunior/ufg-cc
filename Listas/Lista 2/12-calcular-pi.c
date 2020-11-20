#include <stdio.h>
#include <math.h>

double compute_pi(int n);
int main()
{
  int n;
  scanf("%d", &n);
  double res = compute_pi(n);
  printf("%.12f", res);
  return 0;
}
double compute_pi(int n)
{
  int i = 1, j = 0, current = 0;
  double res = 1;
  while (j != n)
  {
    if (current == 0)
    {
      res = res * (2 * i) / ((2 * i) - 1);
      current = 1;
    }
    else
    {
      res = res * (2 * i) / ((2 * i) + 1);
      current = 0;
      i++;
    }
    j++;
  }
  return res * 2;
}