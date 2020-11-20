#include <stdio.h>
#include <string.h>

int main()
{
  int n = 0, pares = 0, impares = 0, qpares = 0, qimpares = 0;
  scanf("%d", &n);
  while (n != 0)
  {
    if (n % 2)
    {
      impares += n;
      qimpares++;
    }
    else
    {
      pares += n;
      qpares++;
    }
    scanf("%d", &n);
  }
  if (qpares < 1)
    qpares = 1;
  if (qimpares < 1)
    qimpares = 1;
  printf("MEDIA PAR: %lf\n", (double)pares / qpares);
  printf("MEDIA IMPAR: %lf\n", (double)impares / qimpares);
  return 0;
}