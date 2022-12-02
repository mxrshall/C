#include <stdio.h>
#include <stdlib.h>

void vystup(int hodnota, int *pole);

int main(){

int hodnota, cislo, *pole;

printf("Zadaj hodnotu: ");
scanf("%d", &hodnota);

pole = (int*) malloc(hodnota * sizeof(int));
if(pole==NULL){
    printf("Chyba");
    return 1;
}

for(int i=0;i<hodnota;i++){
    printf("Zadaj cislo: ");
    scanf("%d", &cislo);
    pole[i]=cislo;
}

vystup(hodnota, pole);

free(pole);

  return 0;
}

void vystup(int hodnota, int *pole){

for(int i=0;i<hodnota;i++){
    printf("%d\n", pole[i]);
}

}