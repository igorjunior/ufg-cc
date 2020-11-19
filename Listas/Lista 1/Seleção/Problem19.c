#include <stdio.h>
#include <math.h>
#include <string.h>


int main () {;
  float n[4];
  int i, j;
  for(i = 0; i < 4; i++){
    scanf("%f", &n[i]);
  }

  for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
      if(n[j] < n[i]){
        float t = n[i];
        n[i] = n[j];
        n[j] = t;
      }
    }
  }
  
  printf("%.2f, %.2f, %.2f, %.2f", n[3], n[2], n[1], n[0]);
  return 0;
}