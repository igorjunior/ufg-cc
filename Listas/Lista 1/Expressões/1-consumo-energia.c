#include <stdio.h>

int main () {
  float salary, usage, priceperkw, pricetopay;
  scanf("%f", &salary);
  scanf("%f", &usage);
  
  priceperkw = 0.007 * salary;
  printf("Custo por kW: R$ %0.2f\n", priceperkw);
  pricetopay = priceperkw * usage;
  printf("Custo do consumo: R$ %0.2f\n", pricetopay);
  pricetopay -= pricetopay * 0.1;
  printf("Custo com desconto: R$ %0.2f\n", pricetopay);
  return 0;
}