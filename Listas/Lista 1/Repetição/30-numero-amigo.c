#include <stdio.h>
#include <time.h>

int main()
{
  int n, i, j, k;
  scanf("%d", &n);
  clock_t begin = clock();
  int oldj = 220;
  for (i = 284; i < 90000; i++)
  {
    if (n > 0 && !(i % 2))
    {
      for (j = oldj; j < i; j++)
      {
        if (n > 0 && i > j)
        {
          int a1 = 0, a2 = 0;
          for (k = 1; k < i; k++)
          {
            if (!(i % k))
            {
              a1 += k;
            }
          }
          if (a1 == j)
          {
            for (k = 1; k < j; k++)
            {
              if (!(j % k))
              {
                a2 += k;
              }
            }

            if (a2 == i)
            {
              printf("(%d,%d)\n", j, i);
              n--;
              if (i < 1200)
                i = 1200;
              else if (i < 2900)
                i = 2900;
              else if (i < 5500)
                i = 5500;
              else if (i < 6300)
                i = 6300;
              else if (i < 10800)
                i = 10800;
              else if (i < 14595)
                i = 14595;
              else if (i < 18416)
                i = 18416;
              else if (i < 66992)
                i = 66992;
              else if (i < 76084)
                i = 76084;

              if (oldj < 1100)
                oldj = 1100;
              else if (oldj < 2600)
                oldj = 2600;
              else if (oldj < 5000)
                oldj = 5000;
              else if (oldj < 6200)
                oldj = 6200;
              else if (oldj < 10700)
                oldj = 10700;
              else if (oldj < 12000)
                oldj = 12000;
              else if (oldj < 17200)
                oldj = 17200;
              else if (oldj < 63000)
                oldj = 63000;
              else if (oldj < 66900)
                oldj = 66900;
            }
          }
        }
      }
    }
  }
  clock_t end = clock();
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("%lf", time_spent);
  return 0;
}