#include <stdio.h>
#include <string.h>

int main()
{
  char buffer[999];
  char buffer2[999];
  int tried = 0, i, entries = 0, n, j;
  scanf("%d", &n);
  for (j = 0; j < n; j++)
  {
    tried = entries = 0;
    scanf("%s %s", &buffer, &buffer2);
    for (i = 0; i < strlen(buffer); i++)
    {
      while (buffer[i] != buffer2[i])
      {
        if (buffer[i] == 'z')
          buffer[i] = 'a';
        else
          buffer[i] = buffer[i] + 1;
        tried++;
      }
    }
    printf("%d\n", tried);
  }
  return 0;
}