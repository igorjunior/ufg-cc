#include <stdio.h>


int main () {
  double mass, aceleration, time, velocity, distance, mechanicjob;
  scanf("%lf", &mass);
  scanf("%lf", &aceleration);
  scanf("%lf", &time);
  mass *= 1000;
  velocity = aceleration * time * 3.6;
  printf("VELOCIDADE = %.2f\n", velocity);
  distance = aceleration * time * time / 2;
  printf("ESPACO PERCORRIDO = %.2f\n", distance);
  velocity /= 3.6;
  mechanicjob = mass * velocity * velocity / 2;
  printf("TRABALHO REALIZADO = %.2f\n", mechanicjob);
  return 0;
}