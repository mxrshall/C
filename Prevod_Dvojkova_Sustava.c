#include <stdio.h>

int main(void){

int cislo, zvysok, vysledok;

printf("Zadaj cislo: ");
scanf("%d", &cislo);

while(vysledok!=0){
    vysledok=cislo/2;
    printf("Vysledok: %d\n", vysledok);

    if(cislo%2==1){
        zvysok=1;
        printf("Zvysok: %d\n", zvysok);
    }

    if(cislo%2==0){
        zvysok=0;
        printf("Zvysok: %d\n", zvysok);
    }

    cislo=vysledok;
}

    return 0;
}