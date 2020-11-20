#include <stdio.h>

int main()
{
  int n, V[9999], i, j;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &V[i]);
  }
  int sequence[9999];
  int higgestValue = 0, higgestIndex = 0;
  memset(sequence, 0, sizeof(sequence));
  for (i = 0; i < n; i++)
  {
    sequence[V[i]]++;
  }
  for (i = 0; i < n; i++)
  {
    if (sequence[V[i]] > higgestValue)
    {
      higgestValue = sequence[V[i]];
      higgestIndex = i;
    }
  }
  printf("%d\n", V[higgestIndex]);
  printf("%d\n", sequence[V[higgestIndex]]);
  return 0;
}