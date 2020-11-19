#include <stdio.h>

#define nf(n, f)( n < 6 && f < (128 * .75f))
#define n(n, f)( n < 6 && f >= (128 * .75f))
#define f(n, f)( n >= 6 && f < (128 * .75f))

int main(){
  
  int n = 0, i, j;
  double en[100][16];
  while(1){
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf", &en[n][0], &en[n][1], &en[n][2], &en[n][3], &en[n][4], &en[n][5], &en[n][6],&en[n][7],&en[n][8],&en[n][9],&en[n][10],&en[n][11],&en[n][12],&en[n][13],&en[n][14],&en[n][15]);
    if(en[n][0] < 0.f)
      break;
    n++;
  }

  for(i = 0; i < n; i++){
    double mp = .0f, ml = .0f, fn = .0f;
    for(j = 1; j < 9; j++){
      mp += en[i][j] + .0f;
    }
    mp /= 8;
    for(j = 9; j < 14; j++){
      ml += en[i][j];
    }
    ml /= 5;
    fn = (0.7f*mp) + (.15f*ml) + (.15f*en[i][14]);
    printf("Matricula: %.0f, Nota Final: %.2f, Situacao Final: ", en[i][0], fn);
    if(nf(fn, en[i][15]))
      printf("REPROVADO POR NOTA E POR FREQUENCIA\n");
    else if(n(fn, en[i][15]))
      printf("REPROVADO POR NOTA\n");
    else if(f(fn, en[i][15]))
      printf("REPROVADO POR FREQUENCIA\n");
    else
      printf("APROVADO\n");
    
  }

  

  return 0;
}