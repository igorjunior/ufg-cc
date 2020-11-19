#include <stdio.h>


int main () {
  float facture,reseller,tax, total;
  scanf("%f", &facture);
  scanf("%f", &reseller);
  scanf("%f", &tax);
  total = facture + (facture*reseller/100) + (facture*tax/100);
  printf("O VALOR DO CARRO E = %.2f", total);

  return 0;
}