#include <stdlib.h>

typedef struct
{
  int ordem;    // Ordem do polinomio
  double *coef; // Vetor de coeficientes
} Poly;

Poly *poly_new(int ord);

void poly_print(Poly *p);

void poly_free(Poly *p);

Poly *poly_sum(Poly *A, Poly *B);

Poly *poly_sub(Poly *A, Poly *B);

Poly *poly_mult(Poly *A, Poly *B);

int main()
{
  Poly **P;
  int n;
  scanf("%d", &n);
  P = (Poly **)malloc(sizeof(Poly *) * n);
  int i, j, tmp;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &tmp);
    P[i] = poly_new(tmp);
    for (j = 0; j < tmp + 1; j++)
    {
      scanf("%lf", &(*P[i]).coef[tmp - j]);
    }
    if (i > 0)
    {
      Poly *res = poly_sum(P[i - 1], P[i]);
      printf("soma: ");
      poly_print(res);
      poly_free(res);

      res = poly_sub(P[i - 1], P[i]);
      printf("subtracao: ");
      poly_print(res);
      poly_free(res);

      res = poly_mult(P[i - 1], P[i]);
      printf("multiplicacao: ");
      poly_print(res);
      poly_free(res);
    }
  }

  for (i = 0; i < n; i++)
  {
    poly_free(P[i]);
  }
  free(P);
  return 0;
}

Poly *poly_new(int ord)
{
  Poly *p = (Poly *)malloc(sizeof(Poly));
  p->ordem = ord;
  p->coef = malloc((ord + 1) * sizeof(double));
  return p;
}

void poly_free(Poly *p)
{
  free(p->coef);
  free(p);
}

void poly_print(Poly *p)
{
  int n, i;
  for (i = 0; i < p->ordem + 1; i++)
  {
    printf("%s%.1lfx^%d", p->coef[p->ordem - i] >= 0 ? "+" : "", p->coef[p->ordem - i], p->ordem - i);
  }
  printf("\n");
}

Poly *poly_sum(Poly *A, Poly *B)
{
  int ordem = A->ordem;
  if (B->ordem > A->ordem)
  {
    ordem = B->ordem;
  }
  Poly *res = poly_new(ordem);
  int i;
  for (i = 0; i < res->ordem + 1; i++)
  {
    res->coef[i] = 0;
  }
  for (i = 0; i < A->ordem + 1; i++)
  {
    res->coef[i] = A->coef[i];
  }
  for (i = 0; i < B->ordem + 1; i++)
  {
    res->coef[i] += B->coef[i];
  }
  return res;
}

Poly *poly_sub(Poly *A, Poly *B)
{
  int ordem = A->ordem;
  if (B->ordem > A->ordem)
  {
    ordem = B->ordem;
  }
  Poly *res = poly_new(ordem);
  int i;
  for (i = 0; i < res->ordem + 1; i++)
  {
    res->coef[i] = 0;
  }
  for (i = 0; i < A->ordem + 1; i++)
  {
    res->coef[i] = A->coef[i];
  }
  for (i = 0; i < B->ordem + 1; i++)
  {
    res->coef[i] -= B->coef[i];
  }
  return res;
}

Poly *poly_mult(Poly *A, Poly *B)
{
  Poly *res = poly_new(A->ordem + B->ordem);
  int i, j;
  for (i = 0; i < A->ordem + B->ordem + 1; i++)
  {
    res->coef[i] = 0;
  }
  for (i = 0; i < A->ordem + 1; i++)
  {
    for (j = 0; j < B->ordem + 1; j++)
    {
      res->coef[i + j] += A->coef[i] * B->coef[j];
    }
  }
  return res;
}