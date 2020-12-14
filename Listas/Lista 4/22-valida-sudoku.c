#include <stdio.h>

int verificacoluna(int *matriz[])
{
  int i, j, sum[9];
  memset(sum, 0, sizeof(sum));
  for (j = 0; j < 9; j++)
  {
    for (i = 0; i < 9; i++)
    {
      sum[matriz[i][j]]++;
    }
    for (i = 0; i < 9; i++)
    {
      if (sum[i] != 1)
        return 0;
    }
  }
  return 1;
}

int main()
{
  int matriz[9][9];
  int i, j;
  for (i = 0; i < 9; i++)
  {
    for (j = 0; j < 9; j++)
    {
      scanf("%d", &matriz[i][j]);
    }
  }
  int sum[10];
  for (i = 0; i < 9; i++)
  {
    memset(sum, 0, sizeof(sum));
    for (j = 0; j < 9; j++)
    {
      sum[matriz[i][j]]++;
    }
    for (j = 1; j <= 9; j++)
    {
      if (sum[j] != 1)
      {
        printf("invalido\n");
        return 0;
      }
    }
  }

  for (j = 0; j < 9; j++)
  {
    memset(sum, 0, sizeof(sum));
    for (i = 0; i < 9; i++)
    {
      sum[matriz[i][j]]++;
    }
    for (i = 1; i <= 9; i++)
    {
      if (sum[i] != 1)
      {
        printf("invalido\n");
        return 0;
      }
    }
  }
  int x = 0;
  while (1)
  {
    if (x == 9)
      break;
    memset(sum, 0, sizeof(sum));
    for (i = x; i < x + 3; i++)
    {
      for (j = x; j < x + 3; j++)
      {
        sum[matriz[i][j]]++;
      }
    }
    for (j = 1; j <= 9; j++)
    {
      if (sum[j] != 1)
      {
        printf("invalido\n");
        return 0;
      }
    }
    x += 3;
  }
  printf("valido");
  return 0;
}