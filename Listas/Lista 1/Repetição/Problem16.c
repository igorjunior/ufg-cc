#include<stdio.h>
#include <string.h>

int main()
{
	float entry[255][3];
  int n = -1, i;
  while(1){
    if(n >= 0){
      if(entry[n][0] != .0f){
        n++;
        scanf("%f %f %f",&entry[n][0],&entry[n][1],&entry[n][2]); 
      }else{
        break;
      }
    }else{
      n++;
      scanf("%f %f %f",&entry[n][0],&entry[n][1],&entry[n][2]); 
    }
  }
  for(i = 0; i < n; i++){
    printf("%.f %.2f\n", entry[i][0], (float)(entry[i][1] * entry[i][2]));
  }
  
	return 0;
}

