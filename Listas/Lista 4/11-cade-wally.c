#include <stdio.h>

int main()
{
  int n, m, matriz[100][100];
  int i, j;
  scanf("%d %d", &n, &m);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }
  int x = 0, y = 0;
  static int findWally = 0;
  while (1)
  {
    if (x == m)
    {
      y++;
      x = 0;
    }
    if (y == n)
      break;
    if (matriz[y][x] == 1111)
    {
      if (y == 0)
      {
        if (matriz[n - 1][x] == 4)
        {
          findWally = 1;
          break;
        }
      }
      else
      {
        if (matriz[y - 1][x] == 4)
        {
          findWally = 1;
          break;
        }
      }
    }
    x++;
  }
  if (findWally)
    printf("%d %d\n", y, x);
  else
    printf("WALLY NAO ESTA NA MATRIZ\n");
  return 0;
}