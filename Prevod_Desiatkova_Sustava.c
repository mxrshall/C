#include <stdio.h>
#include <math.h>

int premena(long long cislo);

int main(void){
  long long cislo;

  printf("Zadaj cislo v dvojkovej sustave: ");
  scanf("%lld", &cislo);
  printf("%lld je v desiatkovej sustave cislo = %d", cislo, premena(cislo));

  return 0;
}

int premena(long long cislo){
int des=0, i=0, posledne;

  while (cislo!=0){
    posledne=cislo%10;
    cislo=cislo/10;
    des=des+posledne*pow(2, i);
    i++;
  }

  return des;
}
