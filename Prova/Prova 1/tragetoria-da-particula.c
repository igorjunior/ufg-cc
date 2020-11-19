#include <stdio.h>
#include <math.h>
int main()
{
  int l, a, b, c, delta, xlength, i = 0, entry[4];
  double x[2];
  scanf("%d %d %d %d", &l, &a, &b, &c);
  delta = (b * b) - 4 * a * c;
  if (delta == 0)
  {
    xlength = 1;
    x[0] = (0 - b) / (2 * a);
    x[1] = x[0];
  }
  else if (delta < 0)
  {
    xlength = 0;
  }
  else
  {
    xlength = 2;
    x[0] = ((0 - b) + sqrt(delta)) / (2 * a);
    x[1] = ((0 - b) - sqrt(delta)) / (2 * a);
  }

  if (xlength == 0)
  {
    printf("POSICOES IMAGINARIAS\n");
    return 0;
  }
  int test = l / 2;
  if (x[0] > test || x[0] < (0 - test) || x[1] > test || x[1] < (0 - test))
    printf("POSICOES: x1=%.2f e x2=%.2f  (FORA DO EXPERIMENTO)\n", x[0], x[1]);
  else
    printf("POSICOES: x1=%.2f e x2=%.2f \n", x[0], x[1]);

  if (!((a + b + c) % 3))
    printf("FATO 1: DESAPARECIDA\n");
  if (!(c % 2) && c < (a + b))
    printf("FATO 2: ORIGEM\n");
  return 0;
}