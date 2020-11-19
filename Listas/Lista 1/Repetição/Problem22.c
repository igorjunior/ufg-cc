#include <stdio.h>
#include <math.h>
typedef struct
{
  int hip;
  int cata;
  int catb;
} triangle;
int main()
{
  int n, m = 0, i, j;
  triangle all[255];
  scanf("%d", &n);
  for (i = 1; i < n; i++)
  {
    for (j = 1; j < n; j++)
    {
      if (j <= i)
      {
        double hip = sqrt(pow(i, 2) + pow(j, 2));
        if ((int)hip == hip && hip <= n)
        {
          all[m].cata = j;
          all[m].catb = i;
          all[m].hip = sqrt(pow(i, 2) + pow(j, 2));
          m++;
        }
      }
    }
  }

  triangle old;
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < m; j++)
    {
      if (all[i].hip < all[j].hip)
      {
        old = all[j];
        all[j] = all[i];
        all[i] = old;
      }
    }
  }
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < m; j++)
    {
      if (all[i].hip == all[j].hip)
      {
        if (all[i].cata < all[j].cata)
        {
          old = all[j];
          all[j] = all[i];
          all[i] = old;
        }
      }
    }
  }
  for (i = 0; i < m; i++)
  {
    printf("hipotenusa = %d, catetos %d e %d\n", all[i].hip, all[i].cata, all[i].catb);
  }
  return 0;
}