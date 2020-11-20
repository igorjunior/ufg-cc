#include <stdio.h>

int modulo(int number)
{
  if (number < 0)
    return number * (-1);
  else
    return number;
}

void calc_print(int *buffer, int size)
{
  int i, j, dist = modulo(buffer[0] - buffer[1]);
  for (i = 0; i < size; i++)
  {
    for (j = 0; j < size; j++)
    {
      if (i != j)
      {
        if (modulo(buffer[i] - buffer[j]) < dist)
          dist = modulo(buffer[i] - buffer[j]);
      }
    }
  }
  printf("%d %d\n", dist, size * size);
}

int main()
{
  int n, size, buffer[255], i;
  scanf("%d", &n);
  while (n > 0)
  {
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
      scanf("%d", &buffer[i]);
    }
    calc_print(buffer, size);
    n--;
  }
  return 0;
}