#include <stdio.h>

int main(void){

float cislo;

printf("Zadaj cislo: ");
scanf("%f", &cislo);

cislo = cislo>1 ? cislo*2 : cislo/2;

printf("Konecne cislo je: %f", cislo);

    return 0;
}

//Vytvorte program, ktorý načíta reálne číslo, a ak je toto číslo väčšie ako jedna, vypíše
//jeho dvojnásobok, inak vypíše jeho polovicu. Použite ternárny operátor.