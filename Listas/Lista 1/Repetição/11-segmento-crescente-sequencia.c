#include <stdio.h>

int main()
{
  int n, i, numbers[255];
  scanf("%d\n", &n);
  scanf("%d", &numbers[0]);
  for (i = 1; i < n; i++)
  {
    scanf("%d", &numbers[i]);
  }
  int sequence = 1, max = 0;
  for (i = 1; i < n; i++)
  {
    if (numbers[i] > numbers[i - 1])
    {
      sequence++;
    }
    else
    {
      if (sequence > max)
        max = sequence;
      sequence = 1;
    }
  }
  if (sequence > max)
    max = sequence;
  printf("O comprimento do segmento crescente maximo e: %d\n", max);
  return 0;
}