#include <stdio.h>

void print_bytes(const void *end_byte, int n);
int main()
{
  double n;
  scanf("%lf", &n);
  unsigned char m = n;
  unsigned short o = n;
  unsigned int p = n;
  float q = n;
  print_bytes(&m, sizeof(m));
  print_bytes(&o, sizeof(o));
  print_bytes(&p, sizeof(p));
  print_bytes(&q, sizeof(q));
  print_bytes(&n, sizeof(n));
  return 0;
}
void print_bytes(const void *end_byte, int n)
{
  int i, j;
  char *a = (char *)end_byte;
  for (i = 0; i < n; i++)
  {
    for (j = 7; j >= 0; --j)
    {
      printf("%d", (a[i] & (1 << j)) ? 1 : 0);
    }
    printf(" ");
  }
  printf("\n");
}
