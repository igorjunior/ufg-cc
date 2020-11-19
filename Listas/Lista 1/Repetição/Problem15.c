#include<stdio.h>
#include <string.h>

int main()
{
	int n, i, res = 1;
  scanf("%d", &n);
  if(n < 0){
    printf("Numero invalido!\n");
    return 0;
  }
  for(i = 2; i < n; i++){
    if(!(n % i)){
      res = 0;
    }
  }
  if(res && n > 1){
    printf("PRIMO\n");
    return 0;
  }
  printf("NAO PRIMO\n");
	return 0;
}

