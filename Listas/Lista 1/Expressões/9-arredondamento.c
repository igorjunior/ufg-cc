#include <stdlib.h>
#include <stdio.h>

int main () {
  float entry;
  scanf("%f", &entry);
  char entrystringfirst[4];
  char entrystringsecond[5];
  char entrystringthird[6];
  sprintf(entrystringfirst, "%.1f", entry);
  sprintf(entrystringsecond, "%.2f", entry);
  sprintf(entrystringthird, "%.3f", entry);
  float first = atof(entrystringfirst);
  float second = atof(entrystringsecond);
  float third = atof(entrystringthird);
  printf("%.6f\n", first);
  printf("%.6f\n", second);
  printf("%.6f\n", third);
  return 0;
}