#include <stdio.h>

int fibonacci(int t1, int t2, int n);
int main()
{
  int t1, t2, n;
  scanf("%d %d %d", &t1, &t2, &n);
  printf("%d", fibonacci(t1, t2, n));
  return 0;
}

int fibonacci(int t1, int t2, int n)
{
  int i, res[255];
  res[0] = t1,
  res[1] = t2;
  for (i = 2; i < n; i++)
  {
    res[i] = res[i - 2] + res[i - 1];
  }
  return res[n - 1];
}