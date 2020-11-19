#include <stdio.h>

unsigned long int fat(unsigned int n);
int main()
{
  int n, p, i, j;
  scanf("%d %d", &n, &p);
  int res[99][99];
  for (i = n; i <= p; i++)
  {
    unsigned long int ifat = fat(i);
    for (j = 0; j < i + 1; j++)
    {
      int res = ifat / (fat(j) * fat(i - j));
      if (j == 0)
        printf("%d", res);
      else
        printf(",%d", res);
    }
    printf("\n");
  }
  return 0;
}

unsigned long int fat(unsigned int n)
{
  if (n == 0 || n == 1)
    return 1;
  int i;
  unsigned long int res = n * (n - 1);
  for (i = 2; i < n; i++)
  {
    res *= (n - i);
  }
  return res;
}