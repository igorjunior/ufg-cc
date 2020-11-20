#include <stdio.h>
#include <string.h>

void print_inverte(char *buffer, int size)
{
  int i;
  printf("%s", buffer);
  for (i = size - 1; i > -1; i--)
  {
    printf("%c", buffer[i]);
  }
  printf("\n");
}

int main()
{
  int n, i, j, k;
  int m, o, sizebuffer, sizebuffer2;
  scanf("%d", &n);
  char buffer[999999], buffer2[999999];
  for (i = 0; i < n; i++)
  {
    memset(buffer, 0, sizeof(buffer));
    memset(buffer2, 0, sizeof(buffer2));
    j = k = m = 0;
    scanf("%d %d", &m, &o);
    for (j = m; j <= o; j++)
    {
      if (j == m)
      {
        sizebuffer2 = sprintf(buffer2, "%d", j);
      }
      else
      {
        sizebuffer = sprintf(buffer, "%d", j);
        for (k = 0; k < sizebuffer; k++)
        {
          buffer2[sizebuffer2] = buffer[k];
          sizebuffer2++;
        }
      }
    }
    print_inverte(buffer2, sizebuffer2);
  }
  return 0;
}