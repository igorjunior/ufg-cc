#include <stdio.h>

int main()
{
  double smin, limiteisencao, precotv1, precotv2;
  scanf("%lf %lf %lf %lf", &smin, &limiteisencao, &precotv1, &precotv2);
  int entries[255][3], n = 0, i, j, k;
  while (1)
  {
    scanf("%d %d %d", &entries[n][0], &entries[n][1], &entries[n][2]);
    if (entries[n][0] == 0)
      break;
    n++;
  }
  for (i = 0; i < n; i++)
  {
    double salbruto = smin, salliq;
    if (entries[i][1] > 0)
    {
      if (entries[i][1] >= 10)
        salbruto += precotv1 * entries[i][1] * .14f;
      else
        salbruto += precotv1 * entries[i][1] * .13f;
    }
    if (entries[i][2] > 0)
    {
      if (entries[i][2] >= 20)
        salbruto += precotv2 * entries[i][2] * .13f;
      else
        salbruto += precotv2 * entries[i][2] * .12f;
    }
    salliq = salbruto;
    salliq -= salliq * .08f;
    if (salliq > limiteisencao)
    {
      salliq -= (salliq - limiteisencao) * .15f;
    }
    printf("MATRICULA = %d, SALARIO BRUTO = %.2f, SALARIO LIQUIDO = %.2f\n", entries[i][0], salbruto, salliq);
  }

  return 0;
}