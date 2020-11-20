#include <stdio.h>
#include <string.h>

void read(int *vector, int size)
{
  int i = 0, k;
  while (i < size)
  {
    do
    {
      scanf("%d", &vector[i]);
      for (k = 0; k < i; k++)
      {
        if (vector[i] == vector[k])
          break;
      }
    } while (k < i);
    i++;
  }
}

void print(int *vector, int size)
{
  if (size == 0)
    printf("()");
  else
  {
    int i;
    printf("(");
    for (i = 0; i < size - 1; i++)
    {
      printf("%d,", vector[i]);
    }
    printf("%d)\n", vector[i]);
  }
}

int uniao(int *U, int *A, int sizeA, int *B, int sizeB)
{
  int sizeU;
  int i, k;
  for (sizeU = 0; sizeU < sizeA; sizeU++)
  {
    U[sizeU] = A[sizeU];
  }
  for (i = 0; i < sizeB; i++)
  {
    for (k = 0; k < sizeA; k++)
    {
      if (A[k] == B[i])
        break;
    }
    if (k == sizeA)
    {
      U[sizeU] = B[i];
      sizeU++;
    }
  }
  return sizeU;
}

int interseccao(int *I, int *A, int sizeA, int *B, int sizeB)
{
  int sizeI = 0;
  int i, k;
  for (i = 0; i < sizeB; i++)
  {
    for (k = 0; k < sizeA; k++)
    {
      if (B[i] == A[k])
        break;
    }
    if (k < sizeA)
    {
      I[sizeI] = B[i];
      sizeI++;
    }
  }
  return sizeI;
}

int main()
{
  int ASize, BSize, A[100], B[100], U[200], I[100], i;

  do
  {
    scanf("%d", &ASize);
  } while (ASize < 1 || ASize > 100);
  do
  {
    scanf("%d", &BSize);
  } while (BSize < 1 || BSize > 100);
  read(A, ASize);
  read(B, BSize);

  int USize = uniao(U, A, ASize, B, BSize);
  int ISize = interseccao(I, A, ASize, B, BSize);

  print(U, USize);
  print(I, ISize);
  return 0;
}
