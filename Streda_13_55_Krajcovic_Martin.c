#include <stdio.h>
#define N 10

int main(void){

int pocetbodov, i, x, y, body[N];

printf("Zadaj pocet bodov: ");
scanf("%d", &pocetbodov);

for(i=0;i<pocetbodov;i++){
    printf("Zadaj bod X: ");
    scanf("%d %d", &body[i]);
}

for(i=0;i<pocetbodov;i++){
    printf("%d", body[i]);
}

    return 0;
}
