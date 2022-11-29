#include <stdio.h>
#include <math.h>
#define MAX 100

int premena(long long cislo);
void nacitanie(int r);
void porovnavanie(int r);

int main(void){

FILE *subor;
int mat[MAX][MAX], r; //matica, rozmer
long long cislo;
int i, j;

while(r<2){
    printf("Zadaj rozmer matice: ");
    scanf("%d", &r);

}

for(i=0;i<r;i++){
    for(j=0;j<r;j++){
        printf("Zadaj prvok matice v dvojkovej sustave[%d][%d]\n", i, j);
        scanf("%lld", &cislo);
        mat[i][j]=cislo;
    }
}

subor = fopen("subor.txt", "w"); //zapis do suboru

for(i=0;i<r;i++){
    for(j=0;j<r;j++){
        fprintf(subor, "%d\n", mat[i][j]);    
    }
}

fclose(subor);

printf("Toto je tvoja matica v desiatkovej sustave.\n");
nacitanie(r);
porovnavanie(r);
    
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

void nacitanie(int r){ //funkcia nacitanie

FILE *subor;
int i, j, cislo;

subor = fopen("subor.txt", "r");

for (i=0;i<r;i++){
    for (j=0;j<r;j++){
        fscanf(subor, "%d", &cislo);
        printf("%d\t", premena(cislo)); 
    }
    printf("\n");
}

fclose(subor);
}

void porovnavanie(int r){ //funkcia porovnavanie

FILE *subor;
int i, j, diagonala[MAX], mat[MAX][MAX], cislo;

subor = fopen("subor.txt", "r");

for (i=0;i<r;i++){
    for (j=0;j<r;j++){
        fscanf(subor, "%d", &cislo);
        cislo=premena(cislo); 
        if(i==j){
            diagonala[i]=cislo;
        } 
        mat[i][j]=cislo;
    }
}

for (i=0;i<r;i++){
    for (j=0;j<r;j++){
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