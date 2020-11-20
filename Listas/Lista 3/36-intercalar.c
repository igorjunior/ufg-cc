#include <stdio.h>

void bubble(int *numbers, int n)
{
  int i, j, aux;
  for (i = 1; i < n; i++)
  {
    for (j = 0; j < n - i; j++)
    {
      if (numbers[j] > numbers[j + 1])
      {
        aux = numbers[j];
        numbers[j] = numbers[j + 1];
        numbers[j + 1] = aux;
      }
    }
  }
}

void sort_and_print(int *numbers, int n)
{
  int i;
  bubble(numbers, n);
  for (i = 0; i < n; i++)
  {

    if (i > 0 && numbers[i] == numbers[i - 1])
    {
      if (i != n - 1)
        printf("%d\n", numbers[i]);
    }
    else
      printf("%d\n", numbers[i]);
  }
}

int main()
{
  int q[2], i, j;
  scanf("%d %d", &q[0], &q[1]);
  int *V = malloc(sizeof(int) * (q[0] + q[1]));
  for (i = 0; i < q[0] + q[1]; i++)
  {
    scanf("%d", &V[i]);
  }
  sort_and_print(V, q[0] + q[1]);
  return 0;
}
