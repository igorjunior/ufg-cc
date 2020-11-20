#include <stdio.h>
void escovarBytes(unsigned char *byte, int length);
int main()
{
  double n;
  scanf("%lf", &n);
  unsigned char m = n;
  unsigned short o = n;
  unsigned int p = n;
  float q = n;
  escovarBytes(&m, sizeof(m));
  escovarBytes(&o, sizeof(o));
  escovarBytes(&p, sizeof(p));
  escovarBytes(&q, sizeof(q));
  escovarBytes(&n, sizeof(n));
  return 0;
}
void escovarBytes(unsigned char *byte, int length)
{
  int i;
  for (i = 0; i < length; i++)
  {
    printf("%d,", byte[i]);
  }
  printf("\n");
}