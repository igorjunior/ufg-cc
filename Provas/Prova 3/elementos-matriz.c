#include <stdlib.h>

int main()
{
  int x, y;
  int i, j;
  int matriz[10][10];
  int repeat[99999];
  memset(repeat, 0, sizeof(repeat));
  scanf("%d %d", &x, &y);
  if (x < 1 || y < 1 || x > 10 || y > 10)
  {
    printf("dimensao invalida\n");
    return 0;
  }
  for (i = 0; i < x; i++)
  {
    for (j = 0; j < y; j++)
    {
      scanf("%d", &matriz[i][j]);
      repeat[matriz[i][j]]++;
    }
  }
  int init = 0;
  for (i = 0; i < x; i++)
  {
    for (j = 0; j < y; j++)
    {
      if (repeat[matriz[i][j]] == 1)
      {
        if (init)
          printf(",");
        else
          init = 1;
        printf("%d", matriz[i][j]);
      }
    }
  }
  if (!init)
  {
    printf("sem elementos unicos");
  }
  printf("\n");
  return 0;
}