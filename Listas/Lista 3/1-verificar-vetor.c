#include <stdio.h>

int found(int n, int p, int *res)
{
  int i;
  for (i = 0; i < n; i++)
  {
    if (res[i] == p)
      return 1;
  }
  return 0;
}

int main()
{
  int n, res[99], t, i = 0;
  scanf("%d", &n);
  while (i != n)
  {
    scanf("%d", &res[i]);
    i++;
  }
  scanf("%d", &t);
  while (t > 0)
  {
    scanf("%d", &n);
    printf("%s\n", found(i, n, res) ? "ACHEI" : "NAO ACHEI");
    t--;
  }
  return 0;
}