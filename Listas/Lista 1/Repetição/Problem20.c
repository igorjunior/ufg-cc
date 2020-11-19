#include <stdio.h>

int main()
{
  int n, m, matriz[255][255], i, j, principal[255];
  scanf("%d", &n);
  scanf("%d", &m);

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      int ci = i + 1, cj = j + 1;
      if (cj < ci)
      {
        if (cj > 1)
          printf("-");
        printf("(%d,%d)", ci, cj);
      }
    }
    printf("\n");
  }
  return 0;
}
