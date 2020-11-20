#include <stdio.h>
#include <string.h>

int is_in(int want, int *numbers, int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    if (want == numbers[i])
      return 1;
  }
  return 0;
}

int main()
{
  int n, numbers[999], i, printed[999], j, tmp;
  memset(printed, 0, sizeof(printed));
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &numbers[i]);
  }

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n - 1; j++)
    {
      if (numbers[j] > numbers[j + 1])
      {
        tmp = numbers[j];
        numbers[j] = numbers[j + 1];
        numbers[j + 1] = tmp;
      }
    }
  }
  tmp = 0;
  for (i = 0; i < n; i++)
  {
    if (!(is_in(numbers[i], printed, tmp)))
    {
      printf("%d\n", numbers[i]);
      printed[tmp] = numbers[i];
      tmp++;
    }
  }
  return 0;
}