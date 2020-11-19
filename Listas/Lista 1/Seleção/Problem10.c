#include <stdio.h>

int main () {
  int n, q = 0, m[4] = {0,0,0,0},  i, j, b;
  scanf("%d", &n);
  b = n;
  if(n < 0 || n > 9999){
    printf("Numero invalido!");
    return 0;
  }
  for(i = 0; i < 4; i++){
    if(n > 0){
      m[i] = n % 10;
      n /= 10;
      q++;
    }
  }
  switch (q)
  {
  case 2:
    printf("(segunda ordem) %d = ", b);
    break;
  case 3:
    printf("(terceira ordem) %d = ", b);
    break;
  case 4:
    printf("(quarta ordem) %d = ", b);
    break;
  default:
    break;
  }
  int p = 0;
  if(m[3] > 0 ){
    printf("%d ", m[3]);
    p = 0;
    if(m[3] > 1){
      printf("unidades");
    }else{
      printf("unidade");
    }
    printf(" de milhar");
    p = 1;
  }
  if(m[2] > 0){
    if(p)
      printf(" + ");
    p = 0;
    printf("%d ", m[2]);
    if(m[2] > 1){
      printf("centenas");
    }else{
      printf("centena");
    }
    p = 1;
  }

  if(m[1] > 0){
    if(p)
      printf(" + ");
    p = 0;
    printf("%d ", m[1]);
    if(m[1] > 1){
      printf("dezenas");
    }else{
      printf("dezena");
    }
    p = 1;
  }

  if(m[0] > 0){
    if(p)
      printf(" + ");
    printf("%d ", m[0]);
    if(m[0] > 1){
      printf("unidades");
    }else{
      printf("unidade");
    }
    p = 1;
  }
  printf(" = ");

  if(m[3] > 0 ){
    printf("%d000", m[3]);
    p = 1;
  }else{
    p = 0;
  }
  if(m[2] > 0){
    if(p)
      printf(" + ");
    printf("%d00", m[2]);
    p = 1;
  }

  if(m[1] > 0){
    if(p)
      printf(" + ");
    printf("%d0", m[1]);
    p = 1;
  }

  if(m[0] > 0){
    if(p)
      printf(" + ");
    printf("%d", m[0]);
  }
  return 0;
}