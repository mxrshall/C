#include<stdio.h>
#include<stdlib.h>

void function(int *pole, int rozmer);

int main(){

int rozmer, *pole, i;

do{
printf("Zadaj rozmer: ");
scanf("%d", &rozmer);
}while(rozmer<3);

pole=(int*)malloc(rozmer*sizeof(int));

for(i=0;i<rozmer;i++){
    printf("Zadaj cislo: ");
    scanf("%d", &pole[i]);  
}

function(pole, rozmer);

    return 0;
}

void function(int *pole, int rozmer){

int i, vysledok;

for(i=0;i<rozmer;i++){
    printf("%d", pole[i]);
}

vysledok = pole[0] + pole[1] + pole[2];

printf("\nVysledok: %d", vysledok);

}