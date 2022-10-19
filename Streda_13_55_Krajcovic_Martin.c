#include <stdio.h>

int main(void){

int pocetbodov, i, x;

printf("Zadaj pocet bodov: ");
scanf("%d", &pocetbodov);

for(i=0;i<pocetbodov;i++){
    printf("Zadaj bod: ");
    scanf("%d", &x);
}

printf("Bod %d", x);

    return 0;
}