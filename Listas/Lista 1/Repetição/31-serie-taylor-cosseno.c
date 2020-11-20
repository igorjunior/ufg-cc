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
    for (j = 2; j <= 2 * i; j++)
    {
      fat *= j;
    }
    double first = pow(-1.f, i);
    double second = pow(x, (2.f * i));
    double calc = first * second / fat;
    res += calc;
  }
  printf("cos(%.2f) = %lf\n", x, res);
  return 0;
}