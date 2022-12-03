#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 15

void nacitanie_do_suboru(int r, int *mat);
int prevod(long long cislo);
void nacitanie_matice(int r);

int main(void){

FILE *subor;
int *mat, r=0; //matica, rozmer
long long cislo;
int i, j, p=0;

while(r<2){
    printf("Zadaj rozmer matice: ");
    scanf("%d", &r);
}

mat = (int*)malloc(r*r * sizeof(int));
if(mat==NULL){
    printf("Chyba pri alokacii");
    return 1;
}

for(i=1;i<=r;i++){
    for(j=1;j<=r;j++){
        printf("Zadaj prvok matice v dvojkovej sustave[%d][%d]\n", i, j);
        scanf("%lld", &cislo);
        mat[p]=cislo;
        p++;
    }
}

nacitanie_do_suboru(r, mat);
printf("Toto je tvoja matica v desiatkovej sustave.\n");
nacitanie_matice(r);

free(mat);
return 0;
}

void nacitanie_do_suboru(int r, int *mat){ //zapis do suboru

FILE *subor;
int i, j, p=0;

subor = fopen("subor.txt", "w");
if(subor==NULL){
    printf("Chyba pri otvarani suboru.");
}

for(i=1;i<=r;i++){
    for(j=1;j<=r;j++){
        fprintf(subor, "%d\n", mat[p]);
        p++;    
    }
}

fclose(subor);
}


int prevod(long long cislo){ //funkcia premena

int des=0, i=0, posledne;

while(cislo!=0){
    posledne=cislo%10;
    cislo=cislo/10;
    des=des+posledne*pow(2, i);
    i++;
}

  return des;
}

void nacitanie_matice(int r){ //funkcia nacitanie

FILE *subor;
long long cislo;
int i, j, p=0, diagonala[MAX], *des;

subor = fopen("subor.txt", "r");
if(subor==NULL){
    printf("Chyba pri otvarani suboru.");
}

des = (int*)malloc(r*r * sizeof(int));
if(des==NULL){
    printf("Chyba pri alokacii");
}

for (i=1;i<=r;i++){
    for (j=1;j<=r;j++){
        fscanf(subor, "%lld", &cislo);
        cislo=prevod(cislo);
        printf("%d\t", cislo);
        if(i==j){
            diagonala[i]=cislo;
        } 
        des[p]=cislo;
        p++; 
    }
    printf("\n");
}
p=0;
for(i=1;i<=r;i++){
    for(j=1;j<=r;j++){
        cislo=des[p];
        if(cislo>diagonala[i]){
            printf("%d je vacsie ako prvok na diagonale.\n", cislo);
        }
        if(cislo<diagonala[i]){
            printf("%d je mensie ako prvok na diagonale.\n", cislo);
        }
        if(cislo==diagonala[i]){
            printf("%d je rovnake prvok na diagonale.\n", cislo);
        }
        p++;
    }
}

free(des);
fclose(subor);
}