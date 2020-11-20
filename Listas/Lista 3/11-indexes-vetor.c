#include <stdio.h>

int main()
{
  int n, numbers[9999], i;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &numbers[i]);
  }
  int higgerIndex = 0, seq = 0;
  for (i = 0; i < n; i++)
  {
    if (numbers[i] > numbers[higgerIndex])
      higgerIndex = i;
    if (numbers[i] == numbers[n - 1])
      seq++;
  }
  printf("Nota  %d, %d vezes\n", numbers[n - 1], seq);
  printf("Nota  %d, indice %d\n", numbers[higgerIndex], higgerIndex);
  return 0;
}