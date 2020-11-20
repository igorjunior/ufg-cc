#include <stdio.h>
#include <math.h>

int main () {;
  int entry;
  scanf("%d", &entry);

  int cases = 0, digits[5], err = 0;
  while(entry != 0){
    if(cases < 5){
      digits[cases] = entry % 10;
      entry /= 10;
      cases++;
    }else{
      err = 1;
      break;
    }
  }
  if(err){
    printf("%s", "NUMERO INVALIDO\n");
    return 0;
  }
  cases--;
  int i;
  int pal = 1;
  for(i = 0; i <= cases / 2; i++){
    if(digits[i] != digits[cases - i]){
      pal = 0;
    }
  }
  printf("%s", pal ? "PALINDROMO\n" : "NAO PALINDROMO\n");
  return 0;
}