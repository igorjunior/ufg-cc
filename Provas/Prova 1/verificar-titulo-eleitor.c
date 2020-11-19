#include <stdio.h>

int main()
{
  int i, currentmultiplier = 10, currentcounter = 1;
  int dv[2];
  int uf, ufbackup, ufarray[3], ufseparated[3], ufmultiplied = 0;
  int ns, nsbackup, nsarray[8], nsseparated[8], nsmultiplied = 0;
  scanf("%d %d", &ns, &uf);
  if (uf > 28 || uf < 1)
  {
    printf("CODIGO DA UF INVALIDO!\n");
    return 0;
  }
  nsbackup = ns;
  ufbackup = uf;
  {
    while ((ns % currentmultiplier) != ns)
    {
      currentmultiplier *= 10;
      currentcounter++;
    }
    for (i = 0; i < currentcounter; i++)
    {
      nsseparated[i] = ns % 10;
      ns /= 10;
    }
    currentcounter--;
    for (i = 7; i >= 0; i--)
    {
      if (i > currentcounter)
      {
        nsarray[i] = 0;
      }
      else
      {
        nsarray[i] = nsseparated[i];
      }
    }
    currentmultiplier = 2;
    for (i = 7; i >= 0; i--)
    {

      nsmultiplied += nsarray[i] * currentmultiplier;
      currentmultiplier++;
    }
    nsmultiplied = nsmultiplied % 11;
    if (nsmultiplied == 10)
      dv[0] = 0;
    else
      dv[0] = nsmultiplied;
  }
  {
    currentmultiplier = 10;
    currentcounter = 1;
    while ((uf % currentmultiplier) != uf)
    {
      currentmultiplier *= 10;
      currentcounter++;
    }
    for (i = 0; i < currentcounter; i++)
    {
      ufseparated[i] = uf % 10;
      uf /= 10;
    }
    currentcounter--;
    int j = 0;
    for (i = 1; i >= 0; i--)
    {
      if (i > currentcounter)
      {
        ufarray[j] = 0;
      }
      else
      {
        ufarray[j] = ufseparated[i];
      }
      j++;
    }
    ufarray[2] = dv[0];
    currentmultiplier = 7;
    for (i = 0; i < 3; i++)
    {
      ufmultiplied += ufarray[i] * currentmultiplier;
      currentmultiplier++;
    }
    ufmultiplied = ufmultiplied % 11;
    if (ufmultiplied == 10)
      dv[1] = 0;
    else
      dv[1] = ufmultiplied;
  }
  if (ufbackup > 9)
  {
    printf("%d%d/%d%d", nsbackup, ufbackup, dv[0], dv[1]);
  }
  else
  {
    printf("%d0%d/%d%d", nsbackup, ufbackup, dv[0], dv[1]);
  }
  return 0;
}