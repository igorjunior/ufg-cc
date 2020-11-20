#include <stdio.h>

int check(char c)
{
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    return 1;
  else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return 0;
  return -1;
}

void print(int n, char *buffer)
{
  int v = 0, c = 0, i, l = 0;
  for (i = 0; i < n; i++)
  {
    int val = check(buffer[i]);
    if (val == 1)
      v++;
    else if (val == 0)
      c++;
    if (val != -1)
      l++;
  }
  printf("Letras = %d\n", l);
  printf("Vogais = %d\n", v);
  printf("Consoantes = %d\n", c);
}

int main()
{
  int n, j = 0;
  char buffer[255], c;
  scanf("%d\n", &n);
  while (n > 0)
  {
    j = 0;
    memset(buffer, 0, sizeof(buffer));
    c = getchar();
    while (c != '\n')
    {
      buffer[j] = c;
      c = getchar();
      j++;
    }
    print(j, buffer);
    n--;
  }
  return 0;
}