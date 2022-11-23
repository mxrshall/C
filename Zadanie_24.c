#include <stdio.h>
#include <math.h>
#define MAX 100

int premena(long long cislo);
int nacitanie(int mat[MAX][MAX], int r, int s);

int main(void){

int mat[MAX][MAX];
long long cislo;
int r, s, i, j; //riadok, stlpec

while(r<1 || s<1){
    printf("Zadaj pocet riadkov: ");
    scanf("%d", &r);
    printf("Zadaj pocet stlpcov: ");
    scanf("%d", &s);
}

for(i=0;i<r;i++){
    for(j=0;j<s;j++){
        printf("Zadaj prvok matice v dvojkovej sustave[%d][%d]\n", i, j);
        scanf("%lld", &cislo);
        mat[i][j]=premena(cislo);
    }
}

printf("Toto je tvoja matica.\n");
nacitanie(mat[MAX][MAX], r, s);
    
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

int nacitanie(int mat[MAX][MAX], int r, int s){

int i, j;

for(i=0;i<r;i++){
    for(j=0;j<s;j++){
        return mat[i][j];    
    }
    printf("\n");
}
}