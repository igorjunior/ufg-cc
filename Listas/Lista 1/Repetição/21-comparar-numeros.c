#include <stdio.h>

int main()
{
  int n, i, j, k, numbers[255][2], res[255];
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d %d", &numbers[i][0], &numbers[i][1]);
    int old = 0;
    for (j = 0; j < 2; j++)
    {
      int number = numbers[i][j], m = 0, o = 0;
      for (k = 0; k < 3; k++)
      {
        m = number % 10;
        number /= 10;
        if (k == 0)
          o += m * 100;
        if (k == 1)
          o += m * 10;
        if (k == 2)
          o += m;
      }
      if (o > old)
        old = o;
    }
    res[i] = old;
  }
  for (i = 0; i < n; i++)
  {
    printf("%d\n", res[i]);
  }
  return 0;
}