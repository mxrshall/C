#include <stdio.h>
#define N 10

int main(void){

int pocetbodov, i, bodyX[N], bodyY[N], najmensi[N];

printf("Zadaj pocet bodov: ");
scanf("%d", &pocetbodov);

for(i=0;i<pocetbodov;i++){
    printf("Zadaj body X a Y: ");
    scanf("%d %d", &bodyX[i], &bodyY[i]);
}

najmensi[0]=bodyX[0]+bodyY[0];

for(i=0;i<pocetbodov;i++){
    if(bodyX[i]<0){
        bodyX[i]=bodyX[i]*(-1);
        najmensi[i]=bodyX[i]+bodyY[i];
        if(najmensi[i]<najmensi[0]){
            najmensi[0]=najmensi[i];
            bodyX[i]=bodyX[i]*(-1);
            bodyX[0]=bodyX[i];
            bodyY[0]=bodyY[i];
        }
        
    }

    if(bodyY[i]<0){
        bodyY[i]=bodyY[i]*(-1);
        najmensi[i]=bodyX[i]+bodyY[i];
        if(najmensi[i]<najmensi[0]){
            najmensi[0]=najmensi[i];
            bodyY[i]=bodyY[i]*(-1);
            bodyX[0]=bodyX[i];
            bodyY[0]=bodyY[i];
        }
    }

    najmensi[i]=bodyX[i]+bodyY[i];
    if(najmensi[i]<najmensi[0]){
        najmensi[0]=najmensi[i];
        bodyX[0]=bodyX[i];
        bodyY[0]=bodyY[i];
    }
}

printf("Bod X: %d Bod Y: %d", bodyX[0], bodyY[0]);

    return 0;
}
