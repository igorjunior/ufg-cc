#include <stdio.h>

void print(int j, int res)
{
  if (j > 0)
    printf(" %d", res);
  else
    printf("%d", res);
}
int found(int n, int *res)
{
  int i, j = 0;
  for (i = 0; i < n; i++)
  {
    if (!(res[i] % 2))
    {
      print(j, res[i]);
      j++;
    }
  }
  print(j, j);
  return j;
}
int main()
{
  int res[999], i = 0, n;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%ld", &res[i]);
  }
  found(n, res);
  return 0;
}