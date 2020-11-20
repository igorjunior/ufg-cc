#include <stdio.h>

void print(int n)
{
  int bin[32], i = 0, j;
  while (n > 0)
  {
    bin[i] = n % 2;
    n /= 2;
    i++;
  }
  for (j = i - 1; j >= 0; j--)
    printf("%d", bin[j]);
  printf("\n");
}

int main()
{
  int n;
  while (scanf("%d", &n) != EOF)
  {
    if (n == 0)
    {
      printf("%d\n", 0);
    }
    else
      print(n);
  }
  return 0;
}