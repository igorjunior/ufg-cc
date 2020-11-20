#include <stdio.h>
#include <math.h>
#include <string.h>


int main () {;
  int n[3], res[3];
  char e[3];
  char ee[] = "ABC";
  scanf("%d %d %d\n", &n[0], &n[1], &n[2]);
  scanf("%c %c %c", &e[0], &e[1], &e[2]);

  int i,j,t;
  for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
      if(i > j && n[j] > n[i]){
        t = n[i];
        n[i] = n[j];
        n[j] = t;
      }
    }
  }
  for(i = 0; i < 3; i++){
    if(e[i] == ee[0]){
      res[i] = n[0];
    }else if(e[i] == ee[1])
      res[i] = n[1];
    else if(e[i] == ee[2])
      res[i] = n[2];
  }

  printf("%d %d %d\n", res[0], res[1], res[2]);
  
  
  return 0;
}