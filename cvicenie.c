#include <stdio.h>
#define N 10

typedef struct body{
    int x;
    int y;
} BODY;

int main(void){

int pocetbodov, i, najmensi[N];

printf("Zadaj pocet bodov: ");
scanf("%d", &pocetbodov);

BODY bod[pocetbodov];

for(i=0;i<pocetbodov;i++){
   printf("Zadaj body:");
   scanf("%d %d", &bod[i].x, &bod[i].y);
}

najmensi[0]=bod[0].x + bod[0].y;

printf("%d", najmensi[0]);

return 0;
}
