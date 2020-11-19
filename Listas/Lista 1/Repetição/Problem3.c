#include <stdio.h>

int main(){
  int n, i;
  scanf("%d", &n);
  if(n < 5 || n > 2000)
    return 0;
  for(i = 0; i < n + 1; i++){
    if(i % 2 || i == 0)
      continue;
    int res = pow(i, 2);
    printf("%d^2 = %d\n", i, res);
  }
  return 0;
}