#include <stdio.h>
#include <math.h>


int getfactor(int current){
  switch (current)
  {
  case 0:
    return 100;
    break;
  case 1:
    return 100;
    break;
  case 2:
    return 10000;
    break;
  default:
    break;
  }
}

char* getmonth(int current){
  switch (current)
  {
  case 1:
    return "janeiro";
    break;
  case 2:
    return "fevereiro";
    break;
  case 3:
    return "marco";
    break;
  case 4:
    return "abril";
    break;
  case 5:
    return "maio";
    break;
  case 6:
    return "junho";
    break;
  case 7:
    return "julho";
    break;
  case 8:
    return "agosto";
    break;
  case 9:
    return "setembro";
    break;
  case 10:
    return "outubro";
    break;
  case 11:
    return "novembro";
    break;
  case 12:
    return "dezembro";
    break;
  default:
    break;
  }
}
int count(long long n) 
{ 
    int count = 0; 
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count; 
} 
int main () {
  int entry, date[3], i;
  scanf("%d", &entry);
  if(count(entry) < 7 || count(entry) > 8){
    printf("Data invalida!\n");
    return 0;
  }
  for(i = 2; i >= 0; i--){
    date[i] = entry % getfactor(i);
    entry /= getfactor(i);
  }
  
  if(date[0] > 31 || date[0] < 1 || (date[1] == 2 && date[0] > 28) || !(date[1] < 12 && date[1] > 1) || date[2] < 1){
    printf("Data invalida!\n");
    return 0;
  }
    printf("%d de %s de %d", date[0], getmonth(date[1]), date[2]);
  

  return 0;
}