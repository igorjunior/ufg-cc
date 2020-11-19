#include <stdio.h>
#include <math.h>

int main () {
  int entry, temp, res;
  int x[3];
  scanf("%d", &entry);
  temp = entry;
  int i = 2;
  while(i >=  0){
    if(i != 0){
      x[i] = temp % 10;
      temp = temp / 10;
    }
    else{
      x[i] = temp;
    }
    i--;
  }
  res = (x[0] + (x[1] * 3) + (x[2] * 5)) % 7;
  printf("O NOVO NUMERO E = %d%d", entry, res);

  return 0;
}