#include <stdio.h>

int main()
{
  int n = 1, m = 1, sum;
  char res[99];
  while (n != 0 && m != 0)
  {
    memset(res, 0, sizeof(res));
    scanf("%d %d", &n, &m);
    sum = n + m;
    sprintf(res, "%d", sum);
    for (n = 0; n < 99; n++)
    {
      if (res[n] == '1' || res[n] == '2' || res[n] == '3' || res[n] == '4' || res[n] == '5' || res[n] == '6' || res[n] == '7' || res[n] == '8' || res[n] == '9')
        printf("%c", res[n]);
    }
    printf("\n");
  }
  return 0;
}