#include <stdio.h>

int main()
{
  int n, m, i, j, matriz[10][10];

  do
  {
    scanf("%d", &n);
  } while (n < 1 || n > 10);
  do
  {
    scanf("%d", &m);
  } while (m < 1 || m > 10);
  for (i = 0; i < n; i++)
  {
    printf("linha %d: ", i + 1);
    for (j = 0; j < m; j++)
    {
      scanf("%d", &matriz[i][j]);
      if (j > 0)
        printf(",");
      printf("%d", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}