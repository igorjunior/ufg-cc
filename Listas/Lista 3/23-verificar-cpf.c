#include <stdio.h>
#include <string.h>

int main()
{
  int n, cpf[11], i, sum = 0, sum2 = 0;
  scanf("%d", &n);
  while (n > 0)
  {
    sum = sum2 = 0;
    for (i = 0; i < 11; i++)
    {
      scanf("%d", &cpf[i]);
      if (i < 9)
      {
        sum += cpf[i] * (i + 1);
        sum2 += cpf[i] * (9 - i);
      }
    }
    sum = sum % 11;
    sum2 = sum2 % 11;
    if (sum == 10)
      sum = 0;
    if (sum2 == 10)
      sum2 = 0;
    if (cpf[9] == sum && cpf[10] == sum2)
    {
      printf("CPF valido\n");
    }
    else
    {
      printf("CPF invalido\n");
    }
    n--;
  }

  return 0;
}