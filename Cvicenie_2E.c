#include <stdio.h>
#include <stdlib.h>

void function(int *pole, int rozmer);

int main(){

int rozmer, *pole, i;

printf("Zadaj rozmer pola:");
scanf("%d", &rozmer);

pole = (int*)malloc(rozmer * sizeof(int));

for(i=0;i<rozmer;i++){
    printf("Zadaj cislo: ");
    scanf("%d", &pole[i]);
}

function(pole, rozmer);

    return 0;
}

void function(int *pole, int rozmer){

int i, cislo=0, priemer;

for(i=0;i<rozmer;i++){
    cislo=cislo+pole[i];
}

priemer=cislo/rozmer;
printf("Priemer: %d", priemer);

}