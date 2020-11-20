#include <stdio.h>
#include <string.h>

typedef struct
{
  unsigned long int cod;
  float bprice;
  float sprice;
  int sell;
} merc;

typedef struct
{
  int l10;
  int i1020;
  int h20;
  unsigned long int highest;
  double highestvalue;
  unsigned long int more;
  double morevalue;
  double totalc;
  double totals;
} res;

int main()
{
  merc entry[255];
  res answer;
  int entries = 0, i;
  while (scanf("%lu %f %f %d", &entry[entries].cod, &entry[entries].bprice, &entry[entries].sprice, &entry[entries].sell) != EOF)
  {
    entries++;
  }
  answer.l10 = 0;
  answer.i1020 = 0;
  answer.h20 = 0;
  answer.highest = 0;
  answer.highestvalue = 0;
  answer.more = 0;
  answer.morevalue = 0;
  answer.totalc = 0;
  answer.totals = 0;
  for (i = 0; i < entries; i++)
  {
    double lucro = ((entry[i].sprice - entry[i].bprice) / entry[i].bprice);
    if (lucro < 0.1f)
      answer.l10++;
    else if (lucro >= 0.1f && lucro <= .2f)
      answer.i1020++;
    else
      answer.h20++;
    if (lucro > answer.highestvalue)
    {
      answer.highestvalue = lucro;
      answer.highest = entry[i].cod;
    }
    if (entry[i].sell > answer.morevalue)
    {
      answer.morevalue = entry[i].sell;
      answer.more = entry[i].cod;
    }
    answer.totalc += entry[i].bprice * entry[i].sell;
    answer.totals += entry[i].sprice * entry[i].sell;
  }
  printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", answer.l10);
  printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", answer.i1020);
  printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", answer.h20);
  printf("Codigo da mercadoria que gerou maior lucro: %lu\n", answer.highest);
  printf("Codigo da mercadoria mais vendida: %lu\n", answer.more);
  printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n", answer.totalc, answer.totals, (float)(((answer.totals - answer.totalc) / answer.totalc) * 100.f));
  return 0;
}