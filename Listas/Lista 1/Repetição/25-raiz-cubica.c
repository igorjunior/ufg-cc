#include <stdio.h>

int main()
{
  int entry, n = 2, i, j, k, results[255][255];
  scanf("%d", &entry);
  printf("1*1*1 = 1\n");
  while (n <= entry)
  {
    int result = n * n * n;
    int boolean = 1;
    int tryed[255];
    int trys = 0;
    int current = 0;
    int init = n + 1;
    for (i = n + 1; i < result; i++)
    {
      if (current < result)
      {
        if (i % 2)
        {
          current += i;
          tryed[trys] = i;
          trys++;
        }
      }
      else if (current == result)
      {
        i = result / 2;
        break;
      }
      else if (current > result)
      {
        trys = 0;
        i = init + 1;
        init++;
        current = 0;
      }
      if (trys > n)
      {
        trys = 0;
        i = init + 1;
        init++;
        current = 0;
      }
    }
    printf("%d*%d*%d = %d", n, n, n, tryed[0]);
    for (i = 1; i < trys; i++)
    {
      results[n][i] = tryed[i];
      printf("+%d", tryed[i]);
    }
    printf("\n");
    n++;
  }

  return 0;
}