#include <stdio.h>
#include <math.h>

int main()
{
  double x, res = 1, j;
  int n, i = 1;
  scanf("%lf", &x);
  scanf("%d", &n);
  res = x;
  for (i = 1; i <= n; i++)
  {
    long long int fat = 1;
    for (j = 2.f; j <= 2.f * i + 1.f; j = j + 1.f)
    {
      fat *= j;
    }
    res += ((pow(-1, (i * 1.f)) * pow(x, (2.f * i + 1))) / (fat * 1.f));
  }
  printf("seno(%.2f) = %lf\n", x, res);
  return 0;
}