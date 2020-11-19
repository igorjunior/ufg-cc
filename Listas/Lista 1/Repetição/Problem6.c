#include <stdio.h>

int main(){
  
  int n, i;
  double res = 0;
  scanf("%d", &n);
  if(n <= 1){
    printf("Numero invalido!\n");
    return 0;
  }
  for(i = 1; i < n+1; i++){
    res += 1.f/i;
  }
  printf("%.6f\n", res);
  return 0;
}