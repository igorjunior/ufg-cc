#include <stdio.h>

void print(int j, int *res)
{
  int i;
  for (i = j; i > -1; i--)
  {
    if (i == j)
      printf("%d", res[i]);
    else
      printf(" %d", res[i]);
  }
}
int main()
{
  int res[999], i = 0, n;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%ld", &res[i]);
  }
  print(n - 1, res);
  return 0;
}