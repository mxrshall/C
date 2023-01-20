#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void scitanie(int *pole, int rozmer);

int main(){

int rozmer, cislo, *pole;

printf("Zadaj rozmer pola: ");
scanf("%d", &rozmer);

pole=(int*)malloc(rozmer*sizeof(int));

srand(time(0));

for(int i=0;i<rozmer;i++){
    cislo = rand() % 11;
    pole[i]=cislo;
}

scitanie(pole, rozmer);

    return 0;
}

void scitanie(int *pole, int rozmer){

int vysledok=0;

for(int i=0;i<rozmer;i++){
    printf("%d\n", pole[i]);
    vysledok=vysledok+pole[i];
}

printf("%d", vysledok);

}