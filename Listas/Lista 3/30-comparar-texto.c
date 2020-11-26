#include <stdio.h>
#include <string.h>
#include <ctype.h>

void order(char *str, int *result)
{

  int count[127], i;
  memset(count, 0, sizeof(count));
  for (i = 0; i < strlen(str); i++)
  {
    count[tolower(str[i])]++;
  }
  memcpy(result, count, sizeof(count));
}

int main()
{
  int times = 0;
  char buffer[2000];
  char *pch;
  char str[2][1001];
  memset(buffer, 0, sizeof(buffer));
  fgets(buffer, 2000, stdin);
  pch = strtok(buffer, ";");
  while (pch != NULL)
  {
    if (times > 1)
    {
      times = 3;
      break;
    }
    strcpy(str[times], pch);
    pch = strtok(NULL, ";");
    times++;
  }
  if (times != 2)
  {
    printf("FORMATO INVALIDO!\n");
    return 0;
  }
  int Fa[127], Fb[127];
  order(str[0], Fa);
  order(str[1], Fb);
  printf("(%d,%d,%d,%d,%d)\n", Fa['a'], Fa['e'], Fa['i'], Fa['o'], Fa['u']);
  printf("(%d,%d,%d,%d,%d)\n", Fb['a'], Fb['e'], Fb['i'], Fb['o'], Fb['u']);
  double dA = pow((double)(Fa['a'] - Fb['a']), 2);
  dA += pow(Fa['e'] - Fb['e'], 2);
  dA += pow(Fa['i'] - Fb['i'], 2);
  dA += pow(Fa['o'] - Fb['o'], 2);
  dA += pow(Fa['u'] - Fb['u'], 2);
  dA = sqrt(dA);
  printf("%.2lf\n", dA);
  return 0;
}
