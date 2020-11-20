#include <stdio.h>
#include <string.h>
int main () {
  int acc;
  float consum, conta;
  char tp[1];
  char tpp[3] = "CIR";
  scanf("%d %f %c", &acc, &consum, &tp);
  
  if(tp[0] == tpp[0]){
    if(consum <= 80.f)
      consum = 0.f;
    else{
      consum -= 80.f;
    }
    conta = 500.f + (.25f * consum);
  }else if(tp[0] == tpp[1]){
    if(consum <= 100.f)
      consum = 0.f;
    else{
      consum -= 100.f;
    }
    conta = 800.f + (.04f * consum);
  }else if(tp[0] == tpp[2]){
    conta = 5.f + (.05f * consum);
  }
  if(conta < 0)
    conta = 0;
  printf("CONTA = %d\n", acc);
  printf("VALOR DA CONTA = %.2f\n", conta);
  return 0;
}