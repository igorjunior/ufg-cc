#include <stdio.h>
#include <string.h>

void removechar(char *str, char c)
{

  char *src, *dst;
  for (src = dst = str; *src != '\0'; src++)
  {
    *dst = *src;
    if (*dst != c)
      dst++;
  }
  *dst = '\0';
}

void str_clean(char *str, char *clr)
{
  int i;
  int clrlength = strlen(clr);
  for (i = 0; i < clrlength; i++)
  {
    removechar(str, clr[i]);
  }
}

int main()
{
  char str[256]; // string original
  char clr[256]; // lista de caracteres indesejados
  scanf("%[^\n]", str);
  scanf("\n%[^\n]", clr);
  str_clean(str, clr);
  printf("%s\n", str);
  return 0;
}
