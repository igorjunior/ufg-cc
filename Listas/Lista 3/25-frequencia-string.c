#include <stdio.h>
#include <string.h>

int is_letter(char c)
{
  if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    return 1;
  else
    return 0;
}

int is_caps(char c)
{
  if (c >= 65 && c <= 90)
    return 1;
  else
    return 0;
}

void print(char *buffer)
{
  int i;
  int cases[122];
  int max = 0;
  memset(cases, 0, sizeof(cases));
  for (i = 0; i < strlen(buffer); i++)
  {
    if (is_letter(buffer[i]))
    {
      if (is_caps(buffer[i]))
        buffer[i] = buffer[i] + 32;
      cases[buffer[i]] = cases[buffer[i]] + 1;
    }
  }

  for (i = 0; i < strlen(buffer); i++)
  {
    if (is_letter(buffer[i]))
    {
      if (cases[buffer[i]] > max)
        max = cases[buffer[i]];
    }
  }
  for (i = 0; i < 122; i++)
  {
    if (cases[i] == max)
      printf("%c", i);
  }
  printf("\n");
}

int main()
{
  int n;
  char buffer[200];
  scanf("%d\n", &n);
  while (n > 0)
  {
    scanf("%[^\n]", buffer);
    scanf("%*[^\n]");
    scanf("%*c");
    print(buffer);
    n--;
  }
  return 0;
}