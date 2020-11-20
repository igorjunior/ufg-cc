#include <stdio.h>
#include <math.h>

double raiz(double n);
double absoluto(double n);
double entry[2];
int main()
{
  double r[255][2], tmp;
  int n = 0, i;
  scanf("%lf\n", &entry[0]);
  scanf("%lf", &entry[1]);
  while (1)
  {
    if (n == 0)
    {
      r[n][0] = 1;
      r[n][1] = 0;
      n++;
    }
    else
    {
      r[n][0] = raiz(r[n - 1][0]);
      tmp = pow(r[n][0], 2);
      r[n][1] = tmp - entry[0];
      if (fabs((tmp - entry[0])) <= entry[1])
      {
        break;
      }
      n++;
    }
  }
  for (i = 1; i < n + 1; i++)
  {
    printf("r: %.9f, err: %.9f\n", r[i][0], r[i][1]);
  }
  return 0;
}
double raiz(double n)
{
  return (n + (entry[0] / n)) / 2;
}
double absoluto(double n)
{
  if (n >= 0.0)
    return n;
  else
    return -n;
}