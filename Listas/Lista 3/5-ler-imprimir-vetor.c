#include <stdio.h>

int main()
{
  int i, n, j = 0;
  scanf("%d", &n);
  while (n != 0)
  {
    scanf("%d", &i);
    if (j == 0)
    {
      printf("%d", i);
      j++;
    }
    else
      printf(" %d", i);
    n--;
  }
  return 0;
}