#include <stdio.h>

int main()
{
  float m[2][2];
  int i, j, k;
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      scanf("%f", &m[i][j]);
    }
  }
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 2; j++)
    {
      float aux = 0;
      for (k = 0; k < 2; k++)
      {
        aux += m[i][k] * m[k][j];
      }
      if (j > 0)
        printf(" ");
      printf("%.3f", aux);
    }
    printf("\n");
  }
  return 0;
}