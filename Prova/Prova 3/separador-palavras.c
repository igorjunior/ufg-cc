#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 200
#define MAX_WORD_LEN 64 + 1

/**
 * @brief Função de separação de palavras de acordo com a uma lista de separadores.
 * Exemplo de chamada da função:
 * str_split("Ola mundo! 1,23", m, ", .!?");
 *
 * O resultado é a separação das strings "Ola", "mundo", "1", "23", cada uma
 * ocupando uma linha da matriz m, com base nos caracteres de pontuação fornecidos.
 *
 * @param str ponteiro para o início da string original
 * @param m matriz de caracteres, sendo cada linha uma palavra da string original
 * @param sep string com a lista de caracteres separadores
 * @return int quantidade de palavras detectadas
 */
int str_split(char *str, char m[][MAX_WORD_LEN], char *sep)
{
  int size = 0;
  char *token;
  token = strtok(str, sep);
  while (token != NULL)
  {
    strcpy(m[size], token);
    token = strtok(NULL, sep);
    size++;
  }
  return size;
}

int main()
{
  char buffer[MAX_WORDS * MAX_WORD_LEN], separators[MAX_WORDS * MAX_WORD_LEN];
  char clear;
  scanf("%[^\n]", buffer);
  scanf("%c", &clear);
  scanf("%[^\n]", separators);

  char splited[MAX_WORDS][MAX_WORD_LEN];
  int size = str_split(buffer, splited, separators);
  int i, j, count[MAX_WORD_LEN], maxlen = 0;
  memset(count, 0, sizeof(count));
  for (i = 0; i < size; i++)
  {
    printf("(%d)%s\n", strlen(splited[i]), splited[i]);
    if (strlen(splited[i]) > maxlen)
    {
      maxlen = strlen(splited[i]);
    }
    count[strlen(splited[i])]++;
  }
  printf("%d", count[maxlen]);
  return 0;
}