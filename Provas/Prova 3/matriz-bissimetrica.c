#include <stdlib.h>

int main()
{
  int xy;
  int i, j;
  int matriz[10][10];
  scanf("%d", &xy);
  if (xy < 1 || xy > 10)
  {
    printf("dimensao invalida\n");
    return 0;
  }
  for (i = 0; i < xy; i++)
  {
    for (j = 0; j < xy; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }
  for (i = 0; i < xy; i++)
  {
    for (j = 0; j < xy; j++)
    {
      if ((matriz[i][j] != matriz[xy - j - 1][xy - i - 1]) || (matriz[i][j] != matriz[j][i]))
      {
        printf("nao bissimetrica\n");
        return 0;
      }
    }
  }
  printf("bissimetrica\n");
  return 0;
}