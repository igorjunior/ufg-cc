#include <stdio.h>

int main () {
  float n[3];
  scanf("%f", &n[0]);
  scanf("%f", &n[1]);
  scanf("%f", &n[2]);
  int i,j;
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      if(n[j] < n[i]){
        float t = n[i];
        n[i] = n[j];
        n[j] = t;
      }
    }
  }
  printf("%.2f, %.2f, %.2f", n[2], n[1], n[0]);
  return 0;
}