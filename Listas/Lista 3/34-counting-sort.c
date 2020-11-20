#include <stdio.h>
#include <string.h>
#define writefile 1
#define MAX_SIZE 10000
#define MAX_NUMBER 10001

//FILE *file;
//FILE *input;

void counting(int *numbers, int n, int max)
{
  int count[MAX_NUMBER], i, j, c = 0;
  memset(count, 0, sizeof(count));
  for (i = 0; i < n; i++)
    count[numbers[i]] = count[numbers[i]] + 1;
  for (i = 0; i <= max; ++i)
  {
    for (j = 1; j <= count[i]; ++j)
    {
      if (c > 0)
        //fprintf(file, " ");
        printf(" ");
      //fprintf(file, "%d", i);
      printf("%d", i);
      c++;
    }
  }
  //fprintf(file, "\n");
  printf("\n");
}

int main()
{
  //file = fopen("output.txt", "w");
  //input = fopen("input1.txt", "r");
  int n, i, numbers[MAX_SIZE], max = 0;
  while (1)
  {
    memset(numbers, 0, sizeof(numbers));

    scanf("%d", &n);

    //fscanf(input, "%d", &n);
    if (n == 0)
      break;
    if (n != 0 && n >= 1 && n <= 10000)
    {
      for (i = 0; i < n; i++)
      {
        //fscanf(input, "%d", &numbers[i]);
        scanf("%d", &numbers[i]);
        if (numbers[i] > max)
          max = numbers[i];
      }
      counting(numbers, n, max);
    }
  }
  return 0;
}