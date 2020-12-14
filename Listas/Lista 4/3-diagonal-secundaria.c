#include <stdio.h>

int main()
{
  int n, i, j, matriz[100][100];
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }
  i = 0;
  j = n - 1;
  while (n > 0)
  {
    printf("%d\n", matriz[i][j]);
    i++;
    j--;
    n--;
  }

  return 0;
}