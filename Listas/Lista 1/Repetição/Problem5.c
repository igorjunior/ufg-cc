#include <stdio.h>

int main(){
  int entry[3], res = 0, i;
  scanf("%d %d %d",&entry[0], &entry[1], &entry[2]);
  
  for(i = 0; i < entry[2]; i++){
    res += entry[0] + (i)*entry[1];

  }
  printf("%d", res);


  return 0;
}