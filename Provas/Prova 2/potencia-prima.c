#include <stdio.h>
#include <math.h>

/**
  * Function that checks a number n as a prime power and decompose on k and p pointer
	* @param n int to be verified
	* @param k pointer to prime power base
	* @param p pointer to power value.
	* @return 1 if prime power, 0 oppose.
*/
int potencia_prima(int n, int *k, int *p);

/**
  * Function that checks a number n as a prime
	* @param n int to be verified
	* @return 1 if prime, 0 oppose.
*/
int prime(int n);

int main()
{
  int n, i = 2, k, p;
  scanf("%d", &n);
  while (n != 0)
  {
    if (potencia_prima(i, &k, &p))
    {
      printf("%d : %d^%d\n", i, k, p);
      n--;
    }
    i++;
  }
  return 0;
}

int potencia_prima(int n, int *k, int *p)
{
  int i, j, powerres;
  for (i = 0; i <= n; i++)
  {
    if (prime(i))
    {
      for (j = 0; j <= n; j++)
      {
        powerres = pow(i, j);
        if (powerres == n)
        {
          *k = i;
          *p = j;
          return 1;
        }
        else if (powerres > n)
          break;
      }
    }
  }
  return 0;
}

int prime(int n)
{
  if (n < 2)
    return 0;
  int i;
  for (i = 2; i < n; i++)
  {
    if (!(n % i))
    {
      return 0;
    }
  }
  return 1;
}
