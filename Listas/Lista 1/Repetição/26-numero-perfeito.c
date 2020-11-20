#include <stdio.h>

int main()
{
  int n, i, sum = 0;
  scanf("%d", &n);
  printf("%d =", n);
  for (i = 1; i < n; i++)
  {
    if (!(n % i))
    {
      if (sum > 0)
        printf(" +");
      printf(" %d", i);
      sum += i;
    }
  }
  printf(" = %d", sum);
  if (sum == n)
    printf(" (NUMERO PERFEITO)\n");
  else
    printf(" (NUMERO NAO E PERFEITO)\n");

  return 0;
}