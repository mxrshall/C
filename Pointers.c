#include <stdio.h>

int vypocet(int *pX, int *pY);

int main(void){
int x;
int y;
int *pX = &x;
int *pY = &y;

printf("Zadaj prve cislo: ");
scanf("%d", &x);

printf("Zadaj druhe cislo: ");
scanf("%d", &y);

printf("Vacsie cislo je %d", vypocet(pX, pY));

    return 0;
}

int vypocet(int *pX, int *pY){

if(pX<pY){
    return *pY;
}

return *pX;

}