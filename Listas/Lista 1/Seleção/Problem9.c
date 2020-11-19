#include <stdio.h>

int main () {
  int n, y;
  scanf("%d", &n);
  if(n <= 1582){
    printf("ANO NAO BISSEXTO\n");
    return 0;
  }
  if((!(n % 4) && (n%100)) || (!(n%100) && !(n%400))){
    printf("ANO BISSEXTO\n");
    return 0;
  }
  printf("ANO NAO BISSEXTO\n");
  return 0;
}