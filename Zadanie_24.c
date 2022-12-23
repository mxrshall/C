#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prevod(long long cislo);
void nacitanie_matice(int r, int **mat);

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

void nacitanie_matice(int r, int **mat){ //funkcia nacitanie

int i, j, diagonala[r];

for (i=0;i<r;i++){
    for (j=0;j<r;j++){
        printf("%d\t", mat[i][j]);
    }
    printf("\n");
}

}