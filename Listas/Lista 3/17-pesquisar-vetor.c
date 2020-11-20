#include <stdio.h>

int check(char c, char *buffer)
{
  char *find;
  int index;
  find = strchr(buffer, c);
  if (find != NULL)
    index = (int)(find - buffer);
  else
    index = -1;
  return index;
}

int main()
{
  int n, i, j = 0;
  char buffer[499], c;
  scanf("%d\n", &n);
  for (i = 0; i < n; i++)
  {
    j = 0;
    scanf("%c ", &c);
    fgets(buffer, 499, stdin);
    int find = check(c, buffer);
    if (find == -1)
    {
      printf("Caractere %c nao encontrado.\n", c);
    }
    else
    {
      printf("Caractere %c encontrado no indice %d da string.\n", c, find);
    }
  }
  return 0;
}