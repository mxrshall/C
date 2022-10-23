#include <stdio.h>
#include <math.h>
#define N 10

typedef struct body{
    int x;
    int y;
} BOD;

int main(void){

int pocetbodov, i, najmensi[N];

do{
    printf("Zadaj pocet bodov pre suradnicovy system: ");
    scanf("%d", &pocetbodov);    
}while(pocetbodov<=0);

BOD bod[pocetbodov];

for(i=0;i<pocetbodov;i++){
   printf("Zadaj body X a Y: ");
   scanf("%d %d", &bod[i].x, &bod[i].y);
}

najmensi[0]=sqrt(bod[0].x*bod[0].x) + (bod[0].y*bod[0].y);

for(i=0;i<pocetbodov;i++){
    
    najmensi[i] = sqrt(bod[i].x*bod[i].x) + (bod[i].y*bod[i].y);
    if(najmensi[i]<najmensi[0]){
        najmensi[0]=najmensi[i];
        bod[0].x = bod[i].x;
        bod[0].y = bod[i].y;
    }
}

printf("Bod X: %d Bod Y: %d", bod[0].x, bod[0].y);

return 0;
}