#include <stdio.h>

void print(int n, int *V, int i)
{
  int higger = V[0], lower = V[0];
  for (i = 0; i < n; i++)
  {
    if (i == 0)
      printf("%d", V[i]);
    else
      printf(" %d", V[i]);
    if (V[i] > higger)
      higger = V[i];
    if (V[i] < lower)
    {
      lower = V[i];
    }
  }
  printf("\n");
  for (i = n - 1; i > -1; i--)
  {
    if (i == n - 1)
      printf("%d", V[i]);
    else
      printf(" %d", V[i]);
  }
  printf("\n");
  printf("%d\n", higger);
  printf("%d\n", lower);
}

int main()
{
  int n, V[999], i;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &V[i]);
  }
  print(n, V, i);
  return 0;
}