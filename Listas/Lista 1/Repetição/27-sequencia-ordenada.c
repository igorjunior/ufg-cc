#include <stdio.h>

int main()
{
  int n = -1, i, j;
  int entries[255];
  double values[255][255];

  while (1)
  {
    n++;
    scanf("%d", &entries[n]);
    if (entries[n] == 0)
      break;
    for (i = 0; i < entries[n]; i++)
    {
      scanf("%lf", &values[n][i]);
    }
  }
  for (i = 0; i < n; i++)
  {
    int ordered = 1;
    for (j = 1; j < entries[i]; j++)
    {
      if (values[i][j] < values[i][j - 1])
        ordered = 0;
    }
    if (ordered)
      printf("ORDENADA\n");
    else
      printf("DESORDENADA\n");
  }
  return 0;
}