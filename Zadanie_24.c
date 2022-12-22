#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prevod(long long cislo);
void nacitanie_matice(int r);

int main(void){

FILE *subor;
int r; // rozmer
int i, j, p=0;
char c;
int **mat;
int cislo;

subor = fopen("subor.txt", "r");
for (c = getc(subor); c != EOF; c = getc(subor)){
    if (c == '\n'){
        p++;
    }
}
p++;
fclose(subor);

do{
printf("Zadaj rozmer matice: ");
scanf("%d", &r);
}while(r*r!=p || r<2);

mat = (int**)malloc(r * sizeof(int*));

for(i=0;i<r;i++){
    mat[i] = (int*)malloc(r * sizeof(int));
}

subor = fopen("subor.txt", "r");
for (i=0;i<r;i++){
    for (j=0;j<r;j++){
        fscanf(subor, "%d", &mat[i][j]);
        printf("%d\t", mat[i][j]);
    }
    printf("\n");
}
fclose(subor);

return 0;
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
int i, j, p=0, diagonala[r], *des;

subor = fopen("subor.txt", "r");
if(subor==NULL){
    printf("Chyba pri otvarani suboru.");
    exit(1);
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