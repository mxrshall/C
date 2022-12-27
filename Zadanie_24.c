#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prevod(int cislo);
void nacitanie_matice(int r, int **mat);

int main(void){

FILE *subor;
int r, i, j, p=0;
char c;
int **mat, cislo, posledne;

subor = fopen("subor.txt", "r");
for (c = getc(subor); c != EOF; c = getc(subor)){
    if (c == '\n'){
        p++;
    }
}
p++;
fclose(subor);

subor = fopen("subor.txt", "r");
for(i=0;i<p;i++){
    fscanf(subor, "%d", &cislo);
    while(cislo!=0){
        posledne=cislo%10;
        cislo=cislo/10;
        if(posledne>1){
            printf("Chyba\n");
        }
    }
    i++;
}
fclose(subor);

do{
printf("Zadaj rozmer matice: ");
scanf("%d", &r);
if(r*r!=p){
    printf("Rozmer sa nezhoduje s poctom prvkov.\n");
}
if(r<2){
    printf("Rozmer je mensi ako dva.\n");
}
}while(r*r!=p || r<2);

mat = (int**)malloc(r * sizeof(int*));

for(i=0;i<r;i++){
    mat[i] = (int*)malloc(r * sizeof(int));
}

subor = fopen("subor.txt", "r");
for (i=0;i<r;i++){
    for (j=0;j<r;j++){
        fscanf(subor, "%d", &mat[i][j]);
    }
}
fclose(subor);

nacitanie_matice(r, mat);

return 0;
}

int prevod(int cislo){ //funkcia premena

int des=0, i=0, posledne;

while(cislo!=0){
    posledne=cislo%10;
    cislo=cislo/10;
    des=des+posledne*pow(2, i);
    i++;
}

  return des;
}

void nacitanie_matice(int r, int **mat){ //funkcia nacitanie

int i, j, diagonala[r], cislo;

for (i=0;i<r;i++){
    for (j=0;j<r;j++){
        cislo=mat[i][j];
        cislo=prevod(cislo);
        printf("%d\t", cislo);
        if(i==j){
            diagonala[i]=cislo;
        }
        mat[i][j]=cislo;
    }
    printf("\n");
}

for(i=0;i<r;i++){
    for(j=0;j<r;j++){
        cislo=mat[i][j];
        if(cislo>diagonala[i]){
            printf("%d je vacsie ako prvok na diagonale.\n", cislo);
        }
        if(cislo<diagonala[i]){
            printf("%d je mensie ako prvok na diagonale.\n", cislo);
        }
        if(cislo==diagonala[i]){
            printf("%d je rovnake prvok na diagonale.\n", cislo);
        }
    }
}

}
