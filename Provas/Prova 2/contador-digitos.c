#include <stdio.h>

int digit_count(long int n);

int main()
{
  long int n;
  scanf("%ld", &n);

  int count = digit_count(n);

  printf("Numero de digitos: %d\n", count);

  return 0;
}

int digit_count(long int n)
{
  int currentcounter = 0;
  while (n != 0)
  {
    n /= 10;
    currentcounter++;
  }
  return currentcounter;
}