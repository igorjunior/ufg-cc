#include <stdio.h>
#include <math.h>

int isprimo(int n)
{
  int res = 1, i;
  for (i = 2; i < n; i++)
  {
    if (!(n % i))
    {
      res = 0;
    }
  }
  if (res && n > 1)
  {
    return 1;
  }
  return 0;
}

int main()
{
  int i, m, n, j = 0;
  scanf("%d", &n);
  m = n;
  while (m <= 1)
  {
    printf("Fatoracao nao e possivel para o numero %d!\n", m);
    scanf("%d", &n);
    m = n;
  }
  printf("%d = ", m);
  while (m != 1)
  {
    int primo = 2;
    if (!(m % primo))
    {
      if (j > 0)
        printf(" x ");
      printf("%d", primo);
      j++;
      m /= primo;
    }
    else
    {
      for (i = 3; i <= m; i++)
      {
        if (isprimo(i))
        {
          if (!(m % i))
          {
            if (j > 0)
              printf(" x ");
            printf("%d", i);
            j++;
            m /= i;
            break;
          }
        }
      }
    }
  }
  printf("\n");
  return 0;
}