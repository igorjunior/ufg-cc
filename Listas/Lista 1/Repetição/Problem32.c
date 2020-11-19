#include <stdio.h>
#include <math.h>

int main()
{
  double x, res = 1;
  int n, i = 1, j;
  scanf("%lf", &x);
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    long long int fat = 1;
    for (j = 2; j <= i; j++)
    {
      fat *= j;
    }
    res += pow(x, i) / fat;
  }
  printf("e^%.2f = %lf\n", x, res);
  return 0;
}