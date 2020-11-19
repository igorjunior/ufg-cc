#include <stdio.h>
#include <math.h>

int main () {
  float matriz[2][3];
  int i, j;
  for(i = 0; i < 2; i++){
    for(j = 0; j < 3; j++){
      scanf("%f", &matriz[i][j]);
    }
  }
  
  float divisor = matriz[0][0] / matriz[1][0];
  for (j = 0; j < 3; j++){
    matriz[1][j] *= divisor;
  }

  
  matriz[1][1] /= matriz[1][0];
  matriz[1][2] /= matriz[1][0];

  float resX[3], resY[3];

  resY[0] = matriz[1][1] * matriz[1][0];
  resY[1] = matriz[0][2] - (matriz[1][2] * matriz[1][0]);
  resY[2] = matriz[0][1];

  resY[0] -= resY[0] * 2;
  resY[2] -= resY[2] * 2;


  resY[0] = resY[0] - resY[2];
  
  resY[0] = resY[1] / resY[0];

  resX[0] = matriz[0][0];
  resX[1] = resY[0] * matriz[0][1];
  resX[2] = matriz[0][2];
  resX[2] -= resX[1];
  resX[0] = resX[2] / resX[0];
  printf("O VALOR DE X E = %.2f\n", resX[0]);
  printf("O VALOR DE Y E = %.2f\n", resY[0]);

  
  return 0;
}


// 7x = 8y  12
// 3x = 5y  9


// 7x = - 8y + 12 
// 7x = (- 11.6y + 21)/7


// 7x = 12 - 8y
//  x = - 1.66y + 3 

// 7 * (- 1.66y + 3) = 12 - 8y

// -11.62y = -9 - 8y
// 

// 11,62y = - 9 - 8y;

