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
  int maiuscula = 0, i = 0;
  while (buffer[i] != '\n')
  {
    if (is_letter(buffer[i]))
    {
      if (!maiuscula)
      {
        if (!is_caps(buffer[i]))
        {
          buffer[i] = buffer[i] - 32;
        }
        maiuscula = 1;
      }
      else if (maiuscula)
      {
        if (is_caps(buffer[i]))
        {
          buffer[i] = buffer[i] + 32;
        }
        maiuscula = 0;
      }
    }
    i++;
  }
  printf("%s", buffer);
}

int main()
{
  char buffer[255];
  int i = 0;
  memset(buffer, 0, sizeof(buffer));
  while ((buffer[i] = getchar()) != EOF)
  {
    if (buffer[i] == '\n')
    {
      print(buffer);
      memset(buffer, 0, sizeof(buffer));
      i = 0;
    }
    else
      i++;
  }
  return 0;
}
