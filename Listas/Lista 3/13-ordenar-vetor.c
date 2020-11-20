#include <stdio.h>
int main()
{
  int n, V[999], i, j, tmp;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &V[i]);
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (V[i] < V[j])
      {
        tmp = V[i];
        V[i] = V[j];
        V[j] = tmp;
      }
    }
  }
  for (i = 0; i < n; i++)
  {
    printf("%d\n", V[i]);
  }
  return 0;
}