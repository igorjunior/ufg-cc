#include <stdio.h>

int main()
{
  int n, i, j, m[100][100], res[100][100], mt[100][100];
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &m[i][j]);
    }
  }
  int tr = 0;
  for (i = 0; i < n; i++)
  {
    tr += m[i][i];
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {

      mt[j][i] = m[i][j];
    }
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      res[i][j] = tr * m[i][j] + mt[i][j];
      if (j > 0)
        printf(" ");
      printf("%d", res[i][j]);
    }
    printf("\n");
  }
  return 0;
}