#include <stdio.h>
#include <math.h>
#define MAX 100

int premena(long long cislo);
void nacitanie(int r, int s);
void porovnavanie(int r, int s);

int main(void){

FILE *subor;
int mat[MAX][MAX], r, s; //matica, riadok, stlpec
long long cislo;
int i, j;

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

subor = fopen("subor.txt", "w"); //zapis do suboru

for(i=0;i<r;i++){
    for(j=0;j<s;j++){
        fprintf(subor, "%d\n", mat[i][j]);    
    }
}

fclose(subor);

printf("Toto je tvoja matica v desiatkovej sustave.\n");
nacitanie(r, s);
porovnavanie(r, s);
    
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

void porovnavanie(int r, int s){ //funkcia porovnavanie

FILE *subor;
int i, j, diagonala[MAX], mat[MAX][MAX], cislo;

subor = fopen("subor.txt", "r");

for (i=0;i<r;i++){
    for (j=0;j<s;j++){
        fscanf(subor, "%d", &cislo);
        cislo=premena(cislo); 
        if(i==j){
            diagonala[i]=cislo;
        } 
        mat[i][j]=cislo;
    }
}

for (i=0;i<r;i++){
    for (j=0;j<s;j++){
        cislo=mat[i][j];
        if(cislo>diagonala[i]){
            printf("%d je vacsie ako cislo na diagonale.\n", cislo);
        }
        if(cislo<diagonala[i]){
            printf("%d je mensie ako cislo na diagonale.\n", cislo);
        }
        if(cislo==diagonala[i]){
            printf("%d je rovnake ako cislo na diagonale.\n", cislo);
        }
    }
}

fclose(subor);
}