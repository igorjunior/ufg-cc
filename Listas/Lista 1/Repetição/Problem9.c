#include <stdio.h>

int main(){
  int n, i, res = 0;
  scanf("%d", &n);
  if(n == 0 || n == 1){
    printf("%d! = 1", n);
    return 0;
  }
  res = n*(n-1);
  for(i = 2; i < n; i++){
    res *= (n - i);
  }
  printf("%d! = %d", n,res);
  return 0;
}