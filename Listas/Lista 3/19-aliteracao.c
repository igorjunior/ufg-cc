#include <stdio.h>
#include <string.h>

struct words
{
  char *word;
};

void print(struct words *words, int size)
{
  int alit = 0, i, same = 0;
  for (i = 1; i < size; i++)
  {
    if (words[i].word[0] == words[i - 1].word[0])
    {
      same++;
    }
    else if (same >= 1)
    {
      alit++;
      same = 0;
    }
  }
  if (same > 0)
    alit++;

  printf("%d\n", alit);
}

int main()
{
  int n = 0;
  char buffer[50], *tmp;
  while (scanf("%[^\n]%*c", &buffer) != EOF)
  {
    n = 0;
    struct words words[100];
    tmp = strtok(buffer, " ");
    while (tmp != NULL)
    {
      if (tmp[0] >= 'a' && tmp[0] <= 'z')
        tmp[0] = tmp[0] - 32;
      words[n].word = tmp;
      tmp = strtok(NULL, " ");
      n++;
    }
    print(words, n);
  }
  return 0;
}