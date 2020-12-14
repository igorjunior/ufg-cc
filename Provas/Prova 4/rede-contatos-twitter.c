#include <stdlib.h>

typedef struct
{
  int likes;
  int retweets;
  int mentions;
} twitter;

twitter **new (int ord);

int main()
{
  twitter ***P;
  int n, e, i, u1, u2, j;
  scanf("%d", &n);
  P = (twitter ***)malloc(sizeof(twitter **) * n);
  twitter *count = (twitter *)malloc(n * sizeof(twitter));
  for (i = 0; i < n; i++)
  {
    count[i].likes = count[i].mentions = count[i].retweets = 0;
    P[i] = new (n);
  }
  scanf("%d", &e);
  for (i = 0; i < e; i++)
  {
    scanf("%d", &u1);
    scanf("%d", &u2);
    scanf("%d", &((*P[u2][u1]).likes));
    scanf("%d", &((*P[u2][u1]).retweets));
    scanf("%d", &((*P[u2][u1]).mentions));
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      if (P[i][j]->likes > 0)
      {
        count[j].likes += P[i][j]->likes;
      }
      if (P[i][j]->mentions > 0)
      {
        count[j].mentions += P[i][j]->mentions;
      }
      if (P[i][j]->retweets > 0)
      {
        count[j].retweets += P[i][j]->retweets;
      }
    }
  }
  for (i = 0; i < n; i++)
  {
    if (count[i].likes > 0 || count[i].mentions > 0 || count[i].retweets > 0)
    {
      printf("Usuario %d - num. likes: %d, num. retweets: %d e num. mencoes: %d\n", i, count[i].likes, count[i].retweets, count[i].mentions);
    }
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      free(P[i][j]);
    }
    free(P[i]);
  }
  free(P);
  return 0;
}

twitter **new (int n)
{
  twitter **res;
  res = (twitter **)malloc(sizeof(twitter *) * n);
  int i, j;
  for (i = 0; i < n; i++)
  {
    res[i] = (twitter *)malloc(sizeof(twitter));
    (*res[i]).likes = (*res[i]).mentions = (*res[i]).retweets = 0;
  }
  return res;
}