#include <stdio.h>
#include <math.h>
#include <string.h>
#define min 937.f

#define l1(r,p,s)(s == 2 && ((r / p)/min) <= 1.5f)
#define l2(r,p,s,e)(s == 2 && ((r / p)/min) <= 1.5f && e < 4)
#define l3(r,p,s)(s == 2 && ((r / p)/min) > 1.5f)
#define l4(r,p,s,e)(s == 2 && ((r / p)/min) > 1.5f && e < 4)

int main () {;
  int r,p,s,e;
  scanf("%d %d %d %d", &r, &p, &s, &e);
  if(l2(r,p,s,e)){
    printf("ALUNO COTISTA (L2)\n");
  }else if(l1(r,p,s)){
    printf("ALUNO COTISTA (L1)\n");
  }else if(l4(r,p,s,e)){
    printf("ALUNO COTISTA (L4)\n");
  }else if(l3(r,p,s)){
    printf("ALUNO COTISTA (L3)\n");
  }else{
    printf("ALUNO NAO COTISTA\n");
  }
  return 0;
}