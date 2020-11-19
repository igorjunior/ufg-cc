#include <stdio.h>

int main(){
  int n, i;
  scanf("%d", &n);
  double entry[100];
  for(i = 0;i < n;i++){
    scanf("%lf", &entry[i]);
  }
  for(i = 0;i < n;i++){
    double celsius = (5*(entry[i] -32))/9;
    printf("%.2f FAHRENHEIT EQUIVALE A %.2f CELSIUS\n", entry[i], celsius);
  }
  return 0;
}