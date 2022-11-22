#include <stdio.h>
#include <math.h>
#define MAX 100

int premena(long long cislo);

int main(void){

int mat[MAX][MAX];
long long cislo;
int r, s; //riadok, stlpec

for(r=0;r<2;r++){
    for(s=0;s<2;s++){
        printf("Zadaj prvok matice [%d][%d]\n", r, s);
        scanf("%lld", &cislo);
        mat[r][s]=premena(cislo);
    }
}

printf("Toto je tvoja matica.\n");
for(r=0;r<2;r++){
    for(s=0;s<2;s++){
        printf("%d\t", mat[r][s]);    
    }
    printf("\n");
}
    
    return 0;
}

int premena(long long cislo){
int des=0, i=0, posledne;

while (cislo!=0){
    posledne=cislo%10;
    cislo=cislo/10;
    des=des+posledne*pow(2, i);
    i++;
}

  return des;
}