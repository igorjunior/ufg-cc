#include <stdio.h>

int main()
{
  double a, b, c, r;
  char op;
  scanf("%lf%c%lf=%lf", &a, &op, &b, &c);
  switch (op)
  {
  case '+':
  {
    r = a + b;
    break;
  }
  case '-':
  {
    r = a - b;
    break;
  }
  case '*':
  {
    r = a * b;
    break;
  }
  case '/':
  {
    r = a / b;
    break;
  }
  default:
    break;
  }
  if (r == c)
  {
    printf("CORRETO\n");
  }
  else
  {
    printf("ERRADO! O resultado deveria ser: %lf", r);
  }
  return 0;
}