#include <stdio.h>

int main()
{
  int n, m, matriz[11][11];
  int i, j;
  scanf("%d %d", &m, &n);
  if (n > 10 || m > 10 || n < 1 || m < 1)
  {
    printf("Dimensao invalida\n");
    return 0;
  }
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }
  int x = 0, y = 0;
  while (x < m && y < n)
  {
    for (i = y; i < n; ++i)
    {
      printf("%d ", matriz[x][i]);
    }
    x++;
    for (i = x; i < m; ++i)
    {
      printf("%d ", matriz[i][n - 1]);
    }
    n--;
    if (x < m)
    {
      for (i = n - 1; i >= y; --i)
      {
        printf("%d ", matriz[m - 1][i]);
      }
      m--;
    }
    if (y < n)
    {
      for (i = m - 1; i >= x; --i)
      {
        printf("%d ", matriz[i][y]);
      }
      y++;
    }
  }
  return 0;
}