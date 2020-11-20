#include <stdio.h>
#include <string.h>

int main()
{
  int students, need, will = 0;
  int *time;
  int i;
  scanf("%d %d", &students, &need);
  time = malloc(sizeof(int) * students);
  for (i = 0; i < students; i++)
  {
    scanf("%d", &time[i]);
    if (time[i] < 1)
      will++;
  }
  if (will >= need)
  {
    printf("NAO\n");
    for (i = students - 1; i >= 0; i--)
    {
      if (time[i] < 1)
        printf("%d\n", i + 1);
    }
  }
  else
  {
    printf("SIM\n");
  }

  return 0;
}