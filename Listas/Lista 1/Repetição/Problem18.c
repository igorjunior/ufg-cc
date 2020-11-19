#include <stdio.h>
#include <math.h>

int main()
{
  double x, y, z, vatual, final[3] = {0.f, 0.f, 0.f};
  scanf("%lf", &x);
  scanf("%lf", &y);
  scanf("%lf", &z);

  if (y >= z)
  {
    printf("INTERVALO INVALIDO.\n");
    return 0;
  }
  vatual = y;
  while (vatual <= z)
  {
    int ingressos;
    double lucro;
    if (x > vatual)
    {
      ingressos = (x - vatual) / 0.5f;
      ingressos = 120 + (ingressos * 25);
    }
    else if (x < vatual)
    {
      ingressos = (vatual - x) / 0.5f;
      ingressos = 120 - (ingressos * 30);
    }
    else
    {
      ingressos = 120;
    }
    lucro = (vatual * ingressos) - (200 + .05f * ingressos);
    printf("V: %.2f, N: %d, L: %.2f\n", vatual, ingressos, lucro);
    if (lucro > final[2])
    {
      final[0] = vatual;
      final[1] = ingressos;
      final[2] = lucro;
    }
    vatual += 1.f;
  }
  printf("Melhor valor final: %.2f\nLucro: %.2f\nNumero de ingressos: %.0f\n", final[0], final[2], final[1]);
  return 0;
}
