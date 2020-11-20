#include <stdio.h>
#include <math.h>


int main () {
  int i, j, t;
  float n[3];
  scanf("%d %f %f %f", &t, &n[0], &n[1], &n[2]);
  
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      if(n[j] < n[i]){
        float t = n[i];
        n[i] = n[j];
        n[j] = t;
      }
    }
  }
  if(t == 1){
    printf("%.2f %.2f %.2f", n[2], n[1], n[0]);
  }else if(t == 2){
    printf("%.2f %.2f %.2f", n[0], n[1], n[2]);
  }
  else if(t == 3){
    printf("%.2f %.2f %.2f", n[1], n[0], n[2]);
  }
  return 0;
}