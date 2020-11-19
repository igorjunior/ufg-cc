#include <stdio.h>
#include <math.h>

int main () {
  int n1,n2,n3, n;
  char nstr[sizeof(n1) * 3];
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);
  if(n1 > 9 || n2 > 9 || n3 > 9){
    printf("DIGITO INVALIDO\n");
    return 0;
  }
  sprintf(&nstr, "%d%d%d", n1, n2, n3);
  n = atoi(nstr);
  printf("%d, %d", n, n * n);
  return 0;
}