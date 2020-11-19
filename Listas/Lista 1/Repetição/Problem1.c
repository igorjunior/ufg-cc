#include <stdio.h>

int main(){
  int n, i;
  scanf("%d", &n);
  double entry[100][5];
  for(i = 0; i < n; i++){
    scanf("%lf %lf %lf %lf %lf", &entry[i][0], &entry[i][1], &entry[i][2], &entry[i][3], &entry[i][4]);
  }
  for(i = 0; i < n; i++){
    double persons[4];
    persons[0] = entry[i][0] * (entry[i][1] / 100);
    persons[1] = entry[i][0] * (entry[i][2] / 100);
    persons[2] = entry[i][0] * (entry[i][3] / 100);
    persons[3] = entry[i][0] * (entry[i][4] / 100);
    double revenue = 0;
    revenue+= persons[0] * 1;
    revenue+= persons[1] * 5;
    revenue+= persons[2] * 10;
    revenue+= persons[3] * 20;
    printf("A RENDA DO JOGO N. %d E = %.2f\n", i+1, revenue);
  }
  return 0;
}