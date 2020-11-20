#include <stdio.h>

int main()
{
  int entry[3], i, mmc = 0, highest = 0;
  scanf("%d %d %d", &entry[0], &entry[1], &entry[2]);
  for (i = 0; i < 3; i++)
  {
    if (entry[i] > highest)
      highest = entry[i];
  }
  int boolean = 1;
  while (boolean)
  {
    for (i = 2; i < highest + 1; i++)
    {
      if (!(entry[0] % i) || !(entry[1] % i) || !(entry[2] % i))
      {
        if (mmc == 0)
          mmc = i;
        else
          mmc *= i;
        printf("%d %d %d :%d\n", entry[0], entry[1], entry[2], i);
        if (!(entry[0] % i))
          entry[0] /= i;
        if (!(entry[1] % i))
          entry[1] /= i;
        if (!(entry[2] % i))
          entry[2] /= i;
        break;
      }
      else
      {
        if (entry[0] == 1 && entry[1] == 1 && entry[2] == 1)
        {
          boolean = 0;
          break;
        }
      }
    }
  }
  printf("MMC: %d", mmc);
  return 0;
}