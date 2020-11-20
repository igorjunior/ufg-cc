#include <stdio.h>

unsigned long int fat(unsigned int n);
unsigned int i, n;
int main()
{
  scanf("%d", &n);
  if (n == 0 || n == 1)
  {
    printf("%d! = 1", n);
    return 0;
  }
  printf("%d! = %lu", n, fat(n));
  return 0;
}

unsigned long int fat(unsigned int n)
{
  unsigned long int res = n * (n - 1);
  for (i = 2; i < n; i++)
  {
    res *= (n - i);
  }
  return res;
}