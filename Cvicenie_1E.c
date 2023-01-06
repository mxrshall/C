#include <stdio.h>
#include <stdlib.h>

void funkcia_pole(int *pole, int rozmer);

int main(){

int *pole, rozmer;

printf("Zadaj rozmer pola: ");
scanf("%d", &rozmer);

pole = (int*)malloc(rozmer * sizeof(int));

for(int i=0;i<rozmer;i++){
    printf("Zadaj cisla do pola: ");
    scanf("%d", &pole[i]);
}

funkcia_pole(pole, rozmer);

    return 0;
}

void funkcia_pole(int *pole, int rozmer){

int max = pole[0];
int min = pole[0];

for(int i=0;i<rozmer;i++){
    printf("%d ", pole[i]);
    if(pole[i]>=max){
        max=pole[i];
    }
    if(pole[i]<=min){
        min=pole[i];
    }
}

printf("\nNajvacsie cislo: %d ", max);
printf("Najmensie cislo: %d", min);

}