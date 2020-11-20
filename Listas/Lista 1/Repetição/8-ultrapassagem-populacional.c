#include <stdio.h>

int main()
{
  int a, b, y = 0;
  scanf("%d", &a);
  scanf("%d", &b);

  while (a < b)
  {
    b += b * .015f;
    a += a * .03f;
    y++;
  }
  printf("ANOS = %d\n", y);
  return 0;
}