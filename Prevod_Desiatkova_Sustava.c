#include <stdio.h>
#include <math.h>
#define MAX 20

int premena(long long cislo);

int main(void){
long long cislo;
int posledne, r, i, j, mat[MAX][MAX];

printf("Zadaj rozmer");
scanf("%d", &r);

for(i=1;i<=r;i++){
    for(j=1;j<=r;j++){
        zaciatok:
        printf("Zadaj prvok matice v dvojkovej sustave[%d][%d]\n", i, j);
        scanf("%lld", &cislo);
        mat[i][j]=cislo;
        while(cislo!=0){
          posledne=cislo%10;
          cislo=cislo/10;
          if(posledne!=0 && posledne!=1){
            goto zaciatok;
          }
        }
    }
}

for (i=1;i<=r;i++){
    for (j=1;j<=r;j++){
        cislo=mat[i][j]; 
        printf("%d\t", premena(cislo));
    }
    printf("\n");
}

  return 0;
}

int premena(long long cislo){
  int des=0, i=0, posledne;

  while(cislo!=0){
    posledne=cislo%10;
    cislo=cislo/10;
    des=des+posledne*pow(2, i);
    i++;
  }

  return des;
}
