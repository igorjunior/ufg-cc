#include <stdio.h>

int main()
{
  int n, m, i, j = 0, k;
  char c[9999];
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    j = 0;
    scanf("%d ", &m);
    while ((c[j] = getchar()) != '\n')
    {
      j++;
      if (j > 499)
      {
        printf("NULL");
        return;
      }
    }
    if (m > j)
    {
      for (k = 0; k < j; k++)
      {
        printf("%c", c[k]);
      }
    }
    else
    {
      for (k = 0; k < m; k++)
      {
        printf("%c", c[k]);
      }
    }

    printf("\n");
  }
  return 0;
}