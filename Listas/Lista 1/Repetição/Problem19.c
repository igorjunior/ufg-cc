#include <stdio.h>

int main()
{
  int n, tabuleiro[8][8], i = 0, j = 0, total = 0;
  scanf("%d", &n);
  for (i = 7; i >= 0; i--)
  {
    for (j = 0; j < 8; j++)
    {
      if (i % 2)
      {
        if (!(j % 2))
        {
          tabuleiro[i][j] = n * 2;
        }
        else
        {
          tabuleiro[i][j] = n;
        }
      }
      else
      {
        if ((j % 2))
        {
          tabuleiro[i][j] = n * 2;
        }
        else
        {
          tabuleiro[i][j] = n;
        }
      }
      if (i == 7 && j == 0)
      {
        tabuleiro[i][j] = n;
      }
      total += tabuleiro[i][j];
    }
  }
  printf("%d", total);
  return 0;
}
