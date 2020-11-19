#include <stdio.h>
#include <math.h>


int main () {;
  float a,b,c, tri = 0;
  scanf("%f %f %f", &a, &b, &c);
  if(fabs(b-c) < a && a < b + c){
    if(fabs(a - c) < b && b < a + c){
      if(fabs(a-b) < c && c < a + b){
        tri = 1;
      }
    }
  } 
  if(tri){
    float p = a + b + c;
    printf("Perimetro = %.1f", p);
  }else{
    float ar = ((a+b)*c)/2;
    printf("Area = %.1f", ar);
  }
  return 0;
}