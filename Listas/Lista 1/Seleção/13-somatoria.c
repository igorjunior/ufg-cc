#include <stdio.h>
#include <math.h>

int main () {
  int n[4], i, j, t;
  scanf("%d", &n[0]);
  scanf("%d", &n[1]);
  scanf("%d", &n[2]);
  scanf("%d", &n[3]);

  for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
      if(i > j && n[j] > n[i]){
        t = n[i];
        n[i] = n[j];
        n[j] = t;
      }
    }
  }
  printf("%d\n", n[0] + n[1] + n[2]);
  return 0;
}