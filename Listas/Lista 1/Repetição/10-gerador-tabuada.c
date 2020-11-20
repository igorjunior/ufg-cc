#include <stdio.h>

int main(){
  float n,i,k,s, j;
  scanf("%f",&n);
  scanf("%f",&i);
  scanf("%f",&k);
  scanf("%f",&s);

  printf("Tabuada de soma:\n");
  float tmpi = i;
  for(j = 0; j < k; j++){
    printf("%.2f + %.2f = %.2f\n", n, tmpi, n + tmpi);
    tmpi+= s;
  }
  printf("Tabuada de subtracao:\n");
  tmpi = i;
  for(j = 0; j < k; j++){
    printf("%.2f - %.2f = %.2f\n", n, tmpi, n - tmpi);
    tmpi+= s;
  }
  printf("Tabuada de multiplicacao:\n");
  tmpi = i;
  for(j = 0; j < k; j++){
    printf("%.2f x %.2f = %.2f\n", n, tmpi, n * tmpi);
    tmpi+= s;
  }
  printf("Tabuada de divisao:\n");
  tmpi = i;
  for(j = 0; j < k; j++){
    printf("%.2f / %.2f = %.2f\n", n, tmpi, n / tmpi);
    tmpi+= s;
  }
  return 0;
}