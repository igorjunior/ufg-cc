#include <stdio.h>

void calc_print(int *numbers)
{
  int i, j = 0, k = 1, sum = 0;

  while (1)
  {
    for (i = 0; i < 9; i++)
    {
      if (i != j && i != k)
        sum += numbers[i];
    }
    if (sum == 100)
      break;
    else
      sum = 0;
    if (k == 8)
    {
      k = 0;
      j++;
    }
    else
    {
      k++;
    }
    if (k == j)
      k++;
  }
  for (i = 0; i < 9; i++)
  {
    if (i != j && i != k)
      printf("%d\n", numbers[i]);
  }
  return;
}

int main()
{
  int entries, numbers[9], i, j, aux, k;
  scanf("%d", &entries);
  for (k = 0; k < entries; k++)
  {
    for (i = 0; i < 9; i++)
      scanf("%d", &numbers[i]);
    for (i = 1; i < 9; i++)
    {
      for (j = 0; j < 9 - 1; j++)
      {
        if (numbers[j] > numbers[j + 1])
        {
          aux = numbers[j];
          numbers[j] = numbers[j + 1];
          numbers[j + 1] = aux;
        }
      }
    }
    calc_print(numbers);
  }
  return 0;
}
