#include<stdio.h>
#include <string.h>

int main()
{
	int n, i, j, k = 1;
  scanf("%d", &n);
  if(n < 2){
    printf("Campeonato invalido!");
    return 0;
  }
  for(i = 1; i < n; i++){
    for(j = 2; j < n+1; j++){
      if(i != j && i < j){
        printf("Final %d: Time%d X Time%d\n", k, i, j);
        k++;
      }
    }
  }
	return 0;
}

