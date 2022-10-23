#include <stdio.h>
#define N 10

typedef struct body{
    int x;
    int y;
} BODY;

int main(void){

int pocetbodov, i, najmensi[N];

do{
    printf("Zadaj pocet bodov pre suradnicovy system: ");
    scanf("%d", &pocetbodov);    
}while(pocetbodov<=0);

BODY bod[pocetbodov];

for(i=0;i<pocetbodov;i++){
   printf("Zadaj body X a Y: ");
   scanf("%d %d", &bod[i].x, &bod[i].y);
}

if(bod[0].x<0){
    bod[0].x = bod[0].x*(-1);
}

if(bod[0].y<0){
    bod[0].y = bod[0].y*(-1);
}

if(bod[0].x<0 || bod[0].y<0){
    bod[0].x = bod[0].x*(-1);
    bod[0].y = bod[0].y*(-1);
}

najmensi[0]=bod[0].x + bod[0].y;

for(i=0;i<pocetbodov;i++){

    if(bod[i].x<0){                     //x*(-1)
        bod[i].x=bod[i].x*(-1);  
    }

    if(bod[i].y<0){                     //y*(-1)
        bod[i].y=bod[i].y*(-1);
    }

    if(bod[i].x<0 || bod[i].y<0){       //x*(-1) y*(-1)
        bod[i].x = bod[i].x*(-1);
        bod[i].y = bod[i].y*(-1);
    }

    najmensi[i]=bod[i].x + bod[i].y;
    if(najmensi[i]<najmensi[0]){
        najmensi[0]=najmensi[i];
        bod[0].x = bod[i].x;
        bod[0].y = bod[i].y;
    }
}

printf("Bod X: %d Bod Y: %d", bod[0].x, bod[0].y);

return 0;
}