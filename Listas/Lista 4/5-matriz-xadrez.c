#include <stdio.h>

int main()
{
  int n, m, i, j, matriz[10][10];
  scanf("%d %d", &n, &m);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      if (!(j % 2))
      {
        if (!(i % 2) || i == 0)
          printf("1");
        else
          printf("0");
      }
      else
      {
        if (!(i % 2) || i == 0)
          printf("0");
        else
          printf("1");
      }
    }
    printf("\n");
  }
  return 0;
}