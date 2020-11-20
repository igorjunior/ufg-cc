#include <stdio.h>
#include <math.h>

int main () {;
  float e[5], i, res[3];
  scanf("%f %f %f %f %f", &e[0], &e[1], &e[2], &e[3], &e[4]);

  if(e[3] > (e[1] * 12)){
    res[0] = e[3] * .2f;
  }else if(e[3] > (e[1] * 5)){
    res[0] = e[3] * .08f;
  }else{
    res[0] = 0;
  }

  res[1] = res[0] - (e[2] * 300.f);
  res[2] = res[1] - e[3] * (e[4] / 100);

  printf("MATRICULA = %.0f\n", e[0]);
  printf("IMPOSTO BRUTO = %.2f\n", res[0]);
  printf("IMPOSTO LIQUIDO = %.2f\n", res[1]);
  printf("RESULTADO = %.2f\n", res[2]);

  if(res[2] < 0)
    printf("IMPOSTO A RECEBER\n");
  else if(res[2] == 0)
    printf("IMPOSTO QUITADO\n");
  else
    printf("IMPOSTO A PAGAR\n");

  return 0;
}