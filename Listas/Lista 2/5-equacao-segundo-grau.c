#include <stdio.h>
#include <math.h>

void raizesEq2Grau(double a, double b, double c);
int main()
{
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  raizesEq2Grau(a, b, c);
  return 0;
}

void raizesEq2Grau(double a, double b, double c)
{
  double res[2];
  double delt = pow(b, 2) - 4 * a * c;
  if (delt == 0)
  {
    printf("%s\n", "RAIZ UNICA");
    res[0] = (-b) / (2 * a);
    printf("X1 = %.2f\n", res[0]);
  }
  else if (delt < 0)
  {
    printf("%s\n", "RAIZES IMAGINARIAS");
  }
  else
  {
    res[0] = (-b + sqrt(delt)) / (2 * a);
    res[1] = (-b - sqrt(delt)) / (2 * a);
    printf("%s\n", "RAIZES DISTINTAS");
    printf("X1 = %.2f\n", res[0] < res[1] ? res[0] : res[1]);
    printf("X2 = %.2f\n", res[1] > res[0] ? res[1] : res[0]);
  }
}