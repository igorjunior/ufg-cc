#include <stdio.h>

int main()
{
  int n, j = 0, i;
  scanf("%d\n", &n);
  while (n > 0)
  {
    j = i = 0;
    char buffer[255], c, buffer2[255];
    c = getchar();
    while (c != '\n')
    {
      buffer[j] = c;
      c = getchar();
      j++;
    }
    for (i = 0; i < j; i++)
    {
      if ((buffer[i] >= 'a' && buffer[i] <= 'z') || (buffer[i] >= 'A' && buffer[i] <= 'Z'))
      {
        buffer[i] = buffer[i] + 3;
      }
    }
    int tmp = j - 1;
    for (i = 0; i < j; i++)
    {
      buffer2[i] = buffer[tmp];
      tmp--;
    }
    for (i = 0; i < j; i++)
    {
      if ((i + 1) > j / 2)
        buffer2[i] = buffer2[i] - 1;
      printf("%c", buffer2[i]);
    }
    printf("\n");
    n--;
  }
  return 0;
}