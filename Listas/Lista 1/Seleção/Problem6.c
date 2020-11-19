#include <stdio.h>
#include <string.h>

int main () {
  float n;
  scanf("%f", &n);
  if(n < 0.f || n > 10.f)
    return 0;
  char nt[1];
  if(n <= 6.f)
    strcpy(nt,"D");
  else if(n < 7.5f)
    strcpy(nt, "C");
  else if(n < 9.f)
    strcpy(nt, "B");
  else 
    strcpy(nt, "A");
  printf("NOTA = %.1f CONCEITO = %s", n, nt);
  return 0;
}