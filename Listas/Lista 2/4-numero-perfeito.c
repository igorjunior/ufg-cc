#include <stdio.h>

void somaDivisores(int n);
int main()
{
  int n;
  scanf("%d", &n);
  somaDivisores(n);
  return 0;
}

void somaDivisores(int n)
{
  printf("%d = ", n);
  int i, sum = 0;
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
}