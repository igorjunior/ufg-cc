#include <stdio.h>
int found(int p, int n, int *res)
{
  int i, j = 0;
  for (i = 0; i < p; i++)
  {
    if (res[i] >= n)
      j++;
  }
  return j;
}
int main()
{
  int n = 0, res[999], i = 0, j;
  while (n < 1 || n > 1000)
  {
    scanf("%d", &n);
  }
  for (i = 0; i < n; i++)
  {
    scanf("%d", &res[i]);
  }
  scanf("%d", &j);
  printf("%d\n", found(n, j, res));
  return 0;
}