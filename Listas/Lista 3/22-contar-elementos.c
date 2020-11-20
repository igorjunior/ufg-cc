#include <stdio.h>
#include <string.h>

int main()
{
  int n, numbers[999], quant[999], j, res = 0;
  scanf("%d", &n);
  memset(quant, 0, sizeof(quant));
  for (j = 0; j < n; j++)
  {
    scanf("%d", &numbers[j]);
    quant[numbers[j]] = quant[numbers[j]] + 1;
  }
  for (j = 0; j < n; j++)
  {
    if (quant[numbers[j]] == 1)
      res++;
  }
  printf("%d\n", res);
  return 0;
}