#include <stdio.h>

int main(){
  int entry[2], i;
  scanf("%d %d", &entry[0], &entry[1]);
  if(entry[0] % 2){
    printf("O PRIMEIRO NUMERO NAO E PAR\n");
    return 0;
  }

  for(i = 0; i < entry[1]; i++){
    if(i != 0)
      printf(" ");
    printf("%d", entry[0]);
    
    entry[0] += 2;
  }
    
  return 0;
}