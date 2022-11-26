#include <stdio.h>
#include <math.h>
#define MAX 100

int premena(long long cislo);
void nacitanie(int r, int s);

int main(void){

FILE *subor;
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
        mat[i][j]=cislo;
    }
}

subor = fopen("subor.txt", "w"); //zapis

for(i=0;i<r;i++){
    for(j=0;j<s;j++){
        fprintf(subor, "%d\n", mat[i][j]);    
    }
}

fclose(subor);

printf("Toto je tvoja matica v desiatkovej sustave.\n");
nacitanie(r, s);
    
    return 0;
}

int premena(long long cislo){ //funkcia premena

int des=0, i=0, posledne;

while(cislo!=0){
    posledne=cislo%10;
    cislo=cislo/10;
    des=des+posledne*pow(2, i);
    i++;
}

  return des;
}

void nacitanie(int r, int s){ //funkcia nacitanie

FILE *subor;
int i, j, cislo;

subor = fopen("subor.txt", "r");

for (i=0;i<r;i++){
    for (j=0;j<s;j++){
        fscanf(subor, "%d", &cislo);
        printf("%d\t", premena(cislo));    
    }
    printf("\n");
}

fclose(subor);
}


